// rea decompile_all
// name: FUN_100360104
// address: 0x100360104
// body: available
// range: 0x100360104-0x10036035f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100360104(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  void *aBlock;
  undefined *puVar8;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_c0 [8];
  long local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  lVar5 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar12 = *(long *)(lVar5 + -8);
  puVar9 = auStack_c0 + -(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar13 = *(long *)(lVar6 + -8);
  lVar10 = (long)puVar9 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC10Filepicker17FilePickerRequest::initialResponseTime);
  if (*(char *)(puVar1 + 1) == '\x01') {
    _CFAbsoluteTimeGetCurrent();
    *puVar1 = param_1;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  lVar11 = _TtC10Filepicker17FilePickerRequest::uploadProgress;
  _swift_beginAccess(unaff_x20 + _TtC10Filepicker17FilePickerRequest::uploadProgress,auStack_78,0,0)
  ;
  _objc_msgSend(*(ID *)(unaff_x20 + lVar11),"setTotalUnitCount:",param_3);
  _objc_msgSend(*(ID *)(unaff_x20 + lVar11),"setCompletedUnitCount:",param_2);
  plVar2 = (long *)(unaff_x20 + _TtC10Filepicker17FilePickerRequest::uploadProgressHandler);
  lVar11 = *plVar2;
  if (lVar11 != 0) {
    lVar3 = plVar2[1];
    lVar4 = plVar2[2];
    puVar7 = &DAT_1009b4e40;
    local_b8 = lVar12;
    _swift_allocObject(&DAT_1009b4e40,0x30,7);
    *(long *)(puVar7 + 0x10) = lVar11;
    *(long *)(puVar7 + 0x18) = lVar3;
    *(long *)(puVar7 + 0x20) = lVar4;
    *(long *)(puVar7 + 0x28) = unaff_x20;
    local_88 = FUN_100360394;
    local_a8 = PTR___NSConcreteStackBlock_100995490;
    local_a0 = 0x42000000;
    local_98 = FUN_1000acdb4;
    puStack_90 = &DAT_1009b4e58;
    local_80 = puVar7;
    aBlock = __Block_copy(&local_a8);
    FUN_10028ab50(lVar11,lVar3,lVar4);
    _swift_retain(lVar3);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar10);
    local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_1003603b8();
    puVar7 = &DAT_100a889b0;
    FUN_100004bb4(&DAT_100a889b0,&DAT_10081cc60);
    puVar8 = puVar7;
    FUN_1003603fc();
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (puVar9,&local_b0,puVar7,puVar8,lVar5,unaff_x20);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar10,puVar9,aBlock);
    __Block_release(aBlock);
    _swift_release(lVar3);
    (**(code **)(local_b8 + 8))(puVar9,lVar5);
    (**(code **)(lVar13 + 8))(lVar10,lVar6);
    _swift_release(local_80);
  }
  return;
}

