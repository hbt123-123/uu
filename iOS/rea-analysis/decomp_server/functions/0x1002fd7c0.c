// rea decompile_all
// name: FUN_1002fd7c0
// address: 0x1002fd7c0
// body: available
// range: 0x1002fd7c0-0x1002fde07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001002fdb0c) */

void FUN_1002fd7c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  void *aBlock;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long alStack_160 [6];
  long local_130;
  long lStack_128;
  long local_120;
  undefined8 local_118;
  long local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  long local_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  lVar3 = 0;
  alStack_160[5] = param_3;
  local_130 = param_1;
  local_118 = param_2;
  local_108 = param_5;
  uStack_100 = param_6;
  local_c8 = param_4;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_d8 = *(long *)(lVar3 + -8);
  lVar10 = (long)alStack_160 - (*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_e0 = lVar10;
  local_d0 = lVar3;
  __s8Dispatch0A3QoSVMa();
  local_f0 = *(long *)(lVar4 + -8);
  lVar10 = lVar10 - (*(long *)(local_f0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_f8 = lVar10;
  lStack_e8 = lVar4;
  FUN_100300610();
  lVar10 = lVar10 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_b8 = param_9;
  local_b0 = param_8;
  _swift_getAssociatedTypeWitness
            (0,param_9,param_8,0x1008f95fc,&TargetProtocolRequirement_1008f960c);
  alStack_160[3] = *(long *)(lVar3 + -8);
  lVar11 = lVar10 - (*(long *)(alStack_160[3] + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100a82488;
  alStack_160[4] = lVar11;
  FUN_100004c48(&DAT_100a82488,&DAT_100816c20);
  puVar9 = PTR___ss5ErrorWS_100995c48;
  lVar4 = 0;
  FUN_1002fa4fc(0,lVar3,puVar5,PTR___ss5ErrorWS_100995c48);
  plVar17 = (long *)(lVar11 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0))
  ;
  lVar11 = 0;
  FUN_10030da10();
  plVar15 = (long *)((long)plVar17 -
                    (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar6 = 0;
  FUN_10030528c(0,lVar3,puVar5,puVar9);
  lVar18 = *(long *)(lVar6 + -8);
  local_120 = *(long *)(lVar18 + 0x40);
  uVar12 = local_120 + 0xfU & 0xfffffffffffffff0;
  lVar14 = (long)plVar15 - uVar12;
  lVar13 = lVar14 - uVar12;
  local_110 = lVar6;
  local_c0 = lVar13;
  FUN_100082394(local_130,plVar15,FUN_10030da10);
  plVar7 = plVar15;
  _swift_getEnumCaseMultiPayload(plVar15,lVar11);
  uVar1 = local_118;
  iVar2 = (int)plVar7;
  if (iVar2 < 2) {
    if (iVar2 != 0) {
      lVar11 = 0;
      __sSo25NSURLSessionWebSocketTaskC10FoundationE7MessageOMa();
      lVar19 = *(long *)(lVar11 + -8);
      lVar10 = lVar13 - (*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
      alStack_160[2] = lVar11;
      local_130 = lVar13;
      (**(code **)(lVar19 + 0x20))(lVar10,plVar15);
      lVar6 = alStack_160[4];
      alStack_160[1] = lVar10;
      (**(code **)(local_b8 + 0x20))(alStack_160[4],lVar10,local_b0);
      uVar1 = local_118;
      _swift_unownedRetainStrong(local_118);
      lVar11 = alStack_160[3];
      (**(code **)(alStack_160[3] + 0x10))(plVar17,lVar6,lVar3);
      _swift_storeEnumTagMultiPayload(plVar17,lVar4,1);
      FUN_1002fa5f0(local_c0,uVar1,plVar17,lVar3,puVar5,PTR___ss5ErrorWS_100995c48);
      (**(code **)(lVar11 + 8))(lVar6,lVar3);
      (**(code **)(lVar19 + 8))(alStack_160[1],alStack_160[2]);
      lVar4 = local_c0;
      goto LAB_1002fdc5c;
    }
    lVar11 = *plVar15;
    lVar6 = plVar15[1];
    _swift_unownedRetainStrong(local_118);
    *plVar17 = lVar11;
    plVar17[1] = lVar6;
    _swift_storeEnumTagMultiPayload(plVar17,lVar4,0);
  }
  else {
    if (iVar2 != 2) {
      FUN_1000823d8(plVar15,lVar10,FUN_100300610);
      uVar1 = local_118;
      _swift_unownedRetainStrong(local_118);
      FUN_100082394(lVar10,plVar17,FUN_100300610);
      _swift_storeEnumTagMultiPayload(plVar17,lVar4,4);
      lVar4 = local_c0;
      FUN_1002fa5f0(local_c0,uVar1,plVar17,lVar3,puVar5,PTR___ss5ErrorWS_100995c48);
      FUN_1000d27dc(lVar10,FUN_100300610);
      goto LAB_1002fdc5c;
    }
    lStack_128 = plVar15[1];
    local_130 = *plVar15;
    lVar6 = plVar15[2];
    _swift_unownedRetainStrong(local_118);
    lVar11 = local_130;
    plVar17[1] = lStack_128;
    *plVar17 = lVar11;
    plVar17[2] = lVar6;
    _swift_storeEnumTagMultiPayload(plVar17,lVar4,3);
  }
  lVar4 = local_c0;
  FUN_1002fa5f0(local_c0,uVar1,plVar17,lVar3,puVar5,PTR___ss5ErrorWS_100995c48);
LAB_1002fdc5c:
  lVar3 = local_110;
  (**(code **)(lVar18 + 0x10))(lVar14,lVar4,local_110);
  uVar12 = (ulong)*(byte *)(lVar18 + 0x50);
  uVar16 = uVar12 + 0x30 & (uVar12 ^ 0xffffffffffffffff);
  puVar5 = &DAT_1009afdf8;
  _swift_allocObject(&DAT_1009afdf8,uVar16 + local_120,uVar12 | 7);
  uVar1 = uStack_100;
  *(undefined8 *)(puVar5 + 0x10) = local_b0;
  *(long *)(puVar5 + 0x18) = local_b8;
  *(undefined8 *)(puVar5 + 0x20) = local_108;
  *(undefined8 *)(puVar5 + 0x28) = uStack_100;
  (**(code **)(lVar18 + 0x20))(puVar5 + uVar16,lVar14,lVar3);
  local_78 = FUN_10030e7bc;
  local_98 = PTR___NSConcreteStackBlock_100995490;
  local_90 = 0x42000000;
  local_88 = FUN_1000acdb4;
  puStack_80 = &DAT_1009afe10;
  local_70 = puVar5;
  aBlock = __Block_copy(&local_98);
  _swift_retain(uVar1);
  lVar11 = local_f8;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_f8);
  local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar8 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar5 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar9 = puVar5;
  FUN_10028abfc();
  lVar10 = local_d0;
  lVar6 = local_e0;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (local_e0,&local_a0,puVar5,puVar9,local_d0,puVar8);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar11,lVar6,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_d8 + 8))(lVar6,lVar10);
  (**(code **)(local_f0 + 8))(lVar11,lStack_e8);
  (**(code **)(lVar18 + 8))(lVar4,lVar3);
  _swift_release(local_70);
  return;
}

