// rea decompile_all
// name: FUN_100617a94
// address: 0x100617a94
// body: available
// range: 0x100617a94-0x100618027 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100617a94(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long *param_6,undefined8 param_7,long param_8,undefined8 param_9,
                  undefined8 param_10)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  code *pcVar16;
  undefined8 *puVar17;
  code *pcVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  long local_130 [4];
  long local_110;
  long lStack_108;
  long local_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  long *local_b0;
  long local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  lVar1 = 0;
  local_130[3] = param_3;
  local_e0 = param_2;
  local_d8 = param_4;
  local_c0 = param_8;
  local_b8 = param_1;
  local_b0 = param_6;
  local_a8 = param_5;
  FUN_100616300(0,*(undefined8 *)(*param_6 + 0x50));
  local_e8 = *(long *)(lVar1 + -8);
  puVar21 = (undefined8 *)
            ((long)local_130 - (*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  local_f8 = *(long *)(lVar2 + -8);
  lVar9 = (long)puVar21 - (*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100aaffc0;
  local_100 = lVar9;
  lStack_f0 = lVar2;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar9 = lVar9 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_130[2] = lVar9;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_110 = *(long *)(lVar2 + -8);
  uVar10 = *(long *)(local_110 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_130[1] = lVar9 - uVar10;
  lVar11 = local_130[1] - uVar10;
  lVar9 = 0;
  local_d0 = param_9;
  local_130[0] = lVar11;
  lStack_108 = lVar2;
  local_c8 = param_7;
  _swift_getAssociatedTypeWitness
            (0,param_9,param_7,0x100904f48,&TargetProtocolRequirement_100904f50);
  lVar22 = *(long *)(lVar9 + -8);
  lVar13 = *(long *)(lVar22 + 0x40);
  uVar10 = lVar13 + 0xfU & 0xfffffffffffffff0;
  lVar11 = lVar11 - uVar10;
  lVar20 = lVar11 - uVar10;
  lVar23 = lVar20 - uVar10;
  lVar2 = 0;
  FUN_100616300(0,lVar9);
  puVar17 = (undefined8 *)
            (lVar23 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(puVar17,local_b8,lVar2);
  puVar4 = puVar17;
  _swift_getEnumCaseMultiPayload(puVar17,lVar2);
  if ((int)puVar4 == 1) {
    uVar12 = *puVar17;
    plVar14 = (long *)local_b0[2];
    *puVar21 = uVar12;
    _swift_storeEnumTagMultiPayload(puVar21,lVar1,1);
    pcVar16 = *(code **)(*plVar14 + 0x68);
    _swift_errorRetain(uVar12);
    (*pcVar16)(puVar21);
    _swift_errorRelease(uVar12);
    (**(code **)(local_e8 + 8))(puVar21,lVar1);
  }
  else {
    pcVar16 = *(code **)(lVar22 + 0x20);
    (*pcVar16)(lVar23,puVar17,lVar9);
    pcVar18 = *(code **)(lVar22 + 0x10);
    (*pcVar18)(lVar20,lVar23,lVar9);
    (*pcVar18)(lVar11,lVar20,lVar9);
    uVar10 = (ulong)*(byte *)(lVar22 + 0x50);
    uVar19 = uVar10 + 0x40 & (uVar10 ^ 0xffffffffffffffff);
    uVar15 = lVar13 + uVar19 + 7 & 0xfffffffffffffff8;
    puVar3 = &DAT_1009e02f0;
    _swift_allocObject(&DAT_1009e02f0,uVar15 + 8,uVar10 | 7);
    *(undefined8 *)(puVar3 + 0x10) = local_c8;
    *(long *)(puVar3 + 0x18) = local_c0;
    *(undefined8 *)(puVar3 + 0x20) = local_d0;
    *(undefined8 *)(puVar3 + 0x28) = param_10;
    *(undefined8 *)(puVar3 + 0x30) = local_d8;
    *(long *)(puVar3 + 0x38) = local_a8;
    (*pcVar16)(puVar3 + uVar19,lVar20,lVar9);
    lVar2 = local_a8;
    plVar14 = local_b0;
    lVar1 = local_130[2];
    *(long **)(puVar3 + uVar15) = local_b0;
    local_b8 = lVar11;
    if (local_e0 == 0) {
      _swift_retain(local_b0);
      lVar1 = local_a8;
      _swift_retain(local_a8);
      FUN_100618028(local_d8,lVar1,local_b8,plVar14,local_c8,local_c0,local_d0,param_10);
      _swift_release(puVar3);
      pcVar16 = *(code **)(lVar22 + 8);
      (*pcVar16)(lVar23,lVar9);
    }
    else {
      local_c0 = lVar23;
      FUN_100607210(local_130[3],local_130[2]);
      lVar20 = lStack_108;
      lVar13 = local_110;
      lVar23 = lVar1;
      (**(code **)(local_110 + 0x30))(lVar1,1,lStack_108);
      lVar11 = local_130[0];
      local_70 = puVar3;
      if ((int)lVar23 == 1) {
        _swift_retain(plVar14);
        _swift_retain(lVar2);
        FUN_1006070b4(lVar1);
        local_78 = FUN_10061c414;
        local_98 = PTR___NSConcreteStackBlock_100995490;
        local_90 = 0x42000000;
        local_88 = FUN_1000acdb4;
        puStack_80 = &DAT_1009e0308;
        pvVar5 = __Block_copy(&local_98);
        puVar6 = puVar3;
        _swift_retain(puVar3);
        lVar2 = local_100;
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_100);
        local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
        FUN_100607460();
        puVar7 = &DAT_100aaffd0;
        FUN_100004bb4(&DAT_100aaffd0,&DAT_1008484a0);
        puVar8 = puVar7;
        FUN_1006074a4();
        lVar1 = local_130[1];
        local_a8 = lVar22;
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (local_130[1],&local_a0,puVar7,puVar8,lVar20,puVar6);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar2,lVar1,pvVar5);
        __Block_release(pvVar5);
        _swift_release(puVar3);
        (**(code **)(lVar13 + 8))(lVar1,lVar20);
        (**(code **)(local_f8 + 8))(lVar2,lStack_f0);
        pcVar16 = *(code **)(local_a8 + 8);
      }
      else {
        (**(code **)(lVar13 + 0x20))(local_130[0],lVar1,lVar20);
        local_78 = FUN_10061c414;
        local_98 = PTR___NSConcreteStackBlock_100995490;
        local_90 = 0x42000000;
        local_88 = FUN_1000acdb4;
        puStack_80 = &DAT_1009e0330;
        pvVar5 = __Block_copy(&local_98);
        _swift_retain(plVar14);
        _swift_retain(lVar2);
        _swift_retain(puVar3);
        lVar1 = local_100;
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_100);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar1,lVar11,pvVar5);
        __Block_release(pvVar5);
        _swift_release(puVar3);
        (**(code **)(local_f8 + 8))(lVar1,lStack_f0);
        (**(code **)(lVar13 + 8))(lVar11,lVar20);
        pcVar16 = *(code **)(lVar22 + 8);
      }
      (*pcVar16)(local_c0,lVar9);
      _swift_release(local_70);
    }
    (*pcVar16)(local_b8,lVar9);
  }
  return;
}

