// rea decompile_all
// name: FUN_100786ab4
// address: 0x100786ab4
// body: available
// range: 0x100786ab4-0x100786cbb inclusive
// range: 0x100786cc0-0x100786cdf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100786cb8 to 0x1007de008 ___assert_rtn (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100786ab4(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong *param_4,
                   undefined1 *param_5,ulong param_6,long param_7)

{
  kern_return_t kVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  natural_t anStack_390 [58];
  undefined8 *local_2a8;
  ulong local_2a0;
  long local_290;
  mach_msg_type_number_t local_64;
  
  puVar6 = (undefined8 *)&stack0xfffffffffffffff0;
  if (param_3 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    ___assert_rtn("backtrace","SentryBacktrace.cpp",0x2d,"addresses != nullptr");
  }
  if ((param_6 != 0) && (*param_4 != 0)) {
    if (param_4[1] == 0) {
      return 0;
    }
    if (*param_4 <= param_4[1]) {
      return 0;
    }
    uVar2 = param_1;
    FUN_10079b114();
    local_64 = 0x44;
    kVar1 = _thread_get_state((thread_act_t)uVar2,6,anStack_390,&local_64);
    if (kVar1 == 0) {
      if (param_7 != 0) {
        uVar4 = 0;
        lVar8 = param_7 + -1;
      }
      else {
        lVar8 = 0;
        uVar4 = local_290 - 4;
        *param_3 = uVar4;
      }
      uVar7 = (ulong)(param_7 == 0);
      if ((((uVar7 < param_6) && (uVar4 = local_2a0, param_4[1] < local_2a0)) &&
          ((local_2a0 & 0xf) == 0)) && (local_2a0 < *param_4 - 0x10)) {
        if (lVar8 == 0) {
          param_3[uVar7] = local_2a0 - 4;
          uVar7 = uVar7 + 1;
          uVar4 = local_2a0 - 4;
        }
        else {
          lVar8 = lVar8 + -1;
        }
      }
      FUN_10079b538(uVar4,param_2,param_1);
      if ((int)param_2 == 0) {
        puVar6 = local_2a8;
      }
      if ((undefined8 *)param_4[1] < puVar6) {
        if (((ulong)puVar6 & 0xf) != 0) {
          return 0;
        }
        if ((undefined8 *)(*param_4 - 0x10) <= puVar6) {
          return 0;
        }
        while ((uVar7 < param_6 && (puVar5 = puVar6, FUN_1007ae524(puVar6,0x10), (int)puVar5 != 0)))
        {
          if (lVar8 == 0) {
            param_3[uVar7] = puVar6[1] - 4;
            uVar7 = uVar7 + 1;
          }
          else {
            lVar8 = lVar8 + -1;
          }
          puVar5 = (undefined8 *)*puVar6;
          uVar3 = 1;
          if (((puVar5 <= puVar6) || (puVar5 <= (undefined8 *)param_4[1])) ||
             ((uVar3 = 1, ((ulong)puVar5 & 0xf) != 0 ||
              (puVar6 = puVar5, (undefined8 *)(*param_4 - 0x10) <= puVar5)))) goto LAB_100786c70;
        }
        uVar3 = 0;
LAB_100786c70:
        if (param_5 == (undefined1 *)0x0) {
          return uVar7;
        }
        *param_5 = uVar3;
        return uVar7;
      }
    }
    else {
      FUN_1007b02e4("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryBacktrace.cpp"
                    ,0x34,"Failed to fill thread state");
    }
  }
  return 0;
}

