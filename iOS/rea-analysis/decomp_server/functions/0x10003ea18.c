// rea decompile_all
// name: FUN_10003ea18
// address: 0x10003ea18
// body: available
// range: 0x10003ea18-0x10003ef6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10003ea18(ID param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  ID IVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ID local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x7b);
  __sSS6appendyySSF(0x64496e6565726373,0xe90000000000003a);
  IVar6 = _objc_msgSend(param_1,"screenId");
  puVar10 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  puVar4 = PTR___ss5Int32VN_100995c78;
  local_78._0_4_ = (undefined4)IVar6;
  puVar8 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar8);
  __sSS6appendyySSF(0x3a6b6361727420,0xe700000000000000);
  IVar6 = _objc_msgSend(param_1,"videoTrackIndex");
  local_78._0_4_ = (undefined4)IVar6;
  puVar8 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar8);
  __sSS6appendyySSF(0x3a73706620,0xe500000000000000);
  IVar6 = _objc_msgSend(param_1,"fps");
  local_78 = CONCAT44(local_78._4_4_,(int)IVar6);
  puVar8 = puVar10;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar10);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar8);
  __sSS6appendyySSF(0x7974696c61757120,0xe90000000000003a);
  local_78 = _objc_msgSend(param_1,"frameQuality");
  uVar7 = 0;
  FUN_10000608c(0);
  puVar3 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8;
  puVar8 = PTR___ss26DefaultStringInterpolationVN_100995bf0;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_78,&local_70,uVar7,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x74756c6f73657220,0xec0000003a6e6f69);
  IVar6 = _objc_msgSend(param_1,"resolutionWidth");
  puVar9 = puVar10;
  local_78._0_4_ = (int)IVar6;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar10);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar9);
  __sSS6appendyySSF(0x2a,0xe100000000000000);
  IVar6 = _objc_msgSend(param_1,"resolutionHeight");
  local_78._0_4_ = (undefined4)IVar6;
  puVar9 = puVar10;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar10);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar9);
  __sSS6appendyySSF(0x2d,0xe100000000000000);
  IVar6 = _objc_msgSend(param_1,"resolutionPixelWidth");
  local_78._0_4_ = (undefined4)IVar6;
  puVar9 = puVar10;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar10);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar9);
  __sSS6appendyySSF(0x2a,0xe100000000000000);
  IVar6 = _objc_msgSend(param_1,"resolutionPixelHeight");
  local_78._0_4_ = (undefined4)IVar6;
  puVar9 = puVar10;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar10);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar9);
  __sSS6appendyySSF(0x6c61635378616d20,0xea00000000003a65);
  IVar6 = _objc_msgSend(param_1,"maxScaleWidth");
  local_78._0_4_ = (undefined4)IVar6;
  puVar9 = puVar10;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar10);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar9);
  __sSS6appendyySSF(0x2a,0xe100000000000000);
  IVar6 = _objc_msgSend(param_1,"maxScaleHeight");
  local_78 = CONCAT44(local_78._4_4_,(int)IVar6);
  puVar9 = puVar10;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar9);
  __sSS6appendyySSF(0x3a6365646f6320,0xe700000000000000);
  local_78 = _objc_msgSend(param_1,"codecType");
  uVar7 = 0;
  FUN_100006078();
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF(&local_78,&local_70,uVar7,puVar8,puVar3);
  __sSS6appendyySSF(0x3a616d6f72686320,0xe800000000000000);
  local_78 = _objc_msgSend(param_1,"chromaSampling");
  uVar7 = 0;
  FUN_100006064();
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF(&local_78,&local_70,uVar7,puVar8,puVar3);
  __sSS6appendyySSF(0x3a72646820,0xe500000000000000);
  IVar6 = _objc_msgSend(param_1,"hdr");
  bVar5 = (int)IVar6 == 0;
  uVar7 = 0x65757274;
  if (bVar5) {
    uVar7 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar5) {
    uVar1 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar7,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0x6574617274696220,0xe90000000000003a);
  IVar6 = _objc_msgSend(param_1,"maxCustomBitrate");
  local_78 = CONCAT44(local_78._4_4_,(int)IVar6);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar10);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar10);
  __sSS6appendyySSF(0x3a726f7372756320,0xe800000000000000);
  IVar6 = _objc_msgSend(param_1,"cursorCapture");
  bVar5 = (int)IVar6 == 0;
  uVar7 = 0x65757274;
  if (bVar5) {
    uVar7 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar5) {
    uVar1 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar7,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  auVar2._8_8_ = uStack_68;
  auVar2._0_8_ = local_70;
  return auVar2;
}

