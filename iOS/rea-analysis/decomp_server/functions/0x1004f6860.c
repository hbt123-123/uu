// rea decompile_all
// name: FUN_1004f6860
// address: 0x1004f6860
// body: available
// range: 0x1004f6860-0x1004f6eab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004f6dec) */

void FUN_1004f6860(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined *puVar6;
  TargetProtocolDescriptor *pTVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  long unaff_x21;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 auStack_170 [2];
  undefined8 local_160;
  undefined8 local_158;
  long local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined *local_138;
  TargetProtocolDescriptor *local_130;
  undefined *local_128 [3];
  long local_110;
  undefined *local_100;
  undefined8 uStack_f8;
  undefined *local_e8;
  undefined **local_e0;
  undefined1 auStack_d8 [24];
  long local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined *local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  char local_70;
  
  puVar3 = (undefined1 *)0x0;
  local_160 = param_3;
  local_158 = param_1;
  local_140 = param_2;
  __sSqMa(0,param_5);
  lVar9 = *(long *)(puVar3 + -8);
  lVar12 = (long)&local_160 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_150 = *(long *)(param_5 + -8);
  uVar8 = *(long *)(local_150 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar11 = lVar12 - uVar8;
  lVar10 = lVar11 - uVar8;
  puVar4 = puVar3;
  local_148 = param_6;
  FUN_1004f6774();
  if (((ulong)puVar4 & 1) == 0) {
    FUN_1004f9958();
    _swift_allocError(&DAT_1009cda78,puVar4,0,0);
    *puVar4 = 0;
    _swift_willThrow();
    return;
  }
  _swift_beginAccess(unaff_x20 + 0x20,auStack_b0,0,0);
  FUN_1004f75cc(unaff_x20 + 0x20,&local_98);
  if (local_70 == '\0') {
    local_100 = local_98;
    uStack_f8 = uStack_90;
    FUN_1004f9894(local_140,auStack_d8);
    FUN_100008184(local_98,uStack_90);
    *(undefined ***)(lVar10 + -0x10) = &PTR_PTR_1009d16b0;
    FUN_100537714(lVar10,&local_100,auStack_d8,1,local_160,param_4 & 1,param_5,
                  PTR___s10Foundation4DataVN_1009961e8,local_148);
    lVar9 = local_150;
    uVar1 = local_158;
    if (unaff_x21 != 0) {
      FUN_100006cdc(local_98,uStack_90);
      return;
    }
    (**(code **)(local_150 + 8))(local_158,param_5);
    FUN_100006cdc(local_98,uStack_90);
    (**(code **)(lVar9 + 0x20))(uVar1,lVar10,param_5);
    return;
  }
  if (local_70 == '\x01') {
    FUN_1000a0074(&local_98,auStack_d8);
    FUN_1000b142c(auStack_d8,&local_100);
    puVar6 = &DAT_100aaa130;
    FUN_100004bb4(&DAT_100aaa130,&DAT_100836190);
    lVar5 = lVar12;
    _swift_dynamicCast(lVar12,&local_100,puVar6,param_5,6);
    lVar2 = local_150;
    if ((int)lVar5 == 0) {
      (**(code **)(local_150 + 0x38))(lVar12,1,1,param_5);
      (**(code **)(lVar9 + 8))(lVar12,puVar3);
      FUN_10003f030(auStack_d8,local_c0);
      puVar6 = &DAT_100aaa108;
      FUN_100004bb4(&DAT_100aaa108,&DAT_1008358d0);
      FUN_100537580(&local_100,1,0,local_c0,puVar6,uStack_b8,&PTR_PTR_1009d1680);
      if (unaff_x21 == 0) {
        local_128[0] = local_100;
        FUN_1004f9894(local_140,&local_100);
        *(undefined ***)(lVar10 + -0x10) = &PTR_PTR_1009d1680;
        FUN_100537714(lVar11,local_128,&local_100,1,100,0,param_5,puVar6,local_148);
        lVar9 = local_150;
        uVar1 = local_158;
        (**(code **)(local_150 + 8))(local_158,param_5);
        (**(code **)(lVar9 + 0x20))(uVar1,lVar11,param_5);
      }
    }
    else {
      (**(code **)(local_150 + 0x38))(lVar12,0,1,param_5);
      uVar1 = local_158;
      (**(code **)(lVar2 + 8))(local_158,param_5);
      (**(code **)(lVar2 + 0x20))(uVar1,lVar12,param_5);
    }
    FUN_10003f094(auStack_d8);
    return;
  }
  FUN_1004f9894(local_140,local_128);
  if (local_110 == 0) {
    local_e0 = &PTR_PTR_1009d1610;
    local_e8 = &DAT_1009d1638;
    local_100 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  }
  else {
    FUN_1000a0074(local_128,&local_100);
  }
  pTVar7 = &TargetProtocolDescriptor_100900904;
  lVar9 = param_5;
  _swift_conformsToProtocol();
  if (lVar9 == 0) {
    puVar6 = local_98;
    FUN_1004f589c();
    local_138 = puVar6;
    local_130 = pTVar7;
    FUN_1000b142c(&local_100,local_128);
    uVar1 = local_148;
    uStack_b8 = local_148;
    puVar4 = auStack_d8;
    local_c0 = param_5;
    FUN_1000efc08(puVar4);
    FUN_100008184(puVar6,pTVar7);
    FUN_1005386f8(puVar4,&local_138,local_128,uStack_90,local_88,param_5,
                  PTR___s10Foundation4DataVN_1009961e8,uVar1,&PTR_PTR_1009d16b0);
    if (unaff_x21 == 0) {
      _swift_bridgeObjectRelease(local_98);
      FUN_100006cdc(puVar6,pTVar7);
      goto LAB_1004f6e34;
    }
    _swift_bridgeObjectRelease(local_98);
    FUN_100006cdc(puVar6,pTVar7);
    FUN_1004f9834(auStack_d8);
  }
  else {
    local_138 = (undefined *)0x0;
    local_130 = (TargetProtocolDescriptor *)0xe000000000000000;
    FUN_1004f5a80(local_98 + 0x20,local_98 + 0x20 + *(long *)(local_98 + 0x10),uStack_90,local_88,
                  &local_100,&local_138);
    pTVar7 = local_130;
    puVar6 = local_138;
    if (unaff_x21 == 0) {
      FUN_1000b142c(&local_100,local_128);
      uVar1 = local_148;
      uStack_b8 = local_148;
      puVar4 = auStack_d8;
      local_c0 = param_5;
      FUN_1000efc08(puVar4);
      _swift_bridgeObjectRetain(pTVar7);
      FUN_100538860(puVar4,puVar6,pTVar7,local_128,uStack_90,local_88,param_5,uVar1);
      _swift_bridgeObjectRelease(pTVar7);
      _swift_bridgeObjectRelease(local_98);
LAB_1004f6e34:
      uVar1 = local_158;
      (**(code **)(local_150 + 8))(local_158,param_5);
      FUN_10003f094(&local_100);
      puVar6 = &DAT_100aaa130;
      FUN_100004bb4(&DAT_100aaa130,&DAT_100836190);
      _swift_dynamicCast(uVar1,auStack_d8,puVar6,param_5,7);
      return;
    }
    _swift_bridgeObjectRelease(local_98);
    _swift_bridgeObjectRelease(local_130);
  }
  FUN_10003f094(&local_100);
  return;
}

