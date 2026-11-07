// rea decompile_all
// name: FUN_1001c1db4
// address: 0x1001c1db4
// body: available
// range: 0x1001c1db4-0x1001c1f8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Type propagation algorithm not settling */

void FUN_1001c1db4(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong local_260 [4];
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168;
  ulong local_160;
  undefined8 uStack_158;
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
  
  lVar1 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = (undefined8 *)((long)local_260 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  if ((2 < param_4 >> 0x3e) && (uVar3 = param_2, FUN_1001c4078(param_2,param_3), (uVar3 & 1) == 0))
  {
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    uVar3 = *(ulong *)(DAT_100b360a8 + 0xa8);
    local_260[0] = uVar3;
    local_260[1] = param_2;
    local_260[2] = param_3;
    FUN_1001265e4(local_260 + 1);
    uStack_98 = uStack_190;
    local_a0 = local_198;
    uStack_88 = uStack_180;
    uStack_90 = uStack_188;
    uStack_78 = uStack_170;
    local_80 = local_178;
    local_70 = local_168;
    uStack_d8 = uStack_1d0;
    local_e0 = local_1d8;
    uStack_c8 = uStack_1c0;
    uStack_d0 = uStack_1c8;
    uStack_b8 = uStack_1b0;
    local_c0 = local_1b8;
    uStack_a8 = uStack_1a0;
    uStack_b0 = uStack_1a8;
    uStack_118 = uStack_210;
    local_120 = local_218;
    uStack_108 = uStack_200;
    uStack_110 = local_208;
    uStack_f8 = uStack_1f0;
    local_100 = local_1f8;
    uStack_e8 = uStack_1e0;
    uStack_f0 = local_1e8;
    uStack_158 = local_260[2];
    local_160 = local_260[1];
    uStack_148 = uStack_240;
    uStack_150 = local_260[3];
    uStack_138 = uStack_230;
    local_140 = local_238;
    uStack_128 = uStack_220;
    uStack_130 = local_228;
    *puVar4 = 1;
    (**(code **)(lVar5 + 0x68))
              (puVar4,*(undefined4 *)PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_100995f20
               ,lVar1);
    FUN_100004b70(0);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ(uVar3);
    uVar2 = 0;
    FUN_1000fd494(0);
    FUN_1005d68b4(&local_160,puVar4,uVar3,0,0,uVar2,&PTR_PTR_10099cbd8);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
  return;
}

