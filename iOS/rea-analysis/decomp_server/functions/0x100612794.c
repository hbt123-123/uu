// rea decompile_all
// name: FUN_100612794
// address: 0x100612794
// body: available
// range: 0x100612794-0x100612b9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100612794(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long *param_6,long param_7)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  void *pvVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long local_100;
  long local_f8;
  long local_f0;
  undefined8 local_e8;
  long local_e0;
  long local_d8;
  long lStack_d0;
  long *local_c8;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  lVar18 = *param_6;
  lVar3 = 0;
  local_e8 = param_3;
  local_c8 = param_6;
  local_c0 = param_5;
  local_b8 = param_2;
  __s8Dispatch0A3QoSVMa();
  local_d8 = *(long *)(lVar3 + -8);
  lVar14 = (long)&local_100 - (*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100aaffc0;
  local_e0 = lVar14;
  lStack_d0 = lVar3;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar14 = lVar14 - (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_b0 = *(long *)(lVar5 + -8);
  uVar10 = *(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_f0 = lVar14 - uVar10;
  local_f8 = local_f0 - uVar10;
  lVar17 = *(long *)(param_7 + -8);
  lVar15 = *(long *)(lVar17 + 0x40);
  uVar10 = lVar15 + 0xfU & 0xfffffffffffffff0;
  lVar3 = local_f8 - uVar10;
  lVar13 = lVar3 - uVar10;
  pcVar11 = *(code **)(lVar17 + 0x10);
  local_a8 = lVar5;
  (*pcVar11)(lVar13,param_1,param_7);
  (*pcVar11)(lVar3,lVar13,param_7);
  uVar10 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar12 = uVar10 + 0x30 & (uVar10 ^ 0xffffffffffffffff);
  uVar16 = lVar15 + uVar12 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_1009df760;
  _swift_allocObject(&DAT_1009df760,uVar16 + 8,uVar10 | 7);
  uVar2 = local_c0;
  plVar1 = local_c8;
  *(long *)(puVar4 + 0x10) = param_7;
  *(undefined8 *)(puVar4 + 0x18) = *(undefined8 *)(lVar18 + 0x50);
  *(undefined8 *)(puVar4 + 0x20) = param_4;
  *(undefined8 *)(puVar4 + 0x28) = local_c0;
  (**(code **)(lVar17 + 0x20))(puVar4 + uVar12,lVar13,param_7);
  *(long **)(puVar4 + uVar16) = plVar1;
  if (local_b8 == 0) {
    _swift_retain(plVar1);
    _swift_retain(uVar2);
    FUN_100612ba0(param_4,uVar2,lVar3,plVar1,param_7);
    _swift_release(puVar4);
  }
  else {
    local_100 = lVar3;
    FUN_100607210(local_e8,lVar14);
    lVar13 = lVar14;
    (**(code **)(local_b0 + 0x30))(lVar14,1,local_a8);
    lVar5 = local_b0;
    lVar3 = local_f8;
    local_70 = puVar4;
    if ((int)lVar13 == 1) {
      _swift_retain(plVar1);
      _swift_retain(uVar2);
      FUN_1006070b4(lVar14);
      local_78 = FUN_100614ec0;
      local_98 = PTR___NSConcreteStackBlock_100995490;
      local_90 = 0x42000000;
      local_88 = FUN_1000acdb4;
      puStack_80 = &DAT_1009df778;
      pvVar6 = __Block_copy(&local_98);
      puVar7 = puVar4;
      _swift_retain(puVar4);
      lVar3 = local_e0;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_e0);
      local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_100607460();
      puVar8 = &DAT_100aaffd0;
      FUN_100004bb4(&DAT_100aaffd0,&DAT_1008484a0);
      puVar9 = puVar8;
      FUN_1006074a4();
      lVar14 = local_a8;
      lVar5 = local_f0;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_f0,&local_a0,puVar8,puVar9,local_a8,puVar7);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar3,lVar5,pvVar6);
      __Block_release(pvVar6);
      _swift_release(puVar4);
      (**(code **)(local_b0 + 8))(lVar5,lVar14);
      pcVar11 = *(code **)(local_d8 + 8);
      lVar5 = lStack_d0;
    }
    else {
      (**(code **)(local_b0 + 0x20))(local_f8,lVar14,local_a8);
      local_78 = FUN_100614ec0;
      local_98 = PTR___NSConcreteStackBlock_100995490;
      local_90 = 0x42000000;
      local_88 = FUN_1000acdb4;
      puStack_80 = &DAT_1009df7a0;
      pvVar6 = __Block_copy(&local_98);
      _swift_retain(plVar1);
      _swift_retain(uVar2);
      _swift_retain(puVar4);
      lVar14 = local_e0;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_e0);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar14,lVar3,pvVar6);
      __Block_release(pvVar6);
      _swift_release(puVar4);
      (**(code **)(local_d8 + 8))(lVar14,lStack_d0);
      pcVar11 = *(code **)(lVar5 + 8);
      lVar5 = local_a8;
    }
    (*pcVar11)(lVar3,lVar5);
    _swift_release(local_70);
    lVar3 = local_100;
  }
  (**(code **)(lVar17 + 8))(lVar3,param_7);
  return;
}

