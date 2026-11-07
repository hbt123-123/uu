// rea decompile_all
// name: FUN_10019e718
// address: 0x10019e718
// body: available
// range: 0x10019e718-0x10019e8e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10019e718(undefined4 param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 local_170;
  undefined8 local_168;
  undefined8 local_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  lVar2 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = (undefined8 *)((long)&local_260 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  uVar4 = *(undefined8 *)(DAT_100b360a8 + 0xa8);
  local_168 = uVar4;
  FUN_100125fe0();
  uVar1 = 4;
  if ((param_2 & 0xff) != 5) {
    uVar1 = (char)param_2;
  }
  lStack_258 = (long)param_3;
  local_260._4_4_ = CONCAT31(local_260._5_3_,uVar1);
  local_260._0_4_ = param_1;
  FUN_1001264f0(&local_260);
  uStack_98 = uStack_198;
  local_a0 = local_1a0;
  uStack_88 = uStack_188;
  uStack_90 = uStack_190;
  uStack_78 = uStack_178;
  local_80 = local_180;
  local_70 = local_170;
  uStack_d8 = uStack_1d8;
  local_e0 = local_1e0;
  uStack_c8 = uStack_1c8;
  uStack_d0 = uStack_1d0;
  uStack_b8 = uStack_1b8;
  local_c0 = local_1c0;
  uStack_a8 = uStack_1a8;
  uStack_b0 = uStack_1b0;
  uStack_118 = uStack_218;
  local_120 = local_220;
  uStack_108 = uStack_208;
  uStack_110 = uStack_210;
  uStack_f8 = uStack_1f8;
  local_100 = local_200;
  uStack_e8 = uStack_1e8;
  uStack_f0 = uStack_1f0;
  local_160 = CONCAT44(local_260._4_4_,(undefined4)local_260);
  lStack_158 = lStack_258;
  uStack_148 = uStack_248;
  uStack_150 = uStack_250;
  uStack_138 = uStack_238;
  local_140 = local_240;
  uStack_128 = uStack_228;
  uStack_130 = uStack_230;
  *puVar5 = 1;
  (**(code **)(lVar6 + 0x68))
            (puVar5,*(undefined4 *)PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_100995f20,
             lVar2);
  FUN_100004b70(0);
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ(uVar4);
  uVar3 = 0;
  FUN_1000fd494(0);
  FUN_1005d68b4(&local_160,puVar5,uVar4,0,0,uVar3,&PTR_PTR_10099cbd8);
  (**(code **)(lVar6 + 8))(puVar5,lVar2);
  return 0;
}

