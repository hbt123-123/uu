// rea decompile_all
// name: FUN_100619208
// address: 0x100619208
// body: available
// range: 0x100619208-0x10061970b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100619208(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  code *pcVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long local_110 [4];
  long lStack_f0;
  long local_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  lVar2 = 0;
  local_110[2] = param_3;
  local_d0 = param_2;
  local_c8 = param_4;
  local_b0 = param_6;
  local_a8 = param_5;
  __s8Dispatch0A3QoSVMa();
  local_e0 = *(long *)(lVar2 + -8);
  lVar13 = (long)local_110 - (*(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = &DAT_100aaffc0;
  local_e8 = lVar13;
  lStack_d8 = lVar2;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar13 = lVar13 - (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_110[3] = *(long *)(lVar3 + -8);
  uVar10 = *(long *)(local_110[3] + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_110[1] = lVar13 - uVar10;
  lVar2 = local_110[1] - uVar10;
  lVar4 = 0;
  local_110[0] = lVar2;
  lStack_f0 = lVar3;
  local_c0 = param_7;
  local_b8 = param_8;
  _swift_getAssociatedTypeWitness
            (0,param_8,param_7,0x100904f48,&TargetProtocolRequirement_100904f50);
  lVar12 = *(long *)(lVar4 + -8);
  lVar16 = *(long *)(lVar12 + 0x40);
  uVar10 = lVar16 + 0xfU & 0xfffffffffffffff0;
  lVar2 = lVar2 - uVar10;
  lVar18 = lVar2 - uVar10;
  lVar15 = lVar18 - uVar10;
  lVar3 = 0;
  FUN_100616300(0,lVar4);
  puVar20 = (undefined8 *)
            (lVar15 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))(puVar20,param_1,lVar3);
  puVar5 = puVar20;
  _swift_getEnumCaseMultiPayload(puVar20,lVar3);
  if ((int)puVar5 == 1) {
    puVar11 = (undefined *)*puVar20;
    local_90 = CONCAT71(local_90._1_7_,1);
    pcVar14 = *(code **)(**(long **)(local_b0 + 0x10) + 0x68);
    local_98 = puVar11;
    _swift_errorRetain(puVar11);
    (*pcVar14)(&local_98);
    _swift_errorRelease(puVar11);
    _swift_errorRelease(puVar11);
  }
  else {
    pcVar19 = *(code **)(lVar12 + 0x20);
    (*pcVar19)(lVar15,puVar20,lVar4);
    pcVar14 = *(code **)(lVar12 + 0x10);
    (*pcVar14)(lVar18,lVar15,lVar4);
    (*pcVar14)(lVar2,lVar18,lVar4);
    uVar10 = (ulong)*(byte *)(lVar12 + 0x50);
    uVar21 = uVar10 + 0x30 & (uVar10 ^ 0xffffffffffffffff);
    uVar17 = lVar16 + uVar21 + 7 & 0xfffffffffffffff8;
    puVar11 = &DAT_1009e0390;
    _swift_allocObject(&DAT_1009e0390,uVar17 + 8,uVar10 | 7);
    *(long *)(puVar11 + 0x10) = local_c0;
    *(long *)(puVar11 + 0x18) = local_b8;
    *(long *)(puVar11 + 0x20) = local_c8;
    *(undefined8 *)(puVar11 + 0x28) = local_a8;
    (*pcVar19)(puVar11 + uVar21,lVar18,lVar4);
    uVar1 = local_a8;
    lVar3 = local_b0;
    *(long *)(puVar11 + uVar17) = local_b0;
    if (local_d0 == 0) {
      _swift_retain(local_b0);
      uVar1 = local_a8;
      _swift_retain(local_a8);
      FUN_10061971c(local_c8,uVar1,lVar2,lVar3,local_c0,local_b8);
      _swift_release(puVar11);
      pcVar14 = *(code **)(lVar12 + 8);
      (*pcVar14)(lVar15,lVar4);
    }
    else {
      local_c8 = lVar12;
      local_c0 = lVar15;
      local_b8 = lVar2;
      FUN_100607210(local_110[2],lVar13);
      lVar15 = lStack_f0;
      lVar12 = local_110[3];
      lVar16 = lVar13;
      (**(code **)(local_110[3] + 0x30))(lVar13,1,lStack_f0);
      lVar2 = local_110[0];
      local_70 = puVar11;
      if ((int)lVar16 == 1) {
        _swift_retain(lVar3);
        _swift_retain(uVar1);
        FUN_1006070b4(lVar13);
        local_78 = FUN_10061c534;
        local_98 = PTR___NSConcreteStackBlock_100995490;
        local_90 = 0x42000000;
        local_88 = FUN_1000acdb4;
        puStack_80 = &DAT_1009e03a8;
        pvVar6 = __Block_copy(&local_98);
        puVar7 = puVar11;
        _swift_retain(puVar11);
        lVar2 = local_e8;
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_e8);
        local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
        FUN_100607460();
        puVar8 = &DAT_100aaffd0;
        FUN_100004bb4(&DAT_100aaffd0,&DAT_1008484a0);
        puVar9 = puVar8;
        FUN_1006074a4();
        lVar3 = local_110[1];
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (local_110[1],&local_a0,puVar8,puVar9,lVar15,puVar7);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar2,lVar3,pvVar6);
        __Block_release(pvVar6);
        _swift_release(puVar11);
        (**(code **)(lVar12 + 8))(lVar3,lVar15);
        pcVar14 = *(code **)(local_e0 + 8);
        lVar15 = lStack_d8;
      }
      else {
        (**(code **)(lVar12 + 0x20))(local_110[0],lVar13,lVar15);
        local_78 = FUN_10061c534;
        local_98 = PTR___NSConcreteStackBlock_100995490;
        local_90 = 0x42000000;
        local_88 = FUN_1000acdb4;
        puStack_80 = &DAT_1009e03d0;
        pvVar6 = __Block_copy(&local_98);
        _swift_retain(lVar3);
        _swift_retain(uVar1);
        _swift_retain(puVar11);
        lVar3 = local_e8;
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_e8);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar3,lVar2,pvVar6);
        __Block_release(pvVar6);
        _swift_release(puVar11);
        (**(code **)(local_e0 + 8))(lVar3,lStack_d8);
        pcVar14 = *(code **)(lVar12 + 8);
      }
      (*pcVar14)(lVar2,lVar15);
      pcVar14 = *(code **)(local_c8 + 8);
      (*pcVar14)(local_c0,lVar4);
      _swift_release(local_70);
      lVar2 = local_b8;
    }
    (*pcVar14)(lVar2,lVar4);
  }
  return;
}

