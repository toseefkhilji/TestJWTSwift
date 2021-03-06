#import "DSCaptiveRecipient.h"

@implementation DSCaptiveRecipient

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
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"clientUserId": @"clientUserId", @"email": @"email", @"errorDetails": @"errorDetails", @"userName": @"userName" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"clientUserId", @"email", @"errorDetails", @"userName"];
  return [optionalProperties containsObject:propertyName];
}

@end
