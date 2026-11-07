// rea decompile_all
// name: FUN_1001605c4
// address: 0x1001605c4
// body: available
// range: 0x1001605c4-0x100160837 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001605c4(ulong param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long lVar4;
  undefined1 auStack_c0 [16];
  long lStack_b0;
  undefined4 auStack_a8 [2];
  long alStack_a0 [2];
  undefined8 local_90 [2];
  char local_79;
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar4 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)local_90 + lVar1;
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 == 0) {
    FUN_100401b14();
    FUN_1003fb4bc(FUN_100160838,0,0xd0000000000000a4,0x800000010088d870,0xd000000000000020,
                  0x80000001008945d0,0x273,0);
  }
  else {
    if (*(long *)(param_2 + _TtC14UURemoteServer18ClipboardPCManager::incomingDrop) != 0 &&
        *(long *)(param_2 + _TtC14UURemoteServer18ClipboardPCManager::incomingDrop) == param_3) {
      __s10Foundation4DateVACycfC(lVar3);
      local_90[0] = param_5;
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(long *)((long)&lStack_b0 + lVar1) = param_3;
      *(int *)((long)auStack_a8 + lVar1) = (int)param_4;
      *(long *)((long)alStack_a0 + lVar1) = lVar3;
      FUN_100407cdc(&local_79,FUN_10016c534,auStack_c0 + lVar1,PTR___sSbN_1009958c8);
      (**(code **)(lVar4 + 8))(lVar3,lVar2);
      if (local_79 == '\x01') {
        if ((param_1 & 1) != 0) {
          FUN_100160914(param_3,local_90[0],param_4);
          return;
        }
        FUN_10015659c(0x1000000000000015,0x8000000100894720);
        return;
      }
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(int *)((long)alStack_a0 + lVar1) = (int)param_4;
    FUN_1003fb48c(FUN_10016bf70,(long)&lStack_b0 + lVar1,0xd0000000000000a4,0x800000010088d870,
                  0xd000000000000020,0x80000001008945d0,0x277,0);
  }
  return;
}

