// rea decompile_all
// name: FUN_1001f3acc
// address: 0x1001f3acc
// body: available
// range: 0x1001f3acc-0x1001f3e57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1001f3acc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_120 [16];
  ulong auStack_110 [4];
  undefined1 auStack_f0 [16];
  long alStack_e0 [6];
  undefined1 *local_b0;
  char *local_a8;
  char *pcStack_a0;
  long local_98;
  undefined8 local_90;
  long local_88;
  ulong local_80;
  ulong local_70;
  undefined8 uStack_68;
  
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&local_b0 + lVar1;
  lVar7 = *(long *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::tmuxController);
  if (lVar7 != 0) {
    lVar5 = ((undefined8 *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::tmuxSessionName))[1];
    if (lVar5 != 0) {
      uVar9 = *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::tmuxSessionName);
      local_70 = 0x6863617474616572;
      uStack_68 = 0xe90000000000003a;
      local_98 = lVar4;
      _swift_retain(lVar7);
      _swift_bridgeObjectRetain(lVar5);
      __sSS6appendyySSF(uVar9,lVar5);
      local_80 = local_70;
      local_90 = uStack_68;
      local_88 = lVar6;
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(long *)((long)alStack_e0 + lVar1) = lVar7;
      *(undefined8 *)((long)alStack_e0 + lVar1 + 8) = uVar9;
      *(long *)((long)alStack_e0 + lVar1 + 0x10) = lVar5;
      *(long *)((long)alStack_e0 + lVar1 + 0x18) = unaff_x20;
      *(undefined8 *)((long)alStack_e0 + lVar1 + 0x20) = param_1;
      *(undefined8 *)((long)alStack_e0 + lVar1 + 0x28) = param_2;
      FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
      __sSo17OS_dispatch_queueC8DispatchE11getSpecific3keyxSgAC0dF3KeyCyxG_tlFZ
                (&local_70,*(undefined8 *)(lVar7 + 0x18));
      if ((local_70 & 0x100) == 0) {
        __s10Foundation4DateVACycfC(lVar6);
        FUN_100401b14(0);
        local_b0 = auStack_f0 + lVar1;
        (*(code *)PTR____chkstk_darwin_100995498)();
        uVar3 = local_90;
        *(ulong *)((long)auStack_110 + lVar1 + 0x10) = local_80;
        *(undefined8 *)((long)auStack_110 + lVar1 + 0x18) = uVar3;
        local_a8 = "set-client-ignore-size:";
        pcStack_a0 = "socketPath";
        FUN_1003fb48c(thunk_FUN_1001fa460,(long)auStack_110 + lVar1,0xd000000000000094,
                      0x8000000100880950,0xd00000000000002a,0x8000000100880ed0,0x21e,0);
        puVar2 = local_b0;
        FUN_1001f68ac(&local_70,lVar7,uVar9,lVar5);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(ulong *)(puVar2 + -0x20) = local_80;
        *(undefined8 *)(puVar2 + -0x18) = uVar3;
        *(long *)(puVar2 + -0x10) = lVar6;
        FUN_1003fb48c(thunk_FUN_1001fa468,puVar2 + -0x30,0xd000000000000094,
                      (ulong)pcStack_a0 | 0x8000000000000000,0xd00000000000002a,
                      (ulong)local_a8 | 0x8000000000000000,0x220,0);
        _swift_bridgeObjectRelease(uVar3);
        _swift_release(lVar7);
        _swift_bridgeObjectRelease(lVar5);
        (**(code **)(lVar8 + 8))(lVar6,local_98);
      }
      else {
        (*(code *)PTR____chkstk_darwin_100995498)();
        uVar9 = local_90;
        *(ulong *)((long)auStack_110 + lVar1) = local_80;
        *(undefined8 *)((long)auStack_110 + lVar1 + 8) = uVar9;
        *(code **)((long)auStack_110 + lVar1 + 0x10) = FUN_1001fa5d8;
        *(undefined1 **)((long)auStack_110 + lVar1 + 0x18) = auStack_f0 + lVar1;
        __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
                  (&local_70,FUN_1001fa5e8,auStack_120 + lVar1,&DAT_1009a4e18);
        _swift_release(lVar7);
        _swift_bridgeObjectRelease(lVar5);
        _swift_bridgeObjectRelease(uVar9);
      }
      goto LAB_1001f3e38;
    }
  }
  FUN_100401b14(0);
  FUN_1003fb4ec(FUN_1001fa5d0);
  uStack_68 = 0x80000001008a10f0;
  local_70 = 0x1000000000000014;
LAB_1001f3e38:
  auVar10._8_8_ = uStack_68;
  auVar10._0_8_ = local_70;
  return auVar10;
}

