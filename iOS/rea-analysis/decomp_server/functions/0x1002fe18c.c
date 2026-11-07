// rea decompile_all
// name: FUN_1002fe18c
// address: 0x1002fe18c
// body: available
// range: 0x1002fe18c-0x1002fe65b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002fe18c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  void *aBlock;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long local_100 [6];
  long local_d0;
  long lStack_c8;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  lVar2 = 0;
  local_100[3] = param_4;
  local_100[4] = param_5;
  local_b0 = param_3;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_b8 = *(long *)(lVar2 + -8);
  lVar9 = (long)local_100 - (*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_c0 = lVar9;
  local_a8 = lVar2;
  __s8Dispatch0A3QoSVMa();
  local_d0 = *(long *)(lVar3 + -8);
  lVar9 = lVar9 - (*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_100[5] = lVar9;
  lStack_c8 = lVar3;
  FUN_100300610();
  lVar9 = lVar9 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_10030da10();
  plVar12 = (long *)(lVar9 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  puVar4 = &DAT_100a85418;
  FUN_100004bb4(&DAT_100a85418,&DAT_100819868);
  local_100[2] = *(long *)(puVar4 + -8);
  lVar13 = *(long *)(local_100[2] + 0x40);
  uVar10 = lVar13 + 0xfU & 0xfffffffffffffff0;
  lVar14 = (long)plVar12 - uVar10;
  lVar3 = lVar14 - uVar10;
  FUN_100082394(param_1,plVar12,FUN_10030da10);
  plVar5 = plVar12;
  _swift_getEnumCaseMultiPayload(plVar12,lVar2);
  iVar1 = (int)plVar5;
  if (iVar1 < 2) {
    if (iVar1 != 0) {
      lVar2 = 0;
      __sSo25NSURLSessionWebSocketTaskC10FoundationE7MessageOMa();
      lVar9 = lVar3 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      pcVar15 = *(code **)(*(long *)(lVar2 + -8) + 0x20);
      (*pcVar15)(lVar9,plVar12,lVar2);
      _swift_unownedRetainStrong(param_2);
      iVar1 = *(int *)(puVar4 + 0x2c);
      (*pcVar15)(lVar3 + iVar1,lVar9,lVar2);
      puVar4 = &DAT_100a85420;
      FUN_100004bb4(&DAT_100a85420,&DAT_100819870);
      _swift_storeEnumTagMultiPayload(lVar3 + iVar1,puVar4,1);
      _swift_weakInit(lVar3,0);
      _swift_weakAssign();
      _swift_release(param_2);
      goto LAB_1002fe480;
    }
    lVar2 = *plVar12;
    lVar9 = plVar12[1];
    _swift_unownedRetainStrong(param_2);
    plVar5 = (long *)(lVar3 + *(int *)(puVar4 + 0x2c));
    *plVar5 = lVar2;
    plVar5[1] = lVar9;
    puVar4 = &DAT_100a85420;
    FUN_100004bb4(&DAT_100a85420,&DAT_100819870);
    uVar8 = 0;
  }
  else if (iVar1 == 2) {
    local_100[1] = plVar12[1];
    local_100[0] = *plVar12;
    lVar2 = plVar12[2];
    _swift_unownedRetainStrong(param_2);
    plVar5 = (long *)(lVar3 + *(int *)(puVar4 + 0x2c));
    plVar5[1] = local_100[1];
    *plVar5 = local_100[0];
    plVar5[2] = lVar2;
    puVar4 = &DAT_100a85420;
    FUN_100004bb4(&DAT_100a85420,&DAT_100819870);
    uVar8 = 3;
  }
  else {
    FUN_1000823d8(plVar12,lVar9,FUN_100300610);
    _swift_unownedRetainStrong(param_2);
    iVar1 = *(int *)(puVar4 + 0x2c);
    FUN_1000823d8(lVar9,lVar3 + iVar1,FUN_100300610);
    puVar4 = &DAT_100a85420;
    FUN_100004bb4(&DAT_100a85420,&DAT_100819870);
    plVar5 = (long *)(lVar3 + iVar1);
    uVar8 = 4;
  }
  _swift_storeEnumTagMultiPayload(plVar5,puVar4,uVar8);
  _swift_weakInit(lVar3,0);
  _swift_weakAssign();
  _swift_release(param_2);
LAB_1002fe480:
  FUN_1000a00a8(lVar3,lVar14,&DAT_100a85418,&DAT_100819868);
  lVar3 = lVar3 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  FUN_10007f314(lVar14,lVar3,&DAT_100a85418,&DAT_100819868);
  uVar10 = (ulong)*(byte *)(local_100[2] + 0x50);
  uVar11 = uVar10 + 0x20 & (uVar10 ^ 0xffffffffffffffff);
  puVar4 = &DAT_1009afc68;
  _swift_allocObject(&DAT_1009afc68,uVar11 + lVar13,uVar10 | 7);
  lVar2 = local_100[4];
  *(long *)(puVar4 + 0x10) = local_100[3];
  *(long *)(puVar4 + 0x18) = local_100[4];
  FUN_1000a00a8(lVar3,puVar4 + uVar11,&DAT_100a85418,&DAT_100819868);
  local_78 = FUN_10030de9c;
  local_98 = PTR___NSConcreteStackBlock_100995490;
  local_90 = 0x42000000;
  local_88 = FUN_1000acdb4;
  puStack_80 = &DAT_1009afc80;
  local_70 = puVar4;
  aBlock = __Block_copy(&local_98);
  _swift_retain(lVar2);
  lVar2 = local_100[5];
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_100[5]);
  local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar6 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar4 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar7 = puVar4;
  FUN_10028abfc();
  lVar9 = local_a8;
  lVar3 = local_c0;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (local_c0,&local_a0,puVar4,puVar7,local_a8,puVar6);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar2,lVar3,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_b8 + 8))(lVar3,lVar9);
  (**(code **)(local_d0 + 8))(lVar2,lStack_c8);
  FUN_100040bb4(lVar14,&DAT_100a85418,&DAT_100819868);
  _swift_release(local_70);
  return;
}

