// rea decompile_all
// name: FUN_10060a288
// address: 0x10060a288
// body: available
// range: 0x10060a288-0x10060a6cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10060a288(undefined8 param_1,long *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  code *pcVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long local_f0 [4];
  long local_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar14 = *param_2;
  lVar4 = 0;
  local_f0[1] = param_4;
  local_b8 = param_3;
  uStack_b0 = param_5;
  local_a8 = param_7;
  uStack_a0 = param_8;
  __s8Dispatch0A3QoSVMa();
  local_c8 = *(long *)(lVar4 + -8);
  lVar16 = (long)local_f0 - (*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100aaffc0;
  local_d0 = lVar16;
  lStack_c0 = lVar4;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar16 = lVar16 - (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_f0[2] = *(long *)(lVar6 + -8);
  uVar12 = *(long *)(local_f0[2] + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_f0[0] = lVar16 - uVar12;
  lVar4 = local_f0[0] - uVar12;
  lVar20 = *(long *)(lVar14 + 0x50);
  lVar19 = *(long *)(lVar20 + -8);
  lVar18 = lVar4 - (*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = 0;
  local_f0[3] = lVar6;
  FUN_100616300(0,lVar20);
  puVar15 = (undefined8 *)
            (lVar18 - (*(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(*(long *)(lVar14 + -8) + 0x10))(puVar15,param_1,lVar14);
  puVar7 = puVar15;
  _swift_getEnumCaseMultiPayload(puVar15,lVar14);
  if ((int)puVar7 == 1) {
    uVar17 = *puVar15;
    puVar5 = &DAT_1009dea20;
    _swift_allocObject(&DAT_1009dea20,0x40,7);
    uVar3 = uStack_a0;
    uVar2 = local_a8;
    uVar1 = uStack_b0;
    *(undefined8 *)(puVar5 + 0x10) = local_a8;
    *(undefined8 *)(puVar5 + 0x18) = uStack_a0;
    *(undefined8 *)(puVar5 + 0x20) = uStack_b0;
    *(undefined8 *)(puVar5 + 0x28) = param_6;
    *(undefined8 *)(puVar5 + 0x30) = uVar17;
    *(long **)(puVar5 + 0x38) = param_2;
    if (local_b8 == 0) {
      _swift_errorRetain(uVar17);
      _swift_retain(param_2);
      _swift_retain(param_6);
      FUN_10060a6cc(uVar1,param_6,uVar17,param_2,uVar2,uVar3);
      _swift_release(puVar5);
      _swift_errorRelease(uVar17);
    }
    else {
      FUN_100607210(local_f0[1],lVar16);
      lVar14 = local_f0[3];
      lVar6 = local_f0[2];
      lVar18 = lVar16;
      (**(code **)(local_f0[2] + 0x30))(lVar16,1,local_f0[3]);
      local_68 = puVar5;
      if ((int)lVar18 == 1) {
        _swift_errorRetain(uVar17);
        _swift_retain(param_2);
        _swift_retain(param_6);
        FUN_1006070b4(lVar16);
        local_70 = FUN_10060cf88;
        local_90 = PTR___NSConcreteStackBlock_100995490;
        local_88 = 0x42000000;
        local_80 = FUN_1000acdb4;
        puStack_78 = &DAT_1009dea38;
        pvVar8 = __Block_copy(&local_90);
        puVar9 = puVar5;
        _swift_retain(puVar5);
        lVar4 = local_d0;
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_d0);
        local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
        FUN_100607460();
        puVar10 = &DAT_100aaffd0;
        FUN_100004bb4(&DAT_100aaffd0,&DAT_1008484a0);
        puVar11 = puVar10;
        FUN_1006074a4();
        lVar16 = local_f0[0];
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (local_f0[0],&local_98,puVar10,puVar11,lVar14,puVar9);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar4,lVar16,pvVar8);
        __Block_release(pvVar8);
        _swift_release(puVar5);
        _swift_errorRelease(uVar17);
        (**(code **)(lVar6 + 8))(lVar16,lVar14);
        pcVar13 = *(code **)(local_c8 + 8);
        lVar14 = lStack_c0;
      }
      else {
        (**(code **)(lVar6 + 0x20))(lVar4,lVar16,lVar14);
        local_70 = FUN_10060cf88;
        local_90 = PTR___NSConcreteStackBlock_100995490;
        local_88 = 0x42000000;
        local_80 = FUN_1000acdb4;
        puStack_78 = &DAT_1009dea60;
        pvVar8 = __Block_copy(&local_90);
        _swift_errorRetain(uVar17);
        _swift_retain(param_2);
        _swift_retain(param_6);
        _swift_retain(puVar5);
        lVar16 = local_d0;
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_d0);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar16,lVar4,pvVar8);
        __Block_release(pvVar8);
        _swift_release(puVar5);
        _swift_errorRelease(uVar17);
        (**(code **)(local_c8 + 8))(lVar16,lStack_c0);
        pcVar13 = *(code **)(lVar6 + 8);
      }
      (*pcVar13)(lVar4,lVar14);
      _swift_release(local_68);
    }
  }
  else {
    (**(code **)(lVar19 + 0x20))(lVar18,puVar15,lVar20);
    (**(code **)(*(long *)param_2[2] + 0x68))(lVar18);
    (**(code **)(lVar19 + 8))(lVar18,lVar20);
  }
  return;
}

