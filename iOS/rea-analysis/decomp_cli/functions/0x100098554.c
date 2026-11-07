// rea decompile_all
// name: FUN_100098554
// address: 0x100098554
// body: available
// range: 0x100098554-0x100098973 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100098554(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 local_1c0;
  long local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_190;
  long lStack_188;
  undefined8 *local_180;
  undefined8 uStack_178;
  long local_170;
  undefined8 *puStack_168;
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
  undefined8 *puStack_d0;
  undefined8 local_c8;
  long local_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  lVar2 = 0xff;
  local_1b0 = param_1;
  uStack_1a8 = param_3;
  _swift_getAssociatedTypeWitness
            (0xff,param_4,param_3,0x1000e22f4,&TargetProtocolRequirement_1000e230c);
  lVar3 = 0;
  FUN_100098548(0,lVar2);
  lVar12 = (long)&local_1c0 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_1b8 = lVar3;
  __sSqMa(0,lVar2);
  lVar13 = *(long *)(lVar4 + -8);
  uVar9 = lVar12 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = *(long *)(lVar2 + -8);
  lVar3 = uVar9 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10005b984(param_2,&local_110);
  puVar5 = &DAT_100104298;
  FUN_10000eb08(&DAT_100104298,&DAT_1000d62c0);
  puVar6 = &local_190;
  _swift_dynamicCast(puVar6,&local_110,puVar5,&DAT_1000f8f60,6);
  if (((ulong)puVar6 & 1) == 0) {
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
    local_180 = (undefined8 *)0x0;
    puStack_168 = (undefined8 *)0x0;
    local_170 = 0;
    lStack_188 = 0;
    local_190 = 0;
    puVar6 = &local_190;
    FUN_10001fc18(puVar6,&DAT_1001042a0,&DAT_1000d4648);
    FUN_100054664();
    _swift_allocError(&DAT_1000fa8c8,puVar6,0,0);
    *puVar6 = 3;
    puVar6[2] = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[3] = 0;
    puVar6[6] = 0;
    puVar6[5] = 0;
    puVar6[8] = 0;
    puVar6[7] = 0;
    puVar6[9] = 0;
    *(undefined1 *)(puVar6 + 10) = 0x11;
    _swift_willThrow();
    FUN_100001428(param_2);
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
    local_c8 = uStack_178;
    puStack_d0 = local_180;
    puStack_b8 = puStack_168;
    local_c0 = local_170;
    uStack_a8 = uStack_158;
    uStack_b0 = local_160;
    local_1c0 = param_2;
    FUN_1000133cc(&uStack_b0,&local_190,&DAT_100104818,&DAT_1000d62d0);
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
    puVar5 = &DAT_100104198;
    FUN_10000eb08(&DAT_100104198,&DAT_1000d5180);
    uVar7 = uVar9;
    _swift_dynamicCast(uVar9,&local_110,puVar5,lVar2,6);
    if ((uVar7 & 1) == 0) {
      (**(code **)(lVar11 + 0x38))(uVar9,1,1,lVar2);
      (**(code **)(lVar13 + 8))(uVar9,lVar4);
      FUN_1000133cc(&uStack_b0,&local_190,&DAT_100104818,&DAT_1000d62d0);
      puVar6 = local_180;
      lVar2 = lStack_188;
      uVar10 = local_190;
      if (lStack_188 == 0) {
        FUN_10001fc18(&local_190,&DAT_100104818,&DAT_1000d62d0);
        puVar6 = puStack_b8;
        lVar2 = local_c0;
        uVar10 = local_c8;
        _swift_bridgeObjectRetain(local_c0);
        puVar8 = puVar6;
        _swift_bridgeObjectRetain();
      }
      else {
        _swift_bridgeObjectRetain(lStack_188);
        _swift_bridgeObjectRetain(puVar6);
        puVar8 = &local_190;
        FUN_100065194();
      }
      uVar1 = local_1c0;
      FUN_100054664();
      _swift_allocError(&DAT_1000fa8c8,puVar8,0,0);
      *puVar8 = uVar10;
      puVar8[1] = lVar2;
      puVar8[2] = puVar6;
      puVar8[6] = uStack_178;
      puVar8[5] = local_180;
      puVar8[4] = lStack_188;
      puVar8[3] = local_190;
      puVar8[8] = puStack_168;
      puVar8[7] = local_170;
      puVar8[9] = local_160;
      *(undefined1 *)(puVar8 + 10) = 0xc;
      _swift_willThrow();
      FUN_100001428(uVar1);
      FUN_10006b050(&local_e0);
    }
    else {
      (**(code **)(lVar11 + 0x38))(uVar9,0,1,lVar2);
      (**(code **)(lVar11 + 0x20))(lVar3,uVar9,lVar2);
      (**(code **)(lVar11 + 0x10))(lVar12,lVar3,lVar2);
      _swift_storeEnumTagMultiPayload(lVar12,local_1b8,0);
      (**(code **)(param_4 + 0x28))(local_1b0,lVar12,uStack_1a8);
      FUN_100001428(local_1c0);
      (**(code **)(lVar11 + 8))(lVar3,lVar2);
      FUN_10006b050(&local_e0);
    }
  }
  return;
}

