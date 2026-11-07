// rea decompile_all
// name: FUN_100611210
// address: 0x100611210
// body: available
// range: 0x100611210-0x100611613 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100611210(undefined8 param_1,long param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,long param_6,long param_7)

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
  code *pcVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long local_100;
  long local_f8;
  long local_f0;
  undefined8 local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long lStack_c8;
  undefined8 local_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  lVar2 = 0;
  local_e8 = param_3;
  local_c0 = param_5;
  local_b8 = param_2;
  lStack_b0 = param_6;
  __s8Dispatch0A3QoSVMa();
  local_d0 = *(long *)(lVar2 + -8);
  lVar11 = (long)&local_100 - (*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100aaffc0;
  local_d8 = lVar11;
  lStack_c8 = lVar2;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar11 = lVar11 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_a8 = *(long *)(lVar2 + -8);
  uVar9 = *(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_f0 = lVar11 - uVar9;
  local_f8 = local_f0 - uVar9;
  lVar17 = *(long *)(param_7 + -8);
  lVar14 = *(long *)(lVar17 + 0x40);
  uVar9 = lVar14 + 0xfU & 0xfffffffffffffff0;
  lVar16 = local_f8 - uVar9;
  lVar10 = lVar16 - uVar9;
  pcVar12 = *(code **)(lVar17 + 0x10);
  local_e0 = lVar2;
  (*pcVar12)(lVar10,param_1,param_7);
  (*pcVar12)(lVar16,lVar10,param_7);
  uVar9 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar13 = uVar9 + 0x28 & (uVar9 ^ 0xffffffffffffffff);
  uVar15 = lVar14 + uVar13 + 7 & 0xfffffffffffffff8;
  puVar3 = &DAT_1009df9e0;
  _swift_allocObject(&DAT_1009df9e0,uVar15 + 8,uVar9 | 7);
  lVar14 = lStack_b0;
  lVar2 = local_b8;
  uVar1 = local_c0;
  *(long *)(puVar3 + 0x10) = param_7;
  *(code **)(puVar3 + 0x18) = param_4;
  *(undefined8 *)(puVar3 + 0x20) = local_c0;
  (**(code **)(lVar17 + 0x20))(puVar3 + uVar13,lVar10,param_7);
  *(long *)(puVar3 + uVar15) = lVar14;
  if (lVar2 == 0) {
    _swift_retain(lVar14);
    _swift_retain(uVar1);
    (*param_4)(lVar16);
    (**(code **)(**(long **)(lVar14 + 0x10) + 0x68))();
    _swift_release(puVar3);
  }
  else {
    local_100 = lVar16;
    FUN_100607210(local_e8,lVar11);
    lVar16 = local_e0;
    lVar4 = lVar11;
    (**(code **)(local_a8 + 0x30))(lVar11,1,local_e0);
    lVar10 = local_a8;
    lVar2 = local_f8;
    local_70 = puVar3;
    if ((int)lVar4 == 1) {
      _swift_retain(lVar14);
      _swift_retain(uVar1);
      FUN_1006070b4(lVar11);
      local_78 = FUN_1006151c4;
      local_98 = PTR___NSConcreteStackBlock_100995490;
      local_90 = 0x42000000;
      local_88 = FUN_1000acdb4;
      puStack_80 = &DAT_1009df9f8;
      pvVar5 = __Block_copy(&local_98);
      puVar6 = puVar3;
      _swift_retain(puVar3);
      lVar2 = local_d8;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_d8);
      local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_100607460();
      puVar7 = &DAT_100aaffd0;
      FUN_100004bb4(&DAT_100aaffd0,&DAT_1008484a0);
      puVar8 = puVar7;
      FUN_1006074a4();
      lVar14 = local_f0;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_f0,&local_a0,puVar7,puVar8,lVar16,puVar6);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar2,lVar14,pvVar5);
      __Block_release(pvVar5);
      _swift_release(puVar3);
      (**(code **)(local_a8 + 8))(lVar14,lVar16);
      pcVar12 = *(code **)(local_d0 + 8);
      lVar16 = lStack_c8;
    }
    else {
      (**(code **)(local_a8 + 0x20))(local_f8,lVar11,lVar16);
      local_78 = FUN_1006151c4;
      local_98 = PTR___NSConcreteStackBlock_100995490;
      local_90 = 0x42000000;
      local_88 = FUN_1000acdb4;
      puStack_80 = &DAT_1009dfa20;
      pvVar5 = __Block_copy(&local_98);
      _swift_retain(lVar14);
      _swift_retain(uVar1);
      _swift_retain(puVar3);
      lVar14 = local_d8;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_d8);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar14,lVar2,pvVar5);
      __Block_release(pvVar5);
      _swift_release(puVar3);
      (**(code **)(local_d0 + 8))(lVar14,lStack_c8);
      pcVar12 = *(code **)(lVar10 + 8);
    }
    (*pcVar12)(lVar2,lVar16);
    _swift_release(local_70);
    lVar16 = local_100;
  }
  (**(code **)(lVar17 + 8))(lVar16,param_7);
  return;
}

