#import <Foundation/Foundation.h>
#import "DSObject.h"

/**
* DocuSign REST API
* The DocuSign REST API provides you with a powerful, convenient, and simple Web services API for interacting with DocuSign.
*
* OpenAPI spec version: v2
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "DSAddressInformationV2.h"
#import "DSAuthenticationMethod.h"
#import "DSUsageHistory.h"
#import "DSUserInformation.h"


@protocol DSUserProfile
@end

@interface DSUserProfile : DSObject


@property(nonatomic) DSAddressInformationV2* address;
/* These properties cannot be modified in the PUT.   Indicates the authentication methods used by the user. [optional]
 */
@property(nonatomic) NSArray<DSAuthenticationMethod>* authenticationMethods;
/* The name of the user's Company. [optional]
 */
@property(nonatomic) NSString* companyName;
/*  When set to **true**, the user's company and title information are shown on the ID card.  [optional]
 */
@property(nonatomic) NSString* displayOrganizationInfo;
/* When set to **true**, the user's Address and Phone number are shown on the ID card. [optional]
 */
@property(nonatomic) NSString* displayPersonalInfo;
/* When set to **true**, the user's ID card can be viewed from signed documents and envelope history. [optional]
 */
@property(nonatomic) NSString* displayProfile;
/* When set to **true**, the user's usage information is shown on the ID card. [optional]
 */
@property(nonatomic) NSString* displayUsageHistory;
/*  [optional]
 */
@property(nonatomic) NSString* profileImageUri;
/*  [optional]
 */
@property(nonatomic) NSString* title;

@property(nonatomic) DSUsageHistory* usageHistory;

@property(nonatomic) DSUserInformation* userDetails;
/*  [optional]
 */
@property(nonatomic) NSString* userProfileLastModifiedDate;

@end
