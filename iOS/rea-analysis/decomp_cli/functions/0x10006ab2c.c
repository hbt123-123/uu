// rea decompile_all
// name: FUN_10006ab2c
// address: 0x10006ab2c
// body: available
// range: 0x10006ab2c-0x10006affb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010006af18) */

void FUN_10006ab2c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  TargetProtocolConformanceDescriptor *pTVar6;
  ulong uVar7;
  long unaff_x21;
  long lVar8;
  long lVar9;
  long lVar10;
  long local_1d0;
  undefined *local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  lVar2 = 0;
  local_198 = param_4;
  local_188 = param_1;
  FUN_10006affc();
  local_1b0 = *(long *)(lVar2 + -8);
  lVar9 = (long)&local_1d0 - (*(long *)(local_1b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_1a8 = lVar9;
  local_190 = lVar2;
  FUN_100098548(0,param_3);
  lVar9 = lVar9 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_1d0 = lVar3;
  __sSqMa(0,param_3);
  lVar10 = *(long *)(lVar2 + -8);
  lVar3 = lVar9 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_1a0 = *(long *)(param_3 + -8);
  uVar7 = *(long *)(local_1a0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_1b8 = lVar3 - uVar7;
  local_1c0 = local_1b8 - uVar7;
  lVar8 = local_1c0 - uVar7;
  FUN_10005b984(param_2,auStack_108);
  puVar4 = &DAT_100104298;
  FUN_10000eb08(&DAT_100104298,&DAT_1000d62c0);
  puVar5 = &local_180;
  local_1c8 = puVar4;
  _swift_dynamicCast(puVar5,auStack_108,puVar4,&DAT_1000f8f60,6);
  if (((ulong)puVar5 & 1) == 0) {
    local_110 = 0;
    uStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_148 = 0;
    local_150 = 0;
    uStack_138 = 0;
    local_140 = 0;
    uStack_168 = 0;
    local_170 = 0;
    uStack_158 = 0;
    local_160 = 0;
    uStack_178 = 0;
    local_180 = 0;
    FUN_10006b008(&local_180);
LAB_10006ad20:
    FUN_10005b984(param_2,&local_e0);
    lVar9 = local_190;
    pTVar6 = &TargetProtocolConformanceDescriptor_1000d4678;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1000d4678,local_190);
    lVar3 = local_198;
    lVar2 = local_1a8;
    FUN_100098bfc(local_1a8,&local_e0,lVar9,pTVar6,*(undefined8 *)(local_198 + 8));
    if (unaff_x21 != 0) goto LAB_10006afd0;
    (**(code **)(local_1b0 + 0x20))(local_188,lVar2,lVar9);
    FUN_10005b984(param_2,auStack_108);
    puVar5 = &local_180;
    _swift_dynamicCast(puVar5,auStack_108,local_1c8,&DAT_1000f8f60,6);
    lVar2 = local_1c0;
    if (((ulong)puVar5 & 1) == 0) {
      local_110 = 0;
      uStack_128 = 0;
      local_130 = 0;
      uStack_118 = 0;
      local_120 = 0;
      uStack_148 = 0;
      local_150 = 0;
      uStack_138 = 0;
      local_140 = 0;
      uStack_168 = 0;
      local_170 = 0;
      uStack_158 = 0;
      local_160 = 0;
      uStack_178 = 0;
      local_180 = 0;
      FUN_10006b008(&local_180);
    }
    else {
      uStack_98 = uStack_138;
      local_a0 = local_140;
      uStack_88 = uStack_128;
      uStack_90 = local_130;
      uStack_78 = uStack_118;
      local_80 = local_120;
      local_70 = local_110;
      uStack_d8 = uStack_178;
      local_e0 = local_180;
      uStack_c8 = uStack_168;
      local_d0 = local_170;
      uStack_b8 = uStack_158;
      local_c0 = local_160;
      uStack_a8 = uStack_148;
      local_b0 = local_150;
      FUN_10005ba24(local_1c0,lVar9);
      FUN_10007b37c(lVar2,param_3,param_3,lVar3);
      (**(code **)(local_1a0 + 8))(lVar2,param_3);
      FUN_10006b050(&local_e0);
    }
  }
  else {
    uStack_98 = uStack_138;
    local_a0 = local_140;
    uStack_88 = uStack_128;
    uStack_90 = local_130;
    uStack_78 = uStack_118;
    local_80 = local_120;
    local_70 = local_110;
    uStack_d8 = uStack_178;
    local_e0 = local_180;
    uStack_c8 = uStack_168;
    local_d0 = local_170;
    uStack_b8 = uStack_158;
    local_c0 = local_160;
    uStack_a8 = uStack_148;
    local_b0 = local_150;
    FUN_10007b1ec(lVar3,param_3,param_3);
    lVar1 = local_1a0;
    if (unaff_x21 != 0) {
      _swift_errorRelease();
      (**(code **)(local_1a0 + 0x38))(lVar3,1,1,param_3);
      FUN_10006b050(&local_e0);
      (**(code **)(lVar10 + 8))(lVar3,lVar2);
      unaff_x21 = 0;
      goto LAB_10006ad20;
    }
    (**(code **)(local_1a0 + 0x38))(lVar3,0,1,param_3);
    (**(code **)(lVar1 + 0x20))(lVar8,lVar3,param_3);
    (**(code **)(lVar1 + 0x10))(lVar9,lVar8,param_3);
    _swift_storeEnumTagMultiPayload(lVar9,local_1d0,0);
    lVar3 = local_198;
    FUN_10006aab0(local_188,lVar9,param_3,local_198);
    (**(code **)(lVar1 + 8))(lVar8,param_3);
    FUN_10006b050(&local_e0);
    lVar9 = local_190;
  }
  lVar2 = local_1b8;
  FUN_10005ba24(local_1b8,lVar9);
  (**(code **)(lVar3 + 0x18))(param_3,lVar3);
  FUN_10005bae8(lVar2,lVar9);
LAB_10006afd0:
  FUN_100001428(param_2);
  return;
}

