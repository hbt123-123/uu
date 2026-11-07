// rea decompile_all
// name: FUN_10060ace8
// address: 0x10060ace8
// body: available
// range: 0x10060ace8-0x10060b113 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10060ace8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long *param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  void *pvVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  ulong uVar17;
  long local_110;
  long local_108;
  undefined8 local_100;
  undefined8 local_f8;
  long local_f0;
  long local_e8;
  long lStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c8;
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
  
  lVar12 = *param_6;
  lVar3 = 0;
  local_f8 = param_3;
  local_d8 = param_5;
  local_d0 = param_4;
  local_c8 = param_8;
  local_c0 = param_2;
  __s8Dispatch0A3QoSVMa();
  local_e8 = *(long *)(lVar3 + -8);
  lVar14 = (long)&local_110 - (*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100aaffc0;
  local_f0 = lVar14;
  lStack_e0 = lVar3;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar14 = lVar14 - (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_b0 = *(long *)(lVar3 + -8);
  uVar10 = *(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_108 = lVar14 - uVar10;
  lVar11 = local_108 - uVar10;
  lVar5 = 0;
  local_110 = lVar11;
  local_a8 = lVar3;
  FUN_100616300(0,*(undefined8 *)(lVar12 + 0x50));
  lVar13 = *(long *)(lVar5 + -8);
  lVar3 = *(long *)(lVar13 + 0x40);
  uVar10 = lVar3 + 0xfU & 0xfffffffffffffff0;
  lVar11 = lVar11 - uVar10;
  lVar15 = lVar11 - uVar10;
  pcVar16 = *(code **)(lVar13 + 0x10);
  (*pcVar16)(lVar15,param_1,lVar5);
  (*pcVar16)(lVar11,lVar15,lVar5);
  uVar1 = local_d8;
  uVar10 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar17 = uVar10 + 0x38 & (uVar10 ^ 0xffffffffffffffff);
  puVar4 = &DAT_1009de908;
  _swift_allocObject(&DAT_1009de908,uVar17 + lVar3,uVar10 | 7);
  lVar12 = local_c0;
  lVar3 = local_c8;
  uVar2 = local_d0;
  *(undefined8 *)(puVar4 + 0x10) = param_7;
  *(long *)(puVar4 + 0x18) = local_c8;
  *(undefined8 *)(puVar4 + 0x20) = local_d0;
  *(undefined8 *)(puVar4 + 0x28) = uVar1;
  *(long **)(puVar4 + 0x30) = param_6;
  local_100 = param_7;
  local_b8 = lVar13;
  (**(code **)(lVar13 + 0x20))(puVar4 + uVar17,lVar15);
  if (lVar12 == 0) {
    _swift_retain(param_6);
    _swift_retain(uVar1);
    FUN_10060b114(uVar2,uVar1,param_6,lVar11,local_100,lVar3);
    _swift_release(puVar4);
  }
  else {
    local_c8 = lVar11;
    FUN_100607210(local_f8,lVar14);
    lVar13 = lVar14;
    (**(code **)(local_b0 + 0x30))(lVar14,1,local_a8);
    lVar11 = local_a8;
    lVar12 = local_b0;
    lVar3 = local_110;
    local_70 = puVar4;
    if ((int)lVar13 == 1) {
      _swift_retain(param_6);
      _swift_retain(uVar1);
      FUN_1006070b4(lVar14);
      local_78 = FUN_10060cc78;
      local_98 = PTR___NSConcreteStackBlock_100995490;
      local_90 = 0x42000000;
      local_88 = FUN_1000acdb4;
      puStack_80 = &DAT_1009de920;
      pvVar6 = __Block_copy(&local_98);
      puVar7 = puVar4;
      _swift_retain(puVar4);
      lVar3 = local_f0;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_f0);
      local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_100607460();
      puVar8 = &DAT_100aaffd0;
      FUN_100004bb4(&DAT_100aaffd0,&DAT_1008484a0);
      puVar9 = puVar8;
      FUN_1006074a4();
      lVar11 = local_a8;
      lVar12 = local_108;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_108,&local_a0,puVar8,puVar9,local_a8,puVar7);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar3,lVar12,pvVar6);
      __Block_release(pvVar6);
      _swift_release(puVar4);
      (**(code **)(local_b0 + 8))(lVar12,lVar11);
      pcVar16 = *(code **)(local_e8 + 8);
      lVar11 = lStack_e0;
    }
    else {
      (**(code **)(local_b0 + 0x20))(local_110,lVar14,local_a8);
      local_78 = FUN_10060cc78;
      local_98 = PTR___NSConcreteStackBlock_100995490;
      local_90 = 0x42000000;
      local_88 = FUN_1000acdb4;
      puStack_80 = &DAT_1009de948;
      pvVar6 = __Block_copy(&local_98);
      _swift_retain(param_6);
      _swift_retain(uVar1);
      _swift_retain(puVar4);
      lVar14 = local_f0;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_f0);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar14,lVar3,pvVar6);
      __Block_release(pvVar6);
      _swift_release(puVar4);
      (**(code **)(local_e8 + 8))(lVar14,lStack_e0);
      pcVar16 = *(code **)(lVar12 + 8);
    }
    (*pcVar16)(lVar3,lVar11);
    _swift_release(local_70);
    lVar11 = local_c8;
  }
  (**(code **)(local_b8 + 8))(lVar11,lVar5);
  return;
}

