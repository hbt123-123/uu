// rea decompile_all
// name: FUN_100098bfc
// address: 0x100098bfc
// body: available
// range: 0x100098bfc-0x100098f6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100098bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x21;
  long lVar8;
  long lVar9;
  long local_1d0;
  long lStack_1c8;
  ulong local_1c0;
  long local_1b8;
  long local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  long lStack_188;
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
  undefined1 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_e0;
  long lStack_d8;
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
  
  lVar1 = 0xff;
  local_1a8 = param_1;
  local_1a0 = param_3;
  _swift_getAssociatedTypeWitness
            (0xff,param_4,param_3,0x1000e22f4,&TargetProtocolRequirement_1000e230c);
  lVar2 = 0;
  __sSqMa(0,lVar1);
  local_1d0 = *(long *)(lVar2 + -8);
  uVar7 = (long)&local_1d0 - (*(long *)(local_1d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_1c8 = lVar2;
  local_1c0 = uVar7;
  FUN_100098548(0,lVar1);
  local_1b8 = uVar7 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(lVar1 + -8);
  uVar7 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar2 = local_1b8 - uVar7;
  lVar9 = lVar2 - uVar7;
  local_1b0 = lVar3;
  FUN_10005b984(param_2,&local_e0);
  __sSe4fromxs7Decoder_p_tKcfCTj(lVar2,&local_e0,lVar1,param_5);
  if (unaff_x21 == 0) {
    (**(code **)(lVar8 + 0x20))(lVar9,lVar2,lVar1);
LAB_100098eb4:
    lVar2 = local_1b8;
    (**(code **)(lVar8 + 0x10))(local_1b8,lVar9,lVar1);
    _swift_storeEnumTagMultiPayload(lVar2,local_1b0,0);
    (**(code **)(param_4 + 0x28))(local_1a8,lVar2,local_1a0);
    FUN_100001428(param_2);
    (**(code **)(lVar8 + 8))(lVar9,lVar1);
  }
  else {
    FUN_10005b984(param_2,&local_110);
    puVar4 = &DAT_100104298;
    FUN_10000eb08(&DAT_100104298,&DAT_1000d62c0);
    puVar5 = &local_190;
    _swift_dynamicCast(puVar5,&local_110,puVar4,&DAT_1000f8f60,6);
    if (((ulong)puVar5 & 1) == 0) {
      local_120 = 0;
      uStack_138 = 0;
      local_140 = 0;
      uStack_128 = 0;
      local_130 = 0;
      uStack_158 = 0;
      local_160 = 0;
      uStack_148 = 0;
      local_150 = 0;
      uStack_178 = 0;
      local_180 = 0;
      uStack_168 = 0;
      local_170 = 0;
      lStack_188 = 0;
      local_190 = 0;
      FUN_10001fc18(&local_190,&DAT_1001042a0,&DAT_1000d4648);
    }
    else {
      uStack_98 = uStack_148;
      local_a0 = local_150;
      uStack_88 = uStack_138;
      uStack_90 = local_140;
      uStack_78 = uStack_128;
      local_80 = local_130;
      local_70 = local_120;
      lStack_d8 = lStack_188;
      local_e0 = local_190;
      uStack_c8 = uStack_178;
      uStack_d0 = local_180;
      uStack_b8 = uStack_168;
      local_c0 = local_170;
      uStack_a8 = uStack_158;
      uStack_b0 = local_160;
      FUN_1000133cc(&uStack_b0,&local_190,&DAT_100104818,&DAT_1000d62d0);
      FUN_10006b050(&local_e0);
      if (lStack_188 == 0) {
        FUN_10001fc18(&local_190,&DAT_100104818,&DAT_1000d62d0);
        uStack_108 = 0;
        local_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
      }
      else {
        FUN_1000133cc(&uStack_178,&local_110,&DAT_100104198,&DAT_1000d5180);
        FUN_100065194(&local_190);
      }
      puVar4 = &DAT_100104198;
      FUN_10000eb08(&DAT_100104198,&DAT_1000d5180);
      uVar7 = local_1c0;
      uVar6 = local_1c0;
      _swift_dynamicCast(local_1c0,&local_110,puVar4,lVar1,6);
      if ((uVar6 & 1) != 0) {
        _swift_errorRelease();
        (**(code **)(lVar8 + 0x38))(uVar7,0,1,lVar1);
        (**(code **)(lVar8 + 0x20))(lVar9,uVar7,lVar1);
        goto LAB_100098eb4;
      }
      (**(code **)(lVar8 + 0x38))(uVar7,1,1,lVar1);
      (**(code **)(local_1d0 + 8))(uVar7,lStack_1c8);
    }
    _swift_willThrow();
    FUN_100001428(param_2);
  }
  return;
}

