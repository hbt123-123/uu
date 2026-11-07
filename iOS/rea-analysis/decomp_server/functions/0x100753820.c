// rea decompile_all
// name: SentryOptions::validateOptions:didFailWithError:
// address: 0x100753820
// body: available
// range: 0x100753820-0x100755347 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

bool SentryOptions::validateOptions_didFailWithError_(ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  undefined *puVar1;
  int iVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  cfstringStruct *pcVar7;
  class_t *self;
  char *pcVar8;
  undefined *local_500;
  undefined8 local_4f8;
  code *local_4f0;
  undefined *puStack_4e8;
  ID local_4e0;
  undefined *local_4d8;
  undefined8 local_4d0;
  code *local_4c8;
  undefined *puStack_4c0;
  ID local_4b8;
  undefined *local_4b0;
  undefined8 local_4a8;
  code *local_4a0;
  undefined *puStack_498;
  ID local_490;
  undefined *local_488;
  undefined8 local_480;
  code *local_478;
  undefined *puStack_470;
  ID local_468;
  undefined *local_460;
  undefined8 local_458;
  code *local_450;
  undefined *puStack_448;
  ID local_440;
  undefined *local_438;
  undefined8 local_430;
  code *local_428;
  undefined *puStack_420;
  ID local_418;
  undefined *local_410;
  undefined8 local_408;
  code *local_400;
  undefined *puStack_3f8;
  ID local_3f0;
  undefined *local_3e8;
  undefined8 local_3e0;
  code *local_3d8;
  undefined *puStack_3d0;
  ID local_3c8;
  undefined *local_3c0;
  undefined8 local_3b8;
  code *local_3b0;
  undefined *puStack_3a8;
  ID local_3a0;
  undefined *local_398;
  undefined8 local_390;
  code *local_388;
  undefined *puStack_380;
  ID local_378;
  undefined *local_370;
  undefined8 local_368;
  code *local_360;
  undefined *puStack_358;
  ID local_350;
  undefined *local_348;
  undefined8 local_340;
  code *local_338;
  undefined *puStack_330;
  ID local_328;
  undefined *local_320;
  undefined8 local_318;
  code *local_310;
  undefined *puStack_308;
  ID local_300;
  undefined *local_2f8;
  undefined8 local_2f0;
  code *local_2e8;
  undefined *local_2e0;
  ID local_2d8;
  undefined *local_2d0;
  undefined8 local_2c8;
  code *local_2c0;
  undefined *local_2b8;
  ID local_2b0;
  undefined *local_2a8;
  undefined8 local_2a0;
  code *local_298;
  undefined *local_290;
  ID local_288;
  undefined *local_280;
  undefined8 local_278;
  code *local_270;
  undefined *local_268;
  ID local_260;
  undefined *local_258;
  undefined8 local_250;
  code *local_248;
  undefined *local_240;
  ID local_238;
  undefined *local_230;
  undefined8 local_228;
  code *local_220;
  undefined *local_218;
  ID local_210;
  undefined *local_208;
  undefined8 local_200;
  code *local_1f8;
  undefined *local_1f0;
  ID local_1e8;
  undefined *local_1e0;
  undefined8 local_1d8;
  code *local_1d0;
  undefined *local_1c8;
  ID local_1c0;
  undefined *local_1b8;
  undefined8 local_1b0;
  code *local_1a8;
  undefined *local_1a0;
  ID local_198;
  undefined *local_190;
  undefined8 local_188;
  code *local_180;
  undefined *local_178;
  ID local_170;
  undefined *local_168;
  undefined8 local_160;
  code *local_158;
  undefined *local_150;
  ID local_148;
  undefined *local_140;
  undefined8 local_138;
  code *local_130;
  undefined *local_128;
  ID local_120;
  undefined *local_118;
  undefined8 local_110;
  code *local_108;
  undefined *local_100;
  ID local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  code *local_e0;
  undefined *puStack_d8;
  ID local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined *puStack_b0;
  ID local_a8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  ID local_80;
  
  IVar3 = objc_stub::predicateWithBlock_
                    ((ID)&_OBJC_CLASS___NSPredicate,&PTR___NSConcreteGlobalBlock_1009e8cb8);
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_debug);
  local_a0 = PTR___NSConcreteStackBlock_100995490;
  local_98 = 0xc2000000;
  local_90 = FUN_100755398;
  puStack_88 = &DAT_1009e8cd8;
  local_80 = param_1;
  objc_stub::FUN_1007f1dc0(param_1,IVar4,&local_a0);
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_diagnosticLevel);
  IVar5 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
  IVar4 = objc_stub::isKindOfClass_(IVar4,IVar5);
  if ((int)IVar4 != 0) {
    IVar4 = 0;
    do {
      IVar5 = IVar4;
      FUN_10078990c();
      IVar6 = objc_stub::objectForKeyedSubscript_(param_3,&cf_diagnosticLevel);
      IVar5 = objc_stub::isEqualToString_(IVar5,IVar6);
      if ((int)IVar5 != 0) {
        objc_stub::FUN_1007f25e0(param_1,IVar4);
        break;
      }
      IVar4 = IVar4 + 1;
    } while (IVar4 != 6);
  }
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_dsn);
  IVar5 = objc_stub::FUN_1007ee980((ID)&_OBJC_CLASS___NSNull);
  if (IVar4 == IVar5) goto LAB_100753ac8;
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_dsn);
  if (IVar4 == 0) {
LAB_100753a6c:
    pcVar7 = &cf___;
  }
  else {
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_dsn);
    IVar5 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
    IVar4 = objc_stub::isKindOfClass_(IVar4,IVar5);
    if ((int)IVar4 == 0) goto LAB_100753a6c;
    pcVar7 = (cfstringStruct *)objc_stub::objectForKeyedSubscript_(param_3,&cf_dsn);
  }
  self = &objc::class_t::SentryDsn;
  _objc_alloc();
  IVar4 = objc_stub::FUN_1007ec300((ID)self,pcVar7,param_4);
  objc_stub::FUN_1007f4080(param_1,IVar4);
  IVar4 = objc_stub::parsedDsn(param_1);
  if (IVar4 == 0) {
    return 0;
  }
LAB_100753ac8:
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_release);
  IVar5 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
  IVar4 = objc_stub::isKindOfClass_(IVar4,IVar5);
  if ((int)IVar4 != 0) {
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_release);
    objc_stub::setReleaseName_(param_1,IVar4);
  }
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_environment);
  IVar5 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
  IVar4 = objc_stub::isKindOfClass_(IVar4,IVar5);
  if ((int)IVar4 != 0) {
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_environment);
    objc_stub::setEnvironment_(param_1,IVar4);
  }
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_dist);
  IVar5 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
  IVar4 = objc_stub::isKindOfClass_(IVar4,IVar5);
  if ((int)IVar4 != 0) {
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_dist);
    objc_stub::setDist_(param_1,IVar4);
  }
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_enabled);
  puVar1 = PTR___NSConcreteStackBlock_100995490;
  local_c8 = PTR___NSConcreteStackBlock_100995490;
  local_c0 = 0xc2000000;
  local_b8 = FUN_1007553a4;
  puStack_b0 = &DAT_1009e8cd8;
  local_a8 = param_1;
  objc_stub::FUN_1007f1dc0(param_1,IVar4,&local_c8);
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_shutdownTimeInterval);
  IVar5 = objc_stub::class((ID)&_OBJC_CLASS___NSNumber);
  IVar4 = objc_stub::isKindOfClass_(IVar4,IVar5);
  if ((int)IVar4 != 0) {
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_shutdownTimeInterval);
    objc_stub::doubleValue(IVar4);
    objc_stub::FUN_1007f4b20(param_1);
  }
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_enableCrashHandler);
  local_f0 = puVar1;
  local_e8 = 0xc2000000;
  local_e0 = FUN_1007553b0;
  puStack_d8 = &DAT_1009e8cd8;
  local_d0 = param_1;
  objc_stub::FUN_1007f1dc0(param_1,IVar4,&local_f0);
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_enableUncaughtNSExceptionReporting);
  local_118 = puVar1;
  local_110 = 0xc2000000;
  local_108 = FUN_1007553bc;
  local_100 = &DAT_1009e8cd8;
  local_f8 = param_1;
  objc_stub::FUN_1007f1dc0(param_1,IVar4,&local_118);
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_enableSigtermReporting);
  local_140 = puVar1;
  local_138 = 0xc2000000;
  local_130 = FUN_1007553c8;
  local_128 = &DAT_1009e8cd8;
  local_120 = param_1;
  objc_stub::FUN_1007f1dc0(param_1,IVar4,&local_140);
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_maxBreadcrumbs);
  IVar5 = objc_stub::class((ID)&_OBJC_CLASS___NSNumber);
  IVar4 = objc_stub::isKindOfClass_(IVar4,IVar5);
  if ((int)IVar4 != 0) {
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_maxBreadcrumbs);
    IVar4 = objc_stub::FUN_1007f7b40(IVar4);
    objc_stub::FUN_1007f3aa0(param_1,IVar4 & 0xffffffff);
  }
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_enableNetworkBreadcrumbs);
  local_168 = puVar1;
  local_160 = 0xc2000000;
  local_158 = FUN_1007553d4;
  local_150 = &DAT_1009e8cd8;
  local_148 = param_1;
  objc_stub::FUN_1007f1dc0(param_1,IVar4,&local_168);
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_maxCacheItems);
  IVar5 = objc_stub::class((ID)&_OBJC_CLASS___NSNumber);
  IVar4 = objc_stub::isKindOfClass_(IVar4,IVar5);
  if ((int)IVar4 != 0) {
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_maxCacheItems);
    IVar4 = objc_stub::FUN_1007f7b40(IVar4);
    objc_stub::FUN_1007f3ac0(param_1,IVar4 & 0xffffffff);
  }
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_cacheDirectoryPath);
  IVar5 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
  IVar4 = objc_stub::isKindOfClass_(IVar4,IVar5);
  if ((int)IVar4 != 0) {
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_cacheDirectoryPath);
    objc_stub::FUN_1007f1ec0(param_1,IVar4);
  }
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_beforeSend);
  IVar4 = objc_stub::FUN_1007ecc40(param_1,IVar4);
  if ((int)IVar4 != 0) {
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_beforeSend);
    objc_stub::FUN_1007f1ce0(param_1,IVar4);
  }
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_beforeSendSpan);
  IVar4 = objc_stub::FUN_1007ecc40(param_1,IVar4);
  if ((int)IVar4 != 0) {
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_beforeSendSpan);
    objc_stub::FUN_1007f1d00(param_1,IVar4);
  }
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_beforeBreadcrumb);
  IVar4 = objc_stub::FUN_1007ecc40(param_1,IVar4);
  if ((int)IVar4 != 0) {
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_beforeBreadcrumb);
    objc_stub::FUN_1007f1c80(param_1,IVar4);
  }
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_beforeCaptureScreenshot);
  IVar4 = objc_stub::FUN_1007ecc40(param_1,IVar4);
  if ((int)IVar4 != 0) {
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_beforeCaptureScreenshot);
    objc_stub::FUN_1007f1ca0(param_1,IVar4);
  }
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_beforeCaptureViewHierarchy);
  IVar4 = objc_stub::FUN_1007ecc40(param_1,IVar4);
  if ((int)IVar4 != 0) {
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_beforeCaptureViewHierarchy);
    objc_stub::FUN_1007f1cc0(param_1,IVar4);
  }
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_onCrashedLastRun);
  IVar4 = objc_stub::FUN_1007ecc40(param_1,IVar4);
  if ((int)IVar4 != 0) {
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_onCrashedLastRun);
    objc_stub::FUN_1007f3ec0(param_1,IVar4);
  }
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_integrations);
  IVar5 = objc_stub::class((ID)&_OBJC_CLASS___NSArray);
  IVar4 = objc_stub::isKindOfClass_(IVar4,IVar5);
  if ((int)IVar4 != 0) {
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_integrations);
    IVar4 = objc_stub::filteredArrayUsingPredicate_(IVar4,IVar3);
    IVar4 = objc_stub::mutableCopy(IVar4);
    objc_stub::FUN_1007f35c0(param_1,IVar4);
  }
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_sampleRate);
  IVar5 = objc_stub::class((ID)&_OBJC_CLASS___NSNumber);
  IVar4 = objc_stub::isKindOfClass_(IVar4,IVar5);
  if ((int)IVar4 != 0) {
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_sampleRate);
    objc_stub::setSampleRate_(param_1,IVar4);
  }
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_enableAutoSessionTracking);
  local_190 = puVar1;
  local_188 = 0xc2000000;
  local_180 = FUN_1007553e0;
  local_178 = &DAT_1009e8cd8;
  local_170 = param_1;
  objc_stub::FUN_1007f1dc0(param_1,IVar4,&local_190);
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_enableGraphQLOperationTracking);
  local_1b8 = puVar1;
  local_1b0 = 0xc2000000;
  local_1a8 = FUN_1007553ec;
  local_1a0 = &DAT_1009e8cd8;
  local_198 = param_1;
  objc_stub::FUN_1007f1dc0(param_1,IVar4,&local_1b8);
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_enableWatchdogTerminationTracking);
  local_1e0 = puVar1;
  local_1d8 = 0xc2000000;
  local_1d0 = FUN_1007553f8;
  local_1c8 = &DAT_1009e8cd8;
  local_1c0 = param_1;
  objc_stub::FUN_1007f1dc0(param_1,IVar4,&local_1e0);
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_swiftAsyncStacktraces);
  local_208 = puVar1;
  local_200 = 0xc2000000;
  local_1f8 = FUN_100755404;
  local_1f0 = &DAT_1009e8cd8;
  local_1e8 = param_1;
  objc_stub::FUN_1007f1dc0(param_1,IVar4,&local_208);
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_sessionTrackingIntervalMillis);
  IVar5 = objc_stub::class((ID)&_OBJC_CLASS___NSNumber);
  IVar4 = objc_stub::isKindOfClass_(IVar4,IVar5);
  if ((int)IVar4 != 0) {
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_sessionTrackingIntervalMillis);
    IVar4 = objc_stub::FUN_1007f7b40(IVar4);
    objc_stub::FUN_1007f4ac0(param_1,IVar4 & 0xffffffff);
  }
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_attachStacktrace);
  local_230 = puVar1;
  local_228 = 0xc2000000;
  local_220 = FUN_100755410;
  local_218 = &DAT_1009e8cd8;
  local_210 = param_1;
  objc_stub::FUN_1007f1dc0(param_1,IVar4,&local_230);
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_maxAttachmentSize);
  IVar5 = objc_stub::class((ID)&_OBJC_CLASS___NSNumber);
  IVar4 = objc_stub::isKindOfClass_(IVar4,IVar5);
  if ((int)IVar4 != 0) {
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_maxAttachmentSize);
    IVar4 = objc_stub::FUN_1007f7b40(IVar4);
    objc_stub::FUN_1007f3a80(param_1,IVar4 & 0xffffffff);
  }
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_sendDefaultPii);
  local_258 = puVar1;
  local_250 = 0xc2000000;
  local_248 = FUN_10075541c;
  local_240 = &DAT_1009e8cd8;
  local_238 = param_1;
  objc_stub::FUN_1007f1dc0(param_1,IVar4,&local_258);
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_enableAutoPerformanceTracing);
  local_280 = puVar1;
  local_278 = 0xc2000000;
  local_270 = FUN_100755428;
  local_268 = &DAT_1009e8cd8;
  local_260 = param_1;
  objc_stub::FUN_1007f1dc0(param_1,IVar4,&local_280);
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_enablePerformanceV2);
  local_2a8 = puVar1;
  local_2a0 = 0xc2000000;
  local_298 = FUN_100755434;
  local_290 = &DAT_1009e8cd8;
  local_288 = param_1;
  objc_stub::FUN_1007f1dc0(param_1,IVar4,&local_2a8);
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_enablePersistingTracesWhenCrashing);
  local_2d0 = puVar1;
  local_2c8 = 0xc2000000;
  local_2c0 = FUN_100755440;
  local_2b8 = &DAT_1009e8cd8;
  local_2b0 = param_1;
  objc_stub::FUN_1007f1dc0(param_1,IVar4,&local_2d0);
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_enableCaptureFailedRequests);
  local_2f8 = puVar1;
  local_2f0 = 0xc2000000;
  local_2e8 = FUN_10075544c;
  local_2e0 = &DAT_1009e8cd8;
  local_2d8 = param_1;
  objc_stub::FUN_1007f1dc0(param_1,IVar4,&local_2f8);
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_enableTimeToFullDisplayTracing);
  local_320 = puVar1;
  local_318 = 0xc2000000;
  local_310 = FUN_100755458;
  puStack_308 = &DAT_1009e8cd8;
  local_300 = param_1;
  objc_stub::FUN_1007f1dc0(param_1,IVar4,&local_320);
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_initialScope);
  IVar4 = objc_stub::FUN_1007ecc40(param_1,IVar4);
  if ((int)IVar4 != 0) {
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_initialScope);
    objc_stub::FUN_1007f3520(param_1,IVar4);
  }
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_enableAppHangTracking);
  local_348 = puVar1;
  local_340 = 0xc2000000;
  local_338 = FUN_100755464;
  puStack_330 = &DAT_1009e8cd8;
  local_328 = param_1;
  objc_stub::FUN_1007f1dc0(param_1,IVar4,&local_348);
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_appHangTimeoutInterval);
  IVar5 = objc_stub::class((ID)&_OBJC_CLASS___NSNumber);
  IVar4 = objc_stub::isKindOfClass_(IVar4,IVar5);
  if ((int)IVar4 != 0) {
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_appHangTimeoutInterval);
    objc_stub::doubleValue(IVar4);
    objc_stub::FUN_1007f1b40(param_1);
  }
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_enableNetworkTracking);
  local_370 = puVar1;
  local_368 = 0xc2000000;
  local_360 = FUN_100755470;
  puStack_358 = &DAT_1009e8cd8;
  local_350 = param_1;
  objc_stub::FUN_1007f1dc0(param_1,IVar4,&local_370);
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_enableFileIOTracing);
  local_398 = puVar1;
  local_390 = 0xc2000000;
  local_388 = FUN_10075547c;
  puStack_380 = &DAT_1009e8cd8;
  local_378 = param_1;
  objc_stub::FUN_1007f1dc0(param_1,IVar4,&local_398);
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_tracesSampleRate);
  IVar5 = objc_stub::class((ID)&_OBJC_CLASS___NSNumber);
  IVar4 = objc_stub::isKindOfClass_(IVar4,IVar5);
  if ((int)IVar4 != 0) {
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_tracesSampleRate);
    objc_stub::FUN_1007f5260(param_1,IVar4);
  }
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_tracesSampler);
  IVar4 = objc_stub::FUN_1007ecc40(param_1,IVar4);
  if ((int)IVar4 != 0) {
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_tracesSampler);
    objc_stub::FUN_1007f5280(param_1,IVar4);
  }
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_enableTracing);
  IVar5 = objc_stub::FUN_1007f1040((ID)&_OBJC_CLASS___NSNumber);
  IVar4 = objc_stub::isKindOfClass_(IVar4,IVar5);
  if ((int)IVar4 != 0) {
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_enableTracing);
    IVar4 = objc_stub::boolValue(IVar4);
    objc_stub::FUN_1007f2ac0(param_1,IVar4);
  }
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_inAppIncludes);
  IVar5 = objc_stub::class((ID)&_OBJC_CLASS___NSArray);
  IVar4 = objc_stub::isKindOfClass_(IVar4,IVar5);
  if ((int)IVar4 != 0) {
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_inAppIncludes);
    IVar4 = objc_stub::filteredArrayUsingPredicate_(IVar4,IVar3);
    IVar4 = objc_stub::arrayByAddingObjectsFromArray_(*(ID *)(param_1 + 0xd8),IVar4);
    *(ID *)(param_1 + 0xd8) = IVar4;
  }
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_inAppExcludes);
  IVar5 = objc_stub::class((ID)&_OBJC_CLASS___NSArray);
  IVar4 = objc_stub::isKindOfClass_(IVar4,IVar5);
  if ((int)IVar4 != 0) {
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_inAppExcludes);
    IVar4 = objc_stub::filteredArrayUsingPredicate_(IVar4,IVar3);
    *(ID *)(param_1 + 0xe0) = IVar4;
  }
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_urlSession);
  IVar5 = objc_stub::class((ID)&_OBJC_CLASS___NSURLSession);
  IVar4 = objc_stub::isKindOfClass_(IVar4,IVar5);
  if ((int)IVar4 != 0) {
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_urlSession);
    objc_stub::FUN_1007f5460(param_1,IVar4);
  }
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_urlSessionDelegate);
  IVar4 = objc_stub::conformsToProtocol_(IVar4,&objc::protocol_t::NSURLSessionDelegate);
  if ((int)IVar4 != 0) {
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_urlSessionDelegate);
    objc_stub::FUN_1007f5480(param_1,IVar4);
  }
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_enableSwizzling);
  local_3c0 = puVar1;
  local_3b8 = 0xc2000000;
  local_3b0 = FUN_100755488;
  puStack_3a8 = &DAT_1009e8cd8;
  local_3a0 = param_1;
  objc_stub::FUN_1007f1dc0(param_1,IVar4,&local_3c0);
  IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_swizzleClassNameExcludes);
  IVar5 = objc_stub::class((ID)&_OBJC_CLASS___NSSet);
  IVar4 = objc_stub::isKindOfClass_(IVar4,IVar5);
  if ((int)IVar4 != 0) {
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_swizzleClassNameExcludes);
    IVar3 = objc_stub::FUN_1007e9be0(IVar4,IVar3);
    *(ID *)(param_1 + 0xf8) = IVar3;
  }
  IVar3 = objc_stub::objectForKeyedSubscript_(param_3,&cf_enableCoreDataTracing);
  local_3e8 = puVar1;
  local_3e0 = 0xc2000000;
  local_3d8 = FUN_100755494;
  puStack_3d0 = &DAT_1009e8cd8;
  local_3c8 = param_1;
  objc_stub::FUN_1007f1dc0(param_1,IVar3,&local_3e8);
  IVar3 = objc_stub::objectForKeyedSubscript_(param_3,&cf_profilesSampleRate);
  IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSNumber);
  IVar3 = objc_stub::isKindOfClass_(IVar3,IVar4);
  if ((int)IVar3 != 0) {
    IVar3 = objc_stub::objectForKeyedSubscript_(param_3,&cf_profilesSampleRate);
    objc_stub::FUN_1007f42a0(param_1,IVar3);
  }
  IVar3 = objc_stub::objectForKeyedSubscript_(param_3,&cf_profilesSampler);
  IVar3 = objc_stub::FUN_1007ecc40(param_1,IVar3);
  if ((int)IVar3 != 0) {
    IVar3 = objc_stub::objectForKeyedSubscript_(param_3,&cf_profilesSampler);
    objc_stub::FUN_1007f42c0(param_1,IVar3);
  }
  IVar3 = objc_stub::objectForKeyedSubscript_(param_3,&cf_enableProfiling);
  local_410 = puVar1;
  local_408 = 0xc2000000;
  local_400 = FUN_1007554a0;
  puStack_3f8 = &DAT_1009e8cd8;
  local_3f0 = param_1;
  objc_stub::FUN_1007f1dc0(param_1,IVar3,&local_410);
  pcVar8 = "enableAppLaunchProfiling";
  _NSStringFromSelector("enableAppLaunchProfiling");
  IVar3 = objc_stub::objectForKeyedSubscript_(param_3,pcVar8);
  local_438 = puVar1;
  local_430 = 0xc2000000;
  local_428 = FUN_1007554ac;
  puStack_420 = &DAT_1009e8cd8;
  local_418 = param_1;
  objc_stub::FUN_1007f1dc0(param_1,IVar3,&local_438);
  IVar3 = objc_stub::objectForKeyedSubscript_(param_3,&cf_sendClientReports);
  local_460 = puVar1;
  local_458 = 0xc2000000;
  local_450 = FUN_1007554b8;
  puStack_448 = &DAT_1009e8cd8;
  local_440 = param_1;
  objc_stub::FUN_1007f1dc0(param_1,IVar3,&local_460);
  IVar3 = objc_stub::objectForKeyedSubscript_(param_3,&cf_enableAutoBreadcrumbTracking);
  local_488 = puVar1;
  local_480 = 0xc2000000;
  local_478 = FUN_1007554c4;
  puStack_470 = &DAT_1009e8cd8;
  local_468 = param_1;
  objc_stub::FUN_1007f1dc0(param_1,IVar3,&local_488);
  IVar3 = objc_stub::objectForKeyedSubscript_(param_3,&cf_tracePropagationTargets);
  IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSArray);
  IVar3 = objc_stub::isKindOfClass_(IVar3,IVar4);
  if ((int)IVar3 != 0) {
    IVar3 = objc_stub::objectForKeyedSubscript_(param_3,&cf_tracePropagationTargets);
    objc_stub::FUN_1007f5240(param_1,IVar3);
  }
  IVar3 = objc_stub::objectForKeyedSubscript_(param_3,&cf_failedRequestStatusCodes);
  IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSArray);
  IVar3 = objc_stub::isKindOfClass_(IVar3,IVar4);
  if ((int)IVar3 != 0) {
    IVar3 = objc_stub::objectForKeyedSubscript_(param_3,&cf_failedRequestStatusCodes);
    objc_stub::FUN_1007f2e00(param_1,IVar3);
  }
  IVar3 = objc_stub::objectForKeyedSubscript_(param_3,&cf_failedRequestTargets);
  IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSArray);
  IVar3 = objc_stub::isKindOfClass_(IVar3,IVar4);
  if ((int)IVar3 != 0) {
    IVar3 = objc_stub::objectForKeyedSubscript_(param_3,&cf_failedRequestTargets);
    objc_stub::FUN_1007f2e20(param_1,IVar3);
  }
  iVar2 = 1;
  FUN_1007070fc(1,0xc,0,0);
  if (iVar2 != 0) {
    IVar3 = objc_stub::objectForKeyedSubscript_(param_3,&cf_enableMetricKit);
    local_4b0 = puVar1;
    local_4a8 = 0xc2000000;
    local_4a0 = FUN_1007554d0;
    puStack_498 = &DAT_1009e8cd8;
    local_490 = param_1;
    objc_stub::FUN_1007f1dc0(param_1,IVar3,&local_4b0);
    IVar3 = objc_stub::objectForKeyedSubscript_(param_3,&cf_enableMetricKitRawPayload);
    local_4d8 = puVar1;
    local_4d0 = 0xc2000000;
    local_4c8 = FUN_1007554dc;
    puStack_4c0 = &DAT_1009e8cd8;
    local_4b8 = param_1;
    objc_stub::FUN_1007f1dc0(param_1,IVar3,&local_4d8);
  }
  IVar3 = objc_stub::objectForKeyedSubscript_(param_3,&cf_enableSpotlight);
  local_500 = puVar1;
  local_4f8 = 0xc2000000;
  local_4f0 = FUN_1007554e8;
  puStack_4e8 = &DAT_1009e8cd8;
  local_4e0 = param_1;
  objc_stub::FUN_1007f1dc0(param_1,IVar3,&local_500);
  IVar3 = objc_stub::objectForKeyedSubscript_(param_3,&cf_spotlightUrl);
  IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
  IVar3 = objc_stub::isKindOfClass_(IVar3,IVar4);
  if ((int)IVar3 != 0) {
    IVar3 = objc_stub::objectForKeyedSubscript_(param_3,&cf_spotlightUrl);
    objc_stub::FUN_1007f4c60(param_1,IVar3);
  }
  IVar3 = objc_stub::objectForKeyedSubscript_(param_3,&cf_experimental);
  IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSDictionary);
  IVar3 = objc_stub::isKindOfClass_(IVar3,IVar4);
  if ((int)IVar3 != 0) {
    IVar3 = objc_stub::FUN_1007e9740(param_1);
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_experimental);
    objc_stub::FUN_1007f7fa0(IVar3,IVar4);
  }
  return 1;
}

