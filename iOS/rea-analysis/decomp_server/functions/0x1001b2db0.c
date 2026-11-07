// rea decompile_all
// name: FUN_1001b2db0
// address: 0x1001b2db0
// body: available
// range: 0x1001b2db0-0x1001b2f23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001b2db0(undefined4 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_b0 [16];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined1 auStack_90 [16];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  FUN_100401b14(0);
  local_80 = param_1;
  uStack_7c = param_2;
  FUN_1003fb48c(thunk_FUN_1001b5640,auStack_90,0xd000000000000095,0x8000000100877f50,
                0xd00000000000002a,0x800000010089b1c0,0x1ff,0);
  _swift_beginAccess(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if ((param_3 != 0) &&
     (lVar1 = *(long *)(param_3 + _TtC14UURemoteServer15StreamerManager::dispatcher), lVar1 != 0)) {
    (*(code *)PTR____chkstk_darwin_100995498)(0);
    local_a0 = param_1;
    uStack_9c = param_2;
    FUN_1003fb48c(FUN_100126514,auStack_b0,0xd000000000000098,0x800000010088de90,0xd000000000000022,
                  0x800000010088e000,0x85,0);
    lVar1 = *(long *)(lVar1 + _TtC14UURemoteServer18StreamerDispatcher::room);
    _swift_beginAccess(lVar1 + 0x28,auStack_70,1,0);
    *(undefined4 *)(lVar1 + 0x28) = param_2;
  }
  return;
}

