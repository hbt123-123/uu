// rea decompile_all
// name: FUN_1004f5548
// address: 0x1004f5548
// body: available
// range: 0x1004f5548-0x1004f589b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004f56d0) */
/* WARNING: Removing unreachable block (ram,0x0001004f5764) */

undefined1  [16] FUN_1004f5548(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x21;
  long lVar8;
  undefined1 auVar9 [16];
  ulong local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_15c;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined1 auStack_128 [24];
  undefined8 local_110;
  long lStack_108;
  ulong local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_bc;
  ulong local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_6c;
  
  lVar8 = *(long *)(param_1 + 0x18);
  FUN_10003f030(param_1,lVar8);
  _swift_getDynamicType();
  FUN_100532378(&local_b0);
  if (unaff_x21 == 0) {
    uStack_d8 = uStack_88;
    local_e0 = local_90;
    uStack_d0 = uStack_80;
    uStack_bc = uStack_6c;
    uStack_f8 = uStack_a8;
    local_100 = local_b0;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    FUN_10003f030(param_1,*(undefined8 *)(param_1 + 0x18));
    FUN_1005320b4();
    FUN_10052ad78(0x6570797440,0xe500000000000000);
    FUN_10052aec8(param_2,param_3);
    FUN_1000b142c(param_1,&local_1a0);
    puVar1 = &DAT_100aaa130;
    FUN_100004bb4(&DAT_100aaa130,&DAT_100836190);
    puVar2 = &DAT_100aaa138;
    FUN_100004bb4(&DAT_100aaa138,&DAT_1008358e0);
    puVar3 = &local_150;
    _swift_dynamicCast(puVar3,&local_1a0,puVar1,puVar2,6);
    if ((int)puVar3 == 0) {
      local_130 = 0;
      uStack_148 = 0;
      local_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      FUN_100040bb4(&local_150,&DAT_100aaa140,&DAT_100837af0);
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      lVar8 = *(long *)(param_1 + 0x20);
      FUN_10003f030(param_1,uVar7);
      (**(code **)(lVar8 + 0x48))(&local_100,&DAT_1009d06b8,&PTR_PTR_1009d06d8,uVar7,lVar8);
    }
    else {
      FUN_1000a0074(&local_150,auStack_128);
      FUN_10003f030(auStack_128,local_110);
      uVar4 = (ulong)(param_4 & 0x1010101);
      uVar7 = local_110;
      (**(code **)(lStack_108 + 8))(uVar4,local_110,lStack_108);
      FUN_10052ad78(0x65756c6176,0xe500000000000000);
      FUN_1004fa030(uVar4,uVar7);
      FUN_10003f094(auStack_128);
    }
    uVar4 = local_100;
    uVar6 = local_100;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar5 = 0;
      FUN_100506f84(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    }
    uVar4 = *(ulong *)(uVar5 + 0x10);
    lVar8 = uVar4 + 1;
    uVar6 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_100506f84(uVar6,lVar8,1,uVar5);
    }
    *(long *)(uVar6 + 0x10) = lVar8;
    unaff_x21 = uVar6 + 0x20;
    *(undefined1 *)(unaff_x21 + uVar4) = 0x7d;
    uStack_f8 = CONCAT62(uStack_f8._2_6_,0x2c);
    local_100 = uVar6;
    _swift_bridgeObjectRetain(uVar6);
    __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(unaff_x21,lVar8);
    _swift_bridgeObjectRelease(uVar6);
    uStack_178 = uStack_d8;
    local_180 = local_e0;
    uStack_170 = uStack_d0;
    uStack_15c = uStack_bc;
    uStack_198 = uStack_f8;
    local_1a0 = local_100;
    uStack_188 = uStack_e8;
    uStack_190 = uStack_f0;
    FUN_1004f9adc(&local_1a0);
  }
  auVar9._8_8_ = lVar8;
  auVar9._0_8_ = unaff_x21;
  return auVar9;
}

