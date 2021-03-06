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


#import "DSAddressInformation.h"


@protocol DSCreditCardInformation
@end

@interface DSCreditCardInformation : DSObject


@property(nonatomic) DSAddressInformation* address;
/* The number on the credit card. [optional]
 */
@property(nonatomic) NSString* cardNumber;
/* The credit card type. Valid values are: visa, mastercard, or amex. [optional]
 */
@property(nonatomic) NSString* cardType;
/* The month that the credit card expires (1-12). [optional]
 */
@property(nonatomic) NSString* expirationMonth;
/* The year 4 digit year in which the credit card expires. [optional]
 */
@property(nonatomic) NSString* expirationYear;
/* The exact name printed on the credit card. [optional]
 */
@property(nonatomic) NSString* nameOnCard;

@end
