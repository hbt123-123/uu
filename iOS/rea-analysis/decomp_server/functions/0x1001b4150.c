// rea decompile_all
// name: FUN_1001b4150
// address: 0x1001b4150
// body: available
// range: 0x1001b4150-0x1001b436f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001b4150(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_b0 [16];
  undefined4 local_a0;
  undefined8 local_98;
  long lStack_90;
  ulong local_88;
  undefined1 auStack_78 [24];
  
  uVar2 = param_3;
  FUN_10010bd10();
  FUN_100123d80();
  uVar3 = uVar2;
  FUN_10010bd10(param_3,param_4);
  FUN_100123b54(param_3,param_4);
  if (uVar2 >> 0x3e == 1) {
    lVar1 = param_2;
    FUN_1001232e0(param_1,param_2,uVar2 & 0x3fffffffffffffff);
    if (lVar1 == 0) goto LAB_1001b4274;
    _swift_bridgeObjectRelease(lVar1);
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_a0 = (undefined4)param_5;
  local_98 = param_1;
  lStack_90 = param_2;
  local_88 = uVar2;
  FUN_1003fb48c(thunk_FUN_1001b5698,auStack_b0,0xd000000000000095,0x8000000100877f50,
                0xd000000000000055,0x800000010089b050,0x234,0);
LAB_1001b4274:
  _swift_beginAccess(param_6 + 0x10,auStack_78,0,0);
  param_6 = param_6 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_6 == 0) {
    FUN_10012390c(param_1,param_2,uVar2);
    FUN_10012390c(param_3,param_4,uVar3);
  }
  else if (*(long *)(param_6 + _TtC14UURemoteServer15StreamerManager::dispatcher) == 0) {
    FUN_10012390c(param_1,param_2,uVar2);
    FUN_10012390c(param_3,param_4,uVar3);
  }
  else {
    FUN_100124d7c(param_5,param_1,param_2,uVar2,param_3,param_4,uVar3);
    FUN_10012390c(param_1,param_2,uVar2);
    FUN_10012390c(param_3,param_4,uVar3);
  }
  return;
}

