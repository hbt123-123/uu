// rea decompile_all
// name: FUN_1006181f0
// address: 0x1006181f0
// body: available
// range: 0x1006181f0-0x100618783 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006181f0(undefined8 param_1,long param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long *plVar20;
  long lVar21;
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
  
  local_e0 = *(undefined8 *)(*param_4 + 0x50);
  lVar2 = 0;
  local_130[3] = param_3;
  local_d8 = param_2;
  local_d0 = param_6;
  local_c0 = param_5;
  local_b0 = (code *)param_1;
  local_a8 = param_4;
  FUN_100616300();
  local_e8 = *(long *)(lVar2 + -8);
  puVar19 = (undefined8 *)
            ((long)local_130 - (*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  local_100 = *(long *)(lVar3 + -8);
  lVar10 = (long)puVar19 - (*(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100aaffc0;
  local_108 = lVar10;
  lStack_f8 = lVar3;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar10 = lVar10 - (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_130[2] = lVar10;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_f0 = *(long *)(lVar3 + -8);
  uVar11 = *(long *)(local_f0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_130[1] = lVar10 - uVar11;
  lVar12 = local_130[1] - uVar11;
  lVar10 = 0;
  local_130[0] = lVar12;
  local_110 = lVar3;
  local_c8 = param_8;
  local_b8 = param_7;
  _swift_getAssociatedTypeWitness
            (0,param_8,param_7,0x100904f48,&TargetProtocolRequirement_100904f50);
  lVar16 = *(long *)(lVar10 + -8);
  lVar15 = *(long *)(lVar16 + 0x40);
  uVar11 = lVar15 + 0xfU & 0xfffffffffffffff0;
  plVar20 = (long *)(lVar12 - uVar11);
  lVar12 = (long)plVar20 - uVar11;
  lVar21 = lVar12 - uVar11;
  lVar3 = 0;
  FUN_100616300(0,lVar10);
  puVar18 = (undefined8 *)
            (lVar21 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))(puVar18,local_b0,lVar3);
  puVar5 = puVar18;
  _swift_getEnumCaseMultiPayload(puVar18,lVar3);
  if ((int)puVar5 == 1) {
    uVar13 = *puVar18;
    plVar20 = (long *)local_a8[2];
    *puVar19 = uVar13;
    _swift_storeEnumTagMultiPayload(puVar19,lVar2,1);
    pcVar17 = *(code **)(*plVar20 + 0x68);
    _swift_errorRetain(uVar13);
    (*pcVar17)(puVar19);
    _swift_errorRelease(uVar13);
    (**(code **)(local_e8 + 8))(puVar19,lVar2);
  }
  else {
    local_b0 = *(code **)(lVar16 + 0x20);
    (*local_b0)(lVar21,puVar18,lVar10);
    pcVar17 = *(code **)(lVar16 + 0x10);
    (*pcVar17)(lVar12,lVar21,lVar10);
    (*pcVar17)(plVar20,lVar12,lVar10);
    uVar11 = (ulong)*(byte *)(lVar16 + 0x50);
    uVar14 = uVar11 + 0x40 & (uVar11 ^ 0xffffffffffffffff);
    puVar4 = &DAT_1009e0278;
    _swift_allocObject(&DAT_1009e0278,uVar14 + lVar15,uVar11 | 7);
    plVar1 = local_a8;
    uVar13 = local_d0;
    *(long *)(puVar4 + 0x10) = local_b8;
    *(undefined8 *)(puVar4 + 0x18) = local_e0;
    *(undefined8 *)(puVar4 + 0x20) = local_c8;
    *(long **)(puVar4 + 0x28) = local_a8;
    *(undefined8 *)(puVar4 + 0x30) = local_c0;
    *(undefined8 *)(puVar4 + 0x38) = local_d0;
    (*local_b0)(puVar4 + uVar14,lVar12,lVar10);
    lVar2 = local_130[2];
    local_b0 = (code *)lVar21;
    if (local_d8 == 0) {
      _swift_retain(uVar13);
      _swift_retain(plVar1);
      FUN_100618784();
      _swift_release(puVar4);
      pcVar17 = *(code **)(lVar16 + 8);
      (*pcVar17)(local_b0,lVar10);
    }
    else {
      local_b8 = lVar16;
      FUN_100607210(local_130[3],local_130[2]);
      lVar15 = local_f0;
      lVar12 = local_110;
      lVar16 = lVar2;
      (**(code **)(local_f0 + 0x30))(lVar2,1,local_110);
      lVar3 = local_130[0];
      local_70 = puVar4;
      if ((int)lVar16 == 1) {
        _swift_retain(uVar13);
        _swift_retain(plVar1);
        FUN_1006070b4(lVar2);
        local_78 = FUN_10061c310;
        local_98 = PTR___NSConcreteStackBlock_100995490;
        local_90 = 0x42000000;
        local_88 = FUN_1000acdb4;
        puStack_80 = &DAT_1009e0290;
        pvVar6 = __Block_copy(&local_98);
        puVar7 = puVar4;
        _swift_retain(puVar4);
        lVar3 = local_108;
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_108);
        local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
        FUN_100607460();
        puVar8 = &DAT_100aaffd0;
        FUN_100004bb4(&DAT_100aaffd0,&DAT_1008484a0);
        puVar9 = puVar8;
        FUN_1006074a4();
        lVar2 = local_130[1];
        local_a8 = plVar20;
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (local_130[1],&local_a0,puVar8,puVar9,lVar12,puVar7);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar3,lVar2,pvVar6);
        __Block_release(pvVar6);
        _swift_release(puVar4);
        (**(code **)(local_f0 + 8))(lVar2,lVar12);
        (**(code **)(local_100 + 8))(lVar3,lStack_f8);
        pcVar17 = *(code **)(local_b8 + 8);
        plVar20 = local_a8;
      }
      else {
        (**(code **)(lVar15 + 0x20))(local_130[0],lVar2,lVar12);
        local_78 = FUN_10061c310;
        local_98 = PTR___NSConcreteStackBlock_100995490;
        local_90 = 0x42000000;
        local_88 = FUN_1000acdb4;
        puStack_80 = &DAT_1009e02b8;
        pvVar6 = __Block_copy(&local_98);
        _swift_retain(uVar13);
        _swift_retain(plVar1);
        _swift_retain(puVar4);
        lVar2 = local_108;
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_108);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar2,lVar3,pvVar6);
        __Block_release(pvVar6);
        _swift_release(puVar4);
        (**(code **)(local_100 + 8))(lVar2,lStack_f8);
        (**(code **)(lVar15 + 8))(lVar3,lVar12);
        pcVar17 = *(code **)(local_b8 + 8);
      }
      (*pcVar17)(local_b0,lVar10);
      _swift_release(local_70);
    }
    (*pcVar17)(plVar20,lVar10);
  }
  return;
}

