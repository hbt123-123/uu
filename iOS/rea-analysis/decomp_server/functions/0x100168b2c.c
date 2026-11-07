// rea decompile_all
// name: FUN_100168b2c
// address: 0x100168b2c
// body: available
// range: 0x100168b2c-0x100168c67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100168b2c(undefined8 param_1,ulong param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_a0 [16];
  undefined4 local_90;
  undefined8 local_88;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar2 = 0;
  FUN_100401b14(0);
  local_90 = (undefined4)param_2;
  local_88 = param_1;
  FUN_1003fb4ec(uVar2,FUN_10016bb5c,auStack_a0,0xd0000000000000a4,0x800000010088d870,
                0xd000000000000029,0x80000001008939f0,0x41a,0);
  _swift_beginAccess(param_3 + 0x10,auStack_48,0,0);
  lVar3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar1 = _TtC14UURemoteServer18ClipboardPCManager::dropTasks;
  if (lVar3 != 0) {
    _swift_beginAccess(lVar3 + _TtC14UURemoteServer18ClipboardPCManager::dropTasks,auStack_60,0,0);
    uVar2 = *(undefined8 *)(lVar3 + lVar1);
    _swift_bridgeObjectRetain(uVar2);
    uVar4 = param_2;
    FUN_100152fd0(param_2,uVar2);
    _swift_bridgeObjectRelease(uVar2);
    if ((uVar4 & 1) != 0) {
      _swift_beginAccess(param_3 + 0x10,auStack_78,0,0);
      param_3 = param_3 + 0x10;
      _swift_unknownObjectWeakLoadStrong();
      if (param_3 != 0) {
        FUN_100161224(param_2);
      }
    }
  }
  return;
}

