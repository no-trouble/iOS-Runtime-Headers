/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface AboutDataSource : PSSpecifierDataSource {
    BOOL  _accessory;
    PSSpecifier * _accessoryDividerSpecifier;
    BOOL  _cancel;
    int  _carrierCellState;
    NSString * _deviceNameToIgnoreOnce;
    BOOL  _hasLoadedSpecifiers;
    PSSpecifier * _headsetSpecifier;
    BOOL  _isGeneratingNotifications;
    BOOL  _loaded;
    NSString * _loading;
    NSLock * _lock;
    NSMutableDictionary * _mediaDict;
    <NSObject> * _photoVideoNotificationToken;
    NSTimer * _reloadTimer;
    NSString * _serviceProviderNameForSPN;
    int  _simCellState;
    BOOL  _threadRunning;
}

@property (nonatomic, retain) NSString *deviceNameToIgnoreOnce;

- (void).cxx_destruct;
- (id)_CSNString:(id)arg1;
- (id)_ERIString:(id)arg1;
- (id)_ICCIDString:(id)arg1;
- (id)_IMSStatusString:(id)arg1;
- (id)_MINString:(id)arg1;
- (id)_NAIString:(id)arg1;
- (id)_PRLString:(id)arg1;
- (void)_accessoryDidUpdate:(id)arg1;
- (void)_addKey:(id)arg1 isCopyable:(BOOL)arg2;
- (void)_addKey:(id)arg1 value:(id)arg2 isCopyable:(BOOL)arg3;
- (id)_bluetoothMACAddress;
- (id)_carrierVersion:(id)arg1;
- (id)_cellularRegistrationInfo;
- (id)_getCTMobileEquipmentInfo:(struct __CFString { }*)arg1;
- (BOOL)_isUsingBootstrap;
- (void)_loadMediaFinished:(id)arg1;
- (void)_loadValues;
- (id)_macAddress;
- (id)_macAddressSpecifierKey;
- (id)_mobileEquipmentInfo;
- (id)_myNumber;
- (id)_photos:(id)arg1;
- (void)_setValue:(id)arg1 forSpecifier:(id)arg2;
- (void)_setValue:(id)arg1 forSpecifierWithKey:(id)arg2;
- (id)_songs:(id)arg1;
- (id)_videos:(id)arg1;
- (BOOL)areSpecifiersLoaded;
- (void)cleanupMLReloadTimer;
- (id)countForKey:(id)arg1;
- (void)dealloc;
- (id)deviceName:(id)arg1;
- (id)deviceNameToIgnoreOnce;
- (void)enableMLUpdates:(BOOL)arg1;
- (void)forceReloadMediaStats:(id)arg1;
- (id)init;
- (void)loadSpecifiers;
- (void)mediaLibraryDidChange:(id)arg1;
- (void)newCarrierNotification;
- (void)reloadDeviceName;
- (void)reloadSpecifiers;
- (void)setDeviceName:(id)arg1 specifier:(id)arg2;
- (void)setDeviceNameToIgnoreOnce:(id)arg1;
- (BOOL)shouldShowSIMSpecifier;
- (void)simStatusChangedToReady;
- (id)specifiersForSpecifier:(id)arg1 observer:(id)arg2;
- (void)updateCarrierSpecifier:(id)arg1;
- (void)updateSIMSpecifier:(id)arg1;
- (id)valueForSpecifier:(id)arg1;

@end
