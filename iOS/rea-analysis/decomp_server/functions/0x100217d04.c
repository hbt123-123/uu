// rea decompile_all
// name: FUN_100217d04
// address: 0x100217d04
// body: available
// range: 0x100217d04-0x100218073 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100217d04(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_200;
  undefined8 local_1f8;
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
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  
  uStack_168 = param_1[0x11];
  local_170 = param_1[0x10];
  uStack_158 = param_1[0x13];
  uStack_160 = param_1[0x12];
  local_150 = *(undefined1 *)(param_1 + 0x14);
  uStack_1a8 = param_1[9];
  local_1b0 = param_1[8];
  uStack_198 = param_1[0xb];
  uStack_1a0 = param_1[10];
  uStack_188 = param_1[0xd];
  local_190 = param_1[0xc];
  uStack_178 = param_1[0xf];
  uStack_180 = param_1[0xe];
  uStack_1e8 = param_1[1];
  local_1f0 = *param_1;
  uStack_1d8 = param_1[3];
  uStack_1e0 = param_1[2];
  uStack_1c8 = param_1[5];
  local_1d0 = param_1[4];
  uStack_1b8 = param_1[7];
  uStack_1c0 = param_1[6];
  iVar1 = (int)&local_1f0;
  FUN_100217ac0();
  if (iVar1 == 1) {
    puVar3 = &local_1f0;
    FUN_100008290();
    uVar6 = *puVar3;
    local_140 = 0;
    uStack_138 = 0xe000000000000000;
    __sSS6appendyySSF(0x286572756c696166,0xe800000000000000);
    puVar2 = &DAT_100a75b40;
    local_278 = uVar6;
    FUN_100004bb4(&DAT_100a75b40,&DAT_100809bd0);
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&local_278,&local_140,puVar2,PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    __sSS6appendyySSF(0x29,0xe100000000000000);
  }
  else {
    puVar3 = &local_1f0;
    FUN_100008290();
    uStack_118 = puVar3[5];
    local_120 = puVar3[4];
    uStack_108 = puVar3[7];
    local_110 = puVar3[6];
    uVar8 = puVar3[1];
    uVar7 = *puVar3;
    uStack_128 = puVar3[3];
    uVar6 = puVar3[2];
    local_d0 = puVar3[0xe];
    uStack_e8 = puVar3[0xb];
    local_f0 = puVar3[10];
    uStack_d8 = puVar3[0xd];
    local_e0 = puVar3[0xc];
    uStack_f8 = puVar3[9];
    local_100 = puVar3[8];
    if (((local_e0 >> 8 == 0xffffffff) && ((local_d0 & 0x3000000000000000) == 0)) ||
       (((uint)(local_d0 >> 0x39) & 0x18 | (uint)(local_e0 >> 0x3d)) != 2)) {
      local_140 = 0xd000000000000015;
      uStack_138 = 0x80000001008a4710;
    }
    else {
      local_68 = (undefined1)local_e0;
      if (((uint)local_e0 & 0xff) == 3) {
        local_200 = 0;
        local_1f8 = 0xe000000000000000;
        local_140 = uVar7;
        uStack_138 = uVar8;
        local_130 = uVar6;
        local_c8 = uVar7;
        uStack_c0 = uVar8;
        local_b8 = uVar6;
        uStack_b0 = uStack_128;
        local_a8 = local_120;
        uStack_a0 = uStack_118;
        local_98 = local_110;
        uStack_90 = uStack_108;
        local_88 = local_100;
        uStack_80 = uStack_f8;
        local_78 = local_f0;
        uStack_70 = uStack_e8;
        FUN_10007f314(&local_140,&local_278,&DAT_100a75b98,&DAT_10080a1d0);
        FUN_10007f314(&local_c8,&local_278,&DAT_100a7da38,&DAT_100812f40);
        __ss11_StringGutsV4growyySiF(0x28);
        _swift_bridgeObjectRelease(local_1f8);
        local_278 = 0x2873736563637573;
        uStack_270 = 0xec0000003d727265;
        puVar2 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
        local_200 = uVar8;
        __ss23CustomStringConvertibleP11descriptionSSvgTj
                  (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar2);
        __sSS6appendyySSF(0x496b636f6c62202c,0xea00000000003d44);
        puVar5 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
        puVar2 = PTR___ss5Int32VN_100995c78;
        puVar4 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
        local_200._0_4_ = (int)uVar7;
        __ss23CustomStringConvertibleP11descriptionSSvgTj
                  (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8
                  );
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar4);
        __sSS6appendyySSF(0x4c6b636f6c62202c,0xeb000000003d6e65);
        local_200 = CONCAT44(local_200._4_4_,(int)((ulong)uVar6 >> 0x20));
        __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar2,puVar5);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar5);
        __sSS6appendyySSF(0x29,0xe100000000000000);
        FUN_100040bb4(&local_c8,&DAT_100a7da38,&DAT_100812f40);
        FUN_100040bb4(&local_140,&DAT_100a75b98,&DAT_10080a1d0);
        local_140 = local_278;
        uStack_138 = uStack_270;
      }
      else {
        uStack_138 = 0x80000001008a4730;
        local_140 = 0xd000000000000019;
      }
    }
  }
  auVar9._8_8_ = uStack_138;
  auVar9._0_8_ = local_140;
  return auVar9;
}

