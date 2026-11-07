// rea decompile_all
// name: FUN_100609344
// address: 0x100609344
// body: available
// range: 0x100609344-0x10060978f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100609344(undefined8 param_1,ulong param_2,long param_3,long param_4,code *param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,long param_9)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  code *pcVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long local_100 [4];
  long lStack_e0;
  code *local_d8;
  undefined8 uStack_d0;
  long local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  undefined1 local_88 [8];
  ulong uStack_80;
  undefined8 local_78;
  undefined1 auStack_70 [16];
  
  lVar2 = 0;
  local_100[0] = param_4;
  local_d8 = param_5;
  uStack_d0 = param_6;
  local_c8 = param_3;
  __s8Dispatch0A3QoSVMa();
  local_100[3] = *(long *)(lVar2 + -8);
  lVar16 = (long)local_100 - (*(long *)(local_100[3] + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100aaffc0;
  local_100[2] = lVar16;
  lStack_e0 = lVar2;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar16 = lVar16 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar11 = *(long *)(lVar4 + -8);
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar17 = lVar16 - uVar12;
  lVar2 = lVar17 - uVar12;
  uVar5 = 0xff;
  local_100[1] = lVar4;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_9 + 8),param_8,0x100904f48,
             &TargetProtocolRequirement_100904f50);
  lVar4 = 0;
  FUN_100616300(0,uVar5);
  lVar14 = *(long *)(lVar4 + -8);
  puVar15 = (undefined8 *)(lVar2 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar14 + 0x10))(puVar15,param_1,lVar4);
  puVar6 = puVar15;
  _swift_getEnumCaseMultiPayload(puVar15,lVar4);
  if ((int)puVar6 == 1) {
    uVar5 = *puVar15;
    if ((param_2 & 1) != 0) {
      _swift_getErrorValue(uVar5,auStack_70,local_88);
      FUN_10060f8ac(uStack_80,local_78);
      if ((uStack_80 & 1) != 0) {
        _swift_errorRelease(uVar5);
        goto LAB_1006094d0;
      }
    }
    puVar3 = &DAT_1009deb60;
    _swift_allocObject(&DAT_1009deb60,0x30,7);
    uVar1 = uStack_d0;
    pcVar13 = local_d8;
    *(code **)(puVar3 + 0x10) = local_d8;
    *(undefined8 *)(puVar3 + 0x18) = uStack_d0;
    *(undefined8 *)(puVar3 + 0x20) = uVar5;
    *(long *)(puVar3 + 0x28) = param_7;
    if (local_c8 == 0) {
      _swift_errorRetain(uVar5);
      _swift_retain(param_7);
      _swift_retain(uVar1);
      (*pcVar13)(uVar5);
      (**(code **)(param_7 + 0x18))();
      _swift_release(puVar3);
      _swift_errorRelease(uVar5);
    }
    else {
      FUN_100607210(local_100[0],lVar16);
      lVar4 = local_100[1];
      lVar14 = lVar16;
      (**(code **)(lVar11 + 0x30))(lVar16,1,local_100[1]);
      local_90 = puVar3;
      if ((int)lVar14 == 1) {
        _swift_errorRetain(uVar5);
        _swift_retain(param_7);
        _swift_retain(uVar1);
        FUN_1006070b4(lVar16);
        local_98 = FUN_10060d0ec;
        local_b8 = PTR___NSConcreteStackBlock_100995490;
        local_b0 = 0x42000000;
        local_a8 = FUN_1000acdb4;
        puStack_a0 = &DAT_1009deb78;
        pvVar7 = __Block_copy(&local_b8);
        puVar8 = puVar3;
        _swift_retain(puVar3);
        lVar2 = local_100[2];
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_100[2]);
        local_c0 = PTR___swiftEmptyArrayStorage_100995ea0;
        FUN_100607460();
        puVar9 = &DAT_100aaffd0;
        FUN_100004bb4(&DAT_100aaffd0,&DAT_1008484a0);
        puVar10 = puVar9;
        FUN_1006074a4();
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (lVar17,&local_c0,puVar9,puVar10,lVar4,puVar8);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar2,lVar17,pvVar7);
        __Block_release(pvVar7);
        _swift_release(puVar3);
        _swift_errorRelease(uVar5);
        (**(code **)(lVar11 + 8))(lVar17,lVar4);
        pcVar13 = *(code **)(local_100[3] + 8);
        lVar4 = lStack_e0;
      }
      else {
        (**(code **)(lVar11 + 0x20))(lVar2,lVar16,lVar4);
        local_98 = FUN_10060d0ec;
        local_b8 = PTR___NSConcreteStackBlock_100995490;
        local_b0 = 0x42000000;
        local_a8 = FUN_1000acdb4;
        puStack_a0 = &DAT_1009deba0;
        pvVar7 = __Block_copy(&local_b8);
        _swift_errorRetain(uVar5);
        _swift_retain(param_7);
        _swift_retain(uVar1);
        _swift_retain(puVar3);
        lVar16 = local_100[2];
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_100[2]);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar16,lVar2,pvVar7);
        __Block_release(pvVar7);
        _swift_release(puVar3);
        _swift_errorRelease(uVar5);
        (**(code **)(local_100[3] + 8))(lVar16,lStack_e0);
        pcVar13 = *(code **)(lVar11 + 8);
      }
      (*pcVar13)(lVar2,lVar4);
      _swift_release(local_90);
    }
  }
  else {
    (**(code **)(lVar14 + 8))(puVar15,lVar4);
LAB_1006094d0:
    (**(code **)(param_7 + 0x18))();
  }
  return;
}

