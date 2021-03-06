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


#import "DSAccountAddress.h"
#import "DSAppStoreReceipt.h"
#import "DSCreditCardInformation.h"
#import "DSPaymentProcessorInformation.h"
#import "DSPlanInformation.h"
#import "DSReferralInformation.h"


@protocol DSBillingPlanInformation
@end

@interface DSBillingPlanInformation : DSObject


@property(nonatomic) DSAppStoreReceipt* appStoreReceipt;

@property(nonatomic) DSAccountAddress* billingAddress;

@property(nonatomic) DSCreditCardInformation* creditCardInformation;
/*  [optional]
 */
@property(nonatomic) NSString* downgradeReason;
/*  [optional]
 */
@property(nonatomic) NSString* enableSupport;
/* The number of seats (users) included. [optional]
 */
@property(nonatomic) NSString* includedSeats;
/* Reserved: TBD [optional]
 */
@property(nonatomic) NSString* incrementalSeats;

@property(nonatomic) DSPaymentProcessorInformation* paymentProcessorInformation;

@property(nonatomic) DSPlanInformation* planInformation;

@property(nonatomic) DSReferralInformation* referralInformation;
/*  [optional]
 */
@property(nonatomic) NSString* renewalStatus;
/*  [optional]
 */
@property(nonatomic) NSString* saleDiscountAmount;
/*  [optional]
 */
@property(nonatomic) NSString* saleDiscountFixedAmount;
/*  [optional]
 */
@property(nonatomic) NSString* saleDiscountPercent;
/*  [optional]
 */
@property(nonatomic) NSString* saleDiscountPeriods;
/*  [optional]
 */
@property(nonatomic) NSString* saleDiscountSeatPriceOverride;

@end
