// rea decompile_all
// name: FUN_1001b2530
// address: 0x1001b2530
// body: available
// range: 0x1001b2530-0x1001b26e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001b2530(undefined8 param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_a0 [16];
  undefined4 local_90;
  undefined8 local_88;
  long lStack_80;
  ulong local_78;
  undefined1 auStack_68 [24];
  
  uVar2 = param_3;
  FUN_10010bd10();
  FUN_100123f30();
  if (uVar2 >> 0x3e == 1) {
    lVar1 = param_2;
    FUN_1001232e0(param_1,param_2,uVar2 & 0x3fffffffffffffff);
    if (lVar1 == 0) goto LAB_1001b2624;
    _swift_bridgeObjectRelease(lVar1);
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_90 = (undefined4)param_3;
  local_88 = param_1;
  lStack_80 = param_2;
  local_78 = uVar2;
  FUN_1003fb48c(thunk_FUN_1001b5698,auStack_a0,0xd000000000000095,0x8000000100877f50,
                0xd00000000000002c,0x800000010089b250,0x1e9,0);
LAB_1001b2624:
  _swift_beginAccess(param_4 + 0x10,auStack_68,0,0);
  param_4 = param_4 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_4 == 0) {
    FUN_10012390c(param_1,param_2,uVar2);
  }
  else if (*(long *)(param_4 + _TtC14UURemoteServer15StreamerManager::dispatcher) == 0) {
    FUN_10012390c(param_1,param_2,uVar2);
  }
  else {
    FUN_100124848(param_3,param_1,param_2,uVar2,3);
    FUN_10012390c(param_1,param_2,uVar2);
  }
  return;
}

