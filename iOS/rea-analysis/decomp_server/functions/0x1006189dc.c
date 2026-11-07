// rea decompile_all
// name: FUN_1006189dc
// address: 0x1006189dc
// body: available
// range: 0x1006189dc-0x100618f87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006189dc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long *param_6,long param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  code *pcVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long *plVar22;
  long lVar23;
  long local_130 [4];
  long local_110;
  long local_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long local_e8;
  undefined8 local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8;
  code *local_b0;
  long *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  local_e0 = *(undefined8 *)(*param_6 + 0x50);
  lVar3 = 0;
  local_130[3] = param_3;
  local_d8 = param_2;
  local_d0 = param_5;
  local_c0 = param_4;
  local_b0 = (code *)param_1;
  local_a8 = param_6;
  FUN_100616300();
  local_e8 = *(long *)(lVar3 + -8);
  puVar21 = (undefined8 *)
            ((long)local_130 - (*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  local_100 = *(long *)(lVar4 + -8);
  lVar11 = (long)puVar21 - (*(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100aaffc0;
  local_108 = lVar11;
  lStack_f8 = lVar4;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar11 = lVar11 - (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_130[2] = lVar11;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_f0 = *(long *)(lVar4 + -8);
  uVar12 = *(long *)(local_f0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_130[1] = lVar11 - uVar12;
  lVar13 = local_130[1] - uVar12;
  lVar11 = 0;
  local_130[0] = lVar13;
  local_110 = lVar4;
  local_c8 = param_8;
  local_b8 = param_7;
  _swift_getAssociatedTypeWitness
            (0,param_8,param_7,0x100904f48,&TargetProtocolRequirement_100904f50);
  lVar18 = *(long *)(lVar11 + -8);
  lVar16 = *(long *)(lVar18 + 0x40);
  uVar12 = lVar16 + 0xfU & 0xfffffffffffffff0;
  plVar22 = (long *)(lVar13 - uVar12);
  lVar13 = (long)plVar22 - uVar12;
  lVar23 = lVar13 - uVar12;
  lVar4 = 0;
  FUN_100616300(0,lVar11);
  puVar20 = (undefined8 *)
            (lVar23 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(puVar20,local_b0,lVar4);
  puVar6 = puVar20;
  _swift_getEnumCaseMultiPayload(puVar20,lVar4);
  if ((int)puVar6 == 1) {
    uVar14 = *puVar20;
    plVar22 = (long *)local_a8[2];
    *puVar21 = uVar14;
    _swift_storeEnumTagMultiPayload(puVar21,lVar3,1);
    pcVar19 = *(code **)(*plVar22 + 0x68);
    _swift_errorRetain(uVar14);
    (*pcVar19)(puVar21);
    _swift_errorRelease(uVar14);
    (**(code **)(local_e8 + 8))(puVar21,lVar3);
  }
  else {
    local_b0 = *(code **)(lVar18 + 0x20);
    (*local_b0)(lVar23,puVar20,lVar11);
    pcVar19 = *(code **)(lVar18 + 0x10);
    (*pcVar19)(lVar13,lVar23,lVar11);
    (*pcVar19)(plVar22,lVar13,lVar11);
    uVar12 = (ulong)*(byte *)(lVar18 + 0x50);
    uVar15 = uVar12 + 0x38 & (uVar12 ^ 0xffffffffffffffff);
    uVar17 = lVar16 + uVar15 + 7 & 0xfffffffffffffff8;
    puVar5 = &DAT_1009e0200;
    _swift_allocObject(&DAT_1009e0200,uVar17 + 8,uVar12 | 7);
    uVar1 = local_c8;
    uVar14 = local_d0;
    *(long *)(puVar5 + 0x10) = local_b8;
    *(undefined8 *)(puVar5 + 0x18) = local_e0;
    *(undefined8 *)(puVar5 + 0x20) = local_c8;
    *(undefined8 *)(puVar5 + 0x28) = local_c0;
    *(undefined8 *)(puVar5 + 0x30) = local_d0;
    (*local_b0)(puVar5 + uVar15,lVar13,lVar11);
    plVar2 = local_a8;
    lVar3 = local_130[2];
    *(long **)(puVar5 + uVar17) = local_a8;
    local_b0 = (code *)lVar23;
    if (local_d8 == 0) {
      _swift_retain(local_a8);
      _swift_retain(uVar14);
      FUN_100618f88(local_c0,uVar14,plVar22,plVar2,local_b8,uVar1);
      _swift_release(puVar5);
      pcVar19 = *(code **)(lVar18 + 8);
      (*pcVar19)(local_b0,lVar11);
    }
    else {
      local_b8 = lVar18;
      FUN_100607210(local_130[3],local_130[2]);
      lVar16 = local_f0;
      lVar13 = local_110;
      lVar18 = lVar3;
      (**(code **)(local_f0 + 0x30))(lVar3,1,local_110);
      lVar4 = local_130[0];
      local_70 = puVar5;
      if ((int)lVar18 == 1) {
        _swift_retain(plVar2);
        _swift_retain(uVar14);
        FUN_1006070b4(lVar3);
        local_78 = FUN_10061c208;
        local_98 = PTR___NSConcreteStackBlock_100995490;
        local_90 = 0x42000000;
        local_88 = FUN_1000acdb4;
        puStack_80 = &DAT_1009e0218;
        pvVar7 = __Block_copy(&local_98);
        puVar8 = puVar5;
        _swift_retain(puVar5);
        lVar4 = local_108;
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_108);
        local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
        FUN_100607460();
        puVar9 = &DAT_100aaffd0;
        FUN_100004bb4(&DAT_100aaffd0,&DAT_1008484a0);
        puVar10 = puVar9;
        FUN_1006074a4();
        lVar3 = local_130[1];
        local_a8 = plVar22;
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (local_130[1],&local_a0,puVar9,puVar10,lVar13,puVar8);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar4,lVar3,pvVar7);
        __Block_release(pvVar7);
        _swift_release(puVar5);
        (**(code **)(local_f0 + 8))(lVar3,lVar13);
        (**(code **)(local_100 + 8))(lVar4,lStack_f8);
        pcVar19 = *(code **)(local_b8 + 8);
        plVar22 = local_a8;
      }
      else {
        (**(code **)(lVar16 + 0x20))(local_130[0],lVar3,lVar13);
        local_78 = FUN_10061c208;
        local_98 = PTR___NSConcreteStackBlock_100995490;
        local_90 = 0x42000000;
        local_88 = FUN_1000acdb4;
        puStack_80 = &DAT_1009e0240;
        pvVar7 = __Block_copy(&local_98);
        _swift_retain(plVar2);
        _swift_retain(uVar14);
        _swift_retain(puVar5);
        lVar3 = local_108;
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_108);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar3,lVar4,pvVar7);
        __Block_release(pvVar7);
        _swift_release(puVar5);
        (**(code **)(local_100 + 8))(lVar3,lStack_f8);
        (**(code **)(lVar16 + 8))(lVar4,lVar13);
        pcVar19 = *(code **)(local_b8 + 8);
      }
      (*pcVar19)(local_b0,lVar11);
      _swift_release(local_70);
    }
    (*pcVar19)(plVar22,lVar11);
  }
  return;
}

