#import "DSPaymentDetails.h"

@implementation DSPaymentDetails

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"chargeId": @"chargeId", @"currencyCode": @"currencyCode", @"gatewayAccountId": @"gatewayAccountId", @"gatewayName": @"gatewayName", @"lineItems": @"lineItems", @"status": @"status", @"total": @"total" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"chargeId", @"currencyCode", @"gatewayAccountId", @"gatewayName", @"lineItems", @"status", @"total"];
  return [optionalProperties containsObject:propertyName];
}

@end
