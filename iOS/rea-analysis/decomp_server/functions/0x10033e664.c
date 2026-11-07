// rea decompile_all
// name: FUN_10033e664
// address: 0x10033e664
// body: available
// range: 0x10033e664-0x10033e997 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10033e664(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  void *aBlock;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar4 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar11 = *(long *)(lVar4 + -8);
  puVar12 = &stack0xffffffffffffff10 + -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar13 = *(long *)(lVar5 + -8);
  lVar14 = (long)puVar12 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  FUN_10033f2a8();
  lVar16 = *(long *)(param_1 + *(int *)(lVar6 + 0x24));
  *(undefined **)(param_1 + *(int *)(lVar6 + 0x24)) = PTR___swiftEmptyArrayStorage_100995ea0;
  iVar3 = *(int *)(lVar6 + 0x1c);
  lVar15 = *(long *)(param_1 + iVar3);
  if (lVar15 != 0) {
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar15);
  }
  *(undefined8 *)(param_1 + iVar3) = 0;
  plVar1 = (long *)(param_1 + *(int *)(lVar6 + 0x20));
  lVar6 = *plVar1;
  if (lVar6 != 0) {
    pcVar2 = (code *)plVar1[2];
    lVar15 = plVar1[3];
    lVar17 = plVar1[1];
    (*pcVar2)();
    FUN_10033f2e0(lVar6,lVar17,pcVar2,lVar15);
  }
  plVar1[1] = 0;
  *plVar1 = 0;
  plVar1[3] = 0;
  plVar1[2] = 0;
  lVar6 = *(long *)(lVar16 + 0x10);
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(lVar16);
  }
  else {
    lVar15 = 0x20;
    do {
      puVar7 = &DAT_1009b30b0;
      _swift_allocObject(&DAT_1009b30b0,0x20,7);
      uVar19 = ((undefined8 *)(lVar16 + lVar15))[1];
      uVar18 = *(undefined8 *)(lVar16 + lVar15);
      *(undefined8 *)(puVar7 + 0x18) = uVar19;
      *(undefined8 *)(puVar7 + 0x10) = uVar18;
      lVar17 = DAT_100a81bc0;
      _swift_retain(uVar19);
      if (lVar17 != -1) {
        _swift_once(&DAT_100a81bc0,FUN_10033dac4);
      }
      puVar8 = &DAT_1009b30d8;
      _swift_allocObject(&DAT_1009b30d8,0x29,7);
      *(code **)(puVar8 + 0x10) = FUN_10033fcc0;
      *(undefined **)(puVar8 + 0x18) = puVar7;
      *(undefined8 *)(puVar8 + 0x20) = param_2;
      puVar8[0x28] = (char)param_3;
      local_70 = FUN_10033fd24;
      local_90 = PTR___NSConcreteStackBlock_100995490;
      local_88 = 0x42000000;
      local_80 = FUN_1000acdb4;
      puStack_78 = &DAT_1009b30f0;
      local_68 = puVar8;
      aBlock = __Block_copy(&local_90);
      _swift_retain(puVar7);
      FUN_1002f1030(param_2,param_3);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar14);
      local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar9 = &DAT_100a82c10;
      FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar8 = &DAT_100a82c18;
      FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
      puVar10 = &DAT_100a82c20;
      FUN_1000d61d8(&DAT_100a82c20,&DAT_100a82c18,&DAT_100819000);
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (puVar12,&local_98,puVar8,puVar10,lVar4,puVar9);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar14,puVar12,aBlock);
      __Block_release(aBlock);
      _swift_release(puVar7);
      (**(code **)(lVar11 + 8))(puVar12,lVar4);
      (**(code **)(lVar13 + 8))(lVar14,lVar5);
      _swift_release(local_68);
      lVar15 = lVar15 + 0x10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    _swift_bridgeObjectRelease(lVar16);
  }
  return;
}

