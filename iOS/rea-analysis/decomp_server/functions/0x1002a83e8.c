// rea decompile_all
// name: FUN_1002a83e8
// address: 0x1002a83e8
// body: available
// range: 0x1002a83e8-0x1002a8937 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002a83e8(byte *param_1,long param_2,undefined8 param_3,undefined *param_4)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ID IVar9;
  code *pcVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined8 *local_d0;
  undefined *local_c8;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar15 = *(long *)(lVar1 + -8);
  lVar12 = (long)&local_e0 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar14 = *(long *)(lVar2 + -8);
  lVar13 = lVar12 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (2 < *param_1) {
    return;
  }
  *param_1 = 3;
  local_70 = thunk_FUN_1002ca6e8;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009acd70;
  local_68 = param_4;
  pvVar3 = __Block_copy(&local_90);
  local_c8 = param_4;
  _swift_retain(param_4);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar13);
  local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar4 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar5 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar6 = puVar5;
  FUN_10028abfc();
  local_e0 = puVar6;
  puStack_d8 = puVar5;
  local_d0 = puVar4;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar12,&local_98,puVar5,puVar6,lVar1,puVar4);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar13,lVar12,pvVar3);
  __Block_release(pvVar3);
  pcVar10 = *(code **)(lVar15 + 8);
  (*pcVar10)(lVar12,lVar1);
  pcVar16 = *(code **)(lVar14 + 8);
  (*pcVar16)(lVar13,lVar2);
  _swift_release(local_68);
  uVar11 = *(ulong *)(param_1 + 0x150);
  if (uVar11 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar11 & 0xffffffffffffff8;
    if ((long)uVar11 < 0) {
      uVar7 = uVar11;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar7 != 0) {
    uVar8 = uVar7 - 1;
    if (SBORROW8(uVar7,1)) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1002a8924);
      (*pcVar10)();
    }
    if ((uVar11 & 0xc000000000000001) == 0) {
      if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1002a8934);
        (*pcVar10)();
      }
      if (*(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1002a8938);
        (*pcVar10)();
      }
      uVar8 = *(ulong *)(uVar11 + uVar8 * 8 + 0x20);
    }
    else {
      FUN_1002d38f8(uVar8,uVar11);
    }
    uVar11 = uVar8;
    _swift_dynamicCastObjCClass(uVar8,&_OBJC_CLASS___NSURLSessionDownloadTask);
    if (uVar11 != 0) {
      IVar9 = _objc_msgSend(uVar11,"state");
      if (IVar9 == 3) {
        return;
      }
      if (param_2 != 0) {
        _swift_retain(param_3);
        _objc_msgSend(uVar11,"resume");
        puVar5 = &DAT_1009ace20;
        _swift_allocObject(&DAT_1009ace20,0x30,7);
        puVar6 = local_c8;
        *(ulong *)(puVar5 + 0x10) = uVar11;
        *(long *)(puVar5 + 0x18) = param_2;
        *(undefined8 *)(puVar5 + 0x20) = param_3;
        *(undefined **)(puVar5 + 0x28) = local_c8;
        local_70 = FUN_1002bb490;
        local_90 = PTR___NSConcreteStackBlock_100995490;
        local_88 = 0x42000000;
        local_80 = FUN_1002a8c34;
        puStack_78 = &DAT_1009ace38;
        local_68 = puVar5;
        pvVar3 = __Block_copy(&local_90);
        puVar5 = local_68;
        _swift_retain(puVar6);
        FUN_10004090c(param_2,param_3);
        _swift_release(puVar5);
        _objc_msgSend(uVar11,"cancelByProducingResumeData:",pvVar3);
        __Block_release(pvVar3);
        FUN_10007ed2c(param_2,param_3);
        return;
      }
      _objc_msgSend(uVar11,"resume");
      _objc_msgSend(uVar11,"cancel");
      puVar5 = &DAT_1009acdd0;
      _swift_allocObject(&DAT_1009acdd0,0x20,7);
      puVar6 = local_c8;
      *(ulong *)(puVar5 + 0x10) = uVar11;
      *(undefined **)(puVar5 + 0x18) = local_c8;
      local_70 = thunk_FUN_1002bb4c8;
      local_90 = PTR___NSConcreteStackBlock_100995490;
      local_88 = 0x42000000;
      local_80 = FUN_1000acdb4;
      puStack_78 = &DAT_1009acde8;
      local_68 = puVar5;
      pvVar3 = __Block_copy(&local_90);
      _swift_retain(puVar6);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar13,uVar8);
      local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (lVar12,&local_98,puStack_d8,local_e0,lVar1,local_d0);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar13,lVar12,pvVar3);
      __Block_release(pvVar3);
      (*pcVar10)(lVar12,lVar1);
      goto LAB_1002a86ec;
    }
  }
  puVar5 = local_c8;
  local_70 = FUN_1002bb450;
  local_68 = local_c8;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009acd98;
  pvVar3 = __Block_copy(&local_90);
  _swift_retain(puVar5);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar13);
  local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar12,&local_98,puStack_d8,local_e0,lVar1,local_d0);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar13,lVar12,pvVar3);
  __Block_release(pvVar3);
  (*pcVar10)(lVar12,lVar1);
LAB_1002a86ec:
  (*pcVar16)(lVar13,lVar2);
  _swift_release(local_68);
  return;
}

