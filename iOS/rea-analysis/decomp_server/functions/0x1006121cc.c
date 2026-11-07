// rea decompile_all
// name: FUN_1006121cc
// address: 0x1006121cc
// body: available
// range: 0x1006121cc-0x1006125d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006121cc(undefined8 param_1,long param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  void *pvVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  undefined8 local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long lStack_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  local_b0 = *param_4;
  lVar2 = 0;
  local_e0 = param_3;
  local_b8 = param_6;
  __s8Dispatch0A3QoSVMa();
  local_c8 = *(long *)(lVar2 + -8);
  lVar8 = (long)&local_100 - (*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100aaffc0;
  local_d0 = lVar8;
  lStack_c0 = lVar2;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar8 = lVar8 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_e8 = lVar8;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_a8 = *(long *)(lVar2 + -8);
  uVar9 = *(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_f0 = lVar8 - uVar9;
  local_f8 = local_f0 - uVar9;
  lVar10 = *(long *)(param_7 + -8);
  lVar12 = *(long *)(lVar10 + 0x40);
  uVar9 = lVar12 + 0xfU & 0xfffffffffffffff0;
  lVar8 = local_f8 - uVar9;
  lVar11 = lVar8 - uVar9;
  pcVar13 = *(code **)(lVar10 + 0x10);
  local_d8 = lVar2;
  (*pcVar13)(lVar11,param_1,param_7);
  (*pcVar13)(lVar8,lVar11,param_7);
  uVar1 = local_b8;
  uVar9 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar14 = uVar9 + 0x38 & (uVar9 ^ 0xffffffffffffffff);
  puVar3 = &DAT_1009df800;
  _swift_allocObject(&DAT_1009df800,uVar14 + lVar12,uVar9 | 7);
  *(long *)(puVar3 + 0x10) = param_7;
  *(undefined8 *)(puVar3 + 0x18) = *(undefined8 *)(local_b0 + 0x50);
  *(long **)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = uVar1;
  local_b0 = lVar10;
  (**(code **)(lVar10 + 0x20))(puVar3 + uVar14,lVar11,param_7);
  lVar2 = local_e8;
  if (param_2 == 0) {
    _swift_retain(uVar1);
    _swift_retain(param_4);
    FUN_1006125d4();
    _swift_release(puVar3);
  }
  else {
    local_100 = lVar8;
    FUN_100607210(local_e0,local_e8);
    lVar10 = local_d8;
    lVar12 = lVar2;
    (**(code **)(local_a8 + 0x30))(lVar2,1,local_d8);
    lVar11 = local_a8;
    lVar8 = local_f8;
    local_70 = puVar3;
    if ((int)lVar12 == 1) {
      _swift_retain(uVar1);
      _swift_retain(param_4);
      FUN_1006070b4(lVar2);
      local_78 = FUN_100614f88;
      local_98 = PTR___NSConcreteStackBlock_100995490;
      local_90 = 0x42000000;
      local_88 = FUN_1000acdb4;
      puStack_80 = &DAT_1009df818;
      pvVar4 = __Block_copy(&local_98);
      puVar5 = puVar3;
      _swift_retain(puVar3);
      lVar8 = local_d0;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_d0);
      local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_100607460();
      puVar6 = &DAT_100aaffd0;
      FUN_100004bb4(&DAT_100aaffd0,&DAT_1008484a0);
      puVar7 = puVar6;
      FUN_1006074a4();
      lVar2 = local_f0;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_f0,&local_a0,puVar6,puVar7,lVar10,puVar5);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar8,lVar2,pvVar4);
      __Block_release(pvVar4);
      _swift_release(puVar3);
      (**(code **)(local_a8 + 8))(lVar2,lVar10);
      pcVar13 = *(code **)(local_c8 + 8);
      lVar10 = lStack_c0;
    }
    else {
      (**(code **)(local_a8 + 0x20))(local_f8,lVar2,lVar10);
      local_78 = FUN_100614f88;
      local_98 = PTR___NSConcreteStackBlock_100995490;
      local_90 = 0x42000000;
      local_88 = FUN_1000acdb4;
      puStack_80 = &DAT_1009df840;
      pvVar4 = __Block_copy(&local_98);
      _swift_retain(uVar1);
      _swift_retain(param_4);
      _swift_retain(puVar3);
      lVar2 = local_d0;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_d0);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar2,lVar8,pvVar4);
      __Block_release(pvVar4);
      _swift_release(puVar3);
      (**(code **)(local_c8 + 8))(lVar2,lStack_c0);
      pcVar13 = *(code **)(lVar11 + 8);
    }
    (*pcVar13)(lVar8,lVar10);
    _swift_release(local_70);
    lVar8 = local_100;
  }
  (**(code **)(local_b0 + 8))(lVar8,param_7);
  return;
}

