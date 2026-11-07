// rea decompile_all
// name: FUN_1000c9944
// address: 0x1000c9944
// body: available
// range: 0x1000c9944-0x1000c9b9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000c9944(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  code *pcVar6;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_80 [16];
  
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  FUN_100401b14(0);
  pcVar4 = FUN_1000ce00c;
  pcVar6 = (code *)auStack_80;
  FUN_1003fb48c(FUN_1000ce00c,pcVar6,0xd00000000000009c,0x8000000100885110,0xd000000000000019,
                0x8000000100885b10,0x82,0);
  FUN_1000c815c();
  FUN_100198dac();
  _swift_release(pcVar4);
  if (DAT_100a73b60 != -1) {
    pcVar6 = FUN_1000efc4c;
    _swift_once(&DAT_100a73b60);
  }
  lVar2 = DAT_100b360a8;
  lVar10 = *(long *)(DAT_100b360a8 + 0x80);
  lVar8 = lVar10;
  _swift_retain();
  FUN_1000c7b64();
  uVar7 = *(undefined8 *)(lVar8 + 0x30);
  lVar5 = *(long *)(lVar8 + 0x38);
  _swift_bridgeObjectRetain(lVar5);
  _swift_release(lVar8);
  uVar9 = 0;
  if (lVar5 != 0) {
    uVar9 = uVar7;
  }
  uVar7 = *(undefined8 *)(lVar10 + 0x140);
  lVar8 = -0x2000000000000000;
  if (lVar5 != 0) {
    lVar8 = lVar5;
  }
  *(undefined8 *)(lVar10 + 0x138) = uVar9;
  *(long *)(lVar10 + 0x140) = lVar8;
  _swift_release(lVar10);
  _swift_bridgeObjectRelease(uVar7);
  FUN_1000c82e4();
  FUN_1001a1378();
  _swift_release(uVar7);
  lVar8 = *(long *)(unaff_x20 +
                   _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___appDataHandler);
  _swift_retain(lVar8);
  FUN_10010c3c0();
  _swift_release();
  FUN_1000c8388();
  lVar5 = lVar8;
  __s10Foundation4UUIDVACycfC(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __s10Foundation4UUIDV10uuidStringSSvg();
  (**(code **)(lVar11 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  plVar1 = (long *)(lVar8 + _TtC14UURemoteServer16ClipboardHandler::dragDropSessionID);
  lVar11 = plVar1[1];
  *plVar1 = lVar5;
  plVar1[1] = (long)pcVar6;
  _swift_bridgeObjectRelease(lVar11);
  FUN_1001bc1d8();
  _swift_getObjectType();
  (**(code **)(lVar3 + 0x10))();
  _swift_unknownObjectRelease(lVar11);
  uVar9 = *(undefined8 *)(lVar2 + 0x98);
  _swift_retain(uVar9);
  FUN_1000babdc();
  _swift_release(uVar9);
  uVar9 = *(undefined8 *)(lVar2 + 0x78);
  _swift_retain(uVar9);
  FUN_10021a60c();
  _swift_release(uVar9);
  return;
}

