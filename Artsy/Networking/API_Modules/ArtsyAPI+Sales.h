#import "ArtsyAPI.h"

@class Sale, SaleArtwork;
@class AFHTTPRequestOperation;


@interface ArtsyAPI (Sales)

+ (void)getSalesWithArtwork:(NSString *)artworkID
                    success:(void (^)(NSArray *sales))success
                    failure:(void (^)(NSError *error))failure;

+ (AFHTTPRequestOperation *)getArtworksForSale:(NSString *)saleID
                                       success:(void (^)(NSArray *artworks))success
                                       failure:(void (^)(NSError *error))failure;

+ (void)getSaleWithID:(NSString *)saleID
              success:(void (^)(Sale *sale))success
              failure:(void (^)(NSError *error))failure;

+ (void)getSaleArtworksWithSale:(NSString *)saleID
                           page:(NSInteger)page
                       pageSize:(NSInteger)pageSize
                        success:(void (^)(NSArray<SaleArtwork *> *sale))success
                        failure:(void (^)(NSError *error))failure;


@end
