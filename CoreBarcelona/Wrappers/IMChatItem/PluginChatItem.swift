//
//  PluginChatItem.swift
//  imcore-rest
//
//  Created by Eric Rabil on 8/3/20.
//  Copyright © 2020 Eric Rabil. All rights reserved.
//

import Foundation
import LinkPresentation
import IMCore
import DigitalTouchShared

#if canImport(AppKit)
import AppKit
#elseif canImport(UIKit)
import UIKit
#endif

private func withLightAppearance<T>(_ closure: () throws -> T) rethrows -> T {
    #if canImport(AppKit)
    let previousAppearance = NSAppearance.current
    NSAppearance.current = NSAppearance.init(named: .aqua)
    defer {
        NSAppearance.current = previousAppearance
    }
    #endif
    
    return try closure()
}

public struct PluginChatItem: ChatItemRepresentation, ChatItemAcknowledgable {
    init(_ item: IMTranscriptPluginChatItem, chatID: String?) {
        bundleID = item.dataSource.bundleID
        attachments = item.attachments
        
        var insertPayload: Bool = true
        
        switch bundleID {
        case "com.apple.DigitalTouchBalloonProvider":
//            if let dataSource = item.dataSource, let messages = dataSource.perform(Selector(("createSessionMessages")))?.takeUnretainedValue() as? Array<ETMessage>, let message = messages.first {
//                digitalTouch = DigitalTouchMessage(message: message)
//            }
            insertPayload = false
            break
        case "com.apple.messages.URLBalloonProvider":
            withLightAppearance {
                if let dataSource = item.dataSource {
                    if let metadata = dataSource.value(forKey: "richLinkMetadata") as? LPLinkMetadata, let richLink = RichLinkRepresentation(metadata: metadata, attachments: item.internalAttachments) {
                        self.richLink = richLink
                    } else if let url = dataSource.value(forKey: "url") as? URL {
                        let urlString = url.absoluteString
                        self.fallback = .text(.init(item, text: urlString, parts: [.init(type: .link, string: urlString, data: .init(urlString), attributes: [])], chatID: chatID))
                    }
                    
                    insertPayload = false
                }
            }
            break
        default:
            break
        }
        
        if bundleID.starts(with: "com.apple.messages.MSMessageExtensionBalloonPlugin"), let payloadData = item.dataSource?.payload {
            `extension` = MessageExtensionsData(payloadData)
            insertPayload = false
        }
        
        if insertPayload {
            payload = item.dataSource.payload?.base64EncodedString()
        }
        
        self.load(item: item, chatID: chatID)
    }
    
    public var id: String?
    public var chatID: String?
    public var fromMe: Bool?
    public var time: Double?
    public var threadIdentifier: String?
    public var threadOriginator: String?
    public var digitalTouch: DigitalTouchMessage?
    public var richLink: RichLinkRepresentation?
    public var fallback: ChatItem?
    public var `extension`: MessageExtensionsData?
    public var payload: String?
    public var bundleID: String
    public var attachments: [Attachment]
    public var acknowledgments: [AcknowledgmentChatItem]?
}
