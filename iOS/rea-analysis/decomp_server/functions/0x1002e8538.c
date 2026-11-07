// rea decompile_all
// name: FUN_1002e8538
// address: 0x1002e8538
// body: available
// range: 0x1002e8538-0x1002e8d97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001002e8680) */

void FUN_1002e8538(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  code *pcVar18;
  undefined8 *apuStack_180 [4];
  ulong local_160;
  ulong local_158;
  long local_150;
  ulong local_148;
  ulong local_140;
  ulong local_138;
  code *local_130;
  code *local_128;
  long local_120;
  long local_118;
  void *local_110;
  long local_108;
  long local_100;
  long local_f8;
  undefined8 *local_f0;
  long local_e8;
  long local_e0;
  code *local_d8;
  code *local_d0;
  undefined8 *local_c8;
  long local_c0;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  
  lVar1 = 0;
  local_d8 = (code *)param_6;
  local_d0 = param_5;
  local_c0 = param_3;
  __s10Foundation10URLRequestVMa();
  lVar15 = *(long *)(lVar1 + -8);
  lVar13 = *(long *)(lVar15 + 0x40);
  lVar8 = (long)apuStack_180 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100a84680;
  local_c8 = (undefined8 *)lVar8;
  FUN_100004bb4(&DAT_100a84680,&DAT_100818f90);
  puVar9 = (undefined8 *)
           (lVar8 - (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  FUN_10007f314(param_1,puVar9,&DAT_100a84680,&DAT_100818f90);
  puVar2 = puVar9;
  _swift_getEnumCaseMultiPayload(puVar9,puVar7);
  puVar6 = local_c8;
  if ((int)puVar2 == 1) {
    puVar7 = (undefined *)*puVar9;
    uVar3 = 0xf;
    local_a8 = puVar7;
    __ss042_stdlib_isOSVersionAtLeastOrVariantVersiondE0yBi1_Bw_BwBwBwBwBwtF(0xf,0,0,0x12,0,0);
    if ((uVar3 & 1) != 0) {
      puVar4 = &DAT_100a82488;
      FUN_100004bb4(&DAT_100a82488,&DAT_100816c20);
      _swift_willThrowTypedImpl(&local_a8,puVar4,PTR___ss5ErrorWS_100995c48);
    }
    lVar8 = local_c0;
    local_d0 = *(code **)(param_2 + 0x20);
    lVar10 = (long)puVar9 - (lVar13 + 0xfU & 0xfffffffffffffff0);
    local_c8 = puVar9;
    (**(code **)(lVar15 + 0x10))(lVar10,param_4,lVar1);
    uVar3 = (ulong)*(byte *)(lVar15 + 0x50);
    uVar11 = uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff);
    uVar14 = lVar13 + uVar11 + 7 & 0xfffffffffffffff8;
    puVar4 = &DAT_1009aed70;
    _swift_allocObject(&DAT_1009aed70,uVar14 + 8,uVar3 | 7);
    *(long *)(puVar4 + 0x10) = lVar8;
    (**(code **)(lVar15 + 0x20))(puVar4 + uVar11,lVar10,lVar1);
    *(undefined **)(puVar4 + uVar14) = puVar7;
    local_88 = FUN_1002f0b78;
    local_a8 = PTR___NSConcreteStackBlock_100995490;
    local_a0 = 0x42000000;
    local_98 = FUN_1000acdb4;
    puStack_90 = &DAT_1009aed88;
    local_80 = puVar4;
    pvVar5 = __Block_copy(&local_a8);
    lVar1 = 0;
    __s8Dispatch0A3QoSVMa();
    local_e8 = *(long *)(lVar1 + -8);
    lVar13 = lVar10 - (*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
    local_e0 = lVar1;
    local_d8 = (code *)lVar10;
    _swift_retain(lVar8);
    _swift_errorRetain(puVar7);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar13);
    lVar1 = 0;
    __s8Dispatch0A13WorkItemFlagsVMa();
    lVar8 = *(long *)(lVar1 + -8);
    lVar15 = lVar13 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
    local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar6 = &DAT_100a82c10;
    local_c0 = lVar13;
    FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar4 = &DAT_100a82c18;
    FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
    puVar2 = &DAT_100a82c20;
    FUN_1000d61d8(&DAT_100a82c20,&DAT_100a82c18,&DAT_100819000);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar15,&local_b0,puVar4,puVar2,lVar1,puVar6);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar13,lVar15,pvVar5);
    __Block_release(pvVar5);
    _swift_errorRelease(puVar7);
    (**(code **)(lVar8 + 8))(lVar15,lVar1);
    (**(code **)(local_e8 + 8))(lVar13,local_e0);
    _swift_release(local_80);
  }
  else {
    pcVar18 = *(code **)(lVar15 + 0x20);
    (*pcVar18)(local_c8,puVar9,lVar1);
    FUN_100312230();
    local_e8 = *(undefined8 *)(param_2 + 0x20);
    uVar3 = lVar13 + 0xfU & 0xfffffffffffffff0;
    lVar10 = (long)puVar9 - uVar3;
    pcVar16 = *(code **)(lVar15 + 0x10);
    local_120 = param_2;
    local_f0 = puVar9;
    (*pcVar16)(lVar10,param_4,lVar1);
    lVar12 = lVar10 - uVar3;
    local_138 = uVar3;
    local_130 = pcVar16;
    local_f8 = lVar10;
    (*pcVar16)(lVar12,puVar6,lVar1);
    local_148 = (ulong)*(byte *)(lVar15 + 0x50);
    uVar3 = local_148 + 0x18 & (local_148 ^ 0xffffffffffffffff);
    local_150 = uVar3 + lVar13;
    uVar11 = local_150 + local_148 & (local_148 ^ 0xffffffffffffffff);
    puVar7 = &DAT_1009aedc0;
    _swift_allocObject(&DAT_1009aedc0,uVar11 + lVar13,local_148 | 7);
    lVar8 = local_c0;
    *(long *)(puVar7 + 0x10) = local_c0;
    local_140 = uVar3;
    (*pcVar18)(puVar7 + uVar3,lVar10,lVar1);
    local_128 = pcVar18;
    (*pcVar18)(puVar7 + uVar11,lVar12,lVar1);
    local_88 = FUN_1002f0c48;
    local_a8 = PTR___NSConcreteStackBlock_100995490;
    local_a0 = 0x42000000;
    local_98 = FUN_1000acdb4;
    puStack_90 = &DAT_1009aedd8;
    local_80 = puVar7;
    local_110 = __Block_copy(&local_a8);
    lVar13 = 0;
    __s8Dispatch0A3QoSVMa();
    local_108 = *(long *)(lVar13 + -8);
    local_158 = *(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0;
    lVar17 = lVar12 - local_158;
    local_100 = lVar12;
    local_e0 = lVar13;
    _swift_retain(lVar8);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar17);
    lVar8 = 0;
    __s8Dispatch0A13WorkItemFlagsVMa();
    lVar13 = *(long *)(lVar8 + -8);
    local_160 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
    lVar10 = lVar17 - local_160;
    local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar6 = &DAT_100a82c10;
    local_118 = lVar17;
    FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar7 = &DAT_100a82c18;
    FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
    puVar2 = &DAT_100a82c20;
    FUN_1000d61d8(&DAT_100a82c20,&DAT_100a82c18,&DAT_100819000);
    apuStack_180[1] = puVar2;
    apuStack_180[2] = (undefined8 *)puVar7;
    apuStack_180[3] = puVar6;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar10,&local_b0,puVar7,puVar2,lVar8,puVar6);
    pvVar5 = local_110;
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar17,lVar10,local_110);
    __Block_release(pvVar5);
    pcVar16 = *(code **)(lVar13 + 8);
    (*pcVar16)(lVar10,lVar8);
    pcVar18 = *(code **)(local_108 + 8);
    (*pcVar18)(lVar17,local_e0);
    puVar7 = local_80;
    _swift_release();
    puVar6 = local_f0;
    (*local_d0)();
    puVar2 = local_c8;
    if (((ulong)puVar7 & 1) == 0) {
      (**(code **)(lVar15 + 8))(local_c8,lVar1);
    }
    else {
      local_d0 = (code *)puVar6;
      lVar12 = (long)puVar6 - local_138;
      (*local_130)(lVar12,local_c8,lVar1);
      uVar3 = local_150 + 7U & 0xfffffffffffffff8;
      puVar7 = &DAT_1009aee10;
      local_d8 = pcVar18;
      _swift_allocObject(&DAT_1009aee10,uVar3 + 8,local_148 | 7);
      lVar13 = local_120;
      *(long *)(puVar7 + 0x10) = local_120;
      (*local_128)(puVar7 + local_140,lVar12,lVar1);
      lVar10 = local_c0;
      *(long *)(puVar7 + uVar3) = local_c0;
      local_88 = thunk_FUN_1002f1c94;
      local_a8 = PTR___NSConcreteStackBlock_100995490;
      local_a0 = 0x42000000;
      local_98 = FUN_1000acdb4;
      puStack_90 = &DAT_1009aee28;
      local_80 = puVar7;
      pvVar5 = __Block_copy(&local_a8);
      lVar17 = lVar12 - local_158;
      local_f0 = (undefined8 *)lVar12;
      _swift_retain(lVar10);
      _swift_retain(lVar13);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar17);
      lVar13 = lVar17 - local_160;
      local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (lVar13,&local_b0,apuStack_180[2],apuStack_180[1],lVar8,apuStack_180[3]);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar17,lVar13,pvVar5);
      __Block_release(pvVar5);
      (*pcVar16)(lVar13,lVar8);
      (*local_d8)(lVar17,local_e0);
      (**(code **)(lVar15 + 8))(puVar2,lVar1);
      _swift_release(local_80);
    }
  }
  return;
}

