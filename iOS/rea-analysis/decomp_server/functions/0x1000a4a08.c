// rea decompile_all
// name: FUN_1000a4a08
// address: 0x1000a4a08
// body: available
// range: 0x1000a4a08-0x1000a4cc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_1000a4a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             byte param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined1 auStack_120 [16];
  long alStack_110 [4];
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  long local_d8;
  undefined8 local_d0;
  long local_c8;
  undefined1 auStack_c0 [16];
  undefined1 local_70;
  byte bStack_6f;
  undefined6 uStack_6e;
  undefined8 local_68;
  
  lVar5 = 0;
  __s10Foundation4DateVMa();
  local_d8 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_d8 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_c8 = (long)&local_f0 + lVar1;
  local_70 = 0;
  bStack_6f = 0;
  uStack_6e = 0;
  local_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x19);
  _swift_bridgeObjectRelease(local_68);
  local_70 = 0x17;
  bStack_6f = 0;
  uStack_6e = 0xd00000000000;
  local_68 = 0x8000000100880eb0;
  __sSS6appendyySSF(param_1,param_2);
  uVar4 = local_68;
  uVar2 = CONCAT62(uStack_6e,CONCAT11(bStack_6f,local_70));
  local_d0 = param_3;
  FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
  __sSo17OS_dispatch_queueC8DispatchE11getSpecific3keyxSgAC0dF3KeyCyxG_tlFZ
            (&local_70,*(undefined8 *)(unaff_x20 + 0x18));
  if ((bStack_6f & 1) == 0) {
    __s10Foundation4DateVACycfC(local_c8);
    uVar6 = 0;
    FUN_100401b14();
    local_f0 = param_4;
    local_e8 = uVar6;
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined8 *)((long)alStack_110 + lVar1 + 0x10) = uVar2;
    *(undefined8 *)((long)alStack_110 + lVar1 + 0x18) = uVar4;
    local_e0 = lVar5;
    FUN_1003fb48c(FUN_1000aab88,(long)alStack_110 + lVar1,extraout_x12 + 0x6a,0x8000000100880950,
                  0xd00000000000002a,0x8000000100880ed0,0x21e,0);
    FUN_1000a4cc4(param_1,param_2,local_d0,local_f0,param_5 & 1);
    local_70 = (undefined1)param_1;
    bStack_6f = (byte)((ulong)param_1 >> 8);
    uStack_6e = (undefined6)((ulong)param_1 >> 0x10);
    local_68 = param_2;
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined8 *)((long)alStack_110 + lVar1) = uVar2;
    *(undefined8 *)((long)alStack_110 + lVar1 + 8) = uVar4;
    lVar5 = local_c8;
    *(long *)((long)alStack_110 + lVar1 + 0x10) = local_c8;
    FUN_1003fb48c(FUN_1000aaba0,auStack_120 + lVar1,0xd000000000000094,0x8000000100880950,
                  0xd00000000000002a,0x8000000100880ed0,0x220,0);
    _swift_bridgeObjectRelease(uVar4);
    (**(code **)(local_d8 + 8))(lVar5,local_e0);
  }
  else {
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined8 *)((long)alStack_110 + lVar1) = uVar2;
    *(undefined8 *)((long)alStack_110 + lVar1 + 8) = uVar4;
    *(code **)((long)alStack_110 + lVar1 + 0x10) = FUN_1000aab20;
    *(undefined1 **)((long)alStack_110 + lVar1 + 0x18) = auStack_c0;
    __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
              (&local_70,FUN_1000aab58,auStack_120 + lVar1,&DAT_10099a310);
    _swift_bridgeObjectRelease(uVar4);
  }
  auVar3[1] = bStack_6f;
  auVar3[0] = local_70;
  auVar3._2_6_ = uStack_6e;
  auVar3._8_8_ = local_68;
  return auVar3;
}

