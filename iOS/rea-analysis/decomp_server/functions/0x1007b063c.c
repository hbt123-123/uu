// rea decompile_all
// name: SentryBaseIntegration::shouldBeEnabledWithOptions:
// address: 0x1007b063c
// body: available
// range: 0x1007b063c-0x1007b089b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryBaseIntegration::shouldBeEnabledWithOptions_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  uint uVar4;
  double extraout_d0;
  
  IVar2 = objc_stub::FUN_1007eca40(param_1);
  uVar4 = (uint)IVar2;
  if (((IVar2 & 1) == 0) || (IVar2 = objc_stub::FUN_1007e8bc0(param_3), (IVar2 & 1) != 0)) {
    if (((uVar4 >> 1 & 1) != 0) && (IVar2 = objc_stub::FUN_1007e8ec0(param_3), (IVar2 & 1) == 0)) {
      pcVar3 = &cf_enableWatchdogTerminationTracking;
      goto LAB_1007b0870;
    }
    if (((uVar4 >> 2 & 1) != 0) && (IVar2 = objc_stub::FUN_1007e8ba0(param_3), (IVar2 & 1) == 0)) {
      pcVar3 = &cf_enableAutoPerformanceTracing;
      goto LAB_1007b0870;
    }
    if ((uVar4 >> 6 & 1) != 0) {
      IVar2 = objc_stub::FUN_1007e8b40(param_3);
      if ((IVar2 & 1) == 0) {
        pcVar3 = &cf_enableAppHangTracking;
        goto LAB_1007b0870;
      }
      objc_stub::FUN_1007e5560(param_3);
      if (extraout_d0 == 0.0) {
        pcVar3 = &cf_becauseappHangTimeoutIntervalis0;
        goto LAB_1007b0794;
      }
    }
    if (((uVar4 >> 7 & 1) == 0) ||
       (IVar2 = objc_stub::enableNetworkTracking(param_3), (IVar2 & 1) != 0)) {
      if (((uVar4 >> 8 & 1) == 0) || (IVar2 = objc_stub::FUN_1007e8c60(param_3), (IVar2 & 1) != 0))
      {
        if (((uVar4 >> 9 & 1) == 0) ||
           (IVar2 = objc_stub::enableNetworkBreadcrumbs(param_3), (IVar2 & 1) != 0)) {
          if (((uVar4 >> 10 & 1) == 0) ||
             (IVar2 = objc_stub::FUN_1007e8c00(param_3), (IVar2 & 1) != 0)) {
            if (((uVar4 >> 0xb & 1) == 0) ||
               (IVar2 = objc_stub::enableSwizzling(param_3), (IVar2 & 1) != 0)) {
              if (((uVar4 >> 0xc & 1) == 0) ||
                 (IVar2 = objc_stub::FUN_1007e8b80(param_3), (IVar2 & 1) != 0)) {
                if (((uVar4 >> 0xd & 1) == 0) ||
                   (IVar2 = objc_stub::FUN_1007ed540(param_3), (IVar2 & 1) != 0)) {
                  if ((uVar4 >> 0xe & 1) != 0) {
                    IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer)
                    ;
                    IVar2 = objc_stub::FUN_1007e7520(IVar2);
                    IVar2 = objc_stub::FUN_1007ecc20(IVar2);
                    if ((int)IVar2 != 0) {
                      pcVar3 = &cf_becausethedebuggerisattached;
LAB_1007b0794:
                      objc_stub::FUN_1007edde0(param_1,pcVar3);
                      return 0;
                    }
                  }
                  if (((uVar4 >> 0x10 & 1) == 0) ||
                     (IVar2 = objc_stub::FUN_1007e8c20(param_3), (IVar2 & 1) != 0)) {
                    iVar1 = 1;
                    FUN_1007070fc(1,0xc,0,0);
                    if (iVar1 == 0) {
                      return 1;
                    }
                    if ((uVar4 >> 0x11 & 1) == 0) {
                      return 1;
                    }
                    IVar2 = objc_stub::FUN_1007e8d40(param_3);
                    if ((IVar2 & 1) != 0) {
                      return 1;
                    }
                    pcVar3 = &cf_enableMetricKit;
                  }
                  else {
                    pcVar3 = &cf_enableCrashHandler;
                  }
                }
                else {
                  pcVar3 = &cf_isTracingEnabled;
                }
              }
              else {
                pcVar3 = &cf_enableAutoBreadcrumbTracking;
              }
            }
            else {
              pcVar3 = &cf_enableSwizzling;
            }
          }
          else {
            pcVar3 = &cf_enableCoreDataTracing;
          }
        }
        else {
          pcVar3 = &cf_enableNetworkBreadcrumbs;
        }
      }
      else {
        pcVar3 = &cf_enableFileIOTracing;
      }
    }
    else {
      pcVar3 = &cf_enableNetworkTracking;
    }
  }
  else {
    pcVar3 = &cf_enableAutoSessionTracking;
  }
LAB_1007b0870:
  objc_stub::logWithOptionName_(param_1,pcVar3);
  return 0;
}

