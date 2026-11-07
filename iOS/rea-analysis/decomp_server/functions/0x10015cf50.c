// rea decompile_all
// name: FUN_10015cf50
// address: 0x10015cf50
// body: available
// range: 0x10015cf50-0x10015d1a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10015cf50(long *param_1,long param_2,uint *param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long extraout_x12;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_1f0 [16];
  uint *local_1e0 [2];
  uint *local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined1 local_1a0;
  uint local_198 [2];
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined1 local_178;
  undefined8 local_170;
  uint local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [160];
  ulong local_b0 [6];
  ulong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    param_2 = param_2 + _TtC14UURemoteServer18ClipboardPCManager::managerDelegate;
    _swift_unknownObjectWeakLoadStrong();
    if (param_2 == 0) {
      FUN_100401b14();
      (*(code *)PTR____chkstk_darwin_100995498)();
      uStack_1c8 = 0xd000000000000016;
      local_1c0 = 0x8000000100894920;
      uStack_1b8 = 0;
      local_1d0 = param_3;
      FUN_1003fb4ec(thunk_FUN_10016b3d8,local_1e0,0xd0000000000000a4,0x800000010088d870,
                    0xd00000000000001c,0x8000000100893100,0x1a6,7);
    }
    else {
      uVar1 = *param_3;
      local_b0[0] = (ulong)uVar1;
      uVar2 = param_3[1];
      uStack_80 = (ulong)uVar2;
      uVar5 = *(undefined8 *)(param_3 + 4);
      local_1a0 = 1;
      uStack_1a8 = 0xc000000000000000;
      local_1b0 = 0;
      local_b0[2] = 0xc000000000000000;
      local_b0[1] = 0;
      local_b0[3] = 2;
      local_b0[4] = 1;
      uStack_70 = 0xe000000000000000;
      local_78 = 0;
      local_b0[5] = uVar5;
      FUN_100193df4(auStack_150,local_b0);
      FUN_1001bddd8(param_4,auStack_150);
      uVar3 = 0;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)(uVar3);
      local_1d0 = (uint *)0x8000000100894920;
      uStack_1c8 = 0;
      local_1c0 = CONCAT44(local_1c0._4_4_,(int)param_4);
      local_1e0[0] = param_3;
      FUN_1003fb4ec(thunk_FUN_10016c040,auStack_1f0,extraout_x12 + 0x8e,0x800000010088d870,
                    extraout_x12 + 6,0x8000000100893100,0x1b1,7);
      FUN_10016b308(auStack_150);
      _swift_unknownObjectRelease(param_2);
      uStack_188 = uStack_1a8;
      local_190 = local_1b0;
      local_180 = 2;
      local_178 = local_1a0;
      uStack_158 = uStack_1a8;
      local_160 = local_1b0;
      local_198[0] = uVar1;
      local_170 = uVar5;
      local_168 = uVar2;
      FUN_10016b3e8(local_198);
    }
  }
  else {
    _swift_retain(lVar4);
    FUN_10015c814();
    _swift_release(lVar4);
  }
  return;
}

