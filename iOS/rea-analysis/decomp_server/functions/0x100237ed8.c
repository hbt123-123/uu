// rea decompile_all
// name: FUN_100237ed8
// address: 0x100237ed8
// body: available
// range: 0x100237ed8-0x100238053 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100237ed8(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  if (DAT_100a7de18 != -1) {
    _swift_once(&DAT_100a7de18,FUN_100234ab4);
  }
  _swift_beginAccess(&DAT_100b36340,auStack_58,0,0);
  puVar1 = (ulong *)(DAT_100b36340 + FCountAppConfig::uid);
  _swift_beginAccess(puVar1,auStack_70,0,0);
  uVar3 = puVar1[1];
  if (uVar3 == 0) {
    if (param_2 == 0) goto LAB_100237fd4;
  }
  else if ((param_2 != 0) &&
          ((uVar2 = *puVar1, uVar2 == param_1 && uVar3 == param_2 ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar2,uVar3,param_1,param_2,0), (uVar2 & 1) != 0)))) goto LAB_100237fd4;
  FUN_100237814(0);
  FUN_100232e2c(0);
  _objc_allocWithZone();
  FUN_100233c5c(&DAT_d000000000000013,0x80000001008a6020,0);
  FUN_100234814();
LAB_100237fd4:
  puVar1 = (ulong *)(DAT_100b36340 + FCountAppConfig::uid);
  _swift_beginAccess(puVar1,auStack_88,1,0);
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRelease(uVar3);
  return;
}

