
//
//  ViewController.swift
//  TestJWTSwift
//
//  Created by Toseef Khilji on 05/07/18.
//  Copyright © 2018 My Owan. All rights reserved.
//

import UIKit
import DocuSignESign
class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()

        let docApi = DSApiClient(baseURL: URL(string: DSConstatns.host))
        docApi.configure_jwt_authorization_flow(DSConstatns.integrationKey, userId: DSConstatns.userId, oauthBasePath: DSConstatns.outhBasePath, privateKeyFilename: DSConstatns.privateKeyName, expiresIn: 3600)

        let authAPI = DSAuthenticationApi(apiClient: docApi)

        let loginOptions = DSAuthenticationApi_LoginOptions()
        loginOptions.loginSettings = "none"
        loginOptions.apiPassword = "true"
        loginOptions.includeAccountIdGuid = "true"

        authAPI?.login(withApiPassword: loginOptions, completionHandler: { (loginInfo, error) in
            if let logInAccount: DSLoginAccount = loginInfo?.loginAccounts.first as? DSLoginAccount {
                debugPrint(logInAccount)
            } else {
                debugPrint(error)
            }
        })
    }
}
