// rea decompile_all
// name: FUN_1001b4550
// address: 0x1001b4550
// body: available
// range: 0x1001b4550-0x1001b467f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001b4550(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined1 auStack_90 [16];
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  uVar1 = 0;
  FUN_100401b14(0);
  local_80 = param_1;
  local_78 = param_2;
  uStack_70 = param_3;
  local_68 = param_4;
  uStack_60 = param_5;
  FUN_1003fb48c(uVar1,FUN_1001b55c8,auStack_90,0xd000000000000095,0x8000000100877f50,
                0xd000000000000042,0x800000010089b000,0x23c,0);
  _swift_beginAccess(param_6 + 0x10,auStack_58,0,0);
  param_6 = param_6 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if ((param_6 != 0) &&
     (*(long *)(param_6 + _TtC14UURemoteServer15StreamerManager::dispatcher) != 0)) {
    uVar1 = 0;
    FUN_1001242d0(0);
    FUN_1000b10bc(param_2,param_3,param_4,param_5);
    _swift_release(uVar1);
  }
  return;
}

