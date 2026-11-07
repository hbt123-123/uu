// rea decompile_all
// name: FUN_100619ad8
// address: 0x100619ad8
// body: available
// range: 0x100619ad8-0x100619eef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100619ad8(undefined8 param_1,long param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,long *param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  void *pvVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long local_100;
  long local_f8;
  long local_f0;
  undefined8 local_e8;
  long local_e0;
  long local_d8;
  long lStack_d0;
  undefined8 local_c8;
  long local_c0;
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
  
  lVar13 = *param_6;
  lVar1 = 0;
  local_e8 = param_3;
  local_c8 = param_8;
  local_c0 = param_7;
  local_b8 = param_2;
  __s8Dispatch0A3QoSVMa();
  local_d8 = *(long *)(lVar1 + -8);
  lVar8 = (long)&local_100 - (*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100aaffc0;
  local_e0 = lVar8;
  lStack_d0 = lVar1;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar8 = lVar8 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  local_f0 = lVar8;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_b0 = *(long *)(lVar1 + -8);
  uVar9 = *(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_f8 = lVar8 - uVar9;
  lVar10 = local_f8 - uVar9;
  lVar3 = 0;
  local_100 = lVar10;
  local_a8 = lVar1;
  FUN_100616300(0,*(undefined8 *)(lVar13 + 0x50));
  lVar13 = *(long *)(lVar3 + -8);
  lVar1 = *(long *)(lVar13 + 0x40);
  uVar9 = lVar1 + 0xfU & 0xfffffffffffffff0;
  lVar10 = lVar10 - uVar9;
  lVar15 = lVar10 - uVar9;
  pcVar11 = *(code **)(lVar13 + 0x10);
  (*pcVar11)(lVar15,param_1,lVar3);
  (*pcVar11)(lVar10,lVar15,lVar3);
  uVar9 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar12 = uVar9 + 0x30 & (uVar9 ^ 0xffffffffffffffff);
  uVar14 = lVar1 + uVar12 + 7 & 0xfffffffffffffff8;
  puVar2 = &DAT_1009e0188;
  _swift_allocObject(&DAT_1009e0188,uVar14 + 8,uVar9 | 7);
  lVar8 = local_b8;
  *(long *)(puVar2 + 0x10) = local_c0;
  *(undefined8 *)(puVar2 + 0x18) = local_c8;
  *(code **)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  (**(code **)(lVar13 + 0x20))(puVar2 + uVar12,lVar15,lVar3);
  lVar1 = local_f0;
  *(long **)(puVar2 + uVar14) = param_6;
  if (lVar8 == 0) {
    _swift_retain(param_6);
    _swift_retain(param_5);
    (*param_4)(lVar10);
    FUN_100616504(lVar10);
    _swift_release(puVar2);
  }
  else {
    local_c0 = lVar10;
    FUN_100607210(local_e8,local_f0);
    lVar15 = lVar1;
    (**(code **)(local_b0 + 0x30))(lVar1,1,local_a8);
    lVar10 = local_b0;
    lVar8 = local_100;
    local_70 = puVar2;
    if ((int)lVar15 == 1) {
      _swift_retain(param_6);
      _swift_retain(param_5);
      FUN_1006070b4(lVar1);
      local_78 = FUN_10061c0d0;
      local_98 = PTR___NSConcreteStackBlock_100995490;
      local_90 = 0x42000000;
      local_88 = FUN_1000acdb4;
      puStack_80 = &DAT_1009e01a0;
      pvVar4 = __Block_copy(&local_98);
      puVar5 = puVar2;
      _swift_retain(puVar2);
      lVar8 = local_e0;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_e0);
      local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_100607460();
      puVar6 = &DAT_100aaffd0;
      FUN_100004bb4(&DAT_100aaffd0,&DAT_1008484a0);
      puVar7 = puVar6;
      FUN_1006074a4();
      lVar10 = local_a8;
      lVar1 = local_f8;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_f8,&local_a0,puVar6,puVar7,local_a8,puVar5);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar8,lVar1,pvVar4);
      __Block_release(pvVar4);
      _swift_release(puVar2);
      (**(code **)(local_b0 + 8))(lVar1,lVar10);
      pcVar11 = *(code **)(local_d8 + 8);
      lVar1 = lStack_d0;
    }
    else {
      (**(code **)(local_b0 + 0x20))(local_100,lVar1,local_a8);
      local_78 = FUN_10061c0d0;
      local_98 = PTR___NSConcreteStackBlock_100995490;
      local_90 = 0x42000000;
      local_88 = FUN_1000acdb4;
      puStack_80 = &DAT_1009e01c8;
      pvVar4 = __Block_copy(&local_98);
      _swift_retain(param_6);
      _swift_retain(param_5);
      _swift_retain(puVar2);
      lVar1 = local_e0;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_e0);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar1,lVar8,pvVar4);
      __Block_release(pvVar4);
      _swift_release(puVar2);
      (**(code **)(local_d8 + 8))(lVar1,lStack_d0);
      pcVar11 = *(code **)(lVar10 + 8);
      lVar1 = local_a8;
    }
    (*pcVar11)(lVar8,lVar1);
    _swift_release(local_70);
    lVar10 = local_c0;
  }
  (**(code **)(lVar13 + 8))(lVar10,lVar3);
  return;
}

