// rea decompile_all
// name: FUN_10036e76c
// address: 0x10036e76c
// body: available
// range: 0x10036e76c-0x10036e8fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ID FUN_10036e76c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ID IVar7;
  long unaff_x20;
  long lVar8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = _TtC10Filepicker26FilePickerTaskResponseBody::videoCoverURL;
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar5 + -8);
  (**(code **)(lVar8 + 0x38))(unaff_x20 + lVar3,1,1,lVar5);
  lVar4 = _TtC10Filepicker26FilePickerTaskResponseBody::resolution;
  *(undefined8 *)(unaff_x20 + _TtC10Filepicker26FilePickerTaskResponseBody::resolution) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC10Filepicker26FilePickerTaskResponseBody::md5);
  *puVar1 = 0;
  puVar1[1] = 0;
  (**(code **)(lVar8 + 0x10))
            (unaff_x20 + _TtC10Filepicker26FilePickerTaskResponseBody::url,param_1,lVar5);
  *(undefined8 *)(unaff_x20 + _TtC10Filepicker26FilePickerTaskResponseBody::fileSize) = param_2;
  puVar2 = (undefined8 *)(unaff_x20 + _TtC10Filepicker26FilePickerTaskResponseBody::mimeType);
  *puVar2 = param_3;
  puVar2[1] = param_4;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_78,0x21,0);
  FUN_10036e8fc(param_5,unaff_x20 + lVar3);
  _swift_endAccess(auStack_78);
  _swift_beginAccess(unaff_x20 + lVar4,auStack_78,1,0);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar4);
  *(undefined8 *)(unaff_x20 + lVar4) = param_6;
  _swift_bridgeObjectRelease(uVar6);
  _swift_beginAccess(puVar1,auStack_90,1,0);
  uVar6 = puVar1[1];
  *puVar1 = param_7;
  puVar1[1] = param_8;
  _swift_bridgeObjectRelease(uVar6);
  FUN_10036e994();
  IVar7 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff60,"init");
  FUN_10036e94c(param_5);
  (**(code **)(lVar8 + 8))(param_1,lVar5);
  return IVar7;
}

