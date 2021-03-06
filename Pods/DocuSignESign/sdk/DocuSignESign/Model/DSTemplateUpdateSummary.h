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


#import "DSBulkEnvelopeStatus.h"
#import "DSErrorDetails.h"
#import "DSListCustomField.h"
#import "DSLockInformation.h"
#import "DSRecipientUpdateResponse.h"
#import "DSTabs.h"
#import "DSTextCustomField.h"


@protocol DSTemplateUpdateSummary
@end

@interface DSTemplateUpdateSummary : DSObject


@property(nonatomic) DSBulkEnvelopeStatus* bulkEnvelopeStatus;
/* The envelope ID of the envelope status that failed to post. [optional]
 */
@property(nonatomic) NSString* envelopeId;

@property(nonatomic) DSErrorDetails* errorDetails;
/*  [optional]
 */
@property(nonatomic) NSArray<DSListCustomField>* listCustomFieldUpdateResults;

@property(nonatomic) DSLockInformation* lockInformation;
/*  [optional]
 */
@property(nonatomic) NSArray<DSRecipientUpdateResponse>* recipientUpdateResults;

@property(nonatomic) DSTabs* tabUpdateResults;
/*  [optional]
 */
@property(nonatomic) NSArray<DSTextCustomField>* textCustomFieldUpdateResults;

@end
