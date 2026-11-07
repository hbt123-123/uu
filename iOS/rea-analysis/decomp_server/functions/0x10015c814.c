// rea decompile_all
// name: FUN_10015c814
// address: 0x10015c814
// body: available
// range: 0x10015c814-0x10015cb73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10015c814(long param_1,long param_2,uint *param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined1 auStack_210 [16];
  uint *local_200;
  undefined8 uStack_1f8;
  uint *local_1f0;
  undefined8 uStack_1e8;
  long local_1e0;
  uint *puStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined1 local_1b8;
  uint local_1b0 [2];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined1 local_190;
  undefined8 local_188;
  uint local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [160];
  ulong local_b0 [6];
  ulong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar1 = param_2 + _TtC14UURemoteServer18ClipboardPCManager::dragTransfer;
  _swift_beginAccess(lVar1,auStack_168,0,0);
  lVar5 = 0;
  FUN_100127240();
  pcVar6 = (code *)(ulong)*(uint *)(param_1 + 0x14);
  FUN_100152fd0(pcVar6,*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x28)));
  if (((ulong)pcVar6 & 1) == 0) {
    if (param_3[2] - 3 < 2) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      pcVar6 = FUN_10016c030;
      local_1e0 = param_1;
      puStack_1d8 = param_3;
      FUN_1003fb48c(FUN_10016c030,&local_1f0,0xd0000000000000a4,0x800000010088d870,
                    0xd000000000000016,0x8000000100894940,0x1bb,7);
    }
    FUN_1001536d4();
    FUN_100145fd0(param_1);
    _swift_release(pcVar6);
  }
  else {
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_10016c038,param_1,0xd0000000000000a4,0x800000010088d870,0xd000000000000016,
                  0x8000000100894940,0x1b6,0);
    param_2 = param_2 + _TtC14UURemoteServer18ClipboardPCManager::managerDelegate;
    _swift_unknownObjectWeakLoadStrong();
    if (param_2 == 0) {
      (*(code *)PTR____chkstk_darwin_100995498)();
      uStack_1e8 = 0x5464657269746572;
      local_1e0 = 0xeb000000006b7361;
      puStack_1d8 = (uint *)0x0;
      local_1f0 = param_3;
      FUN_1003fb4ec(thunk_FUN_10016b3d8,&local_200,0xd0000000000000a4,0x800000010088d870,
                    0xd00000000000001c,0x8000000100893100,0x1a6,7);
    }
    else {
      uVar2 = *param_3;
      local_b0[0] = (ulong)uVar2;
      uVar3 = param_3[1];
      uStack_80 = (ulong)uVar3;
      uVar7 = *(undefined8 *)(param_3 + 4);
      local_1b8 = 1;
      uStack_1c8 = 0xc000000000000000;
      local_1d0 = 0;
      local_b0[2] = 0xc000000000000000;
      local_b0[1] = 0;
      local_b0[3] = 2;
      local_b0[4] = 1;
      uStack_70 = 0xe000000000000000;
      local_78 = 0;
      local_b0[5] = uVar7;
      FUN_100193df4(auStack_150,local_b0);
      FUN_1001bddd8(param_4,auStack_150);
      uVar4 = (undefined4)param_4;
      (*(code *)PTR____chkstk_darwin_100995498)();
      uStack_1f8 = 0x5464657269746572;
      local_1f0 = (uint *)0xeb000000006b7361;
      uStack_1e8 = 0;
      local_1e0 = CONCAT44(local_1e0._4_4_,uVar4);
      local_200 = param_3;
      FUN_1003fb4ec(thunk_FUN_10016c040,auStack_210,0xd0000000000000a4,0x800000010088d870,
                    0xd00000000000001c,0x8000000100893100,0x1b1,7);
      FUN_10016b308(auStack_150);
      _swift_unknownObjectRelease(param_2);
      uStack_1a0 = uStack_1c8;
      local_1a8 = local_1d0;
      local_198 = 2;
      local_190 = local_1b8;
      uStack_170 = uStack_1c8;
      local_178 = local_1d0;
      local_1b0[0] = uVar2;
      local_188 = uVar7;
      local_180 = uVar3;
      FUN_10016b3e8(local_1b0);
    }
  }
  return;
}

