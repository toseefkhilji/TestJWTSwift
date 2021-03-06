#import <Foundation/Foundation.h>
#import "DSErrorDetails.h"
#import "DSFolderItemResponse.h"
#import "DSFolderItemsResponse.h"
#import "DSFoldersRequest.h"
#import "DSFoldersResponse.h"
#import "DSApi.h"

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





@interface DSFoldersApi_ListOptions : DSObject
/*
 * include 
 */
@property NSString* include;
/*
 * includeItems 
 */
@property NSString* includeItems;
/*
 * startPosition 
 */
@property NSString* startPosition;
/*
 * template Specifies the items that are returned. Valid values are:   * include - The folder list will return normal folders plus template folders.  * only - Only the list of template folders are returned.
 */
@property NSString* template;
/*
 * userFilter 
 */
@property NSString* userFilter;

@end



@interface DSFoldersApi_ListItemsOptions : DSObject
/*
 * fromDate  Only return items on or after this date. If no value is provided, the default search is the previous 30 days. 
 */
@property NSString* fromDate;
/*
 * includeItems 
 */
@property NSString* includeItems;
/*
 * ownerEmail  The email of the folder owner. 
 */
@property NSString* ownerEmail;
/*
 * ownerName  The name of the folder owner. 
 */
@property NSString* ownerName;
/*
 * searchText  The search text used to search the items of the envelope. The search looks at recipient names and emails, envelope custom fields, sender name, and subject. 
 */
@property NSString* searchText;
/*
 * startPosition The position of the folder items to return. This is used for repeated calls, when the number of envelopes returned is too much for one return (calls return 100 envelopes at a time). The default value is 0.
 */
@property NSString* startPosition;
/*
 * status The current status of the envelope. If no value is provided, the default search is all/any status.
 */
@property NSString* status;
/*
 * toDate Only return items up to this date. If no value is provided, the default search is to the current date.
 */
@property NSString* toDate;

@end




@interface DSFoldersApi_SearchOptions : DSObject
/*
 * all Specifies that all envelopes that match the criteria are returned.
 */
@property NSString* all;
/*
 * count Specifies the number of records returned in the cache. The number must be greater than 0 and less than or equal to 100.
 */
@property NSString* count;
/*
 * fromDate Specifies the start of the date range to return. If no value is provided, the default search is the previous 30 days.
 */
@property NSString* fromDate;
/*
 * includeRecipients When set to **true**, the recipient information is returned in the response.
 */
@property NSString* includeRecipients;
/*
 * order Specifies the order in which the list is returned. Valid values are: &#x60;asc&#x60; for ascending order, and &#x60;desc&#x60; for descending order.
 */
@property NSString* order;
/*
 * orderBy Specifies the property used to sort the list. Valid values are: &#x60;action_required&#x60;, &#x60;created&#x60;, &#x60;completed&#x60;, &#x60;sent&#x60;, &#x60;signer_list&#x60;, &#x60;status&#x60;, or &#x60;subject&#x60;.
 */
@property NSString* orderBy;
/*
 * startPosition Specifies the the starting location in the result set of the items that are returned.
 */
@property NSString* startPosition;
/*
 * toDate Specifies the end of the date range to return.
 */
@property NSString* toDate;

@end


@interface DSFoldersApi: NSObject <DSApi>

extern NSString* kDSFoldersApiErrorDomain;
extern NSInteger kDSFoldersApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Gets a list of the folders for the account.
/// Retrieves a list of the folders for the account, including the folder hierarchy. You can specify whether to return just the template folder or template folder and normal folders by setting the `template` query string parameter.
///
/// @param accountId The external account number (int) or account ID Guid.

/// @param DSFoldersApi_ListOptions Options for modifying the behavior of the function.
///  code:200 message:"Successful response.",
///  code:400 message:"Error encountered."
/// @return DSFoldersResponse*
-(NSNumber*) listWithAccountId:
(NSString*) accountId 

 options:(DSFoldersApi_ListOptions*) options
 completionHandler: (void (^)(DSFoldersResponse* output, NSError* error)) handler;

/// Gets a list of the envelopes in the specified folder.
/// Retrieves a list of the envelopes in the specified folder. You can narrow the query by specifying search criteria in the query string parameters.
///
/// @param accountId The external account number (int) or account ID Guid./// @param folderId The ID of the folder being accessed.

/// @param DSFoldersApi_ListItemsOptions Options for modifying the behavior of the function.
///  code:200 message:"Successful response.",
///  code:400 message:"Error encountered."
/// @return DSFolderItemsResponse*
-(NSNumber*) listItemsWithAccountId:
(NSString*) accountId  folderId:(NSString*) folderId 

 options:(DSFoldersApi_ListItemsOptions*) options
 completionHandler: (void (^)(DSFolderItemsResponse* output, NSError* error)) handler;

/// Moves an envelope from its current folder to the specified folder.
/// Moves envelopes to the specified folder.
///
/// @param accountId The external account number (int) or account ID Guid./// @param folderId The ID of the folder being accessed.
/// @param foldersRequest  (optional)

///  code:200 message:"Successful response.",
///  code:400 message:"Error encountered."
/// @return DSFoldersResponse*
-(NSNumber*) moveEnvelopesWithAccountId:
(NSString*) accountId  folderId:(NSString*) folderId 
 foldersRequest:(DSFoldersRequest*) foldersRequest

 completionHandler: (void (^)(DSFoldersResponse* output, NSError* error)) handler;

/// Gets a list of envelopes in folders matching the specified criteria.
/// Retrieves a list of envelopes that match the criteria specified in the query.  If the user ID of the user making the call is the same as the user ID for any returned recipient, then the userId property is added to the returned information for those recipients.
///
/// @param accountId The external account number (int) or account ID Guid./// @param searchFolderId Specifies the envelope group that is searched by the request. These are logical groupings, not actual folder names. Valid values are: drafts, awaiting_my_signature, completed, out_for_signature.

/// @param DSFoldersApi_SearchOptions Options for modifying the behavior of the function.
///  code:200 message:"Successful response.",
///  code:400 message:"Error encountered."
/// @return DSFolderItemResponse*
-(NSNumber*) searchWithAccountId:
(NSString*) accountId  searchFolderId:(NSString*) searchFolderId 

 options:(DSFoldersApi_SearchOptions*) options
 completionHandler: (void (^)(DSFolderItemResponse* output, NSError* error)) handler;


@end
