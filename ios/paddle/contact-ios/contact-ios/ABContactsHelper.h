/*
 Erica Sadun, http://ericasadun.com
 iPhone Developer's Cookbook, 3.0 Edition
 BSD License, Use at your own risk
 */

#import <UIKit/UIKit.h>
#import <AddressBook/AddressBook.h>
#import <AddressBookUI/AddressBookUI.h>
#import "ABContact.h"
#import "ABGroup.h"

@interface ABContactsHelper : NSObject

// Address Book
+ (ABAddressBookRef) addressBook;

// Address Book Contacts and Groups
+ (NSArray *) contacts; // people
+ (NSArray *) groups; // groups

// Counting
+ (int) contactsCount;
+ (int) contactsWithImageCount;
+ (int) contactsWithoutImageCount;
+ (int) numberOfGroups;

// Sorting
+ (BOOL) firstNameSorting;

// Add contacts and groups
+ (BOOL) addContact: (ABContact *) aContact withError: (NSError **) error;
+ (BOOL) addGroup: (ABGroup *) aGroup withError: (NSError **) error;

// Find contacts
+ (NSArray *) contactsMatchingName: (NSString *) fname;
+ (NSArray *) contactsMatchingName: (NSString *) fname andName: (NSString *) lname;
+ (NSArray *) contactsMatchingPhone: (NSString *) number;

// Find groups
+ (NSArray *) groupsMatchingName: (NSString *) fname;

// Waikiki
+ (NSArray *)contactsMatchingFirstName:(NSString *)firstName withArray:(NSArray *)target;
+ (NSArray *)contactsMatchingLastName:(NSString *)lastName withArray:(NSArray *)target;
+ (NSArray *)contactsMatchingPhoneticFirstName:(NSString *)firstPhoneticName withArray:(NSArray *)target;
+ (NSArray *)contactsMatchingNickName:(NSString *)nickName withArray:(NSArray *)target;
+ (NSArray *)contactsMatchingPhoneNumber:(NSString *)phoneNumber withArray:(NSArray *)target;
+ (NSArray *)contactsMatchingEmails:(NSString *)emails withArray:(NSArray *)target;
+ (NSArray *)contactsMatchingAddress:(NSString *)address withArray:(NSArray *)target;
@end

// For the simple utility of it. Feel free to comment out if desired
@interface NSString (cstring)
@property (readonly) char *UTF8String;
@end