#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class UIViewController, NSString, NSSet<ObjectType>, NSObject, NSNumber, NSMutableSet<ObjectType>, NSMutableDictionary<KeyType, ObjectType>, NSMutableArray<ObjectType>, NSError, NSDictionary<KeyType, ObjectType>, NSArray<ObjectType>, FPLK__SkieTypeExportsKt, FPLK__SkieSuspendWrappersKt, FPLKViewModelStore, FPLKViewModelProviderOnRequeryFactory, FPLKViewModelProviderCompanion, FPLKViewModelProvider, FPLKViewModelLazy<VM>, FPLKViewModelInitializer<T>, FPLKViewModel, FPLKUShort, FPLKULong, FPLKUInt, FPLKUByte, FPLKTopElementInfoDtoCompanion, FPLKTopElementInfoDto, FPLKTeamDtoCompanion, FPLKTeamDto, FPLKTeam, FPLKSkie_SuspendResultSuccess, FPLKSkie_SuspendResultError, FPLKSkie_SuspendResultCanceled, FPLKSkie_SuspendResult, FPLKSkie_SuspendHandler, FPLKSkie_CancellationHandler, FPLKSkieKotlinStateFlow<T>, FPLKSkieKotlinSharedFlow<T>, FPLKSkieKotlinOptionalStateFlow<T>, FPLKSkieKotlinOptionalSharedFlow<T>, FPLKSkieKotlinOptionalMutableStateFlow<T>, FPLKSkieKotlinOptionalMutableSharedFlow<T>, FPLKSkieKotlinOptionalFlow<T>, FPLKSkieKotlinMutableStateFlow<T>, FPLKSkieKotlinMutableSharedFlow<T>, FPLKSkieKotlinFlow<T>, FPLKSkieColdFlowIterator<E>, FPLKShort, FPLKSharedViewControllers, FPLKRoom_runtimeRoomOpenDelegateValidationResult, FPLKRoom_runtimeRoomOpenDelegate, FPLKRoom_runtimeRoomDatabase, FPLKRoom_runtimeMigration, FPLKRoom_runtimeInvalidationTracker, FPLKPlayerPastHistory, FPLKPlayerListViewModel, FPLKPlayerListUIStateSuccess, FPLKPlayerListUIStateLoading, FPLKPlayerListUIStateError, FPLKPlayerListUIState, FPLKPlayerDetailsViewModel, FPLKPlayer, FPLKPhaseDtoCompanion, FPLKPhaseDto, FPLKNumber, FPLKMutableSet<ObjectType>, FPLKMutableDictionary<KeyType, ObjectType>, FPLKMutableCreationExtras, FPLKLong, FPLKLocalDateTimeConverter, FPLKLeaguesViewModel, FPLKLeagueStandingsResultsDtoCompanion, FPLKLeagueStandingsResultsDto, FPLKLeagueStandingsDtoCompanion, FPLKLeagueStandingsDto, FPLKLeagueResultDtoCompanion, FPLKLeagueResultDto, FPLKLeagueDtoCompanion, FPLKLeagueDto, FPLKKtor_utilsWeekDayCompanion, FPLKKtor_utilsWeekDay, FPLKKtor_utilsTypeInfo, FPLKKtor_utilsStringValuesBuilderImpl, FPLKKtor_utilsPipelinePhase, FPLKKtor_utilsPipeline<TSubject, TContext>, FPLKKtor_utilsMonthCompanion, FPLKKtor_utilsMonth, FPLKKtor_utilsGMTDateCompanion, FPLKKtor_utilsGMTDate, FPLKKtor_utilsAttributeKey<T>, FPLKKtor_httpUrlCompanion, FPLKKtor_httpUrl, FPLKKtor_httpURLProtocolCompanion, FPLKKtor_httpURLProtocol, FPLKKtor_httpURLBuilderCompanion, FPLKKtor_httpURLBuilder, FPLKKtor_httpOutgoingContentWriteChannelContent, FPLKKtor_httpOutgoingContentReadChannelContent, FPLKKtor_httpOutgoingContentProtocolUpgrade, FPLKKtor_httpOutgoingContentNoContent, FPLKKtor_httpOutgoingContentContentWrapper, FPLKKtor_httpOutgoingContentByteArrayContent, FPLKKtor_httpOutgoingContent, FPLKKtor_httpHttpStatusCodeCompanion, FPLKKtor_httpHttpStatusCode, FPLKKtor_httpHttpProtocolVersionCompanion, FPLKKtor_httpHttpProtocolVersion, FPLKKtor_httpHttpMethodCompanion, FPLKKtor_httpHttpMethod, FPLKKtor_httpHeadersBuilder, FPLKKtor_httpHeaderValueWithParametersCompanion, FPLKKtor_httpHeaderValueWithParameters, FPLKKtor_httpHeaderValueParam, FPLKKtor_httpContentTypeCompanion, FPLKKtor_httpContentType, FPLKKtor_eventsEvents, FPLKKtor_eventsEventDefinition<T>, FPLKKtor_client_coreProxyConfig, FPLKKtor_client_coreHttpSendPipelinePhases, FPLKKtor_client_coreHttpSendPipeline, FPLKKtor_client_coreHttpResponsePipelinePhases, FPLKKtor_client_coreHttpResponsePipeline, FPLKKtor_client_coreHttpResponseData, FPLKKtor_client_coreHttpResponseContainer, FPLKKtor_client_coreHttpResponse, FPLKKtor_client_coreHttpRequestPipelinePhases, FPLKKtor_client_coreHttpRequestPipeline, FPLKKtor_client_coreHttpRequestData, FPLKKtor_client_coreHttpRequestBuilderCompanion, FPLKKtor_client_coreHttpRequestBuilder, FPLKKtor_client_coreHttpReceivePipelinePhases, FPLKKtor_client_coreHttpReceivePipeline, FPLKKtor_client_coreHttpClientEngineConfig, FPLKKtor_client_coreHttpClientConfig<T>, FPLKKtor_client_coreHttpClientCallCompanion, FPLKKtor_client_coreHttpClientCall, FPLKKtor_client_coreHttpClient, FPLKKotlinx_serialization_jsonJsonPrimitiveCompanion, FPLKKotlinx_serialization_jsonJsonPrimitive, FPLKKotlinx_serialization_jsonJsonNull, FPLKKotlinx_serialization_jsonJsonElementCompanion, FPLKKotlinx_serialization_jsonJsonElement, FPLKKotlinx_serialization_jsonJsonDefault, FPLKKotlinx_serialization_jsonJsonConfiguration, FPLKKotlinx_serialization_jsonJson, FPLKKotlinx_serialization_jsonClassDiscriminatorMode, FPLKKotlinx_serialization_coreStructureKindOBJECT, FPLKKotlinx_serialization_coreStructureKindMAP, FPLKKotlinx_serialization_coreStructureKindLIST, FPLKKotlinx_serialization_coreStructureKindCLASS, FPLKKotlinx_serialization_coreStructureKind, FPLKKotlinx_serialization_coreSerializersModule, FPLKKotlinx_serialization_coreSerialKindENUM, FPLKKotlinx_serialization_coreSerialKindCONTEXTUAL, FPLKKotlinx_serialization_coreSerialKind, FPLKKotlinx_serialization_corePrimitiveKindSTRING, FPLKKotlinx_serialization_corePrimitiveKindSHORT, FPLKKotlinx_serialization_corePrimitiveKindLONG, FPLKKotlinx_serialization_corePrimitiveKindINT, FPLKKotlinx_serialization_corePrimitiveKindFLOAT, FPLKKotlinx_serialization_corePrimitiveKindDOUBLE, FPLKKotlinx_serialization_corePrimitiveKindCHAR, FPLKKotlinx_serialization_corePrimitiveKindBYTE, FPLKKotlinx_serialization_corePrimitiveKindBOOLEAN, FPLKKotlinx_serialization_corePrimitiveKind, FPLKKotlinx_serialization_corePolymorphicKindSEALED, FPLKKotlinx_serialization_corePolymorphicKindOPEN, FPLKKotlinx_serialization_corePolymorphicKind, FPLKKotlinx_io_coreBuffer, FPLKKotlinx_datetimePadding, FPLKKotlinx_datetimeMonthNamesCompanion, FPLKKotlinx_datetimeMonthNames, FPLKKotlinx_datetimeMonth, FPLKKotlinx_datetimeLocalTimeCompanion, FPLKKotlinx_datetimeLocalTime, FPLKKotlinx_datetimeLocalDateTimeCompanion, FPLKKotlinx_datetimeLocalDateTime, FPLKKotlinx_datetimeLocalDateCompanion, FPLKKotlinx_datetimeLocalDate, FPLKKotlinx_datetimeInstantCompanion, FPLKKotlinx_datetimeInstant, FPLKKotlinx_datetimeDayOfWeekNamesCompanion, FPLKKotlinx_datetimeDayOfWeekNames, FPLKKotlinx_datetimeDayOfWeek, FPLKKotlinx_coroutines_coreCoroutineDispatcherKey, FPLKKotlinx_coroutines_coreCoroutineDispatcher, FPLKKotlinUnit, FPLKKotlinThrowable, FPLKKotlinRuntimeException, FPLKKotlinNothing, FPLKKotlinLongRangeCompanion, FPLKKotlinLongRange, FPLKKotlinLongProgressionCompanion, FPLKKotlinLongProgression, FPLKKotlinLongIterator, FPLKKotlinLazyThreadSafetyMode, FPLKKotlinKVariance, FPLKKotlinKTypeProjectionCompanion, FPLKKotlinKTypeProjection, FPLKKotlinIllegalStateException, FPLKKotlinException, FPLKKotlinEnumCompanion, FPLKKotlinEnum<E>, FPLKKotlinCancellationException, FPLKKotlinByteIterator, FPLKKotlinByteArray, FPLKKotlinArray<T>, FPLKKotlinAbstractCoroutineContextKey<B, E>, FPLKKotlinAbstractCoroutineContextElement, FPLKKoin_coreSingleInstanceFactory<T>, FPLKKoin_coreScopeRegistryCompanion, FPLKKoin_coreScopeRegistry, FPLKKoin_coreScopeDSL, FPLKKoin_coreScope, FPLKKoin_coreResolutionContext, FPLKKoin_corePropertyRegistry, FPLKKoin_coreParametersHolder, FPLKKoin_coreModule, FPLKKoin_coreLogger, FPLKKoin_coreLockable, FPLKKoin_coreLevel, FPLKKoin_coreKoinDefinition<R>, FPLKKoin_coreKoinApplicationCompanion, FPLKKoin_coreKoinApplication, FPLKKoin_coreKoin, FPLKKoin_coreKind, FPLKKoin_coreInstanceRegistry, FPLKKoin_coreInstanceFactoryCompanion, FPLKKoin_coreInstanceFactory<T>, FPLKKoin_coreExtensionManager, FPLKKoin_coreCallbacks<T>, FPLKKoin_coreBeanDefinition<T>, FPLKKoinKt, FPLKInt, FPLKInitializerViewModelFactoryKt, FPLKInitializerViewModelFactoryBuilder, FPLKHistoryPastDtoCompanion, FPLKHistoryPastDto, FPLKHistoryDtoCompanion, FPLKHistoryDto, FPLKGameWeekLiveDataElementStatsDtoCompanion, FPLKGameWeekLiveDataElementStatsDto, FPLKGameWeekLiveDataElementDtoCompanion, FPLKGameWeekLiveDataElementDto, FPLKGameWeekLiveDataDtoCompanion, FPLKGameWeekLiveDataDto, FPLKGameSettingsDtoCompanion, FPLKGameSettingsDto, FPLKGameFixture, FPLKFloat, FPLKFixturesViewModel, FPLKFixtureDtoCompanion, FPLKFixtureDto, FPLKFantasyPremierLeagueRepository, FPLKFantasyPremierLeagueDao_ImplCompanion, FPLKFantasyPremierLeagueDao_Impl, FPLKFantasyPremierLeagueApi, FPLKEventStatusListDtoCompanion, FPLKEventStatusListDto, FPLKEventStatusDtoCompanion, FPLKEventStatusDto, FPLKEventDtoCompanion, FPLKEventDto, FPLKElementTypeDtoCompanion, FPLKElementTypeDto, FPLKElementSummaryDtoCompanion, FPLKElementSummaryDto, FPLKElementStatDtoCompanion, FPLKElementStatDto, FPLKElementDtoCompanion, FPLKElementDto, FPLKDouble, FPLKDatastore_preferences_corePreferencesPair<T>, FPLKDatastore_preferences_corePreferencesKey<T>, FPLKCreationExtrasEmpty, FPLKCreationExtras, FPLKChipPlayDtoCompanion, FPLKChipPlayDto, FPLKByte, FPLKBootstrapStaticInfoDtoCompanion, FPLKBootstrapStaticInfoDto, FPLKBoolean, FPLKBase, FPLKAppSettingsKt, FPLKAppSettingsCompanion, FPLKAppSettings, FPLKAppDatabase_Impl, FPLKAppDatabase, FPLKActualKt;

@protocol NSCopying, FPLKViewModelStoreOwner, FPLKViewModelProviderFactory, FPLKSqliteSQLiteStatement, FPLKSqliteSQLiteConnection, FPLKSkie_DispatcherDelegate, FPLKRoom_runtimeRoomOpenDelegateMarker, FPLKRoom_runtimeAutoMigrationSpec, FPLKKtor_utilsStringValuesBuilder, FPLKKtor_utilsStringValues, FPLKKtor_utilsAttributes, FPLKKtor_ioCloseable, FPLKKtor_ioByteWriteChannel, FPLKKtor_ioByteReadChannel, FPLKKtor_httpParametersBuilder, FPLKKtor_httpParameters, FPLKKtor_httpHttpMessageBuilder, FPLKKtor_httpHttpMessage, FPLKKtor_httpHeaders, FPLKKtor_client_coreHttpRequest, FPLKKtor_client_coreHttpClientPlugin, FPLKKtor_client_coreHttpClientEngineCapability, FPLKKtor_client_coreHttpClientEngine, FPLKKotlinx_serialization_jsonJsonNamingStrategy, FPLKKotlinx_serialization_coreStringFormat, FPLKKotlinx_serialization_coreSerializersModuleCollector, FPLKKotlinx_serialization_coreSerializationStrategy, FPLKKotlinx_serialization_coreSerialFormat, FPLKKotlinx_serialization_coreSerialDescriptor, FPLKKotlinx_serialization_coreKSerializer, FPLKKotlinx_serialization_coreEncoder, FPLKKotlinx_serialization_coreDeserializationStrategy, FPLKKotlinx_serialization_coreDecoder, FPLKKotlinx_serialization_coreCompositeEncoder, FPLKKotlinx_serialization_coreCompositeDecoder, FPLKKotlinx_io_coreSource, FPLKKotlinx_io_coreSink, FPLKKotlinx_io_coreRawSource, FPLKKotlinx_io_coreRawSink, FPLKKotlinx_datetimeDateTimeFormatBuilderWithUtcOffset, FPLKKotlinx_datetimeDateTimeFormatBuilderWithTime, FPLKKotlinx_datetimeDateTimeFormatBuilderWithDateTimeComponents, FPLKKotlinx_datetimeDateTimeFormatBuilderWithDateTime, FPLKKotlinx_datetimeDateTimeFormatBuilderWithDate, FPLKKotlinx_datetimeDateTimeFormatBuilder, FPLKKotlinx_datetimeDateTimeFormat, FPLKKotlinx_coroutines_coreStateFlow, FPLKKotlinx_coroutines_coreSharedFlow, FPLKKotlinx_coroutines_coreSelectInstance, FPLKKotlinx_coroutines_coreSelectClause2, FPLKKotlinx_coroutines_coreSelectClause1, FPLKKotlinx_coroutines_coreSelectClause0, FPLKKotlinx_coroutines_coreSelectClause, FPLKKotlinx_coroutines_coreRunnable, FPLKKotlinx_coroutines_coreParentJob, FPLKKotlinx_coroutines_coreMutableStateFlow, FPLKKotlinx_coroutines_coreMutableSharedFlow, FPLKKotlinx_coroutines_coreJob, FPLKKotlinx_coroutines_coreFlowCollector, FPLKKotlinx_coroutines_coreFlow, FPLKKotlinx_coroutines_coreDisposableHandle, FPLKKotlinx_coroutines_coreCoroutineScope, FPLKKotlinx_coroutines_coreChildJob, FPLKKotlinx_coroutines_coreChildHandle, FPLKKotlinSuspendFunction2, FPLKKotlinSuspendFunction1, FPLKKotlinSequence, FPLKKotlinOpenEndRange, FPLKKotlinMapEntry, FPLKKotlinLazy, FPLKKotlinKType, FPLKKotlinKDeclarationContainer, FPLKKotlinKClassifier, FPLKKotlinKClass, FPLKKotlinKAnnotatedElement, FPLKKotlinIterator, FPLKKotlinIterable, FPLKKotlinFunction, FPLKKotlinCoroutineContextKey, FPLKKotlinCoroutineContextElement, FPLKKotlinCoroutineContext, FPLKKotlinContinuationInterceptor, FPLKKotlinContinuation, FPLKKotlinComparable, FPLKKotlinClosedRange, FPLKKotlinAutoCloseable, FPLKKotlinAppendable, FPLKKotlinAnnotation, FPLKKoin_coreScopeCallback, FPLKKoin_coreQualifier, FPLKKoin_coreKoinScopeComponent, FPLKKoin_coreKoinExtension, FPLKKoin_coreKoinComponent, FPLKHasDefaultViewModelProviderFactory, FPLKFantasyPremierLeagueDao, FPLKDatastore_coreDataStore, FPLKCreationExtrasKey;

// Due to an Obj-C/Swift interop limitation, SKIE cannot generate Swift types with a lambda type argument.
// Example of such type is: A<() -> Unit> where A<T> is a generic class.
// To avoid compilation errors SKIE replaces these type arguments with __SkieLambdaErrorType, resulting in A<__SkieLambdaErrorType>.
// Generated declarations that reference __SkieLambdaErrorType cannot be called in any way and the __SkieLambdaErrorType class cannot be used.
// The original declarations can still be used in the same way as other declarations hidden by SKIE (and with the same limitations as without SKIE).
@interface __SkieLambdaErrorType : NSObject
- (instancetype _Nonnull)init __attribute__((unavailable));
+ (instancetype _Nonnull)new __attribute__((unavailable));
@end

// Due to an Obj-C/Swift interop limitation, SKIE cannot generate Swift code that uses external Obj-C types for which SKIE doesn't know a fully qualified name.
// This problem occurs when custom Cinterop bindings are used because those do not contain the name of the Framework that provides implementation for those binding.
// The name can be configured manually using the SKIE Gradle configuration key 'ClassInterop.CInteropFrameworkName' in the same way as other SKIE features.
// To avoid compilation errors SKIE replaces types with unknown Framework name with __SkieUnknownCInteropFrameworkErrorType.
// Generated declarations that reference __SkieUnknownCInteropFrameworkErrorType cannot be called in any way and the __SkieUnknownCInteropFrameworkErrorType class cannot be used.
@interface __SkieUnknownCInteropFrameworkErrorType : NSObject
- (instancetype _Nonnull)init __attribute__((unavailable));
+ (instancetype _Nonnull)new __attribute__((unavailable));
@end

typedef id<FPLKKoin_coreQualifier> _Nonnull Skie__TypeDef__0__id_FPLKKoin_coreQualifier_ __attribute__((__swift_private__));
typedef id<FPLKKoin_coreKoinExtension> _Nonnull Skie__TypeDef__1__id_FPLKKoin_coreKoinExtension_ __attribute__((__swift_private__));
typedef id<FPLKKoin_coreKoinExtension> _Nullable Skie__TypeDef__2__id_FPLKKoin_coreKoinExtension___Nullable __attribute__((__swift_private__));
typedef id<FPLKFantasyPremierLeagueDao> _Nonnull Skie__TypeDef__3__id_FPLKFantasyPremierLeagueDao_ __attribute__((__swift_private__));

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface FPLKBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface FPLKBase (FPLKBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface FPLKMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface FPLKMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorFPLKKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface FPLKNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface FPLKByte : FPLKNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface FPLKUByte : FPLKNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface FPLKShort : FPLKNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface FPLKUShort : FPLKNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface FPLKInt : FPLKNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface FPLKUInt : FPLKNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface FPLKLong : FPLKNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface FPLKULong : FPLKNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface FPLKFloat : FPLKNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface FPLKDouble : FPLKNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface FPLKBoolean : FPLKNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("HasDefaultViewModelProviderFactory")))
@protocol FPLKHasDefaultViewModelProviderFactory
@required
@property (readonly) FPLKCreationExtras *defaultViewModelCreationExtras __attribute__((swift_name("defaultViewModelCreationExtras")));
@property (readonly) id<FPLKViewModelProviderFactory> defaultViewModelProviderFactory __attribute__((swift_name("defaultViewModelProviderFactory")));
@end

__attribute__((swift_name("ViewModel")))
@interface FPLKViewModel : FPLKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithCloseables:(FPLKKotlinArray<id<FPLKKotlinAutoCloseable>> *)closeables __attribute__((swift_name("init(closeables:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithViewModelScope:(id<FPLKKotlinx_coroutines_coreCoroutineScope>)viewModelScope __attribute__((swift_name("init(viewModelScope:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithViewModelScope:(id<FPLKKotlinx_coroutines_coreCoroutineScope>)viewModelScope closeables:(FPLKKotlinArray<id<FPLKKotlinAutoCloseable>> *)closeables __attribute__((swift_name("init(viewModelScope:closeables:)"))) __attribute__((objc_designated_initializer));
- (void)addCloseableCloseable:(id<FPLKKotlinAutoCloseable>)closeable __attribute__((swift_name("addCloseable(closeable:)")));
- (void)addCloseableKey:(NSString *)key closeable:(id<FPLKKotlinAutoCloseable>)closeable __attribute__((swift_name("addCloseable(key:closeable:)")));
- (id<FPLKKotlinAutoCloseable> _Nullable)getCloseableKey:(NSString *)key __attribute__((swift_name("getCloseable(key:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onCleared __attribute__((swift_name("onCleared()")));
@end

__attribute__((swift_name("KotlinLazy")))
@protocol FPLKKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewModelLazy")))
@interface FPLKViewModelLazy<VM> : FPLKBase <FPLKKotlinLazy>
@property (readonly) VM value __attribute__((swift_name("value")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (instancetype)initWithViewModelClass:(id<FPLKKotlinKClass>)viewModelClass storeProducer:(FPLKViewModelStore *(^)(void))storeProducer factoryProducer:(id<FPLKViewModelProviderFactory> (^)(void))factoryProducer extrasProducer:(FPLKCreationExtras *(^)(void))extrasProducer __attribute__((swift_name("init(viewModelClass:storeProducer:factoryProducer:extrasProducer:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewModelProvider")))
@interface FPLKViewModelProvider : FPLKBase
@property (class, readonly, getter=companion) FPLKViewModelProviderCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   androidx.annotation.MainThread
*/
- (FPLKViewModel *)getModelClass:(id<FPLKKotlinKClass>)modelClass __attribute__((swift_name("get(modelClass:)")));

/**
 * @note annotations
 *   androidx.annotation.MainThread
*/
- (FPLKViewModel *)getKey:(NSString *)key modelClass:(id<FPLKKotlinKClass>)modelClass __attribute__((swift_name("get(key:modelClass:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewModelProvider.Companion")))
@interface FPLKViewModelProviderCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKViewModelProviderCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) id<FPLKCreationExtrasKey> VIEW_MODEL_KEY __attribute__((swift_name("VIEW_MODEL_KEY")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (FPLKViewModelProvider *)createStore:(FPLKViewModelStore *)store factory:(id<FPLKViewModelProviderFactory>)factory extras:(FPLKCreationExtras *)extras __attribute__((swift_name("create(store:factory:extras:)")));
- (FPLKViewModelProvider *)createOwner:(id<FPLKViewModelStoreOwner>)owner factory:(id<FPLKViewModelProviderFactory>)factory extras:(FPLKCreationExtras *)extras __attribute__((swift_name("create(owner:factory:extras:)")));
@end

__attribute__((swift_name("ViewModelProviderFactory")))
@protocol FPLKViewModelProviderFactory
@required
- (FPLKViewModel *)createModelClass:(id<FPLKKotlinKClass>)modelClass extras:(FPLKCreationExtras *)extras __attribute__((swift_name("create(modelClass:extras:)")));
@end


/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP])
*/
__attribute__((swift_name("ViewModelProvider.OnRequeryFactory")))
@interface FPLKViewModelProviderOnRequeryFactory : FPLKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onRequeryViewModel:(FPLKViewModel *)viewModel __attribute__((swift_name("onRequery(viewModel:)")));
@end

__attribute__((swift_name("ViewModelStore")))
@interface FPLKViewModelStore : FPLKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));

/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP])
*/
- (FPLKViewModel * _Nullable)getKey:(NSString *)key __attribute__((swift_name("get(key:)")));

/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP])
*/
- (NSSet<NSString *> *)keys __attribute__((swift_name("keys()")));

/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP])
*/
- (void)putKey:(NSString *)key viewModel:(FPLKViewModel *)viewModel __attribute__((swift_name("put(key:viewModel:)")));
@end

__attribute__((swift_name("ViewModelStoreOwner")))
@protocol FPLKViewModelStoreOwner
@required
@property (readonly) FPLKViewModelStore *viewModelStore __attribute__((swift_name("viewModelStore")));
@end

__attribute__((swift_name("CreationExtras")))
@interface FPLKCreationExtras : FPLKBase
- (id _Nullable)getKey:(id<FPLKCreationExtrasKey>)key __attribute__((swift_name("get(key:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreationExtras.Empty")))
@interface FPLKCreationExtrasEmpty : FPLKCreationExtras
@property (class, readonly, getter=shared) FPLKCreationExtrasEmpty *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)empty __attribute__((swift_name("init()")));
- (id _Nullable)getKey:(id<FPLKCreationExtrasKey>)key __attribute__((swift_name("get(key:)")));
@end

__attribute__((swift_name("CreationExtrasKey")))
@protocol FPLKCreationExtrasKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InitializerViewModelFactoryBuilder")))
@interface FPLKInitializerViewModelFactoryBuilder : FPLKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addInitializerClazz:(id<FPLKKotlinKClass>)clazz initializer:(FPLKViewModel *(^)(FPLKCreationExtras *))initializer __attribute__((swift_name("addInitializer(clazz:initializer:)")));
- (id<FPLKViewModelProviderFactory>)build __attribute__((swift_name("build()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MutableCreationExtras")))
@interface FPLKMutableCreationExtras : FPLKCreationExtras
- (instancetype)initWithInitialExtras:(FPLKCreationExtras *)initialExtras __attribute__((swift_name("init(initialExtras:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getKey:(id<FPLKCreationExtrasKey>)key __attribute__((swift_name("get(key:)")));
- (void)setKey:(id<FPLKCreationExtrasKey>)key t:(id _Nullable)t __attribute__((swift_name("set(key:t:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewModelInitializer")))
@interface FPLKViewModelInitializer<T> : FPLKBase
- (instancetype)initWithClazz:(id<FPLKKotlinKClass>)clazz initializer:(T (^)(FPLKCreationExtras *))initializer __attribute__((swift_name("init(clazz:initializer:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieColdFlowIterator")))
@interface FPLKSkieColdFlowIterator<E> : FPLKBase
- (instancetype)initWithFlow:(id<FPLKKotlinx_coroutines_coreFlow>)flow __attribute__((swift_name("init(flow:)"))) __attribute__((objc_designated_initializer));
- (void)cancel __attribute__((swift_name("cancel()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasNextWithCompletionHandler:(void (^)(FPLKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasNext(completionHandler:)")));
- (E _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol FPLKKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<FPLKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinFlow")))
@interface FPLKSkieKotlinFlow<__covariant T> : FPLKBase <FPLKKotlinx_coroutines_coreFlow>
- (instancetype)initWithDelegate:(id<FPLKKotlinx_coroutines_coreFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<FPLKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol FPLKKotlinx_coroutines_coreSharedFlow <FPLKKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol FPLKKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableSharedFlow")))
@protocol FPLKKotlinx_coroutines_coreMutableSharedFlow <FPLKKotlinx_coroutines_coreSharedFlow, FPLKKotlinx_coroutines_coreFlowCollector>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(id _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@property (readonly) id<FPLKKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinMutableSharedFlow")))
@interface FPLKSkieKotlinMutableSharedFlow<T> : FPLKBase <FPLKKotlinx_coroutines_coreMutableSharedFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<FPLKKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
- (instancetype)initWithDelegate:(id<FPLKKotlinx_coroutines_coreMutableSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<FPLKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol FPLKKotlinx_coroutines_coreStateFlow <FPLKKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableStateFlow")))
@protocol FPLKKotlinx_coroutines_coreMutableStateFlow <FPLKKotlinx_coroutines_coreStateFlow, FPLKKotlinx_coroutines_coreMutableSharedFlow>
@required
- (void)setValue:(id _Nullable)value __attribute__((swift_name("setValue(_:)")));
- (BOOL)compareAndSetExpect:(id _Nullable)expect update:(id _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinMutableStateFlow")))
@interface FPLKSkieKotlinMutableStateFlow<T> : FPLKBase <FPLKKotlinx_coroutines_coreMutableStateFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<FPLKKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@property T value __attribute__((swift_name("value")));
- (instancetype)initWithDelegate:(id<FPLKKotlinx_coroutines_coreMutableStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<FPLKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (BOOL)compareAndSetExpect:(T)expect update:(T)update __attribute__((swift_name("compareAndSet(expect:update:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalFlow")))
@interface FPLKSkieKotlinOptionalFlow<__covariant T> : FPLKBase <FPLKKotlinx_coroutines_coreFlow>
- (instancetype)initWithDelegate:(id<FPLKKotlinx_coroutines_coreFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<FPLKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalMutableSharedFlow")))
@interface FPLKSkieKotlinOptionalMutableSharedFlow<T> : FPLKBase <FPLKKotlinx_coroutines_coreMutableSharedFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<FPLKKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
- (instancetype)initWithDelegate:(id<FPLKKotlinx_coroutines_coreMutableSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<FPLKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalMutableStateFlow")))
@interface FPLKSkieKotlinOptionalMutableStateFlow<T> : FPLKBase <FPLKKotlinx_coroutines_coreMutableStateFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<FPLKKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@property T _Nullable value __attribute__((swift_name("value")));
- (instancetype)initWithDelegate:(id<FPLKKotlinx_coroutines_coreMutableStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<FPLKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (BOOL)compareAndSetExpect:(T _Nullable)expect update:(T _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalSharedFlow")))
@interface FPLKSkieKotlinOptionalSharedFlow<__covariant T> : FPLKBase <FPLKKotlinx_coroutines_coreSharedFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
- (instancetype)initWithDelegate:(id<FPLKKotlinx_coroutines_coreSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<FPLKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalStateFlow")))
@interface FPLKSkieKotlinOptionalStateFlow<__covariant T> : FPLKBase <FPLKKotlinx_coroutines_coreStateFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
- (instancetype)initWithDelegate:(id<FPLKKotlinx_coroutines_coreStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<FPLKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinSharedFlow")))
@interface FPLKSkieKotlinSharedFlow<__covariant T> : FPLKBase <FPLKKotlinx_coroutines_coreSharedFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
- (instancetype)initWithDelegate:(id<FPLKKotlinx_coroutines_coreSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<FPLKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinStateFlow")))
@interface FPLKSkieKotlinStateFlow<__covariant T> : FPLKBase <FPLKKotlinx_coroutines_coreStateFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) T value __attribute__((swift_name("value")));
- (instancetype)initWithDelegate:(id<FPLKKotlinx_coroutines_coreStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<FPLKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_CancellationHandler")))
@interface FPLKSkie_CancellationHandler : FPLKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)cancel __attribute__((swift_name("cancel()")));
@end

__attribute__((swift_name("Skie_DispatcherDelegate")))
@protocol FPLKSkie_DispatcherDelegate
@required
- (void)dispatchBlock:(id<FPLKKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendHandler")))
@interface FPLKSkie_SuspendHandler : FPLKBase
- (instancetype)initWithCancellationHandler:(FPLKSkie_CancellationHandler *)cancellationHandler dispatcherDelegate:(id<FPLKSkie_DispatcherDelegate>)dispatcherDelegate onResult:(void (^)(FPLKSkie_SuspendResult *))onResult __attribute__((swift_name("init(cancellationHandler:dispatcherDelegate:onResult:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Skie_SuspendResult")))
@interface FPLKSkie_SuspendResult : FPLKBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendResult.Canceled")))
@interface FPLKSkie_SuspendResultCanceled : FPLKSkie_SuspendResult
@property (class, readonly, getter=shared) FPLKSkie_SuspendResultCanceled *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)canceled __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendResult.Error")))
@interface FPLKSkie_SuspendResultError : FPLKSkie_SuspendResult
@property (readonly) NSError *error __attribute__((swift_name("error")));
- (instancetype)initWithError:(NSError *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (FPLKSkie_SuspendResultError *)doCopyError:(NSError *)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendResult.Success")))
@interface FPLKSkie_SuspendResultSuccess : FPLKSkie_SuspendResult
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
- (instancetype)initWithValue:(id _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (FPLKSkie_SuspendResultSuccess *)doCopyValue:(id _Nullable)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppSettings")))
@interface FPLKAppSettings : FPLKBase
@property (class, readonly, getter=companion) FPLKAppSettingsCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) id<FPLKKotlinx_coroutines_coreFlow> leagues __attribute__((swift_name("leagues")));
- (instancetype)initWithDataStore:(id<FPLKDatastore_coreDataStore>)dataStore __attribute__((swift_name("init(dataStore:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updatesLeaguesSettingLeagues:(NSArray<NSString *> *)leagues completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("updatesLeaguesSetting(leagues:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppSettings.Companion")))
@interface FPLKAppSettingsCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKAppSettingsCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) FPLKDatastore_preferences_corePreferencesKey<NSString *> *LEAGUES_SETTING __attribute__((swift_name("LEAGUES_SETTING")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BootstrapStaticInfoDto")))
@interface FPLKBootstrapStaticInfoDto : FPLKBase
@property (class, readonly, getter=companion) FPLKBootstrapStaticInfoDtoCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<FPLKElementStatDto *> *element_stats __attribute__((swift_name("element_stats")));
@property (readonly) NSArray<FPLKElementTypeDto *> *element_types __attribute__((swift_name("element_types")));
@property (readonly) NSArray<FPLKElementDto *> *elements __attribute__((swift_name("elements")));
@property (readonly) NSArray<FPLKEventDto *> *events __attribute__((swift_name("events")));
@property (readonly) FPLKGameSettingsDto *game_settings __attribute__((swift_name("game_settings")));
@property (readonly) NSArray<FPLKPhaseDto *> *phases __attribute__((swift_name("phases")));
@property (readonly) NSArray<FPLKTeamDto *> *teams __attribute__((swift_name("teams")));
@property (readonly) int32_t total_players __attribute__((swift_name("total_players")));
- (instancetype)initWithElement_stats:(NSArray<FPLKElementStatDto *> *)element_stats element_types:(NSArray<FPLKElementTypeDto *> *)element_types elements:(NSArray<FPLKElementDto *> *)elements events:(NSArray<FPLKEventDto *> *)events game_settings:(FPLKGameSettingsDto *)game_settings phases:(NSArray<FPLKPhaseDto *> *)phases teams:(NSArray<FPLKTeamDto *> *)teams total_players:(int32_t)total_players __attribute__((swift_name("init(element_stats:element_types:elements:events:game_settings:phases:teams:total_players:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BootstrapStaticInfoDto.Companion")))
@interface FPLKBootstrapStaticInfoDtoCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKBootstrapStaticInfoDtoCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChipPlayDto")))
@interface FPLKChipPlayDto : FPLKBase
@property (class, readonly, getter=companion) FPLKChipPlayDtoCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *chip_name __attribute__((swift_name("chip_name")));
@property (readonly) int32_t num_played __attribute__((swift_name("num_played")));
- (instancetype)initWithChip_name:(NSString *)chip_name num_played:(int32_t)num_played __attribute__((swift_name("init(chip_name:num_played:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChipPlayDto.Companion")))
@interface FPLKChipPlayDtoCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKChipPlayDtoCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ElementDto")))
@interface FPLKElementDto : FPLKBase
@property (class, readonly, getter=companion) FPLKElementDtoCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t assists __attribute__((swift_name("assists")));
@property (readonly) int32_t bonus __attribute__((swift_name("bonus")));
@property (readonly) int32_t bps __attribute__((swift_name("bps")));
@property (readonly) FPLKInt * _Nullable chance_of_playing_next_round __attribute__((swift_name("chance_of_playing_next_round")));
@property (readonly) FPLKInt * _Nullable chance_of_playing_this_round __attribute__((swift_name("chance_of_playing_this_round")));
@property (readonly) int32_t clean_sheets __attribute__((swift_name("clean_sheets")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) FPLKInt * _Nullable corners_and_indirect_freekicks_order __attribute__((swift_name("corners_and_indirect_freekicks_order")));
@property (readonly) NSString *corners_and_indirect_freekicks_text __attribute__((swift_name("corners_and_indirect_freekicks_text")));
@property (readonly) int32_t cost_change_event __attribute__((swift_name("cost_change_event")));
@property (readonly) int32_t cost_change_event_fall __attribute__((swift_name("cost_change_event_fall")));
@property (readonly) int32_t cost_change_start __attribute__((swift_name("cost_change_start")));
@property (readonly) int32_t cost_change_start_fall __attribute__((swift_name("cost_change_start_fall")));
@property (readonly) NSString *creativity __attribute__((swift_name("creativity")));
@property (readonly) FPLKInt * _Nullable creativity_rank __attribute__((swift_name("creativity_rank")));
@property (readonly) FPLKInt * _Nullable creativity_rank_type __attribute__((swift_name("creativity_rank_type")));
@property (readonly) FPLKInt * _Nullable direct_freekicks_order __attribute__((swift_name("direct_freekicks_order")));
@property (readonly) NSString *direct_freekicks_text __attribute__((swift_name("direct_freekicks_text")));
@property (readonly) int32_t dreamteam_count __attribute__((swift_name("dreamteam_count")));
@property (readonly) int32_t element_type __attribute__((swift_name("element_type")));
@property (readonly) NSString * _Nullable ep_next __attribute__((swift_name("ep_next")));
@property (readonly) NSString * _Nullable ep_this __attribute__((swift_name("ep_this")));
@property (readonly) int32_t event_points __attribute__((swift_name("event_points")));
@property (readonly) NSString *first_name __attribute__((swift_name("first_name")));
@property (readonly) NSString *form __attribute__((swift_name("form")));
@property (readonly) int32_t goals_conceded __attribute__((swift_name("goals_conceded")));
@property (readonly) int32_t goals_scored __attribute__((swift_name("goals_scored")));
@property (readonly) NSString *ict_index __attribute__((swift_name("ict_index")));
@property (readonly) FPLKInt * _Nullable ict_index_rank __attribute__((swift_name("ict_index_rank")));
@property (readonly) FPLKInt * _Nullable ict_index_rank_type __attribute__((swift_name("ict_index_rank_type")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) BOOL in_dreamteam __attribute__((swift_name("in_dreamteam")));
@property (readonly) NSString *influence __attribute__((swift_name("influence")));
@property (readonly) FPLKInt * _Nullable influence_rank __attribute__((swift_name("influence_rank")));
@property (readonly) FPLKInt * _Nullable influence_rank_type __attribute__((swift_name("influence_rank_type")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) NSString *news __attribute__((swift_name("news")));
@property (readonly) NSString * _Nullable news_added __attribute__((swift_name("news_added")));
@property (readonly) int32_t now_cost __attribute__((swift_name("now_cost")));
@property (readonly) int32_t own_goals __attribute__((swift_name("own_goals")));
@property (readonly) int32_t penalties_missed __attribute__((swift_name("penalties_missed")));
@property (readonly) FPLKInt * _Nullable penalties_order __attribute__((swift_name("penalties_order")));
@property (readonly) int32_t penalties_saved __attribute__((swift_name("penalties_saved")));
@property (readonly) NSString *penalties_text __attribute__((swift_name("penalties_text")));
@property (readonly) NSString *photo __attribute__((swift_name("photo")));
@property (readonly) NSString *points_per_game __attribute__((swift_name("points_per_game")));
@property (readonly) int32_t red_cards __attribute__((swift_name("red_cards")));
@property (readonly) int32_t saves __attribute__((swift_name("saves")));
@property (readonly) NSString *second_name __attribute__((swift_name("second_name")));
@property (readonly) NSString *selected_by_percent __attribute__((swift_name("selected_by_percent")));
@property (readonly) BOOL special __attribute__((swift_name("special")));
@property (readonly) FPLKInt * _Nullable squad_number __attribute__((swift_name("squad_number")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@property (readonly) int32_t team __attribute__((swift_name("team")));
@property (readonly) int32_t team_code __attribute__((swift_name("team_code")));
@property (readonly) NSString *threat __attribute__((swift_name("threat")));
@property (readonly) FPLKInt * _Nullable threat_rank __attribute__((swift_name("threat_rank")));
@property (readonly) FPLKInt * _Nullable threat_rank_type __attribute__((swift_name("threat_rank_type")));
@property (readonly) int32_t total_points __attribute__((swift_name("total_points")));
@property (readonly) int32_t transfers_in __attribute__((swift_name("transfers_in")));
@property (readonly) int32_t transfers_in_event __attribute__((swift_name("transfers_in_event")));
@property (readonly) int32_t transfers_out __attribute__((swift_name("transfers_out")));
@property (readonly) int32_t transfers_out_event __attribute__((swift_name("transfers_out_event")));
@property (readonly) NSString *value_form __attribute__((swift_name("value_form")));
@property (readonly) NSString *value_season __attribute__((swift_name("value_season")));
@property (readonly) NSString *web_name __attribute__((swift_name("web_name")));
@property (readonly) int32_t yellow_cards __attribute__((swift_name("yellow_cards")));
- (instancetype)initWithAssists:(int32_t)assists bonus:(int32_t)bonus bps:(int32_t)bps chance_of_playing_next_round:(FPLKInt * _Nullable)chance_of_playing_next_round chance_of_playing_this_round:(FPLKInt * _Nullable)chance_of_playing_this_round clean_sheets:(int32_t)clean_sheets code:(int32_t)code corners_and_indirect_freekicks_order:(FPLKInt * _Nullable)corners_and_indirect_freekicks_order corners_and_indirect_freekicks_text:(NSString *)corners_and_indirect_freekicks_text cost_change_event:(int32_t)cost_change_event cost_change_event_fall:(int32_t)cost_change_event_fall cost_change_start:(int32_t)cost_change_start cost_change_start_fall:(int32_t)cost_change_start_fall creativity:(NSString *)creativity creativity_rank:(FPLKInt * _Nullable)creativity_rank creativity_rank_type:(FPLKInt * _Nullable)creativity_rank_type direct_freekicks_order:(FPLKInt * _Nullable)direct_freekicks_order direct_freekicks_text:(NSString *)direct_freekicks_text dreamteam_count:(int32_t)dreamteam_count element_type:(int32_t)element_type ep_next:(NSString * _Nullable)ep_next ep_this:(NSString * _Nullable)ep_this event_points:(int32_t)event_points first_name:(NSString *)first_name form:(NSString *)form goals_conceded:(int32_t)goals_conceded goals_scored:(int32_t)goals_scored ict_index:(NSString *)ict_index ict_index_rank:(FPLKInt * _Nullable)ict_index_rank ict_index_rank_type:(FPLKInt * _Nullable)ict_index_rank_type id:(int32_t)id in_dreamteam:(BOOL)in_dreamteam influence:(NSString *)influence influence_rank:(FPLKInt * _Nullable)influence_rank influence_rank_type:(FPLKInt * _Nullable)influence_rank_type minutes:(int32_t)minutes news:(NSString *)news news_added:(NSString * _Nullable)news_added now_cost:(int32_t)now_cost own_goals:(int32_t)own_goals penalties_missed:(int32_t)penalties_missed penalties_order:(FPLKInt * _Nullable)penalties_order penalties_saved:(int32_t)penalties_saved penalties_text:(NSString *)penalties_text photo:(NSString *)photo points_per_game:(NSString *)points_per_game red_cards:(int32_t)red_cards saves:(int32_t)saves second_name:(NSString *)second_name selected_by_percent:(NSString *)selected_by_percent special:(BOOL)special squad_number:(FPLKInt * _Nullable)squad_number status:(NSString *)status team:(int32_t)team team_code:(int32_t)team_code threat:(NSString *)threat threat_rank:(FPLKInt * _Nullable)threat_rank threat_rank_type:(FPLKInt * _Nullable)threat_rank_type total_points:(int32_t)total_points transfers_in:(int32_t)transfers_in transfers_in_event:(int32_t)transfers_in_event transfers_out:(int32_t)transfers_out transfers_out_event:(int32_t)transfers_out_event value_form:(NSString *)value_form value_season:(NSString *)value_season web_name:(NSString *)web_name yellow_cards:(int32_t)yellow_cards __attribute__((swift_name("init(assists:bonus:bps:chance_of_playing_next_round:chance_of_playing_this_round:clean_sheets:code:corners_and_indirect_freekicks_order:corners_and_indirect_freekicks_text:cost_change_event:cost_change_event_fall:cost_change_start:cost_change_start_fall:creativity:creativity_rank:creativity_rank_type:direct_freekicks_order:direct_freekicks_text:dreamteam_count:element_type:ep_next:ep_this:event_points:first_name:form:goals_conceded:goals_scored:ict_index:ict_index_rank:ict_index_rank_type:id:in_dreamteam:influence:influence_rank:influence_rank_type:minutes:news:news_added:now_cost:own_goals:penalties_missed:penalties_order:penalties_saved:penalties_text:photo:points_per_game:red_cards:saves:second_name:selected_by_percent:special:squad_number:status:team:team_code:threat:threat_rank:threat_rank_type:total_points:transfers_in:transfers_in_event:transfers_out:transfers_out_event:value_form:value_season:web_name:yellow_cards:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ElementDto.Companion")))
@interface FPLKElementDtoCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKElementDtoCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ElementStatDto")))
@interface FPLKElementStatDto : FPLKBase
@property (class, readonly, getter=companion) FPLKElementStatDtoCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
- (instancetype)initWithLabel:(NSString *)label name:(NSString *)name __attribute__((swift_name("init(label:name:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ElementStatDto.Companion")))
@interface FPLKElementStatDtoCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKElementStatDtoCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ElementSummaryDto")))
@interface FPLKElementSummaryDto : FPLKBase
@property (class, readonly, getter=companion) FPLKElementSummaryDtoCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<FPLKHistoryDto *> *history __attribute__((swift_name("history")));
@property (readonly) NSArray<FPLKHistoryPastDto *> *history_past __attribute__((swift_name("history_past")));
- (instancetype)initWithHistory:(NSArray<FPLKHistoryDto *> *)history history_past:(NSArray<FPLKHistoryPastDto *> *)history_past __attribute__((swift_name("init(history:history_past:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ElementSummaryDto.Companion")))
@interface FPLKElementSummaryDtoCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKElementSummaryDtoCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ElementTypeDto")))
@interface FPLKElementTypeDto : FPLKBase
@property (class, readonly, getter=companion) FPLKElementTypeDtoCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t element_count __attribute__((swift_name("element_count")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *plural_name __attribute__((swift_name("plural_name")));
@property (readonly) NSString *plural_name_short __attribute__((swift_name("plural_name_short")));
@property (readonly) NSString *singular_name __attribute__((swift_name("singular_name")));
@property (readonly) NSString *singular_name_short __attribute__((swift_name("singular_name_short")));
@property (readonly) int32_t squad_max_play __attribute__((swift_name("squad_max_play")));
@property (readonly) int32_t squad_min_play __attribute__((swift_name("squad_min_play")));
@property (readonly) int32_t squad_select __attribute__((swift_name("squad_select")));
@property (readonly) NSArray<FPLKInt *> *sub_positions_locked __attribute__((swift_name("sub_positions_locked")));
@property (readonly) BOOL ui_shirt_specific __attribute__((swift_name("ui_shirt_specific")));
- (instancetype)initWithElement_count:(int32_t)element_count id:(int32_t)id plural_name:(NSString *)plural_name plural_name_short:(NSString *)plural_name_short singular_name:(NSString *)singular_name singular_name_short:(NSString *)singular_name_short squad_max_play:(int32_t)squad_max_play squad_min_play:(int32_t)squad_min_play squad_select:(int32_t)squad_select sub_positions_locked:(NSArray<FPLKInt *> *)sub_positions_locked ui_shirt_specific:(BOOL)ui_shirt_specific __attribute__((swift_name("init(element_count:id:plural_name:plural_name_short:singular_name:singular_name_short:squad_max_play:squad_min_play:squad_select:sub_positions_locked:ui_shirt_specific:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ElementTypeDto.Companion")))
@interface FPLKElementTypeDtoCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKElementTypeDtoCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventDto")))
@interface FPLKEventDto : FPLKBase
@property (class, readonly, getter=companion) FPLKEventDtoCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t average_entry_score __attribute__((swift_name("average_entry_score")));
@property (readonly) NSArray<FPLKChipPlayDto *> *chip_plays __attribute__((swift_name("chip_plays")));
@property (readonly) BOOL data_checked __attribute__((swift_name("data_checked")));
@property (readonly) NSString *deadline_time __attribute__((swift_name("deadline_time")));
@property (readonly) int32_t deadline_time_epoch __attribute__((swift_name("deadline_time_epoch")));
@property (readonly) int32_t deadline_time_game_offset __attribute__((swift_name("deadline_time_game_offset")));
@property (readonly) BOOL finished __attribute__((swift_name("finished")));
@property (readonly) FPLKInt * _Nullable highest_score __attribute__((swift_name("highest_score")));
@property (readonly) FPLKInt * _Nullable highest_scoring_entry __attribute__((swift_name("highest_scoring_entry")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) BOOL is_current __attribute__((swift_name("is_current")));
@property (readonly) BOOL is_next __attribute__((swift_name("is_next")));
@property (readonly) BOOL is_previous __attribute__((swift_name("is_previous")));
@property (readonly) FPLKInt * _Nullable most_captained __attribute__((swift_name("most_captained")));
@property (readonly) FPLKInt * _Nullable most_selected __attribute__((swift_name("most_selected")));
@property (readonly) FPLKInt * _Nullable most_transferred_in __attribute__((swift_name("most_transferred_in")));
@property (readonly) FPLKInt * _Nullable most_vice_captained __attribute__((swift_name("most_vice_captained")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) FPLKInt * _Nullable top_element __attribute__((swift_name("top_element")));
@property (readonly) FPLKTopElementInfoDto * _Nullable top_element_info __attribute__((swift_name("top_element_info")));
@property (readonly) FPLKInt * _Nullable transfers_made __attribute__((swift_name("transfers_made")));
- (instancetype)initWithAverage_entry_score:(int32_t)average_entry_score chip_plays:(NSArray<FPLKChipPlayDto *> *)chip_plays data_checked:(BOOL)data_checked deadline_time:(NSString *)deadline_time deadline_time_epoch:(int32_t)deadline_time_epoch deadline_time_game_offset:(int32_t)deadline_time_game_offset finished:(BOOL)finished highest_score:(FPLKInt * _Nullable)highest_score highest_scoring_entry:(FPLKInt * _Nullable)highest_scoring_entry id:(int32_t)id is_current:(BOOL)is_current is_next:(BOOL)is_next is_previous:(BOOL)is_previous most_captained:(FPLKInt * _Nullable)most_captained most_selected:(FPLKInt * _Nullable)most_selected most_transferred_in:(FPLKInt * _Nullable)most_transferred_in most_vice_captained:(FPLKInt * _Nullable)most_vice_captained name:(NSString *)name top_element:(FPLKInt * _Nullable)top_element top_element_info:(FPLKTopElementInfoDto * _Nullable)top_element_info transfers_made:(FPLKInt * _Nullable)transfers_made __attribute__((swift_name("init(average_entry_score:chip_plays:data_checked:deadline_time:deadline_time_epoch:deadline_time_game_offset:finished:highest_score:highest_scoring_entry:id:is_current:is_next:is_previous:most_captained:most_selected:most_transferred_in:most_vice_captained:name:top_element:top_element_info:transfers_made:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventDto.Companion")))
@interface FPLKEventDtoCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKEventDtoCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventStatusDto")))
@interface FPLKEventStatusDto : FPLKBase
@property (class, readonly, getter=companion) FPLKEventStatusDtoCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL bonus_added __attribute__((swift_name("bonus_added")));
@property (readonly) NSString *date __attribute__((swift_name("date")));
@property (readonly) int32_t event __attribute__((swift_name("event")));
- (instancetype)initWithEvent:(int32_t)event date:(NSString *)date bonus_added:(BOOL)bonus_added __attribute__((swift_name("init(event:date:bonus_added:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventStatusDto.Companion")))
@interface FPLKEventStatusDtoCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKEventStatusDtoCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventStatusListDto")))
@interface FPLKEventStatusListDto : FPLKBase
@property (class, readonly, getter=companion) FPLKEventStatusListDtoCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<FPLKEventStatusDto *> *status __attribute__((swift_name("status")));
- (instancetype)initWithStatus:(NSArray<FPLKEventStatusDto *> *)status __attribute__((swift_name("init(status:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventStatusListDto.Companion")))
@interface FPLKEventStatusListDtoCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKEventStatusListDtoCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FixtureDto")))
@interface FPLKFixtureDto : FPLKBase
@property (class, readonly, getter=companion) FPLKFixtureDtoCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) FPLKInt * _Nullable event __attribute__((swift_name("event")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) FPLKKotlinx_datetimeInstant * _Nullable kickoff_time __attribute__((swift_name("kickoff_time")));
@property (readonly) int32_t team_a __attribute__((swift_name("team_a")));
@property (readonly) int32_t team_a_difficulty __attribute__((swift_name("team_a_difficulty")));
@property (readonly) FPLKInt * _Nullable team_a_score __attribute__((swift_name("team_a_score")));
@property (readonly) int32_t team_h __attribute__((swift_name("team_h")));
@property (readonly) int32_t team_h_difficulty __attribute__((swift_name("team_h_difficulty")));
@property (readonly) FPLKInt * _Nullable team_h_score __attribute__((swift_name("team_h_score")));
- (instancetype)initWithId:(int32_t)id event:(FPLKInt * _Nullable)event kickoff_time:(FPLKKotlinx_datetimeInstant * _Nullable)kickoff_time team_h:(int32_t)team_h team_a:(int32_t)team_a team_h_score:(FPLKInt * _Nullable)team_h_score team_a_score:(FPLKInt * _Nullable)team_a_score team_h_difficulty:(int32_t)team_h_difficulty team_a_difficulty:(int32_t)team_a_difficulty __attribute__((swift_name("init(id:event:kickoff_time:team_h:team_a:team_h_score:team_a_score:team_h_difficulty:team_a_difficulty:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FixtureDto.Companion")))
@interface FPLKFixtureDtoCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKFixtureDtoCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameSettingsDto")))
@interface FPLKGameSettingsDto : FPLKBase
@property (class, readonly, getter=companion) FPLKGameSettingsDtoCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable cup_qualifying_method __attribute__((swift_name("cup_qualifying_method")));
@property (readonly) FPLKInt * _Nullable cup_start_event_id __attribute__((swift_name("cup_start_event_id")));
@property (readonly) FPLKInt * _Nullable cup_stop_event_id __attribute__((swift_name("cup_stop_event_id")));
@property (readonly) NSString * _Nullable cup_type __attribute__((swift_name("cup_type")));
@property (readonly) NSArray<NSString *> *league_h2h_tiebreak_stats __attribute__((swift_name("league_h2h_tiebreak_stats")));
@property (readonly) int32_t league_join_private_max __attribute__((swift_name("league_join_private_max")));
@property (readonly) int32_t league_join_public_max __attribute__((swift_name("league_join_public_max")));
@property (readonly) BOOL league_ko_first_instead_of_random __attribute__((swift_name("league_ko_first_instead_of_random")));
@property (readonly) int32_t league_max_ko_rounds_private_h2h __attribute__((swift_name("league_max_ko_rounds_private_h2h")));
@property (readonly) int32_t league_max_size_private_h2h __attribute__((swift_name("league_max_size_private_h2h")));
@property (readonly) int32_t league_max_size_public_classic __attribute__((swift_name("league_max_size_public_classic")));
@property (readonly) int32_t league_max_size_public_h2h __attribute__((swift_name("league_max_size_public_h2h")));
@property (readonly) int32_t league_points_h2h_draw __attribute__((swift_name("league_points_h2h_draw")));
@property (readonly) int32_t league_points_h2h_lose __attribute__((swift_name("league_points_h2h_lose")));
@property (readonly) int32_t league_points_h2h_win __attribute__((swift_name("league_points_h2h_win")));
@property (readonly) NSString *league_prefix_public __attribute__((swift_name("league_prefix_public")));
@property (readonly) int32_t squad_squadplay __attribute__((swift_name("squad_squadplay")));
@property (readonly) int32_t squad_squadsize __attribute__((swift_name("squad_squadsize")));
@property (readonly) int32_t squad_team_limit __attribute__((swift_name("squad_team_limit")));
@property (readonly) int32_t squad_total_spend __attribute__((swift_name("squad_total_spend")));
@property (readonly) int32_t stats_form_days __attribute__((swift_name("stats_form_days")));
@property (readonly) BOOL sys_vice_captain_enabled __attribute__((swift_name("sys_vice_captain_enabled")));
@property (readonly) NSString *timezone __attribute__((swift_name("timezone")));
@property (readonly) int32_t transfers_cap __attribute__((swift_name("transfers_cap")));
@property (readonly) double transfers_sell_on_fee __attribute__((swift_name("transfers_sell_on_fee")));
@property (readonly) int32_t ui_currency_multiplier __attribute__((swift_name("ui_currency_multiplier")));
@property (readonly) BOOL ui_use_special_shirts __attribute__((swift_name("ui_use_special_shirts")));
- (instancetype)initWithCup_qualifying_method:(NSString * _Nullable)cup_qualifying_method cup_start_event_id:(FPLKInt * _Nullable)cup_start_event_id cup_stop_event_id:(FPLKInt * _Nullable)cup_stop_event_id cup_type:(NSString * _Nullable)cup_type league_h2h_tiebreak_stats:(NSArray<NSString *> *)league_h2h_tiebreak_stats league_join_private_max:(int32_t)league_join_private_max league_join_public_max:(int32_t)league_join_public_max league_ko_first_instead_of_random:(BOOL)league_ko_first_instead_of_random league_max_ko_rounds_private_h2h:(int32_t)league_max_ko_rounds_private_h2h league_max_size_private_h2h:(int32_t)league_max_size_private_h2h league_max_size_public_classic:(int32_t)league_max_size_public_classic league_max_size_public_h2h:(int32_t)league_max_size_public_h2h league_points_h2h_draw:(int32_t)league_points_h2h_draw league_points_h2h_lose:(int32_t)league_points_h2h_lose league_points_h2h_win:(int32_t)league_points_h2h_win league_prefix_public:(NSString *)league_prefix_public squad_squadplay:(int32_t)squad_squadplay squad_squadsize:(int32_t)squad_squadsize squad_team_limit:(int32_t)squad_team_limit squad_total_spend:(int32_t)squad_total_spend stats_form_days:(int32_t)stats_form_days sys_vice_captain_enabled:(BOOL)sys_vice_captain_enabled timezone:(NSString *)timezone transfers_cap:(int32_t)transfers_cap transfers_sell_on_fee:(double)transfers_sell_on_fee ui_currency_multiplier:(int32_t)ui_currency_multiplier ui_use_special_shirts:(BOOL)ui_use_special_shirts __attribute__((swift_name("init(cup_qualifying_method:cup_start_event_id:cup_stop_event_id:cup_type:league_h2h_tiebreak_stats:league_join_private_max:league_join_public_max:league_ko_first_instead_of_random:league_max_ko_rounds_private_h2h:league_max_size_private_h2h:league_max_size_public_classic:league_max_size_public_h2h:league_points_h2h_draw:league_points_h2h_lose:league_points_h2h_win:league_prefix_public:squad_squadplay:squad_squadsize:squad_team_limit:squad_total_spend:stats_form_days:sys_vice_captain_enabled:timezone:transfers_cap:transfers_sell_on_fee:ui_currency_multiplier:ui_use_special_shirts:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameSettingsDto.Companion")))
@interface FPLKGameSettingsDtoCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKGameSettingsDtoCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameWeekLiveDataDto")))
@interface FPLKGameWeekLiveDataDto : FPLKBase
@property (class, readonly, getter=companion) FPLKGameWeekLiveDataDtoCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<FPLKGameWeekLiveDataElementDto *> *elements __attribute__((swift_name("elements")));
- (instancetype)initWithElements:(NSArray<FPLKGameWeekLiveDataElementDto *> *)elements __attribute__((swift_name("init(elements:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameWeekLiveDataDto.Companion")))
@interface FPLKGameWeekLiveDataDtoCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKGameWeekLiveDataDtoCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameWeekLiveDataElementDto")))
@interface FPLKGameWeekLiveDataElementDto : FPLKBase
@property (class, readonly, getter=companion) FPLKGameWeekLiveDataElementDtoCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) FPLKGameWeekLiveDataElementStatsDto *stats __attribute__((swift_name("stats")));
- (instancetype)initWithId:(int32_t)id stats:(FPLKGameWeekLiveDataElementStatsDto *)stats __attribute__((swift_name("init(id:stats:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameWeekLiveDataElementDto.Companion")))
@interface FPLKGameWeekLiveDataElementDtoCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKGameWeekLiveDataElementDtoCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameWeekLiveDataElementStatsDto")))
@interface FPLKGameWeekLiveDataElementStatsDto : FPLKBase
@property (class, readonly, getter=companion) FPLKGameWeekLiveDataElementStatsDtoCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t assists __attribute__((swift_name("assists")));
@property (readonly) int32_t bonus __attribute__((swift_name("bonus")));
@property (readonly) int32_t clean_sheets __attribute__((swift_name("clean_sheets")));
@property (readonly) NSString *creativity __attribute__((swift_name("creativity")));
@property (readonly) int32_t goals_conceded __attribute__((swift_name("goals_conceded")));
@property (readonly) int32_t goals_scored __attribute__((swift_name("goals_scored")));
@property (readonly) NSString *influence __attribute__((swift_name("influence")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) NSString *threat __attribute__((swift_name("threat")));
@property (readonly) int32_t total_points __attribute__((swift_name("total_points")));
- (instancetype)initWithMinutes:(int32_t)minutes goals_scored:(int32_t)goals_scored assists:(int32_t)assists clean_sheets:(int32_t)clean_sheets goals_conceded:(int32_t)goals_conceded bonus:(int32_t)bonus influence:(NSString *)influence creativity:(NSString *)creativity threat:(NSString *)threat total_points:(int32_t)total_points __attribute__((swift_name("init(minutes:goals_scored:assists:clean_sheets:goals_conceded:bonus:influence:creativity:threat:total_points:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameWeekLiveDataElementStatsDto.Companion")))
@interface FPLKGameWeekLiveDataElementStatsDtoCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKGameWeekLiveDataElementStatsDtoCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryDto")))
@interface FPLKHistoryDto : FPLKBase
@property (class, readonly, getter=companion) FPLKHistoryDtoCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t assists __attribute__((swift_name("assists")));
@property (readonly) int32_t element __attribute__((swift_name("element")));
@property (readonly) int32_t fixture __attribute__((swift_name("fixture")));
@property (readonly) int32_t goals_scored __attribute__((swift_name("goals_scored")));
@property (readonly) int32_t round __attribute__((swift_name("round")));
@property (readonly) int32_t total_points __attribute__((swift_name("total_points")));
- (instancetype)initWithElement:(int32_t)element fixture:(int32_t)fixture total_points:(int32_t)total_points round:(int32_t)round goals_scored:(int32_t)goals_scored assists:(int32_t)assists __attribute__((swift_name("init(element:fixture:total_points:round:goals_scored:assists:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryDto.Companion")))
@interface FPLKHistoryDtoCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKHistoryDtoCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryPastDto")))
@interface FPLKHistoryPastDto : FPLKBase
@property (class, readonly, getter=companion) FPLKHistoryPastDtoCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *season_name __attribute__((swift_name("season_name")));
@property (readonly) int32_t total_points __attribute__((swift_name("total_points")));
- (instancetype)initWithSeason_name:(NSString *)season_name total_points:(int32_t)total_points __attribute__((swift_name("init(season_name:total_points:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryPastDto.Companion")))
@interface FPLKHistoryPastDtoCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKHistoryPastDtoCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeagueDto")))
@interface FPLKLeagueDto : FPLKBase
@property (class, readonly, getter=companion) FPLKLeagueDtoCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeagueDto.Companion")))
@interface FPLKLeagueDtoCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKLeagueDtoCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeagueResultDto")))
@interface FPLKLeagueResultDto : FPLKBase
@property (class, readonly, getter=companion) FPLKLeagueResultDtoCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *entryName __attribute__((swift_name("entryName")));
@property (readonly) int32_t eventTotal __attribute__((swift_name("eventTotal")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) int32_t lastRank __attribute__((swift_name("lastRank")));
@property (readonly) NSString *playerName __attribute__((swift_name("playerName")));
@property (readonly) int32_t rank __attribute__((swift_name("rank")));
@property (readonly) int32_t total __attribute__((swift_name("total")));
- (instancetype)initWithId:(int32_t)id rank:(int32_t)rank lastRank:(int32_t)lastRank eventTotal:(int32_t)eventTotal total:(int32_t)total playerName:(NSString *)playerName entryName:(NSString *)entryName __attribute__((swift_name("init(id:rank:lastRank:eventTotal:total:playerName:entryName:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="entry_name")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="event_total")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="last_rank")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="player_name")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeagueResultDto.Companion")))
@interface FPLKLeagueResultDtoCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKLeagueResultDtoCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeagueStandingsDto")))
@interface FPLKLeagueStandingsDto : FPLKBase
@property (class, readonly, getter=companion) FPLKLeagueStandingsDtoCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) FPLKLeagueDto *league __attribute__((swift_name("league")));
@property (readonly) FPLKLeagueStandingsResultsDto *standings __attribute__((swift_name("standings")));
- (instancetype)initWithLeague:(FPLKLeagueDto *)league standings:(FPLKLeagueStandingsResultsDto *)standings __attribute__((swift_name("init(league:standings:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeagueStandingsDto.Companion")))
@interface FPLKLeagueStandingsDtoCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKLeagueStandingsDtoCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeagueStandingsResultsDto")))
@interface FPLKLeagueStandingsResultsDto : FPLKBase
@property (class, readonly, getter=companion) FPLKLeagueStandingsResultsDtoCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<FPLKLeagueResultDto *> *results __attribute__((swift_name("results")));
- (instancetype)initWithResults:(NSArray<FPLKLeagueResultDto *> *)results __attribute__((swift_name("init(results:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeagueStandingsResultsDto.Companion")))
@interface FPLKLeagueStandingsResultsDtoCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKLeagueStandingsResultsDtoCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhaseDto")))
@interface FPLKPhaseDto : FPLKBase
@property (class, readonly, getter=companion) FPLKPhaseDtoCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t start_event __attribute__((swift_name("start_event")));
@property (readonly) int32_t stop_event __attribute__((swift_name("stop_event")));
- (instancetype)initWithId:(int32_t)id name:(NSString *)name start_event:(int32_t)start_event stop_event:(int32_t)stop_event __attribute__((swift_name("init(id:name:start_event:stop_event:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhaseDto.Companion")))
@interface FPLKPhaseDtoCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKPhaseDtoCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TeamDto")))
@interface FPLKTeamDto : FPLKBase
@property (class, readonly, getter=companion) FPLKTeamDtoCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) int32_t draw __attribute__((swift_name("draw")));
@property (readonly) NSString * _Nullable form __attribute__((swift_name("form")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) int32_t loss __attribute__((swift_name("loss")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t played __attribute__((swift_name("played")));
@property (readonly) int32_t points __attribute__((swift_name("points")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@property (readonly) int32_t pulse_id __attribute__((swift_name("pulse_id")));
@property (readonly) NSString *short_name __attribute__((swift_name("short_name")));
@property (readonly) int32_t strength __attribute__((swift_name("strength")));
@property (readonly) int32_t strength_attack_away __attribute__((swift_name("strength_attack_away")));
@property (readonly) int32_t strength_attack_home __attribute__((swift_name("strength_attack_home")));
@property (readonly) int32_t strength_defence_away __attribute__((swift_name("strength_defence_away")));
@property (readonly) int32_t strength_defence_home __attribute__((swift_name("strength_defence_home")));
@property (readonly) int32_t strength_overall_away __attribute__((swift_name("strength_overall_away")));
@property (readonly) int32_t strength_overall_home __attribute__((swift_name("strength_overall_home")));
@property (readonly) BOOL unavailable __attribute__((swift_name("unavailable")));
@property (readonly) int32_t win __attribute__((swift_name("win")));
- (instancetype)initWithCode:(int32_t)code draw:(int32_t)draw form:(NSString * _Nullable)form id:(int32_t)id loss:(int32_t)loss name:(NSString *)name played:(int32_t)played points:(int32_t)points position:(int32_t)position pulse_id:(int32_t)pulse_id short_name:(NSString *)short_name strength:(int32_t)strength strength_attack_away:(int32_t)strength_attack_away strength_attack_home:(int32_t)strength_attack_home strength_defence_away:(int32_t)strength_defence_away strength_defence_home:(int32_t)strength_defence_home strength_overall_away:(int32_t)strength_overall_away strength_overall_home:(int32_t)strength_overall_home unavailable:(BOOL)unavailable win:(int32_t)win __attribute__((swift_name("init(code:draw:form:id:loss:name:played:points:position:pulse_id:short_name:strength:strength_attack_away:strength_attack_home:strength_defence_away:strength_defence_home:strength_overall_away:strength_overall_home:unavailable:win:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TeamDto.Companion")))
@interface FPLKTeamDtoCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKTeamDtoCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TopElementInfoDto")))
@interface FPLKTopElementInfoDto : FPLKBase
@property (class, readonly, getter=companion) FPLKTopElementInfoDtoCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) int32_t points __attribute__((swift_name("points")));
- (instancetype)initWithId:(int32_t)id points:(int32_t)points __attribute__((swift_name("init(id:points:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TopElementInfoDto.Companion")))
@interface FPLKTopElementInfoDtoCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKTopElementInfoDtoCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol FPLKKoin_coreKoinComponent
@required
- (FPLKKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FantasyPremierLeagueApi")))
@interface FPLKFantasyPremierLeagueApi : FPLKBase <FPLKKoin_coreKoinComponent>
- (instancetype)initWithClient:(FPLKKtor_client_coreHttpClient *)client baseUrl:(NSString *)baseUrl __attribute__((swift_name("init(client:baseUrl:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchBootstrapStaticInfoWithCompletionHandler:(void (^)(FPLKBootstrapStaticInfoDto * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchBootstrapStaticInfo(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchEventStatusWithCompletionHandler:(void (^)(FPLKEventStatusListDto * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchEventStatus(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchFixturesWithCompletionHandler:(void (^)(NSArray<FPLKFixtureDto *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchFixtures(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchGameWeekLiveDataEventId:(int32_t)eventId completionHandler:(void (^)(FPLKGameWeekLiveDataDto * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchGameWeekLiveData(eventId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchLeagueStandingsLeagueId:(int32_t)leagueId completionHandler:(void (^)(FPLKLeagueStandingsDto * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchLeagueStandings(leagueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchPlayerDataPlayerId:(int32_t)playerId completionHandler:(void (^)(FPLKElementSummaryDto * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchPlayerData(playerId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchUpcomingFixturesWithCompletionHandler:(void (^)(NSArray<FPLKFixtureDto *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchUpcomingFixtures(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FantasyPremierLeagueRepository")))
@interface FPLKFantasyPremierLeagueRepository : FPLKBase <FPLKKoin_coreKoinComponent>
@property (readonly) id<FPLKKotlinx_coroutines_coreCoroutineScope> coroutineScope __attribute__((swift_name("coroutineScope")));
@property (readonly) id<FPLKKotlinx_coroutines_coreStateFlow> currentGameweek __attribute__((swift_name("currentGameweek")));
@property (readonly) id<FPLKKotlinx_coroutines_coreFlow> leagues __attribute__((swift_name("leagues")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getEventStatusWithCompletionHandler:(void (^)(FPLKEventStatusListDto * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getEventStatus(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFixtureId:(int32_t)id completionHandler:(void (^)(FPLKGameFixture * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFixture(id:completionHandler:)")));
- (id<FPLKKotlinx_coroutines_coreFlow>)getFixtures __attribute__((swift_name("getFixtures()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLeagueStandingsLeagueId:(int32_t)leagueId completionHandler:(void (^)(FPLKLeagueStandingsDto * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getLeagueStandings(leagueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPlayerId:(int32_t)id completionHandler:(void (^)(FPLKPlayer * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPlayer(id:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPlayerHistoryDataPlayerId:(int32_t)playerId completionHandler:(void (^)(NSArray<FPLKPlayerPastHistory *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPlayerHistoryData(playerId:completionHandler:)")));
- (id<FPLKKotlinx_coroutines_coreFlow>)getPlayers __attribute__((swift_name("getPlayers()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateLeaguesLeagues:(NSArray<NSString *> *)leagues completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("updateLeagues(leagues:completionHandler:)")));
@end

__attribute__((swift_name("Room_runtimeRoomDatabase")))
@interface FPLKRoom_runtimeRoomDatabase : FPLKBase
@property (readonly) FPLKRoom_runtimeInvalidationTracker *invalidationTracker __attribute__((swift_name("invalidationTracker")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP])
*/
- (NSArray<FPLKRoom_runtimeMigration *> *)createAutoMigrationsAutoMigrationSpecs:(NSDictionary<id<FPLKKotlinKClass>, id<FPLKRoom_runtimeAutoMigrationSpec>> *)autoMigrationSpecs __attribute__((swift_name("createAutoMigrations(autoMigrationSpecs:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (FPLKRoom_runtimeInvalidationTracker *)createInvalidationTracker __attribute__((swift_name("createInvalidationTracker()")));

/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP])
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id<FPLKRoom_runtimeRoomOpenDelegateMarker>)createOpenDelegate __attribute__((swift_name("createOpenDelegate()")));

/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP])
*/
- (id<FPLKKotlinx_coroutines_coreCoroutineScope>)getCoroutineScope __attribute__((swift_name("getCoroutineScope()")));

/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP])
*/
- (NSSet<id<FPLKKotlinKClass>> *)getRequiredAutoMigrationSpecClasses __attribute__((swift_name("getRequiredAutoMigrationSpecClasses()")));

/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP])
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSDictionary<id<FPLKKotlinKClass>, NSArray<id<FPLKKotlinKClass>> *> *)getRequiredTypeConverterClasses __attribute__((swift_name("getRequiredTypeConverterClasses()")));

/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP])
*/
- (id)getTypeConverterKlass:(id<FPLKKotlinKClass>)klass __attribute__((swift_name("getTypeConverter(klass:)")));

/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP_PREFIX])
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)internalInitInvalidationTrackerConnection:(id<FPLKSqliteSQLiteConnection>)connection __attribute__((swift_name("internalInitInvalidationTracker(connection:)")));
@end

__attribute__((swift_name("AppDatabase")))
@interface FPLKAppDatabase : FPLKRoom_runtimeRoomDatabase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<FPLKFantasyPremierLeagueDao>)fantasyPremierLeagueDao __attribute__((swift_name("fantasyPremierLeagueDao()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppDatabase_Impl")))
@interface FPLKAppDatabase_Impl : FPLKAppDatabase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSArray<FPLKRoom_runtimeMigration *> *)createAutoMigrationsAutoMigrationSpecs:(NSDictionary<id<FPLKKotlinKClass>, id<FPLKRoom_runtimeAutoMigrationSpec>> *)autoMigrationSpecs __attribute__((swift_name("createAutoMigrations(autoMigrationSpecs:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (FPLKRoom_runtimeInvalidationTracker *)createInvalidationTracker __attribute__((swift_name("createInvalidationTracker()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (FPLKRoom_runtimeRoomOpenDelegate *)createOpenDelegate __attribute__((swift_name("createOpenDelegate()")));
- (id<FPLKFantasyPremierLeagueDao>)fantasyPremierLeagueDao __attribute__((swift_name("fantasyPremierLeagueDao()")));
- (NSSet<id<FPLKKotlinKClass>> *)getRequiredAutoMigrationSpecClasses __attribute__((swift_name("getRequiredAutoMigrationSpecClasses()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSDictionary<id<FPLKKotlinKClass>, NSArray<id<FPLKKotlinKClass>> *> *)getRequiredTypeConverterClasses __attribute__((swift_name("getRequiredTypeConverterClasses()")));
@end

__attribute__((swift_name("FantasyPremierLeagueDao")))
@protocol FPLKFantasyPremierLeagueDao
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFixtureId:(int32_t)id completionHandler:(void (^)(FPLKGameFixture * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFixture(id:completionHandler:)")));
- (id<FPLKKotlinx_coroutines_coreFlow>)getFixtureListAsFlow __attribute__((swift_name("getFixtureListAsFlow()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPlayerId:(int32_t)id completionHandler:(void (^)(FPLKPlayer * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPlayer(id:completionHandler:)")));
- (id<FPLKKotlinx_coroutines_coreFlow>)getPlayerListAsFlow __attribute__((swift_name("getPlayerListAsFlow()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertFixtureListFixtureList:(NSArray<FPLKGameFixture *> *)fixtureList completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertFixtureList(fixtureList:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertPlayerListPlayerList:(NSArray<FPLKPlayer *> *)playerList completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertPlayerList(playerList:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertTeamListTeamList:(NSArray<FPLKTeam *> *)teamList completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertTeamList(teamList:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FantasyPremierLeagueDao_Impl")))
@interface FPLKFantasyPremierLeagueDao_Impl : FPLKBase <FPLKFantasyPremierLeagueDao>
@property (class, readonly, getter=companion) FPLKFantasyPremierLeagueDao_ImplCompanion *companion __attribute__((swift_name("companion")));
- (instancetype)initWith__db:(FPLKRoom_runtimeRoomDatabase *)__db __attribute__((swift_name("init(__db:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFixtureId:(int32_t)id completionHandler:(void (^)(FPLKGameFixture * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFixture(id:completionHandler:)")));
- (id<FPLKKotlinx_coroutines_coreFlow>)getFixtureListAsFlow __attribute__((swift_name("getFixtureListAsFlow()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPlayerId:(int32_t)id completionHandler:(void (^)(FPLKPlayer * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPlayer(id:completionHandler:)")));
- (id<FPLKKotlinx_coroutines_coreFlow>)getPlayerListAsFlow __attribute__((swift_name("getPlayerListAsFlow()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertFixtureListFixtureList:(NSArray<FPLKGameFixture *> *)fixtureList completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertFixtureList(fixtureList:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertPlayerListPlayerList:(NSArray<FPLKPlayer *> *)playerList completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertPlayerList(playerList:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertTeamListTeamList:(NSArray<FPLKTeam *> *)teamList completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertTeamList(teamList:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FantasyPremierLeagueDao_Impl.Companion")))
@interface FPLKFantasyPremierLeagueDao_ImplCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKFantasyPremierLeagueDao_ImplCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (NSArray<id<FPLKKotlinKClass>> *)getRequiredConverters __attribute__((swift_name("getRequiredConverters()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocalDateTimeConverter")))
@interface FPLKLocalDateTimeConverter : FPLKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString * _Nullable)dateToTimestampDate:(FPLKKotlinx_datetimeLocalDateTime * _Nullable)date __attribute__((swift_name("dateToTimestamp(date:)")));
- (FPLKKotlinx_datetimeLocalDateTime * _Nullable)fromTimestampValue:(NSString * _Nullable)value __attribute__((swift_name("fromTimestamp(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameFixture")))
@interface FPLKGameFixture : FPLKBase
@property (readonly) NSString *awayTeam __attribute__((swift_name("awayTeam")));
@property (readonly) NSString *awayTeamPhotoUrl __attribute__((swift_name("awayTeamPhotoUrl")));
@property (readonly) FPLKInt * _Nullable awayTeamScore __attribute__((swift_name("awayTeamScore")));
@property (readonly) int32_t event __attribute__((swift_name("event")));
@property (readonly) NSString *homeTeam __attribute__((swift_name("homeTeam")));
@property (readonly) NSString *homeTeamPhotoUrl __attribute__((swift_name("homeTeamPhotoUrl")));
@property (readonly) FPLKInt * _Nullable homeTeamScore __attribute__((swift_name("homeTeamScore")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) FPLKKotlinx_datetimeLocalDateTime *localKickoffTime __attribute__((swift_name("localKickoffTime")));
- (instancetype)initWithId:(int32_t)id localKickoffTime:(FPLKKotlinx_datetimeLocalDateTime *)localKickoffTime homeTeam:(NSString *)homeTeam awayTeam:(NSString *)awayTeam homeTeamPhotoUrl:(NSString *)homeTeamPhotoUrl awayTeamPhotoUrl:(NSString *)awayTeamPhotoUrl homeTeamScore:(FPLKInt * _Nullable)homeTeamScore awayTeamScore:(FPLKInt * _Nullable)awayTeamScore event:(int32_t)event __attribute__((swift_name("init(id:localKickoffTime:homeTeam:awayTeam:homeTeamPhotoUrl:awayTeamPhotoUrl:homeTeamScore:awayTeamScore:event:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Player")))
@interface FPLKPlayer : FPLKBase
@property (readonly) int32_t assists __attribute__((swift_name("assists")));
@property (readonly) double currentPrice __attribute__((swift_name("currentPrice")));
@property (readonly) int32_t goalsScored __attribute__((swift_name("goalsScored")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *photoUrl __attribute__((swift_name("photoUrl")));
@property (readonly) int32_t points __attribute__((swift_name("points")));
@property (readonly) NSString *team __attribute__((swift_name("team")));
- (instancetype)initWithId:(int32_t)id name:(NSString *)name team:(NSString *)team photoUrl:(NSString *)photoUrl points:(int32_t)points currentPrice:(double)currentPrice goalsScored:(int32_t)goalsScored assists:(int32_t)assists __attribute__((swift_name("init(id:name:team:photoUrl:points:currentPrice:goalsScored:assists:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerPastHistory")))
@interface FPLKPlayerPastHistory : FPLKBase
@property (readonly) NSString *seasonName __attribute__((swift_name("seasonName")));
@property (readonly) int32_t totalPoints __attribute__((swift_name("totalPoints")));
- (instancetype)initWithSeasonName:(NSString *)seasonName totalPoints:(int32_t)totalPoints __attribute__((swift_name("init(seasonName:totalPoints:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Team")))
@interface FPLKTeam : FPLKBase
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) int32_t index __attribute__((swift_name("index")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
- (instancetype)initWithId:(int32_t)id index:(int32_t)index name:(NSString *)name code:(int32_t)code __attribute__((swift_name("init(id:index:name:code:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedViewControllers")))
@interface FPLKSharedViewControllers : FPLKBase
@property (class, readonly, getter=shared) FPLKSharedViewControllers *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sharedViewControllers __attribute__((swift_name("init()")));
- (UIViewController *)playerDetailsViewControllerPlayer:(FPLKPlayer *)player __attribute__((swift_name("playerDetailsViewController(player:)")));
@end

__attribute__((swift_name("FixturesViewModel")))
@interface FPLKFixturesViewModel : FPLKViewModel <FPLKKoin_coreKoinComponent>
@property (readonly) id<FPLKKotlinx_coroutines_coreStateFlow> currentGameweek __attribute__((swift_name("currentGameweek")));
@property (readonly) id<FPLKKotlinx_coroutines_coreStateFlow> gameWeekFixtures __attribute__((swift_name("gameWeekFixtures")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithCloseables:(FPLKKotlinArray<id<FPLKKotlinAutoCloseable>> *)closeables __attribute__((swift_name("init(closeables:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithViewModelScope:(id<FPLKKotlinx_coroutines_coreCoroutineScope>)viewModelScope __attribute__((swift_name("init(viewModelScope:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithViewModelScope:(id<FPLKKotlinx_coroutines_coreCoroutineScope>)viewModelScope closeables:(FPLKKotlinArray<id<FPLKKotlinAutoCloseable>> *)closeables __attribute__((swift_name("init(viewModelScope:closeables:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFixtureId:(int32_t)id completionHandler:(void (^)(FPLKGameFixture * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFixture(id:completionHandler:)")));
@end

__attribute__((swift_name("LeaguesViewModel")))
@interface FPLKLeaguesViewModel : FPLKViewModel <FPLKKoin_coreKoinComponent>
@property id<FPLKKotlinx_coroutines_coreStateFlow> leagueStandings __attribute__((swift_name("leagueStandings")));
@property (readonly) id<FPLKKotlinx_coroutines_coreStateFlow> leagues __attribute__((swift_name("leagues")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithCloseables:(FPLKKotlinArray<id<FPLKKotlinAutoCloseable>> *)closeables __attribute__((swift_name("init(closeables:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithViewModelScope:(id<FPLKKotlinx_coroutines_coreCoroutineScope>)viewModelScope __attribute__((swift_name("init(viewModelScope:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithViewModelScope:(id<FPLKKotlinx_coroutines_coreCoroutineScope>)viewModelScope closeables:(FPLKKotlinArray<id<FPLKKotlinAutoCloseable>> *)closeables __attribute__((swift_name("init(viewModelScope:closeables:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getEventStatusWithCompletionHandler:(void (^)(NSArray<FPLKEventStatusDto *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getEventStatus(completionHandler:)")));
- (void)updateLeaguesLeagues:(NSArray<NSString *> *)leagues __attribute__((swift_name("updateLeagues(leagues:)")));
@end

__attribute__((swift_name("PlayerDetailsViewModel")))
@interface FPLKPlayerDetailsViewModel : FPLKViewModel <FPLKKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithCloseables:(FPLKKotlinArray<id<FPLKKotlinAutoCloseable>> *)closeables __attribute__((swift_name("init(closeables:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithViewModelScope:(id<FPLKKotlinx_coroutines_coreCoroutineScope>)viewModelScope __attribute__((swift_name("init(viewModelScope:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithViewModelScope:(id<FPLKKotlinx_coroutines_coreCoroutineScope>)viewModelScope closeables:(FPLKKotlinArray<id<FPLKKotlinAutoCloseable>> *)closeables __attribute__((swift_name("init(viewModelScope:closeables:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPlayerId:(int32_t)id completionHandler:(void (^)(FPLKPlayer * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPlayer(id:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPlayerHistoryPlayerId:(int32_t)playerId completionHandler:(void (^)(NSArray<FPLKPlayerPastHistory *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPlayerHistory(playerId:completionHandler:)")));
@end

__attribute__((swift_name("PlayerListUIState")))
@interface FPLKPlayerListUIState : FPLKBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerListUIState.Error")))
@interface FPLKPlayerListUIStateError : FPLKPlayerListUIState
@property (readonly) NSString *message __attribute__((swift_name("message")));
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerListUIState.Loading")))
@interface FPLKPlayerListUIStateLoading : FPLKPlayerListUIState
@property (class, readonly, getter=shared) FPLKPlayerListUIStateLoading *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loading __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerListUIState.Success")))
@interface FPLKPlayerListUIStateSuccess : FPLKPlayerListUIState
@property (readonly) NSArray<FPLKPlayer *> *result __attribute__((swift_name("result")));
- (instancetype)initWithResult:(NSArray<FPLKPlayer *> *)result __attribute__((swift_name("init(result:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("PlayerListViewModel")))
@interface FPLKPlayerListViewModel : FPLKViewModel <FPLKKoin_coreKoinComponent>
@property (readonly) id<FPLKKotlinx_coroutines_coreStateFlow> allPlayers __attribute__((swift_name("allPlayers")));
@property (readonly) id<FPLKKotlinx_coroutines_coreStateFlow> playerListUIState __attribute__((swift_name("playerListUIState")));
@property (readonly) id<FPLKKotlinx_coroutines_coreMutableStateFlow> searchQuery __attribute__((swift_name("searchQuery")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithCloseables:(FPLKKotlinArray<id<FPLKKotlinAutoCloseable>> *)closeables __attribute__((swift_name("init(closeables:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithViewModelScope:(id<FPLKKotlinx_coroutines_coreCoroutineScope>)viewModelScope __attribute__((swift_name("init(viewModelScope:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithViewModelScope:(id<FPLKKotlinx_coroutines_coreCoroutineScope>)viewModelScope closeables:(FPLKKotlinArray<id<FPLKKotlinAutoCloseable>> *)closeables __attribute__((swift_name("init(viewModelScope:closeables:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)onPlayerSearchQueryChangeQuery:(NSString *)query __attribute__((swift_name("onPlayerSearchQueryChange(query:)")));
@end

@interface FPLKViewModel (Extensions)
@property (readonly) id<FPLKKotlinx_coroutines_coreCoroutineScope> viewModelScope __attribute__((swift_name("viewModelScope")));
@end

@interface FPLKViewModelProvider (Extensions)

/**
 * @note annotations
 *   androidx.annotation.MainThread
*/
- (FPLKViewModel *)get __attribute__((swift_name("get()")));
@end

@interface FPLKInitializerViewModelFactoryBuilder (Extensions)
- (void)initializerInitializer:(FPLKViewModel *(^)(FPLKCreationExtras *))initializer __attribute__((swift_name("initializer(initializer:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppSettingsKt")))
@interface FPLKAppSettingsKt : FPLKBase
+ (id<FPLKDatastore_coreDataStore>)createDataStoreProducePath:(NSString *(^)(void))producePath __attribute__((swift_name("createDataStore(producePath:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InitializerViewModelFactoryKt")))
@interface FPLKInitializerViewModelFactoryKt : FPLKBase
+ (id<FPLKViewModelProviderFactory>)viewModelFactoryBuilder:(void (^)(FPLKInitializerViewModelFactoryBuilder *))builder __attribute__((swift_name("viewModelFactory(builder:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinKt")))
@interface FPLKKoinKt : FPLKBase
+ (FPLKKoin_coreModule *)commonModuleEnableNetworkLogs:(BOOL)enableNetworkLogs __attribute__((swift_name("commonModule(enableNetworkLogs:)")));
+ (FPLKKtor_client_coreHttpClient *)createHttpClientHttpClientEngine:(id<FPLKKtor_client_coreHttpClientEngine>)httpClientEngine json:(FPLKKotlinx_serialization_jsonJson *)json enableNetworkLogs:(BOOL)enableNetworkLogs __attribute__((swift_name("createHttpClient(httpClientEngine:json:enableNetworkLogs:)")));
+ (FPLKKotlinx_serialization_jsonJson *)createJson __attribute__((swift_name("createJson()")));
+ (FPLKKoin_coreKoinApplication *)doInitKoin __attribute__((swift_name("doInitKoin()")));
+ (FPLKKoin_coreKoinApplication *)doInitKoinEnableNetworkLogs:(BOOL)enableNetworkLogs appDeclaration:(void (^)(FPLKKoin_coreKoinApplication *))appDeclaration __attribute__((swift_name("doInitKoin(enableNetworkLogs:appDeclaration:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("__SkieSuspendWrappersKt")))
@interface FPLK__SkieSuspendWrappersKt : FPLKBase
+ (void)Skie_Suspend__0__hasNextDispatchReceiver:(FPLKSkieColdFlowIterator<id> *)dispatchReceiver suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__0__hasNext(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__10__insertTeamListDispatchReceiver:(id<FPLKFantasyPremierLeagueDao>)dispatchReceiver teamList:(NSArray<FPLKTeam *> *)teamList suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__10__insertTeamList(dispatchReceiver:teamList:suspendHandler:)")));
+ (void)Skie_Suspend__11__refreshDispatchReceiver:(FPLKRoom_runtimeInvalidationTracker *)dispatchReceiver tables:(FPLKKotlinArray<NSString *> *)tables suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__11__refresh(dispatchReceiver:tables:suspendHandler:)")));
+ (void)Skie_Suspend__12__joinDispatchReceiver:(id<FPLKKotlinx_coroutines_coreJob>)dispatchReceiver suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__12__join(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__13__executeDispatchReceiver:(FPLKKtor_utilsPipeline<id, id> *)dispatchReceiver context:(id)context subject:(id)subject suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__13__execute(dispatchReceiver:context:subject:suspendHandler:)")));
+ (void)Skie_Suspend__14__invokeDispatchReceiver:(id<FPLKKotlinSuspendFunction2>)dispatchReceiver p1:(id _Nullable)p1 p2:(id _Nullable)p2 suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__14__invoke(dispatchReceiver:p1:p2:suspendHandler:)")));
+ (void)Skie_Suspend__15__bodyDispatchReceiver:(FPLKKtor_client_coreHttpClientCall *)dispatchReceiver info:(FPLKKtor_utilsTypeInfo *)info suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__15__body(dispatchReceiver:info:suspendHandler:)")));
+ (void)Skie_Suspend__16__bodyNullableDispatchReceiver:(FPLKKtor_client_coreHttpClientCall *)dispatchReceiver info:(FPLKKtor_utilsTypeInfo *)info suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__16__bodyNullable(dispatchReceiver:info:suspendHandler:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
+ (void)Skie_Suspend__17__getResponseContentDispatchReceiver:(FPLKKtor_client_coreHttpClientCall *)dispatchReceiver suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__17__getResponseContent(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__18__awaitContentDispatchReceiver:(id<FPLKKtor_ioByteReadChannel>)dispatchReceiver min:(int32_t)min suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__18__awaitContent(dispatchReceiver:min:suspendHandler:)")));
+ (void)Skie_Suspend__19__executeDispatchReceiver:(id<FPLKKtor_client_coreHttpClientEngine>)dispatchReceiver data:(FPLKKtor_client_coreHttpRequestData *)data suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__19__execute(dispatchReceiver:data:suspendHandler:)")));
+ (void)Skie_Suspend__1__collectDispatchReceiver:(id<FPLKKotlinx_coroutines_coreFlow>)dispatchReceiver collector:(id<FPLKKotlinx_coroutines_coreFlowCollector>)collector suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__1__collect(dispatchReceiver:collector:suspendHandler:)")));
+ (void)Skie_Suspend__20__getFixtureDispatchReceiver:(FPLKFixturesViewModel *)dispatchReceiver id:(int32_t)id suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__20__getFixture(dispatchReceiver:id:suspendHandler:)")));
+ (void)Skie_Suspend__21__getEventStatusDispatchReceiver:(FPLKLeaguesViewModel *)dispatchReceiver suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__21__getEventStatus(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__22__getPlayerDispatchReceiver:(FPLKPlayerDetailsViewModel *)dispatchReceiver id:(int32_t)id suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__22__getPlayer(dispatchReceiver:id:suspendHandler:)")));
+ (void)Skie_Suspend__23__getPlayerHistoryDispatchReceiver:(FPLKPlayerDetailsViewModel *)dispatchReceiver playerId:(int32_t)playerId suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__23__getPlayerHistory(dispatchReceiver:playerId:suspendHandler:)")));
+ (void)Skie_Suspend__24__fetchBootstrapStaticInfoDispatchReceiver:(FPLKFantasyPremierLeagueApi *)dispatchReceiver suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__24__fetchBootstrapStaticInfo(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__25__fetchEventStatusDispatchReceiver:(FPLKFantasyPremierLeagueApi *)dispatchReceiver suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__25__fetchEventStatus(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__26__fetchFixturesDispatchReceiver:(FPLKFantasyPremierLeagueApi *)dispatchReceiver suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__26__fetchFixtures(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__27__fetchGameWeekLiveDataDispatchReceiver:(FPLKFantasyPremierLeagueApi *)dispatchReceiver eventId:(int32_t)eventId suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__27__fetchGameWeekLiveData(dispatchReceiver:eventId:suspendHandler:)")));
+ (void)Skie_Suspend__28__fetchLeagueStandingsDispatchReceiver:(FPLKFantasyPremierLeagueApi *)dispatchReceiver leagueId:(int32_t)leagueId suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__28__fetchLeagueStandings(dispatchReceiver:leagueId:suspendHandler:)")));
+ (void)Skie_Suspend__29__fetchPlayerDataDispatchReceiver:(FPLKFantasyPremierLeagueApi *)dispatchReceiver playerId:(int32_t)playerId suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__29__fetchPlayerData(dispatchReceiver:playerId:suspendHandler:)")));
+ (void)Skie_Suspend__2__emitDispatchReceiver:(id<FPLKKotlinx_coroutines_coreFlowCollector>)dispatchReceiver value:(id _Nullable)value suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__2__emit(dispatchReceiver:value:suspendHandler:)")));
+ (void)Skie_Suspend__30__fetchUpcomingFixturesDispatchReceiver:(FPLKFantasyPremierLeagueApi *)dispatchReceiver suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__30__fetchUpcomingFixtures(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__31__getEventStatusDispatchReceiver:(FPLKFantasyPremierLeagueRepository *)dispatchReceiver suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__31__getEventStatus(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__32__getFixtureDispatchReceiver:(FPLKFantasyPremierLeagueRepository *)dispatchReceiver id:(int32_t)id suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__32__getFixture(dispatchReceiver:id:suspendHandler:)")));
+ (void)Skie_Suspend__33__getLeagueStandingsDispatchReceiver:(FPLKFantasyPremierLeagueRepository *)dispatchReceiver leagueId:(int32_t)leagueId suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__33__getLeagueStandings(dispatchReceiver:leagueId:suspendHandler:)")));
+ (void)Skie_Suspend__34__getPlayerDispatchReceiver:(FPLKFantasyPremierLeagueRepository *)dispatchReceiver id:(int32_t)id suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__34__getPlayer(dispatchReceiver:id:suspendHandler:)")));
+ (void)Skie_Suspend__35__getPlayerHistoryDataDispatchReceiver:(FPLKFantasyPremierLeagueRepository *)dispatchReceiver playerId:(int32_t)playerId suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__35__getPlayerHistoryData(dispatchReceiver:playerId:suspendHandler:)")));
+ (void)Skie_Suspend__36__updateLeaguesDispatchReceiver:(FPLKFantasyPremierLeagueRepository *)dispatchReceiver leagues:(NSArray<NSString *> *)leagues suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__36__updateLeagues(dispatchReceiver:leagues:suspendHandler:)")));
+ (void)Skie_Suspend__37__upgradeDispatchReceiver:(FPLKKtor_httpOutgoingContentProtocolUpgrade *)dispatchReceiver input:(id<FPLKKtor_ioByteReadChannel>)input output:(id<FPLKKtor_ioByteWriteChannel>)output engineContext:(id<FPLKKotlinCoroutineContext>)engineContext userContext:(id<FPLKKotlinCoroutineContext>)userContext suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__37__upgrade(dispatchReceiver:input:output:engineContext:userContext:suspendHandler:)")));
+ (void)Skie_Suspend__38__flushDispatchReceiver:(id<FPLKKtor_ioByteWriteChannel>)dispatchReceiver suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__38__flush(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__39__flushAndCloseDispatchReceiver:(id<FPLKKtor_ioByteWriteChannel>)dispatchReceiver suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__39__flushAndClose(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__3__updateDataDispatchReceiver:(id<FPLKDatastore_coreDataStore>)dispatchReceiver transform:(id<FPLKKotlinSuspendFunction1>)transform suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__3__updateData(dispatchReceiver:transform:suspendHandler:)")));
+ (void)Skie_Suspend__40__writeToDispatchReceiver:(FPLKKtor_httpOutgoingContentWriteChannelContent *)dispatchReceiver channel:(id<FPLKKtor_ioByteWriteChannel>)channel suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__40__writeTo(dispatchReceiver:channel:suspendHandler:)")));
+ (void)Skie_Suspend__4__invokeDispatchReceiver:(id<FPLKKotlinSuspendFunction1>)dispatchReceiver p1:(id _Nullable)p1 suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__4__invoke(dispatchReceiver:p1:suspendHandler:)")));
+ (void)Skie_Suspend__5__updatesLeaguesSettingDispatchReceiver:(FPLKAppSettings *)dispatchReceiver leagues:(NSArray<NSString *> *)leagues suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__5__updatesLeaguesSetting(dispatchReceiver:leagues:suspendHandler:)")));
+ (void)Skie_Suspend__6__getFixtureDispatchReceiver:(id<FPLKFantasyPremierLeagueDao>)dispatchReceiver id:(int32_t)id suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__6__getFixture(dispatchReceiver:id:suspendHandler:)")));
+ (void)Skie_Suspend__7__getPlayerDispatchReceiver:(id<FPLKFantasyPremierLeagueDao>)dispatchReceiver id:(int32_t)id suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__7__getPlayer(dispatchReceiver:id:suspendHandler:)")));
+ (void)Skie_Suspend__8__insertFixtureListDispatchReceiver:(id<FPLKFantasyPremierLeagueDao>)dispatchReceiver fixtureList:(NSArray<FPLKGameFixture *> *)fixtureList suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__8__insertFixtureList(dispatchReceiver:fixtureList:suspendHandler:)")));
+ (void)Skie_Suspend__9__insertPlayerListDispatchReceiver:(id<FPLKFantasyPremierLeagueDao>)dispatchReceiver playerList:(NSArray<FPLKPlayer *> *)playerList suspendHandler:(FPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__9__insertPlayerList(dispatchReceiver:playerList:suspendHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("__SkieTypeExportsKt")))
@interface FPLK__SkieTypeExportsKt : FPLKBase
+ (void)skieTypeExports_0P0:(FPLKKtor_httpOutgoingContentByteArrayContent *)p0 p1:(FPLKKtor_httpOutgoingContentContentWrapper *)p1 p2:(FPLKKtor_httpOutgoingContentNoContent *)p2 p3:(FPLKKtor_httpOutgoingContentProtocolUpgrade *)p3 p4:(FPLKKtor_httpOutgoingContentReadChannelContent *)p4 p5:(FPLKKtor_httpOutgoingContentWriteChannelContent *)p5 p6:(id<FPLKKotlinx_coroutines_coreSelectClause1>)p6 p7:(id<FPLKKotlinx_coroutines_coreSelectClause2>)p7 p8:(id<FPLKKotlinx_datetimeDateTimeFormatBuilderWithDateTimeComponents>)p8 p9:(id<FPLKKotlinx_datetimeDateTimeFormatBuilderWithUtcOffset>)p9 p10:(FPLKKotlinx_serialization_corePolymorphicKind *)p10 p11:(FPLKKotlinx_serialization_corePolymorphicKindOPEN *)p11 p12:(FPLKKotlinx_serialization_corePolymorphicKindSEALED *)p12 p13:(FPLKKotlinx_serialization_corePrimitiveKind *)p13 p14:(FPLKKotlinx_serialization_corePrimitiveKindBOOLEAN *)p14 p15:(FPLKKotlinx_serialization_corePrimitiveKindBYTE *)p15 p16:(FPLKKotlinx_serialization_corePrimitiveKindCHAR *)p16 p17:(FPLKKotlinx_serialization_corePrimitiveKindDOUBLE *)p17 p18:(FPLKKotlinx_serialization_corePrimitiveKindFLOAT *)p18 p19:(FPLKKotlinx_serialization_corePrimitiveKindINT *)p19 p20:(FPLKKotlinx_serialization_corePrimitiveKindLONG *)p20 p21:(FPLKKotlinx_serialization_corePrimitiveKindSHORT *)p21 p22:(FPLKKotlinx_serialization_corePrimitiveKindSTRING *)p22 p23:(FPLKKotlinx_serialization_coreSerialKindCONTEXTUAL *)p23 p24:(FPLKKotlinx_serialization_coreSerialKindENUM *)p24 p25:(FPLKKotlinx_serialization_coreStructureKind *)p25 p26:(FPLKKotlinx_serialization_coreStructureKindCLASS *)p26 p27:(FPLKKotlinx_serialization_coreStructureKindLIST *)p27 p28:(FPLKKotlinx_serialization_coreStructureKindMAP *)p28 p29:(FPLKKotlinx_serialization_coreStructureKindOBJECT *)p29 p30:(FPLKKotlinx_serialization_jsonJsonNull *)p30 p31:(FPLKKotlinx_serialization_jsonJsonPrimitive *)p31 __attribute__((swift_name("skieTypeExports_0(p0:p1:p2:p3:p4:p5:p6:p7:p8:p9:p10:p11:p12:p13:p14:p15:p16:p17:p18:p19:p20:p21:p22:p23:p24:p25:p26:p27:p28:p29:p30:p31:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActualKt")))
@interface FPLKActualKt : FPLKBase
+ (FPLKAppDatabase *)createRoomDatabase __attribute__((swift_name("createRoomDatabase()")));
+ (id<FPLKDatastore_coreDataStore>)dataStore __attribute__((swift_name("dataStore()")));
+ (FPLKKoin_coreModule *)platformModule __attribute__((swift_name("platformModule()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.0")
*/
__attribute__((swift_name("KotlinAutoCloseable")))
@protocol FPLKKotlinAutoCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface FPLKKotlinArray<T> : FPLKBase
@property (readonly) int32_t size __attribute__((swift_name("size")));
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(FPLKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<FPLKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol FPLKKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<FPLKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol FPLKKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol FPLKKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol FPLKKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol FPLKKotlinKClass <FPLKKotlinKDeclarationContainer, FPLKKotlinKAnnotatedElement, FPLKKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface FPLKKotlinThrowable : FPLKBase
@property (readonly) FPLKKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(FPLKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FPLKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (FPLKKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface FPLKKotlinException : FPLKKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(FPLKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FPLKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface FPLKKotlinRuntimeException : FPLKKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(FPLKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FPLKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface FPLKKotlinIllegalStateException : FPLKKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(FPLKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FPLKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface FPLKKotlinCancellationException : FPLKKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(FPLKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FPLKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol FPLKKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Datastore_coreDataStore")))
@protocol FPLKDatastore_coreDataStore
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateDataTransform:(id<FPLKKotlinSuspendFunction1>)transform completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("updateData(transform:completionHandler:)")));
@property (readonly) id<FPLKKotlinx_coroutines_coreFlow> data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Datastore_preferences_corePreferencesKey")))
@interface FPLKDatastore_preferences_corePreferencesKey<T> : FPLKBase
@property (readonly) NSString *name __attribute__((swift_name("name")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (FPLKDatastore_preferences_corePreferencesPair<T> *)toValue:(T _Nullable)value __attribute__((swift_name("to(value:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol FPLKKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/InstantIso8601Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant")))
@interface FPLKKotlinx_datetimeInstant : FPLKBase <FPLKKotlinComparable>
@property (class, readonly, getter=companion) FPLKKotlinx_datetimeInstantCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int64_t epochSeconds __attribute__((swift_name("epochSeconds")));
@property (readonly) int32_t nanosecondsOfSecond __attribute__((swift_name("nanosecondsOfSecond")));
- (int32_t)compareToOther:(FPLKKotlinx_datetimeInstant *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (FPLKKotlinx_datetimeInstant *)minusDuration:(int64_t)duration __attribute__((swift_name("minus(duration:)")));
- (int64_t)minusOther:(FPLKKotlinx_datetimeInstant *)other __attribute__((swift_name("minus(other:)")));
- (FPLKKotlinx_datetimeInstant *)plusDuration:(int64_t)duration __attribute__((swift_name("plus(duration:)")));
- (int64_t)toEpochMilliseconds __attribute__((swift_name("toEpochMilliseconds()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface FPLKKoin_coreKoin : FPLKBase
@property (readonly) FPLKKoin_coreExtensionManager *extensionManager __attribute__((swift_name("extensionManager")));
@property (readonly) FPLKKoin_coreInstanceRegistry *instanceRegistry __attribute__((swift_name("instanceRegistry")));
@property (readonly) FPLKKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) FPLKKoin_corePropertyRegistry *propertyRegistry __attribute__((swift_name("propertyRegistry")));
@property (readonly) FPLKKoin_coreScopeRegistry *scopeRegistry __attribute__((swift_name("scopeRegistry")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (FPLKKoin_coreScope *)createScopeT:(id<FPLKKoin_coreKoinScopeComponent>)t __attribute__((swift_name("createScope(t:)")));
- (FPLKKoin_coreScope *)createScopeScopeId:(NSString *)scopeId __attribute__((swift_name("createScope(scopeId:)")));
- (FPLKKoin_coreScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:source:)")));
- (FPLKKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<FPLKKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<FPLKKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<FPLKKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id)getQualifier:(id<FPLKKoin_coreQualifier> _Nullable)qualifier parameters:(FPLKKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<FPLKKotlinKClass>)clazz qualifier:(id<FPLKKoin_coreQualifier> _Nullable)qualifier parameters:(FPLKKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (FPLKKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (FPLKKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<FPLKKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:source:)")));
- (id _Nullable)getOrNullQualifier:(id<FPLKKoin_coreQualifier> _Nullable)qualifier parameters:(FPLKKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<FPLKKotlinKClass>)clazz qualifier:(id<FPLKKoin_coreQualifier> _Nullable)qualifier parameters:(FPLKKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (FPLKKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (FPLKKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<FPLKKotlinLazy>)injectQualifier:(id<FPLKKoin_coreQualifier> _Nullable)qualifier mode:(FPLKKotlinLazyThreadSafetyMode *)mode parameters:(FPLKKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<FPLKKotlinLazy>)injectOrNullQualifier:(id<FPLKKoin_coreQualifier> _Nullable)qualifier mode:(FPLKKotlinLazyThreadSafetyMode *)mode parameters:(FPLKKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)loadModulesModules:(NSArray<FPLKKoin_coreModule *> *)modules allowOverride:(BOOL)allowOverride createEagerInstances:(BOOL)createEagerInstances __attribute__((swift_name("loadModules(modules:allowOverride:createEagerInstances:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (void)setupLoggerLogger:(FPLKKoin_coreLogger *)logger __attribute__((swift_name("setupLogger(logger:)")));
- (void)unloadModulesModules:(NSArray<FPLKKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol FPLKKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface FPLKKtor_client_coreHttpClient : FPLKBase <FPLKKotlinx_coroutines_coreCoroutineScope, FPLKKtor_ioCloseable>
@property (readonly) id<FPLKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<FPLKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<FPLKKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) FPLKKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) FPLKKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) FPLKKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) FPLKKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) FPLKKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) FPLKKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
- (instancetype)initWithEngine:(id<FPLKKtor_client_coreHttpClientEngine>)engine userConfig:(FPLKKtor_client_coreHttpClientConfig<FPLKKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (FPLKKtor_client_coreHttpClient *)configBlock:(void (^)(FPLKKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<FPLKKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Room_runtimeMigration")))
@interface FPLKRoom_runtimeMigration : FPLKBase
@property (readonly) int32_t endVersion __attribute__((swift_name("endVersion")));
@property (readonly) int32_t startVersion __attribute__((swift_name("startVersion")));
- (instancetype)initWithStartVersion:(int32_t)startVersion endVersion:(int32_t)endVersion __attribute__((swift_name("init(startVersion:endVersion:)"))) __attribute__((objc_designated_initializer));
- (void)migrateConnection:(id<FPLKSqliteSQLiteConnection>)connection __attribute__((swift_name("migrate(connection:)")));
@end

__attribute__((swift_name("Room_runtimeAutoMigrationSpec")))
@protocol FPLKRoom_runtimeAutoMigrationSpec
@required
- (void)onPostMigrateConnection:(id<FPLKSqliteSQLiteConnection>)connection __attribute__((swift_name("onPostMigrate(connection:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Room_runtimeInvalidationTracker")))
@interface FPLKRoom_runtimeInvalidationTracker : FPLKBase

/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP_PREFIX])
*/
- (instancetype)initWithDatabase:(FPLKRoom_runtimeRoomDatabase *)database shadowTablesMap:(NSDictionary<NSString *, NSString *> *)shadowTablesMap viewTables:(NSDictionary<NSString *, NSSet<NSString *> *> *)viewTables tableNames:(FPLKKotlinArray<NSString *> *)tableNames __attribute__((swift_name("init(database:shadowTablesMap:viewTables:tableNames:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (id<FPLKKotlinx_coroutines_coreFlow>)createFlowTables:(FPLKKotlinArray<NSString *> *)tables emitInitialState:(BOOL)emitInitialState __attribute__((swift_name("createFlow(tables:emitInitialState:)")));

/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP])
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)refreshTables:(FPLKKotlinArray<NSString *> *)tables completionHandler:(void (^)(FPLKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("refresh(tables:completionHandler:)")));
- (void)refreshAsync __attribute__((swift_name("refreshAsync()")));
@end

__attribute__((swift_name("Room_runtimeRoomOpenDelegateMarker")))
@protocol FPLKRoom_runtimeRoomOpenDelegateMarker
@required
@end

__attribute__((swift_name("SqliteSQLiteConnection")))
@protocol FPLKSqliteSQLiteConnection
@required
- (void)close __attribute__((swift_name("close()")));
- (id<FPLKSqliteSQLiteStatement>)prepareSql:(NSString *)sql __attribute__((swift_name("prepare(sql:)")));
@end


/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP])
*/
__attribute__((swift_name("Room_runtimeRoomOpenDelegate")))
@interface FPLKRoom_runtimeRoomOpenDelegate : FPLKBase <FPLKRoom_runtimeRoomOpenDelegateMarker>
@property (readonly) NSString *identityHash __attribute__((swift_name("identityHash")));
@property (readonly) NSString *legacyIdentityHash __attribute__((swift_name("legacyIdentityHash")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
- (instancetype)initWithVersion:(int32_t)version identityHash:(NSString *)identityHash legacyIdentityHash:(NSString *)legacyIdentityHash __attribute__((swift_name("init(version:identityHash:legacyIdentityHash:)"))) __attribute__((objc_designated_initializer));
- (void)createAllTablesConnection:(id<FPLKSqliteSQLiteConnection>)connection __attribute__((swift_name("createAllTables(connection:)")));
- (void)dropAllTablesConnection:(id<FPLKSqliteSQLiteConnection>)connection __attribute__((swift_name("dropAllTables(connection:)")));
- (void)onCreateConnection:(id<FPLKSqliteSQLiteConnection>)connection __attribute__((swift_name("onCreate(connection:)")));
- (void)onOpenConnection:(id<FPLKSqliteSQLiteConnection>)connection __attribute__((swift_name("onOpen(connection:)")));
- (void)onPostMigrateConnection:(id<FPLKSqliteSQLiteConnection>)connection __attribute__((swift_name("onPostMigrate(connection:)")));
- (void)onPreMigrateConnection:(id<FPLKSqliteSQLiteConnection>)connection __attribute__((swift_name("onPreMigrate(connection:)")));
- (FPLKRoom_runtimeRoomOpenDelegateValidationResult *)onValidateSchemaConnection:(id<FPLKSqliteSQLiteConnection>)connection __attribute__((swift_name("onValidateSchema(connection:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/LocalDateTimeIso8601Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDateTime")))
@interface FPLKKotlinx_datetimeLocalDateTime : FPLKBase <FPLKKotlinComparable>
@property (class, readonly, getter=companion) FPLKKotlinx_datetimeLocalDateTimeCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) FPLKKotlinx_datetimeLocalDate *date __attribute__((swift_name("date")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) FPLKKotlinx_datetimeDayOfWeek *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hour __attribute__((swift_name("hour")));
@property (readonly) int32_t minute __attribute__((swift_name("minute")));
@property (readonly) FPLKKotlinx_datetimeMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t monthNumber __attribute__((swift_name("monthNumber")));
@property (readonly) int32_t nanosecond __attribute__((swift_name("nanosecond")));
@property (readonly) int32_t second __attribute__((swift_name("second")));
@property (readonly) FPLKKotlinx_datetimeLocalTime *time __attribute__((swift_name("time")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
- (instancetype)initWithDate:(FPLKKotlinx_datetimeLocalDate *)date time:(FPLKKotlinx_datetimeLocalTime *)time __attribute__((swift_name("init(date:time:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithYear:(int32_t)year monthNumber:(int32_t)monthNumber dayOfMonth:(int32_t)dayOfMonth hour:(int32_t)hour minute:(int32_t)minute second:(int32_t)second nanosecond:(int32_t)nanosecond __attribute__((swift_name("init(year:monthNumber:dayOfMonth:hour:minute:second:nanosecond:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithYear:(int32_t)year month:(FPLKKotlinx_datetimeMonth *)month dayOfMonth:(int32_t)dayOfMonth hour:(int32_t)hour minute:(int32_t)minute second:(int32_t)second nanosecond:(int32_t)nanosecond __attribute__((swift_name("init(year:month:dayOfMonth:hour:minute:second:nanosecond:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(FPLKKotlinx_datetimeLocalDateTime *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface FPLKKoin_coreModule : FPLKBase
@property (readonly) FPLKMutableSet<FPLKKoin_coreSingleInstanceFactory<id> *> *eagerInstances __attribute__((swift_name("eagerInstances")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSMutableArray<FPLKKoin_coreModule *> *includedModules __attribute__((swift_name("includedModules")));
@property (readonly) BOOL isLoaded __attribute__((swift_name("isLoaded")));
@property (readonly) FPLKMutableDictionary<NSString *, FPLKKoin_coreInstanceFactory<id> *> *mappings __attribute__((swift_name("mappings")));
- (instancetype)initWith_createdAtStart:(BOOL)_createdAtStart __attribute__((swift_name("init(_createdAtStart:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (FPLKKoin_coreKoinDefinition<id> *)factoryQualifier:(id<FPLKKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(FPLKKoin_coreScope *, FPLKKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)includesModule:(FPLKKotlinArray<FPLKKoin_coreModule *> *)module __attribute__((swift_name("includes(module:)")));
- (void)includesModule_:(id)module __attribute__((swift_name("includes(module_:)")));
- (void)indexPrimaryTypeInstanceFactory:(FPLKKoin_coreInstanceFactory<id> *)instanceFactory __attribute__((swift_name("indexPrimaryType(instanceFactory:)")));
- (void)indexSecondaryTypesInstanceFactory:(FPLKKoin_coreInstanceFactory<id> *)instanceFactory __attribute__((swift_name("indexSecondaryTypes(instanceFactory:)")));
- (NSArray<FPLKKoin_coreModule *> *)plusModules:(NSArray<FPLKKoin_coreModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<FPLKKoin_coreModule *> *)plusModule:(FPLKKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)prepareForCreationAtStartInstanceFactory:(FPLKKoin_coreSingleInstanceFactory<id> *)instanceFactory __attribute__((swift_name("prepareForCreationAtStart(instanceFactory:)")));
- (void)scopeScopeSet:(void (^)(FPLKKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (void)scopeQualifier:(id<FPLKKoin_coreQualifier>)qualifier scopeSet:(void (^)(FPLKKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (FPLKKoin_coreKoinDefinition<id> *)singleQualifier:(id<FPLKKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart definition:(id _Nullable (^)(FPLKKoin_coreScope *, FPLKKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:createdAtStart:definition:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol FPLKKtor_client_coreHttpClientEngine <FPLKKotlinx_coroutines_coreCoroutineScope, FPLKKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(FPLKKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(FPLKKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(FPLKKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) FPLKKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) FPLKKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<FPLKKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol FPLKKotlinx_serialization_coreSerialFormat
@required
@property (readonly) FPLKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol FPLKKotlinx_serialization_coreStringFormat <FPLKKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<FPLKKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<FPLKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface FPLKKotlinx_serialization_jsonJson : FPLKBase <FPLKKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) FPLKKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
@property (readonly) FPLKKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) FPLKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<FPLKKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(FPLKKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringString:(NSString *)string __attribute__((swift_name("decodeFromString(string:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<FPLKKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (FPLKKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<FPLKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<FPLKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (FPLKKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinApplication")))
@interface FPLKKoin_coreKoinApplication : FPLKBase
@property (class, readonly, getter=companion) FPLKKoin_coreKoinApplicationCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) FPLKKoin_coreKoin *koin __attribute__((swift_name("koin")));
- (void)allowOverrideOverride:(BOOL)override __attribute__((swift_name("allowOverride(override:)")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (FPLKKoin_coreKoinApplication *)loggerLogger:(FPLKKoin_coreLogger *)logger __attribute__((swift_name("logger(logger:)")));
- (FPLKKoin_coreKoinApplication *)modulesModules:(FPLKKotlinArray<FPLKKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules:)")));
- (FPLKKoin_coreKoinApplication *)modulesModules_:(NSArray<FPLKKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules_:)")));
- (FPLKKoin_coreKoinApplication *)modulesModules__:(FPLKKoin_coreModule *)modules __attribute__((swift_name("modules(modules__:)")));
- (FPLKKoin_coreKoinApplication *)printLoggerLevel:(FPLKKoin_coreLevel *)level __attribute__((swift_name("printLogger(level:)")));
- (FPLKKoin_coreKoinApplication *)propertiesValues:(NSDictionary<NSString *, id> *)values __attribute__((swift_name("properties(values:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol FPLKKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<FPLKKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<FPLKKotlinCoroutineContextElement> _Nullable)getKey_:(id<FPLKKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key_:)")));
- (id<FPLKKotlinCoroutineContext>)minusKeyKey:(id<FPLKKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<FPLKKotlinCoroutineContext>)plusContext:(id<FPLKKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol FPLKKotlinCoroutineContextElement <FPLKKotlinCoroutineContext>
@required
@property (readonly) id<FPLKKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol FPLKKotlinx_coroutines_coreJob <FPLKKotlinCoroutineContextElement>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<FPLKKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<FPLKKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(FPLKKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (FPLKKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<FPLKKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(FPLKKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<FPLKKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(FPLKKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<FPLKKotlinx_coroutines_coreJob>)plusOther:(id<FPLKKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<FPLKKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<FPLKKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<FPLKKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface FPLKKtor_utilsPipeline<TSubject, TContext> : FPLKBase
@property (readonly) id<FPLKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<FPLKKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
- (instancetype)initWithPhases:(FPLKKotlinArray<FPLKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(FPLKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<FPLKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(FPLKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(FPLKKtor_utilsPipelinePhase *)reference phase:(FPLKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(FPLKKtor_utilsPipelinePhase *)reference phase:(FPLKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(FPLKKtor_utilsPipelinePhase *)phase block:(id<FPLKKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<FPLKKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(FPLKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(FPLKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(FPLKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(FPLKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol FPLKKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol FPLKKotlinSuspendFunction2 <FPLKKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface FPLKKtor_client_coreHttpClientCall : FPLKBase <FPLKKotlinx_coroutines_coreCoroutineScope>
@property (class, readonly, getter=companion) FPLKKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<FPLKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) FPLKKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<FPLKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<FPLKKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property FPLKKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
- (instancetype)initWithClient:(FPLKKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(FPLKKtor_client_coreHttpClient *)client requestData:(FPLKKtor_client_coreHttpRequestData *)requestData responseData:(FPLKKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(FPLKKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(FPLKKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<FPLKKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface FPLKKtor_utilsTypeInfo : FPLKBase
@property (readonly) id<FPLKKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<FPLKKotlinKClass> type __attribute__((swift_name("type")));
- (instancetype)initWithType:(id<FPLKKotlinKClass>)type kotlinType:(id<FPLKKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(id<FPLKKotlinKClass>)type reifiedType:(id<FPLKKotlinKType>)reifiedType kotlinType:(id<FPLKKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use constructor without reifiedType parameter.")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol FPLKKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentMin:(int32_t)min completionHandler:(void (^)(FPLKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(min:completionHandler:)")));
- (void)cancelCause_:(FPLKKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));
@property (readonly) FPLKKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) id<FPLKKotlinx_io_coreSource> readBuffer __attribute__((swift_name("readBuffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface FPLKKtor_client_coreHttpRequestData : FPLKBase
@property (readonly) id<FPLKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) FPLKKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<FPLKKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<FPLKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) FPLKKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) FPLKKtor_httpUrl *url __attribute__((swift_name("url")));
- (instancetype)initWithUrl:(FPLKKtor_httpUrl *)url method:(FPLKKtor_httpHttpMethod *)method headers:(id<FPLKKtor_httpHeaders>)headers body:(FPLKKtor_httpOutgoingContent *)body executionContext:(id<FPLKKotlinx_coroutines_coreJob>)executionContext attributes:(id<FPLKKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<FPLKKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface FPLKKtor_httpOutgoingContent : FPLKBase
@property (readonly) FPLKLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) FPLKKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<FPLKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) FPLKKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
- (id _Nullable)getPropertyKey:(FPLKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(FPLKKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<FPLKKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@end

__attribute__((swift_name("Ktor_httpOutgoingContent.ProtocolUpgrade")))
@interface FPLKKtor_httpOutgoingContentProtocolUpgrade : FPLKKtor_httpOutgoingContent
@property (readonly) FPLKKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)upgradeInput:(id<FPLKKtor_ioByteReadChannel>)input output:(id<FPLKKtor_ioByteWriteChannel>)output engineContext:(id<FPLKKotlinCoroutineContext>)engineContext userContext:(id<FPLKKotlinCoroutineContext>)userContext completionHandler:(void (^)(id<FPLKKotlinx_coroutines_coreJob> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("upgrade(input:output:engineContext:userContext:completionHandler:)")));
@end

__attribute__((swift_name("Ktor_ioByteWriteChannel")))
@protocol FPLKKtor_ioByteWriteChannel
@required
- (void)cancelCause_:(FPLKKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)flushWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("flush(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)flushAndCloseWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("flushAndClose(completionHandler:)")));
@property (readonly) FPLKKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) id<FPLKKotlinx_io_coreSink> writeBuffer __attribute__((swift_name("writeBuffer")));
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol FPLKKotlinSuspendFunction1 <FPLKKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((swift_name("Ktor_httpOutgoingContent.WriteChannelContent")))
@interface FPLKKtor_httpOutgoingContentWriteChannelContent : FPLKKtor_httpOutgoingContent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeToChannel:(id<FPLKKtor_ioByteWriteChannel>)channel completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeTo(channel:completionHandler:)")));
@end

__attribute__((swift_name("Ktor_httpOutgoingContent.ByteArrayContent")))
@interface FPLKKtor_httpOutgoingContentByteArrayContent : FPLKKtor_httpOutgoingContent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (FPLKKotlinByteArray *)bytes __attribute__((swift_name("bytes()")));
@end

__attribute__((swift_name("Ktor_httpOutgoingContent.ContentWrapper")))
@interface FPLKKtor_httpOutgoingContentContentWrapper : FPLKKtor_httpOutgoingContent
@property (readonly) FPLKLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) FPLKKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<FPLKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) FPLKKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
- (instancetype)initWithDelegate:(FPLKKtor_httpOutgoingContent *)delegate __attribute__((swift_name("init(delegate:)"))) __attribute__((objc_designated_initializer));
- (FPLKKtor_httpOutgoingContentContentWrapper *)doCopyDelegate:(FPLKKtor_httpOutgoingContent *)delegate __attribute__((swift_name("doCopy(delegate:)")));
- (FPLKKtor_httpOutgoingContent *)delegate __attribute__((swift_name("delegate()")));
- (id _Nullable)getPropertyKey:(FPLKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(FPLKKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
@end

__attribute__((swift_name("Ktor_httpOutgoingContent.NoContent")))
@interface FPLKKtor_httpOutgoingContentNoContent : FPLKKtor_httpOutgoingContent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Ktor_httpOutgoingContent.ReadChannelContent")))
@interface FPLKKtor_httpOutgoingContentReadChannelContent : FPLKKtor_httpOutgoingContent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<FPLKKtor_ioByteReadChannel>)readFrom __attribute__((swift_name("readFrom()")));
- (id<FPLKKtor_ioByteReadChannel>)readFromRange:(FPLKKotlinLongRange *)range __attribute__((swift_name("readFrom(range:)")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol FPLKKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) FPLKKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<FPLKKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(FPLKKotlinThrowable *, id _Nullable, id<FPLKKotlinCoroutineContext>) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<FPLKKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause1")))
@protocol FPLKKotlinx_coroutines_coreSelectClause1 <FPLKKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause2")))
@protocol FPLKKotlinx_coroutines_coreSelectClause2 <FPLKKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormatBuilder")))
@protocol FPLKKotlinx_datetimeDateTimeFormatBuilder
@required
- (void)charsValue:(NSString *)value __attribute__((swift_name("chars(value:)")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormatBuilderWithDate")))
@protocol FPLKKotlinx_datetimeDateTimeFormatBuilderWithDate <FPLKKotlinx_datetimeDateTimeFormatBuilder>
@required
- (void)dateFormat:(id<FPLKKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("date(format:)")));
- (void)dayOfMonthPadding:(FPLKKotlinx_datetimePadding *)padding __attribute__((swift_name("dayOfMonth(padding:)")));
- (void)dayOfWeekNames:(FPLKKotlinx_datetimeDayOfWeekNames *)names __attribute__((swift_name("dayOfWeek(names:)")));
- (void)monthNameNames:(FPLKKotlinx_datetimeMonthNames *)names __attribute__((swift_name("monthName(names:)")));
- (void)monthNumberPadding:(FPLKKotlinx_datetimePadding *)padding __attribute__((swift_name("monthNumber(padding:)")));
- (void)yearPadding:(FPLKKotlinx_datetimePadding *)padding __attribute__((swift_name("year(padding:)")));
- (void)yearTwoDigitsBaseYear:(int32_t)baseYear __attribute__((swift_name("yearTwoDigits(baseYear:)")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormatBuilderWithTime")))
@protocol FPLKKotlinx_datetimeDateTimeFormatBuilderWithTime <FPLKKotlinx_datetimeDateTimeFormatBuilder>
@required
- (void)amPmHourPadding:(FPLKKotlinx_datetimePadding *)padding __attribute__((swift_name("amPmHour(padding:)")));
- (void)amPmMarkerAm:(NSString *)am pm:(NSString *)pm __attribute__((swift_name("amPmMarker(am:pm:)")));
- (void)hourPadding:(FPLKKotlinx_datetimePadding *)padding __attribute__((swift_name("hour(padding:)")));
- (void)minutePadding:(FPLKKotlinx_datetimePadding *)padding __attribute__((swift_name("minute(padding:)")));
- (void)secondPadding:(FPLKKotlinx_datetimePadding *)padding __attribute__((swift_name("second(padding:)")));
- (void)secondFractionFixedLength:(int32_t)fixedLength __attribute__((swift_name("secondFraction(fixedLength:)")));
- (void)secondFractionMinLength:(int32_t)minLength maxLength:(int32_t)maxLength __attribute__((swift_name("secondFraction(minLength:maxLength:)")));
- (void)timeFormat:(id<FPLKKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("time(format:)")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormatBuilderWithDateTime")))
@protocol FPLKKotlinx_datetimeDateTimeFormatBuilderWithDateTime <FPLKKotlinx_datetimeDateTimeFormatBuilderWithDate, FPLKKotlinx_datetimeDateTimeFormatBuilderWithTime>
@required
- (void)dateTimeFormat:(id<FPLKKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("dateTime(format:)")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormatBuilderWithUtcOffset")))
@protocol FPLKKotlinx_datetimeDateTimeFormatBuilderWithUtcOffset <FPLKKotlinx_datetimeDateTimeFormatBuilder>
@required
- (void)offsetFormat:(id<FPLKKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("offset(format:)")));
- (void)offsetHoursPadding:(FPLKKotlinx_datetimePadding *)padding __attribute__((swift_name("offsetHours(padding:)")));
- (void)offsetMinutesOfHourPadding:(FPLKKotlinx_datetimePadding *)padding __attribute__((swift_name("offsetMinutesOfHour(padding:)")));
- (void)offsetSecondsOfMinutePadding:(FPLKKotlinx_datetimePadding *)padding __attribute__((swift_name("offsetSecondsOfMinute(padding:)")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormatBuilderWithDateTimeComponents")))
@protocol FPLKKotlinx_datetimeDateTimeFormatBuilderWithDateTimeComponents <FPLKKotlinx_datetimeDateTimeFormatBuilderWithDateTime, FPLKKotlinx_datetimeDateTimeFormatBuilderWithUtcOffset>
@required
- (void)dateTimeComponentsFormat:(id<FPLKKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("dateTimeComponents(format:)")));
- (void)timeZoneId __attribute__((swift_name("timeZoneId()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface FPLKKotlinx_serialization_coreSerialKind : FPLKBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_corePolymorphicKind")))
@interface FPLKKotlinx_serialization_corePolymorphicKind : FPLKKotlinx_serialization_coreSerialKind
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePolymorphicKind.OPEN")))
@interface FPLKKotlinx_serialization_corePolymorphicKindOPEN : FPLKKotlinx_serialization_corePolymorphicKind
@property (class, readonly, getter=shared) FPLKKotlinx_serialization_corePolymorphicKindOPEN *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oPEN __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePolymorphicKind.SEALED")))
@interface FPLKKotlinx_serialization_corePolymorphicKindSEALED : FPLKKotlinx_serialization_corePolymorphicKind
@property (class, readonly, getter=shared) FPLKKotlinx_serialization_corePolymorphicKindSEALED *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sEALED __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind")))
@interface FPLKKotlinx_serialization_corePrimitiveKind : FPLKKotlinx_serialization_coreSerialKind
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.BOOLEAN")))
@interface FPLKKotlinx_serialization_corePrimitiveKindBOOLEAN : FPLKKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) FPLKKotlinx_serialization_corePrimitiveKindBOOLEAN *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bOOLEAN __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.BYTE")))
@interface FPLKKotlinx_serialization_corePrimitiveKindBYTE : FPLKKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) FPLKKotlinx_serialization_corePrimitiveKindBYTE *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bYTE __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.CHAR")))
@interface FPLKKotlinx_serialization_corePrimitiveKindCHAR : FPLKKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) FPLKKotlinx_serialization_corePrimitiveKindCHAR *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cHAR __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.DOUBLE")))
@interface FPLKKotlinx_serialization_corePrimitiveKindDOUBLE : FPLKKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) FPLKKotlinx_serialization_corePrimitiveKindDOUBLE *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dOUBLE __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.FLOAT")))
@interface FPLKKotlinx_serialization_corePrimitiveKindFLOAT : FPLKKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) FPLKKotlinx_serialization_corePrimitiveKindFLOAT *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fLOAT __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.INT")))
@interface FPLKKotlinx_serialization_corePrimitiveKindINT : FPLKKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) FPLKKotlinx_serialization_corePrimitiveKindINT *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)iNT __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.LONG")))
@interface FPLKKotlinx_serialization_corePrimitiveKindLONG : FPLKKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) FPLKKotlinx_serialization_corePrimitiveKindLONG *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)lONG __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.SHORT")))
@interface FPLKKotlinx_serialization_corePrimitiveKindSHORT : FPLKKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) FPLKKotlinx_serialization_corePrimitiveKindSHORT *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sHORT __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.STRING")))
@interface FPLKKotlinx_serialization_corePrimitiveKindSTRING : FPLKKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) FPLKKotlinx_serialization_corePrimitiveKindSTRING *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sTRING __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind.CONTEXTUAL")))
@interface FPLKKotlinx_serialization_coreSerialKindCONTEXTUAL : FPLKKotlinx_serialization_coreSerialKind
@property (class, readonly, getter=shared) FPLKKotlinx_serialization_coreSerialKindCONTEXTUAL *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cONTEXTUAL __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind.ENUM")))
@interface FPLKKotlinx_serialization_coreSerialKindENUM : FPLKKotlinx_serialization_coreSerialKind
@property (class, readonly, getter=shared) FPLKKotlinx_serialization_coreSerialKindENUM *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eNUM __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind")))
@interface FPLKKotlinx_serialization_coreStructureKind : FPLKKotlinx_serialization_coreSerialKind
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind.CLASS")))
@interface FPLKKotlinx_serialization_coreStructureKindCLASS : FPLKKotlinx_serialization_coreStructureKind
@property (class, readonly, getter=shared) FPLKKotlinx_serialization_coreStructureKindCLASS *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cLASS __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind.LIST")))
@interface FPLKKotlinx_serialization_coreStructureKindLIST : FPLKKotlinx_serialization_coreStructureKind
@property (class, readonly, getter=shared) FPLKKotlinx_serialization_coreStructureKindLIST *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)lIST __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind.MAP")))
@interface FPLKKotlinx_serialization_coreStructureKindMAP : FPLKKotlinx_serialization_coreStructureKind
@property (class, readonly, getter=shared) FPLKKotlinx_serialization_coreStructureKindMAP *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mAP __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind.OBJECT")))
@interface FPLKKotlinx_serialization_coreStructureKindOBJECT : FPLKKotlinx_serialization_coreStructureKind
@property (class, readonly, getter=shared) FPLKKotlinx_serialization_coreStructureKindOBJECT *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oBJECT __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface FPLKKotlinx_serialization_jsonJsonElement : FPLKBase
@property (class, readonly, getter=companion) FPLKKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonPrimitiveSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonPrimitive")))
@interface FPLKKotlinx_serialization_jsonJsonPrimitive : FPLKKotlinx_serialization_jsonJsonElement
@property (class, readonly, getter=companion) FPLKKotlinx_serialization_jsonJsonPrimitiveCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) BOOL isString __attribute__((swift_name("isString")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonNullSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonNull")))
@interface FPLKKotlinx_serialization_jsonJsonNull : FPLKKotlinx_serialization_jsonJsonPrimitive
@property (class, readonly, getter=shared) FPLKKotlinx_serialization_jsonJsonNull *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) BOOL isString __attribute__((swift_name("isString")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)jsonNull __attribute__((swift_name("init()")));
- (id<FPLKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FPLKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FPLKKotlinArray<id<FPLKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol FPLKKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Datastore_preferences_corePreferencesPair")))
@interface FPLKDatastore_preferences_corePreferencesPair<T> : FPLKBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant.Companion")))
@interface FPLKKotlinx_datetimeInstantCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKKotlinx_datetimeInstantCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) FPLKKotlinx_datetimeInstant *DISTANT_FUTURE __attribute__((swift_name("DISTANT_FUTURE")));
@property (readonly) FPLKKotlinx_datetimeInstant *DISTANT_PAST __attribute__((swift_name("DISTANT_PAST")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (FPLKKotlinx_datetimeInstant *)fromEpochMillisecondsEpochMilliseconds:(int64_t)epochMilliseconds __attribute__((swift_name("fromEpochMilliseconds(epochMilliseconds:)")));
- (FPLKKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment:(int32_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment:)")));
- (FPLKKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment_:(int64_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment_:)")));
- (FPLKKotlinx_datetimeInstant *)now __attribute__((swift_name("now()"))) __attribute__((unavailable("Use Clock.System.now() instead")));
- (FPLKKotlinx_datetimeInstant *)parseInput:(id)input format:(id<FPLKKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("parse(input:format:)")));
- (id<FPLKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Koin_coreLockable")))
@interface FPLKKoin_coreLockable : FPLKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface FPLKKoin_coreScope : FPLKKoin_coreLockable
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) FPLKKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) id<FPLKKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property id _Nullable sourceValue __attribute__((swift_name("sourceValue")));
- (instancetype)initWithScopeQualifier:(id<FPLKKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(FPLKKoin_coreKoin *)_koin __attribute__((swift_name("init(scopeQualifier:id:isRoot:_koin:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)close __attribute__((swift_name("close()")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<FPLKKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<FPLKKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (id)getQualifier:(id<FPLKKoin_coreQualifier> _Nullable)qualifier parameters:(FPLKKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<FPLKKotlinKClass>)clazz qualifier:(id<FPLKKoin_coreQualifier> _Nullable)qualifier parameters:(FPLKKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<FPLKKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (FPLKKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (id _Nullable)getOrNullQualifier:(id<FPLKKoin_coreQualifier> _Nullable)qualifier parameters:(FPLKKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<FPLKKotlinKClass>)clazz qualifier:(id<FPLKKoin_coreQualifier> _Nullable)qualifier parameters:(FPLKKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (id _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (FPLKKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (id _Nullable)getSource __attribute__((swift_name("getSource()")));
- (id<FPLKKotlinLazy>)injectQualifier:(id<FPLKKoin_coreQualifier> _Nullable)qualifier mode:(FPLKKotlinLazyThreadSafetyMode *)mode parameters:(FPLKKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<FPLKKotlinLazy>)injectOrNullQualifier:(id<FPLKKoin_coreQualifier> _Nullable)qualifier mode:(FPLKKotlinLazyThreadSafetyMode *)mode parameters:(FPLKKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (BOOL)isNotClosed __attribute__((swift_name("isNotClosed()")));
- (void)linkToScopes:(FPLKKotlinArray<FPLKKoin_coreScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)registerCallbackCallback:(id<FPLKKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(FPLKKotlinArray<FPLKKoin_coreScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@end

__attribute__((swift_name("Koin_coreKoinScopeComponent")))
@protocol FPLKKoin_coreKoinScopeComponent <FPLKKoin_coreKoinComponent>
@required
@property (readonly) FPLKKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((swift_name("Koin_coreQualifier")))
@protocol FPLKKoin_coreQualifier
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Koin_coreParametersHolder")))
@interface FPLKKoin_coreParametersHolder : FPLKBase
@property int32_t index __attribute__((swift_name("index")));
@property (readonly) FPLKBoolean * _Nullable useIndexedValues __attribute__((swift_name("useIndexedValues")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
- (instancetype)initWith_values:(NSMutableArray<id> *)_values useIndexedValues:(FPLKBoolean * _Nullable)useIndexedValues __attribute__((swift_name("init(_values:useIndexedValues:)"))) __attribute__((objc_designated_initializer));
- (FPLKKoin_coreParametersHolder *)addValue:(id)value __attribute__((swift_name("add(value:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)elementAtI:(int32_t)i clazz:(id<FPLKKotlinKClass>)clazz __attribute__((swift_name("elementAt(i:clazz:)")));
- (id)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (id _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (id _Nullable)getOrNullClazz:(id<FPLKKotlinKClass>)clazz __attribute__((swift_name("getOrNull(clazz:)")));
- (FPLKKoin_coreParametersHolder *)insertIndex:(int32_t)index value:(id)value __attribute__((swift_name("insert(index:value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface FPLKKotlinEnum<E> : FPLKBase <FPLKKotlinComparable>
@property (class, readonly, getter=companion) FPLKKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLazyThreadSafetyMode")))
@interface FPLKKotlinLazyThreadSafetyMode : FPLKKotlinEnum<FPLKKotlinLazyThreadSafetyMode *>
@property (class, readonly) FPLKKotlinLazyThreadSafetyMode *synchronized __attribute__((swift_name("synchronized")));
@property (class, readonly) FPLKKotlinLazyThreadSafetyMode *publication __attribute__((swift_name("publication")));
@property (class, readonly) FPLKKotlinLazyThreadSafetyMode *none __attribute__((swift_name("none")));
@property (class, readonly) NSArray<FPLKKotlinLazyThreadSafetyMode *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (FPLKKotlinArray<FPLKKotlinLazyThreadSafetyMode *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("Koin_coreLogger")))
@interface FPLKKoin_coreLogger : FPLKBase
@property FPLKKoin_coreLevel *level __attribute__((swift_name("level")));
- (instancetype)initWithLevel:(FPLKKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)displayLevel:(FPLKKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("display(level:msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(FPLKKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLvl:(FPLKKoin_coreLevel *)lvl msg:(NSString *(^)(void))msg __attribute__((swift_name("log(lvl:msg:)")));
- (void)logLvl:(FPLKKoin_coreLevel *)lvl msg_:(NSString *)msg __attribute__((swift_name("log(lvl:msg_:)")));
- (void)warnMsg:(NSString *)msg __attribute__((swift_name("warn(msg:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreExtensionManager")))
@interface FPLKKoin_coreExtensionManager : FPLKBase
- (instancetype)initWith_koin:(FPLKKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (id<FPLKKoin_coreKoinExtension>)getExtensionId:(NSString *)id __attribute__((swift_name("getExtension(id:)")));
- (id<FPLKKoin_coreKoinExtension> _Nullable)getExtensionOrNullId:(NSString *)id __attribute__((swift_name("getExtensionOrNull(id:)")));
- (void)registerExtensionId:(NSString *)id extension:(id<FPLKKoin_coreKoinExtension>)extension __attribute__((swift_name("registerExtension(id:extension:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceRegistry")))
@interface FPLKKoin_coreInstanceRegistry : FPLKBase
@property (readonly) FPLKKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) NSDictionary<NSString *, FPLKKoin_coreInstanceFactory<id> *> *instances __attribute__((swift_name("instances")));
- (instancetype)initWith_koin:(FPLKKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)saveMappingAllowOverride:(BOOL)allowOverride mapping:(NSString *)mapping factory:(FPLKKoin_coreInstanceFactory<id> *)factory logWarning:(BOOL)logWarning __attribute__((swift_name("saveMapping(allowOverride:mapping:factory:logWarning:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface FPLKKoin_corePropertyRegistry : FPLKBase
- (instancetype)initWith_koin:(FPLKKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface FPLKKoin_coreScopeRegistry : FPLKBase
@property (class, readonly, getter=companion) FPLKKoin_coreScopeRegistryCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) FPLKKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSSet<id<FPLKKoin_coreQualifier>> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
- (instancetype)initWith_koin:(FPLKKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)loadScopesModules:(NSSet<FPLKKoin_coreModule *> *)modules __attribute__((swift_name("loadScopes(modules:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface FPLKKtor_client_coreHttpClientEngineConfig : FPLKBase
@property FPLKKotlinx_coroutines_coreCoroutineDispatcher * _Nullable dispatcher __attribute__((swift_name("dispatcher")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property FPLKKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount"))) __attribute__((unavailable("The [threadsCount] property is deprecated. Consider setting [dispatcher] instead.")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface FPLKKtor_client_coreHttpClientConfig<T> : FPLKBase
@property BOOL developmentMode __attribute__((swift_name("developmentMode"))) __attribute__((deprecated("Development mode is no longer required. The property will be removed in the future.")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (FPLKKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(FPLKKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<FPLKKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(FPLKKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(FPLKKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol FPLKKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol FPLKKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(FPLKKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(FPLKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey__:(FPLKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key__:)")));
- (id _Nullable)getOrNullKey:(FPLKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(FPLKKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(FPLKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(FPLKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(FPLKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<FPLKKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface FPLKKtor_eventsEvents : FPLKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(FPLKKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<FPLKKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(FPLKKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(FPLKKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface FPLKKtor_client_coreHttpReceivePipeline : FPLKKtor_utilsPipeline<FPLKKtor_client_coreHttpResponse *, FPLKKotlinUnit *>
@property (class, readonly, getter=companion) FPLKKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(FPLKKotlinArray<FPLKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(FPLKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<FPLKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface FPLKKtor_client_coreHttpRequestPipeline : FPLKKtor_utilsPipeline<id, FPLKKtor_client_coreHttpRequestBuilder *>
@property (class, readonly, getter=companion) FPLKKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(FPLKKotlinArray<FPLKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(FPLKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<FPLKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface FPLKKtor_client_coreHttpResponsePipeline : FPLKKtor_utilsPipeline<FPLKKtor_client_coreHttpResponseContainer *, FPLKKtor_client_coreHttpClientCall *>
@property (class, readonly, getter=companion) FPLKKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(FPLKKotlinArray<FPLKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(FPLKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<FPLKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface FPLKKtor_client_coreHttpSendPipeline : FPLKKtor_utilsPipeline<id, FPLKKtor_client_coreHttpRequestBuilder *>
@property (class, readonly, getter=companion) FPLKKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(FPLKKotlinArray<FPLKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(FPLKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<FPLKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("SqliteSQLiteStatement")))
@protocol FPLKSqliteSQLiteStatement
@required

/**
 * @param index annotations androidx.annotation.IntRange(from=1.toLong())
*/
- (void)bindBlobIndex:(int32_t)index value:(FPLKKotlinByteArray *)value __attribute__((swift_name("bindBlob(index:value:)")));

/**
 * @param index annotations androidx.annotation.IntRange(from=1.toLong())
*/
- (void)bindBooleanIndex:(int32_t)index value:(BOOL)value __attribute__((swift_name("bindBoolean(index:value:)")));

/**
 * @param index annotations androidx.annotation.IntRange(from=1.toLong())
*/
- (void)bindDoubleIndex:(int32_t)index value:(double)value __attribute__((swift_name("bindDouble(index:value:)")));

/**
 * @param index annotations androidx.annotation.IntRange(from=1.toLong())
*/
- (void)bindFloatIndex:(int32_t)index value:(float)value __attribute__((swift_name("bindFloat(index:value:)")));

/**
 * @param index annotations androidx.annotation.IntRange(from=1.toLong())
*/
- (void)bindIntIndex:(int32_t)index value:(int32_t)value __attribute__((swift_name("bindInt(index:value:)")));

/**
 * @param index annotations androidx.annotation.IntRange(from=1.toLong())
*/
- (void)bindLongIndex:(int32_t)index value:(int64_t)value __attribute__((swift_name("bindLong(index:value:)")));

/**
 * @param index annotations androidx.annotation.IntRange(from=1.toLong())
*/
- (void)bindNullIndex:(int32_t)index __attribute__((swift_name("bindNull(index:)")));

/**
 * @param index annotations androidx.annotation.IntRange(from=1.toLong())
*/
- (void)bindTextIndex:(int32_t)index value:(NSString *)value __attribute__((swift_name("bindText(index:value:)")));
- (void)clearBindings __attribute__((swift_name("clearBindings()")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @param index annotations androidx.annotation.IntRange(from=0.toLong())
*/
- (FPLKKotlinByteArray *)getBlobIndex:(int32_t)index __attribute__((swift_name("getBlob(index:)")));

/**
 * @param index annotations androidx.annotation.IntRange(from=0.toLong())
*/
- (BOOL)getBooleanIndex:(int32_t)index __attribute__((swift_name("getBoolean(index:)")));
- (int32_t)getColumnCount __attribute__((swift_name("getColumnCount()")));

/**
 * @param index annotations androidx.annotation.IntRange(from=0.toLong())
*/
- (NSString *)getColumnNameIndex:(int32_t)index __attribute__((swift_name("getColumnName(index:)")));
- (NSArray<NSString *> *)getColumnNames __attribute__((swift_name("getColumnNames()")));

/**
 * @param index annotations androidx.annotation.IntRange(from=0.toLong())
*/
- (int32_t)getColumnTypeIndex:(int32_t)index __attribute__((swift_name("getColumnType(index:)")));

/**
 * @param index annotations androidx.annotation.IntRange(from=0.toLong())
*/
- (double)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));

/**
 * @param index annotations androidx.annotation.IntRange(from=0.toLong())
*/
- (float)getFloatIndex:(int32_t)index __attribute__((swift_name("getFloat(index:)")));

/**
 * @param index annotations androidx.annotation.IntRange(from=0.toLong())
*/
- (int32_t)getIntIndex:(int32_t)index __attribute__((swift_name("getInt(index:)")));

/**
 * @param index annotations androidx.annotation.IntRange(from=0.toLong())
*/
- (int64_t)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));

/**
 * @param index annotations androidx.annotation.IntRange(from=0.toLong())
*/
- (NSString *)getTextIndex:(int32_t)index __attribute__((swift_name("getText(index:)")));

/**
 * @param index annotations androidx.annotation.IntRange(from=0.toLong())
*/
- (BOOL)isNullIndex:(int32_t)index __attribute__((swift_name("isNull(index:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (BOOL)step __attribute__((swift_name("step()")));
@end


/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP])
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Room_runtimeRoomOpenDelegate.ValidationResult")))
@interface FPLKRoom_runtimeRoomOpenDelegateValidationResult : FPLKBase
@property (readonly) NSString * _Nullable expectedFoundMsg __attribute__((swift_name("expectedFoundMsg")));
@property (readonly) BOOL isValid __attribute__((swift_name("isValid")));
- (instancetype)initWithIsValid:(BOOL)isValid expectedFoundMsg:(NSString * _Nullable)expectedFoundMsg __attribute__((swift_name("init(isValid:expectedFoundMsg:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/LocalDateIso8601Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDate")))
@interface FPLKKotlinx_datetimeLocalDate : FPLKBase <FPLKKotlinComparable>
@property (class, readonly, getter=companion) FPLKKotlinx_datetimeLocalDateCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) FPLKKotlinx_datetimeDayOfWeek *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) FPLKKotlinx_datetimeMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t monthNumber __attribute__((swift_name("monthNumber")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
- (instancetype)initWithYear:(int32_t)year monthNumber:(int32_t)monthNumber dayOfMonth:(int32_t)dayOfMonth __attribute__((swift_name("init(year:monthNumber:dayOfMonth:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithYear:(int32_t)year month:(FPLKKotlinx_datetimeMonth *)month dayOfMonth:(int32_t)dayOfMonth __attribute__((swift_name("init(year:month:dayOfMonth:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(FPLKKotlinx_datetimeLocalDate *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (int32_t)toEpochDays __attribute__((swift_name("toEpochDays()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/LocalTimeIso8601Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalTime")))
@interface FPLKKotlinx_datetimeLocalTime : FPLKBase <FPLKKotlinComparable>
@property (class, readonly, getter=companion) FPLKKotlinx_datetimeLocalTimeCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t hour __attribute__((swift_name("hour")));
@property (readonly) int32_t minute __attribute__((swift_name("minute")));
@property (readonly) int32_t nanosecond __attribute__((swift_name("nanosecond")));
@property (readonly) int32_t second __attribute__((swift_name("second")));
- (instancetype)initWithHour:(int32_t)hour minute:(int32_t)minute second:(int32_t)second nanosecond:(int32_t)nanosecond __attribute__((swift_name("init(hour:minute:second:nanosecond:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(FPLKKotlinx_datetimeLocalTime *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (int32_t)toMillisecondOfDay __attribute__((swift_name("toMillisecondOfDay()")));
- (int64_t)toNanosecondOfDay __attribute__((swift_name("toNanosecondOfDay()")));
- (int32_t)toSecondOfDay __attribute__((swift_name("toSecondOfDay()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeMonth")))
@interface FPLKKotlinx_datetimeMonth : FPLKKotlinEnum<FPLKKotlinx_datetimeMonth *>
@property (class, readonly) FPLKKotlinx_datetimeMonth *january __attribute__((swift_name("january")));
@property (class, readonly) FPLKKotlinx_datetimeMonth *february __attribute__((swift_name("february")));
@property (class, readonly) FPLKKotlinx_datetimeMonth *march __attribute__((swift_name("march")));
@property (class, readonly) FPLKKotlinx_datetimeMonth *april __attribute__((swift_name("april")));
@property (class, readonly) FPLKKotlinx_datetimeMonth *may __attribute__((swift_name("may")));
@property (class, readonly) FPLKKotlinx_datetimeMonth *june __attribute__((swift_name("june")));
@property (class, readonly) FPLKKotlinx_datetimeMonth *july __attribute__((swift_name("july")));
@property (class, readonly) FPLKKotlinx_datetimeMonth *august __attribute__((swift_name("august")));
@property (class, readonly) FPLKKotlinx_datetimeMonth *september __attribute__((swift_name("september")));
@property (class, readonly) FPLKKotlinx_datetimeMonth *october __attribute__((swift_name("october")));
@property (class, readonly) FPLKKotlinx_datetimeMonth *november __attribute__((swift_name("november")));
@property (class, readonly) FPLKKotlinx_datetimeMonth *december __attribute__((swift_name("december")));
@property (class, readonly) NSArray<FPLKKotlinx_datetimeMonth *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (FPLKKotlinArray<FPLKKotlinx_datetimeMonth *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDateTime.Companion")))
@interface FPLKKotlinx_datetimeLocalDateTimeCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKKotlinx_datetimeLocalDateTimeCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<FPLKKotlinx_datetimeDateTimeFormat>)FormatBuilder:(void (^)(id<FPLKKotlinx_datetimeDateTimeFormatBuilderWithDateTime>))builder __attribute__((swift_name("Format(builder:)")));
- (FPLKKotlinx_datetimeLocalDateTime *)parseInput:(id)input format:(id<FPLKKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("parse(input:format:)")));
- (id<FPLKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeDayOfWeek")))
@interface FPLKKotlinx_datetimeDayOfWeek : FPLKKotlinEnum<FPLKKotlinx_datetimeDayOfWeek *>
@property (class, readonly) FPLKKotlinx_datetimeDayOfWeek *monday __attribute__((swift_name("monday")));
@property (class, readonly) FPLKKotlinx_datetimeDayOfWeek *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) FPLKKotlinx_datetimeDayOfWeek *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) FPLKKotlinx_datetimeDayOfWeek *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) FPLKKotlinx_datetimeDayOfWeek *friday __attribute__((swift_name("friday")));
@property (class, readonly) FPLKKotlinx_datetimeDayOfWeek *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) FPLKKotlinx_datetimeDayOfWeek *sunday __attribute__((swift_name("sunday")));
@property (class, readonly) NSArray<FPLKKotlinx_datetimeDayOfWeek *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (FPLKKotlinArray<FPLKKotlinx_datetimeDayOfWeek *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinDefinition")))
@interface FPLKKoin_coreKoinDefinition<R> : FPLKBase
@property (readonly) FPLKKoin_coreInstanceFactory<R> *factory __attribute__((swift_name("factory")));
@property (readonly) FPLKKoin_coreModule *module __attribute__((swift_name("module")));
- (instancetype)initWithModule:(FPLKKoin_coreModule *)module factory:(FPLKKoin_coreInstanceFactory<R> *)factory __attribute__((swift_name("init(module:factory:)"))) __attribute__((objc_designated_initializer));
- (FPLKKoin_coreKoinDefinition<R> *)doCopyModule:(FPLKKoin_coreModule *)module factory:(FPLKKoin_coreInstanceFactory<R> *)factory __attribute__((swift_name("doCopy(module:factory:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Koin_coreInstanceFactory")))
@interface FPLKKoin_coreInstanceFactory<T> : FPLKKoin_coreLockable
@property (class, readonly, getter=companion) FPLKKoin_coreInstanceFactoryCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) FPLKKoin_coreBeanDefinition<T> *beanDefinition __attribute__((swift_name("beanDefinition")));
- (instancetype)initWithBeanDefinition:(FPLKKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (T _Nullable)createContext:(FPLKKoin_coreResolutionContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(FPLKKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(FPLKKoin_coreResolutionContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(FPLKKoin_coreResolutionContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreSingleInstanceFactory")))
@interface FPLKKoin_coreSingleInstanceFactory<T> : FPLKKoin_coreInstanceFactory<T>
- (instancetype)initWithBeanDefinition:(FPLKKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)createContext:(FPLKKoin_coreResolutionContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(FPLKKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(FPLKKoin_coreResolutionContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(FPLKKoin_coreResolutionContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface FPLKKoin_coreScopeDSL : FPLKBase
@property (readonly) FPLKKoin_coreModule *module __attribute__((swift_name("module")));
@property (readonly) id<FPLKKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
- (instancetype)initWithScopeQualifier:(id<FPLKKoin_coreQualifier>)scopeQualifier module:(FPLKKoin_coreModule *)module __attribute__((swift_name("init(scopeQualifier:module:)"))) __attribute__((objc_designated_initializer));
- (FPLKKoin_coreKoinDefinition<id> *)factoryQualifier:(id<FPLKKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(FPLKKoin_coreScope *, FPLKKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (FPLKKoin_coreKoinDefinition<id> *)scopedQualifier:(id<FPLKKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(FPLKKoin_coreScope *, FPLKKoin_coreParametersHolder *))definition __attribute__((swift_name("scoped(qualifier:definition:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface FPLKKtor_client_coreHttpResponseData : FPLKBase
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<FPLKKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<FPLKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) FPLKKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) FPLKKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) FPLKKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) FPLKKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
- (instancetype)initWithStatusCode:(FPLKKtor_httpHttpStatusCode *)statusCode requestTime:(FPLKKtor_utilsGMTDate *)requestTime headers:(id<FPLKKtor_httpHeaders>)headers version:(FPLKKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<FPLKKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface FPLKKotlinAbstractCoroutineContextElement : FPLKBase <FPLKKotlinCoroutineContextElement>
@property (readonly) id<FPLKKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
- (instancetype)initWithKey:(id<FPLKKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol FPLKKotlinContinuationInterceptor <FPLKKotlinCoroutineContextElement>
@required
- (id<FPLKKotlinContinuation>)interceptContinuationContinuation:(id<FPLKKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<FPLKKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface FPLKKotlinx_coroutines_coreCoroutineDispatcher : FPLKKotlinAbstractCoroutineContextElement <FPLKKotlinContinuationInterceptor>
@property (class, readonly, getter=companion) FPLKKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<FPLKKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)dispatchContext:(id<FPLKKotlinCoroutineContext>)context block:(id<FPLKKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)dispatchYieldContext:(id<FPLKKotlinCoroutineContext>)context block:(id<FPLKKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<FPLKKotlinContinuation>)interceptContinuationContinuation:(id<FPLKKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<FPLKKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (FPLKKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism name:(NSString * _Nullable)name __attribute__((swift_name("limitedParallelism(parallelism:name:)")));
- (FPLKKotlinx_coroutines_coreCoroutineDispatcher *)plusOther_:(FPLKKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<FPLKKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol FPLKKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<FPLKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<FPLKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol FPLKKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<FPLKKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<FPLKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface FPLKKotlinx_serialization_coreSerializersModule : FPLKBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<FPLKKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<FPLKKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<FPLKKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<FPLKKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<FPLKKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<FPLKKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<FPLKKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<FPLKKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface FPLKKotlinx_serialization_jsonJsonDefault : FPLKKotlinx_serialization_jsonJson
@property (class, readonly, getter=shared) FPLKKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface FPLKKotlinx_serialization_jsonJsonConfiguration : FPLKBase
@property (readonly) BOOL allowComments __attribute__((swift_name("allowComments")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));
@property (readonly) BOOL allowTrailingComma __attribute__((swift_name("allowTrailingComma")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));
@property FPLKKotlinx_serialization_jsonClassDiscriminatorMode *classDiscriminatorMode __attribute__((swift_name("classDiscriminatorMode")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));
@property (readonly) BOOL decodeEnumsCaseInsensitive __attribute__((swift_name("decodeEnumsCaseInsensitive")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));
@property (readonly) id<FPLKKotlinx_serialization_jsonJsonNamingStrategy> _Nullable namingStrategy __attribute__((swift_name("namingStrategy")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinApplication.Companion")))
@interface FPLKKoin_coreKoinApplicationCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKKoin_coreKoinApplicationCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (FPLKKoin_coreKoinApplication *)doInit __attribute__((swift_name("doInit()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface FPLKKoin_coreLevel : FPLKKotlinEnum<FPLKKoin_coreLevel *>
@property (class, readonly) FPLKKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) FPLKKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) FPLKKoin_coreLevel *warning __attribute__((swift_name("warning")));
@property (class, readonly) FPLKKoin_coreLevel *error __attribute__((swift_name("error")));
@property (class, readonly) FPLKKoin_coreLevel *none __attribute__((swift_name("none")));
@property (class, readonly) NSArray<FPLKKoin_coreLevel *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (FPLKKotlinArray<FPLKKoin_coreLevel *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol FPLKKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol FPLKKotlinx_coroutines_coreChildHandle <FPLKKotlinx_coroutines_coreDisposableHandle>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (BOOL)childCancelledCause:(FPLKKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
@property (readonly) id<FPLKKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol FPLKKotlinx_coroutines_coreChildJob <FPLKKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)parentCancelledParentJob:(id<FPLKKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol FPLKKotlinSequence
@required
- (id<FPLKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol FPLKKotlinx_coroutines_coreSelectClause0 <FPLKKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol FPLKKotlinCoroutineContextKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface FPLKKtor_utilsPipelinePhase : FPLKBase
@property (readonly) NSString *name __attribute__((swift_name("name")));
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface FPLKKtor_client_coreHttpClientCallCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol FPLKKtor_httpHttpMessage
@required
@property (readonly) id<FPLKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol FPLKKtor_client_coreHttpRequest <FPLKKtor_httpHttpMessage, FPLKKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<FPLKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) FPLKKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) FPLKKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) FPLKKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) FPLKKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface FPLKKtor_client_coreHttpResponse : FPLKBase <FPLKKtor_httpHttpMessage, FPLKKotlinx_coroutines_coreCoroutineScope>
@property (readonly) FPLKKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<FPLKKtor_ioByteReadChannel> rawContent __attribute__((swift_name("rawContent")));
@property (readonly) FPLKKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) FPLKKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) FPLKKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) FPLKKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("KotlinKType")))
@protocol FPLKKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<FPLKKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<FPLKKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSource")))
@protocol FPLKKotlinx_io_coreRawSource <FPLKKotlinAutoCloseable>
@required
- (int64_t)readAtMostToSink:(FPLKKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSource")))
@protocol FPLKKotlinx_io_coreSource <FPLKKotlinx_io_coreRawSource>
@required
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (id<FPLKKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int32_t)readAtMostToSink:(FPLKKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<FPLKKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (int64_t)transferToSink:(id<FPLKKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) FPLKKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface FPLKKtor_httpUrl : FPLKBase
@property (class, readonly, getter=companion) FPLKKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<FPLKKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments"))) __attribute__((deprecated("\n        `pathSegments` is deprecated.\n\n        This property will contain an empty path segment at the beginning for URLs with a hostname,\n        and an empty path segment at the end for the URLs with a trailing slash. If you need to keep this behaviour please\n        use [rawSegments]. If you only need to access the meaningful parts of the path, consider using [segments] instead.\n             \n        Please decide if you need [rawSegments] or [segments] explicitly.\n        ")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) FPLKKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) FPLKKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property (readonly) NSArray<NSString *> *rawSegments __attribute__((swift_name("rawSegments")));
@property (readonly) NSArray<NSString *> *segments __attribute__((swift_name("segments")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface FPLKKtor_httpHttpMethod : FPLKBase
@property (class, readonly, getter=companion) FPLKKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (FPLKKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol FPLKKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<FPLKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol FPLKKtor_httpHeaders <FPLKKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface FPLKKtor_utilsAttributeKey<T> : FPLKBase
@property (readonly) NSString *name __attribute__((swift_name("name")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (instancetype)initWithName:(NSString *)name type:(FPLKKtor_utilsTypeInfo *)type __attribute__((swift_name("init(name:type:)"))) __attribute__((objc_designated_initializer));
- (FPLKKtor_utilsAttributeKey<T> *)doCopyName:(NSString *)name type:(FPLKKtor_utilsTypeInfo *)type __attribute__((swift_name("doCopy(name:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface FPLKKtor_httpHeaderValueWithParameters : FPLKBase
@property (class, readonly, getter=companion) FPLKKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<FPLKKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<FPLKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface FPLKKtor_httpContentType : FPLKKtor_httpHeaderValueWithParameters
@property (class, readonly, getter=companion) FPLKKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<FPLKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<FPLKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(FPLKKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (FPLKKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (FPLKKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface FPLKKtor_httpHttpStatusCode : FPLKBase <FPLKKotlinComparable>
@property (class, readonly, getter=companion) FPLKKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(FPLKKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (FPLKKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (FPLKKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSink")))
@protocol FPLKKotlinx_io_coreRawSink <FPLKKotlinAutoCloseable>
@required
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeSource:(FPLKKotlinx_io_coreBuffer *)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSink")))
@protocol FPLKKotlinx_io_coreSink <FPLKKotlinx_io_coreRawSink>
@required
- (void)emit __attribute__((swift_name("emit()")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (int64_t)transferFromSource:(id<FPLKKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (void)writeSource:(id<FPLKKotlinx_io_coreRawSource>)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (void)writeSource:(FPLKKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) FPLKKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface FPLKKotlinByteArray : FPLKBase
@property (readonly) int32_t size __attribute__((swift_name("size")));
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(FPLKByte *(^)(FPLKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (FPLKKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@end

__attribute__((swift_name("KotlinIterable")))
@protocol FPLKKotlinIterable
@required
- (id<FPLKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("KotlinLongProgression")))
@interface FPLKKotlinLongProgression : FPLKBase <FPLKKotlinIterable>
@property (class, readonly, getter=companion) FPLKKotlinLongProgressionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int64_t first __attribute__((swift_name("first")));
@property (readonly) int64_t last __attribute__((swift_name("last")));
@property (readonly, getter=step_) int64_t step __attribute__((swift_name("step")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (FPLKKotlinLongIterator *)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("KotlinClosedRange")))
@protocol FPLKKotlinClosedRange
@required
- (BOOL)containsValue:(id)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
@property (readonly) id endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly, getter=start_) id start __attribute__((swift_name("start")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.9")
*/
__attribute__((swift_name("KotlinOpenEndRange")))
@protocol FPLKKotlinOpenEndRange
@required
- (BOOL)containsValue_:(id)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
@property (readonly) id endExclusive __attribute__((swift_name("endExclusive")));
@property (readonly, getter=start_) id start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongRange")))
@interface FPLKKotlinLongRange : FPLKKotlinLongProgression <FPLKKotlinClosedRange, FPLKKotlinOpenEndRange>
@property (class, readonly, getter=companion) FPLKKotlinLongRangeCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) FPLKLong *endExclusive __attribute__((swift_name("endExclusive"))) __attribute__((deprecated("Can throw an exception when it's impossible to represent the value with Long type, for example, when the range includes MAX_VALUE. It's recommended to use 'endInclusive' property that doesn't throw.")));
@property (readonly) FPLKLong *endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly, getter=start_) FPLKLong *start __attribute__((swift_name("start")));
- (instancetype)initWithStart:(int64_t)start endInclusive:(int64_t)endInclusive __attribute__((swift_name("init(start:endInclusive:)"))) __attribute__((objc_designated_initializer));
- (BOOL)containsValue:(FPLKLong *)value __attribute__((swift_name("contains(value:)")));
- (BOOL)containsValue_:(FPLKLong *)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.9")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface FPLKKotlinUnit : FPLKBase
@property (class, readonly, getter=shared) FPLKKotlinUnit *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol FPLKKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<FPLKKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<FPLKKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormat")))
@protocol FPLKKotlinx_datetimeDateTimeFormat
@required
- (NSString *)formatValue:(id _Nullable)value __attribute__((swift_name("format(value:)")));
- (id<FPLKKotlinAppendable>)formatToAppendable:(id<FPLKKotlinAppendable>)appendable value:(id _Nullable)value __attribute__((swift_name("formatTo(appendable:value:)")));
- (id _Nullable)parseInput:(id)input __attribute__((swift_name("parse(input:)")));
- (id _Nullable)parseOrNullInput:(id)input __attribute__((swift_name("parseOrNull(input:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimePadding")))
@interface FPLKKotlinx_datetimePadding : FPLKKotlinEnum<FPLKKotlinx_datetimePadding *>
@property (class, readonly) FPLKKotlinx_datetimePadding *none __attribute__((swift_name("none")));
@property (class, readonly) FPLKKotlinx_datetimePadding *zero __attribute__((swift_name("zero")));
@property (class, readonly) FPLKKotlinx_datetimePadding *space __attribute__((swift_name("space")));
@property (class, readonly) NSArray<FPLKKotlinx_datetimePadding *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (FPLKKotlinArray<FPLKKotlinx_datetimePadding *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeDayOfWeekNames")))
@interface FPLKKotlinx_datetimeDayOfWeekNames : FPLKBase
@property (class, readonly, getter=companion) FPLKKotlinx_datetimeDayOfWeekNamesCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<NSString *> *names __attribute__((swift_name("names")));
- (instancetype)initWithNames:(NSArray<NSString *> *)names __attribute__((swift_name("init(names:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMonday:(NSString *)monday tuesday:(NSString *)tuesday wednesday:(NSString *)wednesday thursday:(NSString *)thursday friday:(NSString *)friday saturday:(NSString *)saturday sunday:(NSString *)sunday __attribute__((swift_name("init(monday:tuesday:wednesday:thursday:friday:saturday:sunday:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeMonthNames")))
@interface FPLKKotlinx_datetimeMonthNames : FPLKBase
@property (class, readonly, getter=companion) FPLKKotlinx_datetimeMonthNamesCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<NSString *> *names __attribute__((swift_name("names")));
- (instancetype)initWithNames:(NSArray<NSString *> *)names __attribute__((swift_name("init(names:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithJanuary:(NSString *)january february:(NSString *)february march:(NSString *)march april:(NSString *)april may:(NSString *)may june:(NSString *)june july:(NSString *)july august:(NSString *)august september:(NSString *)september october:(NSString *)october november:(NSString *)november december:(NSString *)december __attribute__((swift_name("init(january:february:march:april:may:june:july:august:september:october:november:december:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface FPLKKotlinx_serialization_jsonJsonElementCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<FPLKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonPrimitive.Companion")))
@interface FPLKKotlinx_serialization_jsonJsonPrimitiveCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKKotlinx_serialization_jsonJsonPrimitiveCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<FPLKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol FPLKKotlinx_serialization_coreKSerializer <FPLKKotlinx_serialization_coreSerializationStrategy, FPLKKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol FPLKKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(FPLKKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface FPLKKotlinEnumCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("Koin_coreKoinExtension")))
@protocol FPLKKoin_coreKoinExtension
@required
- (void)onClose __attribute__((swift_name("onClose()")));
- (void)onRegisterKoin:(FPLKKoin_coreKoin *)koin __attribute__((swift_name("onRegister(koin:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry.Companion")))
@interface FPLKKoin_coreScopeRegistryCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKKoin_coreScopeRegistryCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface FPLKKtor_client_coreProxyConfig : FPLKBase
@property (readonly) FPLKKtor_httpUrl *url __attribute__((swift_name("url")));
- (instancetype)initWithUrl:(FPLKKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol FPLKKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(FPLKKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) FPLKKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface FPLKKtor_eventsEventDefinition<T> : FPLKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface FPLKKtor_client_coreHttpReceivePipelinePhases : FPLKBase
@property (class, readonly, getter=shared) FPLKKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) FPLKKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) FPLKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) FPLKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface FPLKKtor_client_coreHttpRequestPipelinePhases : FPLKBase
@property (class, readonly, getter=shared) FPLKKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) FPLKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) FPLKKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) FPLKKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) FPLKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) FPLKKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol FPLKKtor_httpHttpMessageBuilder
@required
@property (readonly) FPLKKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface FPLKKtor_client_coreHttpRequestBuilder : FPLKBase <FPLKKtor_httpHttpMessageBuilder>
@property (class, readonly, getter=companion) FPLKKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) id<FPLKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property FPLKKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<FPLKKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) FPLKKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property FPLKKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) FPLKKtor_httpURLBuilder *url __attribute__((swift_name("url")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (FPLKKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<FPLKKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<FPLKKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<FPLKKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (FPLKKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(FPLKKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (FPLKKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(FPLKKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(FPLKKtor_httpURLBuilder *, FPLKKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface FPLKKtor_client_coreHttpResponsePipelinePhases : FPLKBase
@property (class, readonly, getter=shared) FPLKKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) FPLKKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) FPLKKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) FPLKKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) FPLKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) FPLKKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface FPLKKtor_client_coreHttpResponseContainer : FPLKBase
@property (readonly) FPLKKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
- (instancetype)initWithExpectedType:(FPLKKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (FPLKKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(FPLKKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface FPLKKtor_client_coreHttpSendPipelinePhases : FPLKBase
@property (class, readonly, getter=shared) FPLKKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) FPLKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) FPLKKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) FPLKKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) FPLKKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) FPLKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDate.Companion")))
@interface FPLKKotlinx_datetimeLocalDateCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKKotlinx_datetimeLocalDateCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<FPLKKotlinx_datetimeDateTimeFormat>)FormatBlock:(void (^)(id<FPLKKotlinx_datetimeDateTimeFormatBuilderWithDate>))block __attribute__((swift_name("Format(block:)")));
- (FPLKKotlinx_datetimeLocalDate *)fromEpochDaysEpochDays:(int32_t)epochDays __attribute__((swift_name("fromEpochDays(epochDays:)")));
- (FPLKKotlinx_datetimeLocalDate *)parseInput:(id)input format:(id<FPLKKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("parse(input:format:)")));
- (id<FPLKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalTime.Companion")))
@interface FPLKKotlinx_datetimeLocalTimeCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKKotlinx_datetimeLocalTimeCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<FPLKKotlinx_datetimeDateTimeFormat>)FormatBuilder:(void (^)(id<FPLKKotlinx_datetimeDateTimeFormatBuilderWithTime>))builder __attribute__((swift_name("Format(builder:)")));
- (FPLKKotlinx_datetimeLocalTime *)fromMillisecondOfDayMillisecondOfDay:(int32_t)millisecondOfDay __attribute__((swift_name("fromMillisecondOfDay(millisecondOfDay:)")));
- (FPLKKotlinx_datetimeLocalTime *)fromNanosecondOfDayNanosecondOfDay:(int64_t)nanosecondOfDay __attribute__((swift_name("fromNanosecondOfDay(nanosecondOfDay:)")));
- (FPLKKotlinx_datetimeLocalTime *)fromSecondOfDaySecondOfDay:(int32_t)secondOfDay __attribute__((swift_name("fromSecondOfDay(secondOfDay:)")));
- (FPLKKotlinx_datetimeLocalTime *)parseInput:(id)input format:(id<FPLKKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("parse(input:format:)")));
- (id<FPLKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface FPLKKoin_coreBeanDefinition<T> : FPLKBase
@property FPLKKoin_coreCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(FPLKKoin_coreScope *, FPLKKoin_coreParametersHolder *) __attribute__((swift_name("definition")));
@property (readonly) FPLKKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) id<FPLKKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property id<FPLKKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) id<FPLKKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property NSArray<id<FPLKKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
- (instancetype)initWithScopeQualifier:(id<FPLKKoin_coreQualifier>)scopeQualifier primaryType:(id<FPLKKotlinKClass>)primaryType qualifier:(id<FPLKKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(FPLKKoin_coreScope *, FPLKKoin_coreParametersHolder *))definition kind:(FPLKKoin_coreKind *)kind secondaryTypes:(NSArray<id<FPLKKotlinKClass>> *)secondaryTypes __attribute__((swift_name("init(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<FPLKKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<FPLKKotlinKClass>)clazz qualifier:(id<FPLKKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(id<FPLKKoin_coreQualifier>)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceFactoryCompanion")))
@interface FPLKKoin_coreInstanceFactoryCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKKoin_coreInstanceFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ERROR_SEPARATOR __attribute__((swift_name("ERROR_SEPARATOR")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreResolutionContext")))
@interface FPLKKoin_coreResolutionContext : FPLKBase
@property (readonly) id<FPLKKotlinKClass> clazz __attribute__((swift_name("clazz")));
@property (readonly) NSString *debugTag __attribute__((swift_name("debugTag")));
@property (readonly) FPLKKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) FPLKKoin_coreParametersHolder * _Nullable parameters __attribute__((swift_name("parameters")));
@property (readonly) id<FPLKKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) FPLKKoin_coreScope *scope __attribute__((swift_name("scope")));
- (instancetype)initWithLogger:(FPLKKoin_coreLogger *)logger scope:(FPLKKoin_coreScope *)scope clazz:(id<FPLKKotlinKClass>)clazz qualifier:(id<FPLKKoin_coreQualifier> _Nullable)qualifier parameters:(FPLKKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("init(logger:scope:clazz:qualifier:parameters:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface FPLKKtor_utilsGMTDate : FPLKBase <FPLKKotlinComparable>
@property (class, readonly, getter=companion) FPLKKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) FPLKKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) FPLKKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
- (instancetype)initWithSeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(FPLKKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(FPLKKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("init(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(FPLKKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (FPLKKtor_utilsGMTDate *)doCopy __attribute__((swift_name("doCopy()")));
- (FPLKKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(FPLKKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(FPLKKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface FPLKKtor_httpHttpProtocolVersion : FPLKBase
@property (class, readonly, getter=companion) FPLKKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
- (FPLKKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol FPLKKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<FPLKKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface FPLKKotlinAbstractCoroutineContextKey<B, E> : FPLKBase <FPLKKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<FPLKKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<FPLKKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface FPLKKotlinx_coroutines_coreCoroutineDispatcherKey : FPLKKotlinAbstractCoroutineContextKey<id<FPLKKotlinContinuationInterceptor>, FPLKKotlinx_coroutines_coreCoroutineDispatcher *>
@property (class, readonly, getter=shared) FPLKKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<FPLKKotlinCoroutineContextKey>)baseKey safeCast:(id<FPLKKotlinCoroutineContextElement> _Nullable (^)(id<FPLKKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol FPLKKotlinx_serialization_coreDecoder
@required
- (id<FPLKKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<FPLKKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (FPLKKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<FPLKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<FPLKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) FPLKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol FPLKKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<FPLKKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<FPLKKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<FPLKKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) FPLKKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol FPLKKotlinx_serialization_coreEncoder
@required
- (id<FPLKKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<FPLKKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<FPLKKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<FPLKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<FPLKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) FPLKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol FPLKKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<FPLKKotlinKClass>)kClass provider:(id<FPLKKotlinx_serialization_coreKSerializer> (^)(NSArray<id<FPLKKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<FPLKKotlinKClass>)kClass serializer:(id<FPLKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<FPLKKotlinKClass>)baseClass actualClass:(id<FPLKKotlinKClass>)actualClass actualSerializer:(id<FPLKKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<FPLKKotlinKClass>)baseClass defaultDeserializerProvider:(id<FPLKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<FPLKKotlinKClass>)baseClass defaultDeserializerProvider:(id<FPLKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<FPLKKotlinKClass>)baseClass defaultSerializerProvider:(id<FPLKKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonClassDiscriminatorMode")))
@interface FPLKKotlinx_serialization_jsonClassDiscriminatorMode : FPLKKotlinEnum<FPLKKotlinx_serialization_jsonClassDiscriminatorMode *>
@property (class, readonly) FPLKKotlinx_serialization_jsonClassDiscriminatorMode *none __attribute__((swift_name("none")));
@property (class, readonly) FPLKKotlinx_serialization_jsonClassDiscriminatorMode *allJsonObjects __attribute__((swift_name("allJsonObjects")));
@property (class, readonly) FPLKKotlinx_serialization_jsonClassDiscriminatorMode *polymorphic __attribute__((swift_name("polymorphic")));
@property (class, readonly) NSArray<FPLKKotlinx_serialization_jsonClassDiscriminatorMode *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (FPLKKotlinArray<FPLKKotlinx_serialization_jsonClassDiscriminatorMode *> *)values __attribute__((swift_name("values()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonNamingStrategy")))
@protocol FPLKKotlinx_serialization_jsonJsonNamingStrategy
@required
- (NSString *)serialNameForJsonDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor elementIndex:(int32_t)elementIndex serialName:(NSString *)serialName __attribute__((swift_name("serialNameForJson(descriptor:elementIndex:serialName:)")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol FPLKKotlinx_coroutines_coreParentJob <FPLKKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (FPLKKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface FPLKKotlinKTypeProjection : FPLKBase
@property (class, readonly, getter=companion) FPLKKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) id<FPLKKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) FPLKKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
- (instancetype)initWithVariance:(FPLKKotlinKVariance * _Nullable)variance type:(id<FPLKKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
- (FPLKKotlinKTypeProjection *)doCopyVariance:(FPLKKotlinKVariance * _Nullable)variance type:(id<FPLKKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_io_coreBuffer")))
@interface FPLKKotlinx_io_coreBuffer : FPLKBase <FPLKKotlinx_io_coreSource, FPLKKotlinx_io_coreSink>
@property (readonly) FPLKKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));
- (void)close __attribute__((swift_name("close()")));
- (FPLKKotlinx_io_coreBuffer *)doCopy __attribute__((swift_name("doCopy()")));
- (void)doCopyToOut:(FPLKKotlinx_io_coreBuffer *)out startIndex:(int64_t)startIndex endIndex:(int64_t)endIndex __attribute__((swift_name("doCopyTo(out:startIndex:endIndex:)")));
- (void)emit __attribute__((swift_name("emit()")));
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (void)flush __attribute__((swift_name("flush()")));
- (int8_t)getPosition:(int64_t)position __attribute__((swift_name("get(position:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (id<FPLKKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int64_t)readAtMostToSink:(FPLKKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
- (int32_t)readAtMostToSink:(FPLKKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<FPLKKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int64_t)transferFromSource:(id<FPLKKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (int64_t)transferToSink:(id<FPLKKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));
- (void)writeSource:(FPLKKotlinx_io_coreBuffer *)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(id<FPLKKotlinx_io_coreRawSource>)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (void)writeSource:(FPLKKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface FPLKKtor_httpUrlCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol FPLKKtor_httpParameters <FPLKKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface FPLKKtor_httpURLProtocol : FPLKBase
@property (class, readonly, getter=companion) FPLKKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
- (FPLKKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface FPLKKtor_httpHttpMethodCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<FPLKKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) FPLKKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) FPLKKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) FPLKKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) FPLKKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) FPLKKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) FPLKKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) FPLKKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (FPLKKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol FPLKKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface FPLKKtor_httpHeaderValueParam : FPLKBase
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (FPLKKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface FPLKKtor_httpHeaderValueWithParametersCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<FPLKKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface FPLKKtor_httpContentTypeCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) FPLKKtor_httpContentType *Any __attribute__((swift_name("Any")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (FPLKKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface FPLKKtor_httpHttpStatusCodeCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) FPLKKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) FPLKKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) FPLKKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) FPLKKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) FPLKKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) FPLKKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) FPLKKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) FPLKKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) FPLKKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) FPLKKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) FPLKKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) FPLKKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) FPLKKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) FPLKKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) FPLKKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) FPLKKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) FPLKKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) FPLKKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) FPLKKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) FPLKKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) FPLKKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) FPLKKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) FPLKKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) FPLKKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) FPLKKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) FPLKKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) FPLKKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) FPLKKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) FPLKKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) FPLKKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) FPLKKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) FPLKKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) FPLKKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) FPLKKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) FPLKKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) FPLKKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) FPLKKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) FPLKKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) FPLKKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) FPLKKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) FPLKKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) FPLKKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) FPLKKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) FPLKKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) FPLKKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) FPLKKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) FPLKKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) FPLKKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) FPLKKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) FPLKKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) FPLKKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) FPLKKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) FPLKKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<FPLKKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (FPLKKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface FPLKKotlinByteIterator : FPLKBase <FPLKKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (FPLKByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongProgression.Companion")))
@interface FPLKKotlinLongProgressionCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKKotlinLongProgressionCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (FPLKKotlinLongProgression *)fromClosedRangeRangeStart:(int64_t)rangeStart rangeEnd:(int64_t)rangeEnd step:(int64_t)step __attribute__((swift_name("fromClosedRange(rangeStart:rangeEnd:step:)")));
@end

__attribute__((swift_name("KotlinLongIterator")))
@interface FPLKKotlinLongIterator : FPLKBase <FPLKKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (FPLKLong *)next __attribute__((swift_name("next()")));
- (int64_t)nextLong __attribute__((swift_name("nextLong()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongRange.Companion")))
@interface FPLKKotlinLongRangeCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKKotlinLongRangeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) FPLKKotlinLongRange *EMPTY __attribute__((swift_name("EMPTY")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol FPLKKotlinAppendable
@required
- (id<FPLKKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<FPLKKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<FPLKKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeDayOfWeekNames.Companion")))
@interface FPLKKotlinx_datetimeDayOfWeekNamesCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKKotlinx_datetimeDayOfWeekNamesCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) FPLKKotlinx_datetimeDayOfWeekNames *ENGLISH_ABBREVIATED __attribute__((swift_name("ENGLISH_ABBREVIATED")));
@property (readonly) FPLKKotlinx_datetimeDayOfWeekNames *ENGLISH_FULL __attribute__((swift_name("ENGLISH_FULL")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeMonthNames.Companion")))
@interface FPLKKotlinx_datetimeMonthNamesCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKKotlinx_datetimeMonthNamesCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) FPLKKotlinx_datetimeMonthNames *ENGLISH_ABBREVIATED __attribute__((swift_name("ENGLISH_ABBREVIATED")));
@property (readonly) FPLKKotlinx_datetimeMonthNames *ENGLISH_FULL __attribute__((swift_name("ENGLISH_FULL")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol FPLKKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<FPLKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<FPLKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<FPLKKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<FPLKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface FPLKKtor_utilsStringValuesBuilderImpl : FPLKBase <FPLKKtor_utilsStringValuesBuilder>
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@property (readonly) FPLKMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<FPLKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<FPLKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<FPLKKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<FPLKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface FPLKKtor_httpHeadersBuilder : FPLKKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<FPLKKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface FPLKKtor_client_coreHttpRequestBuilderCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface FPLKKtor_httpURLBuilder : FPLKBase
@property (class, readonly, getter=companion) FPLKKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<FPLKKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<FPLKKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property FPLKKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property FPLKKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
- (instancetype)initWithProtocol:(FPLKKtor_httpURLProtocol * _Nullable)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<FPLKKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
- (FPLKKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface FPLKKoin_coreKind : FPLKKotlinEnum<FPLKKoin_coreKind *>
@property (class, readonly) FPLKKoin_coreKind *singleton __attribute__((swift_name("singleton")));
@property (class, readonly) FPLKKoin_coreKind *factory __attribute__((swift_name("factory")));
@property (class, readonly) FPLKKoin_coreKind *scoped __attribute__((swift_name("scoped")));
@property (class, readonly) NSArray<FPLKKoin_coreKind *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (FPLKKotlinArray<FPLKKoin_coreKind *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface FPLKKoin_coreCallbacks<T> : FPLKBase
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (FPLKKoin_coreCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface FPLKKtor_utilsWeekDay : FPLKKotlinEnum<FPLKKtor_utilsWeekDay *>
@property (class, readonly, getter=companion) FPLKKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FPLKKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) FPLKKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) FPLKKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) FPLKKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) FPLKKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) FPLKKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) FPLKKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
@property (class, readonly) NSArray<FPLKKtor_utilsWeekDay *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (FPLKKotlinArray<FPLKKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface FPLKKtor_utilsMonth : FPLKKotlinEnum<FPLKKtor_utilsMonth *>
@property (class, readonly, getter=companion) FPLKKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FPLKKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) FPLKKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) FPLKKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) FPLKKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) FPLKKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) FPLKKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) FPLKKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) FPLKKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) FPLKKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) FPLKKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) FPLKKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) FPLKKtor_utilsMonth *december __attribute__((swift_name("december")));
@property (class, readonly) NSArray<FPLKKtor_utilsMonth *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (FPLKKotlinArray<FPLKKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface FPLKKtor_utilsGMTDateCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) FPLKKtor_utilsGMTDate *START __attribute__((swift_name("START")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<FPLKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface FPLKKtor_httpHttpProtocolVersionCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) FPLKKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) FPLKKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) FPLKKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) FPLKKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) FPLKKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (FPLKKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (FPLKKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol FPLKKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<FPLKKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<FPLKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<FPLKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) FPLKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface FPLKKotlinNothing : FPLKBase
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol FPLKKotlinAnnotation
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol FPLKKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<FPLKKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<FPLKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<FPLKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<FPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) FPLKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface FPLKKotlinKVariance : FPLKKotlinEnum<FPLKKotlinKVariance *>
@property (class, readonly) FPLKKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) FPLKKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) FPLKKotlinKVariance *out __attribute__((swift_name("out")));
@property (class, readonly) NSArray<FPLKKotlinKVariance *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (FPLKKotlinArray<FPLKKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface FPLKKotlinKTypeProjectionCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) FPLKKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (FPLKKotlinKTypeProjection *)contravariantType:(id<FPLKKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (FPLKKotlinKTypeProjection *)covariantType:(id<FPLKKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (FPLKKotlinKTypeProjection *)invariantType:(id<FPLKKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface FPLKKtor_httpURLProtocolCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) FPLKKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) FPLKKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) FPLKKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) FPLKKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) FPLKKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, FPLKKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (FPLKKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface FPLKKtor_httpURLBuilderCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol FPLKKtor_httpParametersBuilder <FPLKKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface FPLKKtor_utilsWeekDayCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (FPLKKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (FPLKKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface FPLKKtor_utilsMonthCompanion : FPLKBase
@property (class, readonly, getter=shared) FPLKKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (FPLKKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (FPLKKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
