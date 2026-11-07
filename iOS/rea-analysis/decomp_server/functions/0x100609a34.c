// rea decompile_all
// name: FUN_100609a34
// address: 0x100609a34
// body: available
// range: 0x100609a34-0x100609f6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100609a34(undefined8 param_1,long *param_2,uint param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11)

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
  long lVar13;
  code *pcVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 *puVar21;
  long alStack_130 [4];
  long local_110;
  long lStack_108;
  long local_100;
  long local_f8;
  long lStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long local_d8;
  uint local_cc;
  undefined8 local_c8;
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
  
  lVar16 = *param_2;
  lVar4 = 0;
  alStack_130[3] = param_5;
  local_e8 = param_6;
  uStack_e0 = param_8;
  local_d8 = param_4;
  local_cc = param_3;
  local_c8 = param_7;
  __s8Dispatch0A3QoSVMa();
  local_f8 = *(long *)(lVar4 + -8);
  lVar13 = (long)alStack_130 - (*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100aaffc0;
  local_100 = lVar13;
  lStack_f0 = lVar4;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar13 = lVar13 - (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_110 = *(long *)(lVar6 + -8);
  uVar12 = *(long *)(local_110 + 0x40) + 0xfU & 0xfffffffffffffff0;
  alStack_130[2] = lVar13 - uVar12;
  alStack_130[1] = alStack_130[2] - uVar12;
  lVar4 = *(long *)(lVar16 + 0x50);
  lVar20 = *(long *)(lVar4 + -8);
  puVar18 = (undefined8 *)(alStack_130[1] - (*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar16 = 0;
  lStack_108 = lVar6;
  FUN_100616300(0,lVar4);
  lVar6 = *(long *)(lVar16 + -8);
  uVar12 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar17 = (undefined8 *)((long)puVar18 - uVar12);
  puVar21 = (undefined8 *)((long)puVar17 - uVar12);
  (**(code **)(lVar6 + 0x10))(puVar21,param_1,lVar16);
  puVar7 = puVar21;
  _swift_getEnumCaseMultiPayload(puVar21,lVar16);
  if ((int)puVar7 == 1) {
    uVar19 = *puVar21;
    if ((local_cc & 1) != 0) {
      _swift_getErrorValue(uVar19,auStack_70,local_88);
      FUN_10060f8ac(uStack_80,local_78);
      if ((uStack_80 & 1) != 0) {
        plVar15 = (long *)param_2[2];
        *puVar17 = uVar19;
        _swift_storeEnumTagMultiPayload(puVar17,lVar16,1);
        pcVar14 = *(code **)(*plVar15 + 0x68);
        _swift_errorRetain(uVar19);
        (*pcVar14)(puVar17);
        _swift_errorRelease(uVar19);
        pcVar14 = *(code **)(lVar6 + 8);
        puVar18 = puVar17;
        lVar4 = lVar16;
        goto LAB_100609c78;
      }
    }
    puVar5 = &DAT_1009deac0;
    _swift_allocObject(&DAT_1009deac0,0x50,7);
    uVar3 = local_c8;
    uVar2 = uStack_e0;
    uVar1 = local_e8;
    *(undefined8 *)(puVar5 + 0x10) = uStack_e0;
    *(undefined8 *)(puVar5 + 0x18) = param_9;
    *(undefined8 *)(puVar5 + 0x20) = param_10;
    *(undefined8 *)(puVar5 + 0x28) = param_11;
    *(undefined8 *)(puVar5 + 0x30) = local_e8;
    *(undefined8 *)(puVar5 + 0x38) = local_c8;
    *(undefined8 *)(puVar5 + 0x40) = uVar19;
    *(long **)(puVar5 + 0x48) = param_2;
    if (local_d8 == 0) {
      _swift_errorRetain(uVar19);
      _swift_retain(param_2);
      _swift_retain(uVar3);
      FUN_100609f6c(uVar1,uVar3,uVar19,param_2,uVar2,param_9,param_10,param_11);
      _swift_release(puVar5);
      _swift_errorRelease(uVar19);
    }
    else {
      FUN_100607210(alStack_130[3],lVar13);
      lVar16 = lStack_108;
      lVar6 = local_110;
      lVar20 = lVar13;
      (**(code **)(local_110 + 0x30))(lVar13,1,lStack_108);
      lVar4 = alStack_130[1];
      local_90 = puVar5;
      if ((int)lVar20 == 1) {
        _swift_errorRetain(uVar19);
        _swift_retain(param_2);
        _swift_retain(local_c8);
        FUN_1006070b4(lVar13);
        local_98 = FUN_10060d018;
        local_b8 = PTR___NSConcreteStackBlock_100995490;
        local_b0 = 0x42000000;
        local_a8 = FUN_1000acdb4;
        puStack_a0 = &DAT_1009dead8;
        pvVar8 = __Block_copy(&local_b8);
        puVar9 = puVar5;
        _swift_retain(puVar5);
        lVar4 = local_100;
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_100);
        local_c0 = PTR___swiftEmptyArrayStorage_100995ea0;
        FUN_100607460();
        puVar10 = &DAT_100aaffd0;
        FUN_100004bb4(&DAT_100aaffd0,&DAT_1008484a0);
        puVar11 = puVar10;
        FUN_1006074a4();
        lVar13 = alStack_130[2];
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (alStack_130[2],&local_c0,puVar10,puVar11,lVar16,puVar9);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar4,lVar13,pvVar8);
        __Block_release(pvVar8);
        _swift_release(puVar5);
        _swift_errorRelease(uVar19);
        (**(code **)(lVar6 + 8))(lVar13,lVar16);
        pcVar14 = *(code **)(local_f8 + 8);
        lVar16 = lStack_f0;
      }
      else {
        (**(code **)(lVar6 + 0x20))(alStack_130[1],lVar13,lVar16);
        local_98 = FUN_10060d018;
        local_b8 = PTR___NSConcreteStackBlock_100995490;
        local_b0 = 0x42000000;
        local_a8 = FUN_1000acdb4;
        puStack_a0 = &DAT_1009deb00;
        pvVar8 = __Block_copy(&local_b8);
        _swift_errorRetain(uVar19);
        _swift_retain(param_2);
        _swift_retain(local_c8);
        _swift_retain(puVar5);
        lVar13 = local_100;
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_100);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar13,lVar4,pvVar8);
        __Block_release(pvVar8);
        _swift_release(puVar5);
        _swift_errorRelease(uVar19);
        (**(code **)(local_f8 + 8))(lVar13,lStack_f0);
        pcVar14 = *(code **)(lVar6 + 8);
      }
      (*pcVar14)(lVar4,lVar16);
      _swift_release(local_90);
    }
  }
  else {
    (**(code **)(lVar20 + 0x20))(puVar18,puVar21,lVar4);
    plVar15 = (long *)param_2[2];
    (**(code **)(lVar20 + 0x10))(puVar17,puVar18,lVar4);
    _swift_storeEnumTagMultiPayload(puVar17,lVar16,0);
    (**(code **)(*plVar15 + 0x68))(puVar17);
    (**(code **)(lVar6 + 8))(puVar17,lVar16);
    pcVar14 = *(code **)(lVar20 + 8);
LAB_100609c78:
    (*pcVar14)(puVar18,lVar4);
  }
  return;
}

