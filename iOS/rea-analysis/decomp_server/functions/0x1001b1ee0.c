// rea decompile_all
// name: FUN_1001b1ee0
// address: 0x1001b1ee0
// body: available
// range: 0x1001b1ee0-0x1001b2043 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001b1ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 auStack_90 [16];
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 auStack_58 [24];
  
  uVar1 = param_3;
  FUN_10010bd10();
  FUN_100123b54();
  FUN_100401b14(0);
  local_80 = (undefined4)param_3;
  local_78 = param_1;
  uStack_70 = param_2;
  local_68 = uVar1;
  FUN_1003fb45c(thunk_FUN_1001b5698,auStack_90,0xd000000000000095,0x8000000100877f50,
                0xd00000000000002d,0x800000010089b2e0,0x1ca,0);
  _swift_beginAccess(param_4 + 0x10,auStack_58,0,0);
  param_4 = param_4 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_4 == 0) {
    FUN_10012390c(param_1,param_2,uVar1);
  }
  else if (*(long *)(param_4 + _TtC14UURemoteServer15StreamerManager::dispatcher) == 0) {
    FUN_10012390c(param_1,param_2,uVar1);
  }
  else {
    FUN_100124848(param_3,param_1,param_2,uVar1,0);
    FUN_10012390c(param_1,param_2,uVar1);
  }
  return;
}

