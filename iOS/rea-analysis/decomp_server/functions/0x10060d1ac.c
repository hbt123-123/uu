// rea decompile_all
// name: FUN_10060d1ac
// address: 0x10060d1ac
// body: available
// range: 0x10060d1ac-0x10060d53f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10060d1ac(undefined8 param_1,ulong param_2,ulong param_3,long param_4,undefined8 param_5,
                  code *param_6,undefined8 param_7,long param_8)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  void *pvVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  undefined1 *local_e0;
  long local_d8;
  long lStack_d0;
  undefined8 local_c8;
  long local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  undefined1 local_80 [8];
  ulong uStack_78;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  
  lVar3 = 0;
  local_e8 = param_5;
  local_c8 = param_7;
  local_c0 = param_4;
  __s8Dispatch0A3QoSVMa();
  local_d8 = *(long *)(lVar3 + -8);
  lVar10 = *(long *)(local_d8 + 0x40);
  puVar4 = &DAT_100aaffc0;
  local_e0 = auStack_f0 + -(lVar10 + 0xfU & 0xfffffffffffffff0);
  lStack_d0 = lVar3;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar14 = (long)(auStack_f0 + -(lVar10 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar10 = *(long *)(lVar3 + -8);
  uVar11 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar15 = lVar14 - uVar11;
  puVar13 = (undefined1 *)(lVar15 - uVar11);
  if ((param_2 & 1) == 0) {
LAB_10060d2a4:
    (**(code **)(param_8 + 0x18))();
  }
  else {
    if ((param_3 & 1) != 0) {
      _swift_getErrorValue(param_1,auStack_68,local_80);
      FUN_10060f8ac(uStack_78,local_70);
      if ((uStack_78 & 1) != 0) goto LAB_10060d2a4;
    }
    puVar4 = &DAT_1009dee88;
    _swift_allocObject(&DAT_1009dee88,0x30,7);
    uVar2 = local_c8;
    *(code **)(puVar4 + 0x10) = param_6;
    *(undefined8 *)(puVar4 + 0x18) = local_c8;
    *(undefined8 *)(puVar4 + 0x20) = param_1;
    *(long *)(puVar4 + 0x28) = param_8;
    if (local_c0 == 0) {
      FUN_100330f30(param_1,1);
      _swift_retain(param_8);
      _swift_retain(uVar2);
      (*param_6)(param_1);
      (**(code **)(param_8 + 0x18))();
    }
    else {
      FUN_100607210(local_e8,lVar14);
      lVar5 = lVar14;
      (**(code **)(lVar10 + 0x30))(lVar14,1,lVar3);
      local_88 = puVar4;
      if ((int)lVar5 == 1) {
        FUN_100330f30(param_1,1);
        _swift_retain(param_8);
        _swift_retain(uVar2);
        FUN_1006070b4(lVar14);
        local_90 = thunk_FUN_10060742c;
        local_b0 = PTR___NSConcreteStackBlock_100995490;
        local_a8 = 0x42000000;
        local_a0 = FUN_1000acdb4;
        puStack_98 = &DAT_1009deea0;
        pvVar6 = __Block_copy(&local_b0);
        puVar7 = puVar4;
        _swift_retain(puVar4);
        puVar13 = local_e0;
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_e0);
        local_b8 = PTR___swiftEmptyArrayStorage_100995ea0;
        FUN_100607460();
        puVar8 = &DAT_100aaffd0;
        FUN_100004bb4(&DAT_100aaffd0,&DAT_1008484a0);
        puVar9 = puVar8;
        FUN_1006074a4();
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (lVar15,&local_b8,puVar8,puVar9,lVar3,puVar7);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,puVar13,lVar15,pvVar6);
        __Block_release(pvVar6);
        _swift_release(puVar4);
        (**(code **)(lVar10 + 8))(lVar15,lVar3);
        pcVar12 = *(code **)(local_d8 + 8);
        lVar3 = lStack_d0;
      }
      else {
        (**(code **)(lVar10 + 0x20))(puVar13,lVar14,lVar3);
        local_90 = thunk_FUN_10060742c;
        local_b0 = PTR___NSConcreteStackBlock_100995490;
        local_a8 = 0x42000000;
        local_a0 = FUN_1000acdb4;
        puStack_98 = &DAT_1009deec8;
        pvVar6 = __Block_copy(&local_b0);
        FUN_100330f30(param_1,1);
        _swift_retain(param_8);
        _swift_retain(uVar2);
        _swift_retain(puVar4);
        puVar1 = local_e0;
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_e0);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,puVar1,puVar13,pvVar6);
        __Block_release(pvVar6);
        _swift_release(puVar4);
        (**(code **)(local_d8 + 8))(puVar1,lStack_d0);
        pcVar12 = *(code **)(lVar10 + 8);
      }
      (*pcVar12)(puVar13,lVar3);
      puVar4 = local_88;
    }
    _swift_release(puVar4);
  }
  return;
}

