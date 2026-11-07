// rea decompile_all
// name: FUN_10060a770
// address: 0x10060a770
// body: available
// range: 0x10060a770-0x10060ab7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10060a770(undefined8 param_1,long param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,long *param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  void *pvVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  long lVar15;
  long local_100;
  long local_f8;
  undefined8 local_f0;
  long local_e8;
  long local_e0;
  long lStack_d8;
  undefined8 local_d0;
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
  
  lVar11 = *param_6;
  lVar2 = 0;
  local_f0 = param_3;
  local_d0 = param_5;
  local_c8 = param_7;
  local_c0 = param_8;
  local_b8 = param_2;
  __s8Dispatch0A3QoSVMa();
  local_e0 = *(long *)(lVar2 + -8);
  lVar12 = (long)&local_100 - (*(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100aaffc0;
  local_e8 = lVar12;
  lStack_d8 = lVar2;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar12 = lVar12 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_a8 = *(long *)(lVar2 + -8);
  uVar9 = *(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_f8 = lVar12 - uVar9;
  lVar10 = local_f8 - uVar9;
  lVar4 = 0;
  local_100 = lVar10;
  local_b0 = lVar2;
  FUN_100616300(0,*(undefined8 *)(lVar11 + 0x50));
  lVar11 = *(long *)(lVar4 + -8);
  lVar2 = *(long *)(lVar11 + 0x40);
  uVar9 = lVar2 + 0xfU & 0xfffffffffffffff0;
  lVar10 = lVar10 - uVar9;
  lVar15 = lVar10 - uVar9;
  pcVar13 = *(code **)(lVar11 + 0x10);
  (*pcVar13)(lVar15,param_1,lVar4);
  (*pcVar13)(lVar10,lVar15,lVar4);
  uVar1 = local_d0;
  uVar9 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar14 = uVar9 + 0x38 & (uVar9 ^ 0xffffffffffffffff);
  puVar3 = &DAT_1009de9a8;
  _swift_allocObject(&DAT_1009de9a8,uVar14 + lVar2,uVar9 | 7);
  lVar2 = local_b8;
  *(undefined8 *)(puVar3 + 0x10) = local_c8;
  *(long *)(puVar3 + 0x18) = local_c0;
  *(code **)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = uVar1;
  *(long **)(puVar3 + 0x30) = param_6;
  (**(code **)(lVar11 + 0x20))(puVar3 + uVar14,lVar15,lVar4);
  if (lVar2 == 0) {
    _swift_retain(param_6);
    _swift_retain(uVar1);
    (*param_4)();
    (**(code **)(*(long *)param_6[2] + 0x68))(lVar10);
    _swift_release(puVar3);
  }
  else {
    local_c0 = lVar10;
    FUN_100607210(local_f0,lVar12);
    lVar15 = lVar12;
    (**(code **)(local_a8 + 0x30))(lVar12,1,local_b0);
    lVar10 = local_b0;
    lVar2 = local_100;
    local_70 = puVar3;
    if ((int)lVar15 == 1) {
      _swift_retain(param_6);
      _swift_retain(uVar1);
      FUN_1006070b4(lVar12);
      local_78 = FUN_10060ced4;
      local_98 = PTR___NSConcreteStackBlock_100995490;
      local_90 = 0x42000000;
      local_88 = FUN_1000acdb4;
      puStack_80 = &DAT_1009de9c0;
      pvVar5 = __Block_copy(&local_98);
      puVar6 = puVar3;
      _swift_retain(puVar3);
      lVar2 = local_e8;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_e8);
      local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_100607460();
      puVar7 = &DAT_100aaffd0;
      FUN_100004bb4(&DAT_100aaffd0,&DAT_1008484a0);
      puVar8 = puVar7;
      FUN_1006074a4();
      lVar12 = local_b0;
      lVar10 = local_f8;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_f8,&local_a0,puVar7,puVar8,local_b0,puVar6);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar2,lVar10,pvVar5);
      __Block_release(pvVar5);
      _swift_release(puVar3);
      (**(code **)(local_a8 + 8))(lVar10,lVar12);
      pcVar13 = *(code **)(local_e0 + 8);
      lVar10 = lStack_d8;
    }
    else {
      (**(code **)(local_a8 + 0x20))(local_100,lVar12,local_b0);
      local_78 = FUN_10060ced4;
      local_98 = PTR___NSConcreteStackBlock_100995490;
      local_90 = 0x42000000;
      local_88 = FUN_1000acdb4;
      puStack_80 = &DAT_1009de9e8;
      pvVar5 = __Block_copy(&local_98);
      _swift_retain(param_6);
      _swift_retain(uVar1);
      _swift_retain(puVar3);
      lVar12 = local_e8;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_e8);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar12,lVar2,pvVar5);
      __Block_release(pvVar5);
      _swift_release(puVar3);
      (**(code **)(local_e0 + 8))(lVar12,lStack_d8);
      pcVar13 = *(code **)(local_a8 + 8);
    }
    (*pcVar13)(lVar2,lVar10);
    _swift_release(local_70);
    lVar10 = local_c0;
  }
  (**(code **)(lVar11 + 8))(lVar10,lVar4);
  return;
}

