// rea decompile_all
// name: FUN_10060bee0
// address: 0x10060bee0
// body: available
// range: 0x10060bee0-0x10060c347 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010060c1f0) */

void FUN_10060bee0(undefined8 *param_1,long param_2,ulong param_3,long param_4,undefined8 param_5,
                  code *param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  void *pvVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  undefined *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long local_f0;
  long local_e8;
  undefined8 local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined *local_b8;
  undefined *local_b0;
  ulong local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  undefined1 local_80 [8];
  ulong uStack_78;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  
  lVar1 = 0;
  local_e0 = param_5;
  local_c8 = param_4;
  __s8Dispatch0A3QoSVMa();
  local_d0 = *(long *)(lVar1 + -8);
  lVar12 = (long)&local_f0 - (*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = &DAT_100aaffc0;
  local_d8 = lVar12;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar12 = lVar12 - (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar7 = *(long *)(lVar2 + -8);
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar13 = lVar12 - uVar8;
  lVar14 = lVar13 - uVar8;
  if (*(char *)(param_1 + 1) == '\x01') {
    puVar10 = (undefined *)*param_1;
    local_e8 = lVar2;
    if ((param_3 & 1) != 0) {
      _swift_getErrorValue(puVar10,auStack_68,local_80);
      FUN_10060f8ac(uStack_78,local_70);
      if ((uStack_78 & 1) != 0) {
        local_a8 = CONCAT71(local_a8._1_7_,1);
        pcVar9 = *(code **)(**(long **)(param_2 + 0x10) + 0x68);
        local_b0 = puVar10;
        _swift_errorRetain(puVar10);
        (*pcVar9)(&local_b0);
        FUN_1001803c8(puVar10,1);
        return;
      }
    }
    puVar3 = &DAT_1009de818;
    local_f0 = lVar1;
    _swift_allocObject(&DAT_1009de818,0x30,7);
    *(long *)(puVar3 + 0x10) = param_2;
    *(code **)(puVar3 + 0x18) = param_6;
    *(undefined8 *)(puVar3 + 0x20) = param_7;
    *(undefined **)(puVar3 + 0x28) = puVar10;
    if (local_c8 == 0) {
      plVar11 = *(long **)(param_2 + 0x10);
      FUN_100330f30(puVar10,1);
      _swift_retain(param_7);
      _swift_retain(param_2);
      (*param_6)(puVar10);
      local_b0 = (undefined *)0x0;
      local_a8 = local_a8 & 0xffffffffffffff00;
      (**(code **)(*plVar11 + 0x68))(&local_b0);
    }
    else {
      FUN_100607210(local_e0,lVar12);
      lVar1 = local_e8;
      lVar2 = lVar12;
      (**(code **)(lVar7 + 0x30))(lVar12,1,local_e8);
      local_88 = puVar3;
      if ((int)lVar2 == 1) {
        FUN_100330f30(puVar10,1);
        _swift_retain(param_7);
        _swift_retain(param_2);
        FUN_1006070b4(lVar12);
        local_90 = FUN_10060cc30;
        local_b0 = PTR___NSConcreteStackBlock_100995490;
        local_a8 = 0x42000000;
        local_a0 = FUN_1000acdb4;
        puStack_98 = &DAT_1009de830;
        pvVar4 = __Block_copy(&local_b0);
        puVar5 = puVar3;
        _swift_retain(puVar3);
        lVar14 = local_d8;
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_d8);
        local_b8 = PTR___swiftEmptyArrayStorage_100995ea0;
        FUN_100607460();
        puVar10 = &DAT_100aaffd0;
        FUN_100004bb4(&DAT_100aaffd0,&DAT_1008484a0);
        puVar6 = puVar10;
        FUN_1006074a4();
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (lVar13,&local_b8,puVar10,puVar6,lVar1,puVar5);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar14,lVar13,pvVar4);
        __Block_release(pvVar4);
        _swift_release(puVar3);
        (**(code **)(lVar7 + 8))(lVar13,lVar1);
        pcVar9 = *(code **)(local_d0 + 8);
        lVar1 = local_f0;
      }
      else {
        (**(code **)(lVar7 + 0x20))(lVar14,lVar12,lVar1);
        local_90 = FUN_10060cc30;
        local_b0 = PTR___NSConcreteStackBlock_100995490;
        local_a8 = 0x42000000;
        local_a0 = FUN_1000acdb4;
        puStack_98 = &DAT_1009de858;
        pvVar4 = __Block_copy(&local_b0);
        FUN_100330f30(puVar10,1);
        _swift_retain(param_7);
        _swift_retain(param_2);
        _swift_retain(puVar3);
        lVar2 = local_d8;
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_d8);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar2,lVar14,pvVar4);
        __Block_release(pvVar4);
        _swift_release(puVar3);
        (**(code **)(local_d0 + 8))(lVar2,local_f0);
        pcVar9 = *(code **)(lVar7 + 8);
      }
      (*pcVar9)(lVar14,lVar1);
      puVar3 = local_88;
    }
    _swift_release(puVar3);
  }
  else {
    local_b0 = (undefined *)0x0;
    local_a8 = local_a8 & 0xffffffffffffff00;
    (**(code **)(**(long **)(param_2 + 0x10) + 0x68))(&local_b0);
  }
  return;
}

