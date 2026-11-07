// rea decompile_all
// name: FUN_10006c028
// address: 0x10006c028
// body: available
// range: 0x10006c028-0x10006c2af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006c028(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x21;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long local_1a0;
  long local_198;
  undefined8 local_190;
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
  local_190 = param_1;
  FUN_100098548();
  local_1a0 = *(long *)(lVar1 + -8);
  lVar9 = (long)&local_1a0 - (*(long *)(local_1a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_198 = lVar1;
  __sSqMa(0,param_3);
  lVar8 = *(long *)(lVar2 + -8);
  lVar10 = lVar9 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = param_3[-1];
  lVar7 = lVar10 - (*(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10005b984(param_2,auStack_108);
  puVar3 = &DAT_100104298;
  FUN_10000eb08(&DAT_100104298,&DAT_1000d62c0);
  puVar4 = &local_180;
  _swift_dynamicCast(puVar4,auStack_108,puVar3,&DAT_1000f8f60,6);
  if (((ulong)puVar4 & 1) == 0) {
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
    uStack_d0 = local_170;
    uStack_b8 = uStack_158;
    local_c0 = local_160;
    uStack_a8 = uStack_148;
    uStack_b0 = local_150;
    FUN_10007b1ec(lVar10,param_3,param_3);
    if (unaff_x21 == 0) {
      FUN_100001428(param_2);
      FUN_10006b050(&local_e0);
      (**(code **)(lVar1 + 0x38))(lVar10,0,1,param_3);
      pcVar6 = *(code **)(lVar1 + 0x20);
      (*pcVar6)(lVar7,lVar10,param_3);
      (*pcVar6)(lVar9,lVar7,param_3);
      lVar1 = local_198;
      _swift_storeEnumTagMultiPayload(lVar9,local_198,0);
      (**(code **)(local_1a0 + 0x20))(local_190,lVar9,lVar1);
      return;
    }
    _swift_errorRelease(unaff_x21);
    FUN_10006b050(&local_e0);
    (**(code **)(lVar1 + 0x38))(lVar10,1,1,param_3);
    (**(code **)(lVar8 + 8))(lVar10,lVar2);
  }
  uVar5 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  puVar4 = param_3;
  FUN_100054664();
  _swift_allocError(&DAT_1000fa8c8,puVar4,0,0);
  *puVar4 = param_3;
  puVar4[1] = uVar5;
  puVar4[3] = uStack_178;
  puVar4[2] = local_180;
  puVar4[5] = uStack_168;
  puVar4[4] = local_170;
  puVar4[7] = uStack_158;
  puVar4[6] = local_160;
  puVar4[9] = uStack_148;
  puVar4[8] = local_150;
  *(undefined1 *)(puVar4 + 10) = 0x10;
  _swift_willThrow();
  FUN_100001428(param_2);
  return;
}

