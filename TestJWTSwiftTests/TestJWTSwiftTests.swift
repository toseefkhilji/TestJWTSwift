//
//  TestJWTSwiftTests.swift
//  TestJWTSwiftTests
//
//  Created by Toseef Khilji on 05/07/18.
//  Copyright © 2018 My Owan. All rights reserved.
//

import XCTest
@testable import TestJWTSwift
import DocuSignESign
class TestJWTSwiftTests: XCTestCase {
    
    override func setUp() {
        super.setUp()
        // Put setup code here. This method is called before the invocation of each test method in the class.
    }
    
    override func tearDown() {
        // Put teardown code here. This method is called after the invocation of each test method in the class.
        super.tearDown()
    }
    
    func testExample() {

        let docApi = DSApiClient(baseURL: URL(string: DSConstatns.host))
        docApi.configure_jwt_authorization_flow(DSConstatns.integrationKey, userId: DSConstatns.userId, oauthBasePath: DSConstatns.outhBasePath, privateKeyFilename: DSConstatns.privateKeyName, expiresIn: 3600)
    }
    
    func testPerformanceExample() {
        // This is an example of a performance test case.
        self.measure {
            // Put the code you want to measure the time of here.
        }
    }
    
}
