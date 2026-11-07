// rea decompile_all
// name: FUN_10016b144
// address: 0x10016b144
// body: available
// range: 0x10016b144-0x10016b307 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10016b144(ulong param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong local_250 [2];
  undefined1 local_240;
  undefined7 uStack_23f;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 local_160;
  undefined8 local_158;
  ulong local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  
  lVar1 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = (undefined8 *)((long)local_250 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  uVar3 = *(undefined8 *)(DAT_100b360a8 + 0xa8);
  local_250[0] = param_1 & 0xffffffff | (ulong)(param_2 & 0xff) << 0x20;
  local_250[1] = 0;
  local_240 = 5;
  local_158 = uVar3;
  FUN_10016b97c(local_250);
  uStack_88 = uStack_188;
  local_90 = local_190;
  uStack_78 = uStack_178;
  uStack_80 = uStack_180;
  uStack_68 = uStack_168;
  local_70 = local_170;
  local_60 = local_160;
  uStack_c8 = uStack_1c8;
  local_d0 = local_1d0;
  uStack_b8 = uStack_1b8;
  uStack_c0 = uStack_1c0;
  uStack_a8 = uStack_1a8;
  local_b0 = local_1b0;
  uStack_98 = uStack_198;
  uStack_a0 = uStack_1a0;
  uStack_108 = uStack_208;
  local_110 = local_210;
  uStack_f8 = uStack_1f8;
  uStack_100 = uStack_200;
  uStack_e8 = uStack_1e8;
  local_f0 = local_1f0;
  uStack_d8 = uStack_1d8;
  uStack_e0 = uStack_1e0;
  uStack_140 = CONCAT71(uStack_23f,local_240);
  uStack_148 = local_250[1];
  local_150 = local_250[0];
  uStack_138 = uStack_238;
  uStack_128 = uStack_228;
  local_130 = local_230;
  uStack_118 = uStack_218;
  uStack_120 = uStack_220;
  *puVar4 = 1;
  (**(code **)(lVar5 + 0x68))
            (puVar4,*(undefined4 *)PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_100995f20,
             lVar1);
  FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ(uVar3);
  uVar2 = 0;
  FUN_1000fd494(0);
  FUN_1005d68b4(&local_150,puVar4,uVar3,0,0,uVar2,&PTR_PTR_10099cbd8);
  (**(code **)(lVar5 + 8))(puVar4,lVar1);
  return 0;
}

