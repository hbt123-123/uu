// rea decompile_all
// name: FUN_1000c9ba0
// address: 0x1000c9ba0
// body: available
// range: 0x1000c9ba0-0x1000c9f47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000c9ba0(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  long extraout_x8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_80 [16];
  
  lVar4 = 0;
  __s10Foundation4UUIDVMa();
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  FUN_100401b14(0);
  pcVar5 = FUN_1000ce014;
  FUN_1003fb48c(FUN_1000ce014,auStack_80,0xd00000000000009c,0x8000000100885110,0xd000000000000017,
                0x8000000100885b70,0xb5,0);
  FUN_1000c815c();
  FUN_100198fa0();
  _swift_release(pcVar5);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar3 = DAT_100b360a8;
  uVar9 = *(undefined8 *)(DAT_100b360a8 + 0x80);
  _swift_retain(uVar9);
  FUN_10001236c();
  _swift_release(uVar9);
  FUN_1001041a8(*(undefined8 *)(lVar3 + 0x58));
  lVar6 = 0;
  FUN_1000c82e4();
  pcVar8 = (char *)0x0;
  FUN_1003fb48c(FUN_1001a2c08,0,0xd00000000000009e,0x8000000100885b90,0xd000000000000012,
                0x8000000100885c30,0x7b,0);
  if (*(ID *)(lVar6 + 0x18) == 0) {
    _swift_release();
  }
  else {
    pcVar8 = "invalidate";
    _objc_msgSend(*(ID *)(lVar6 + 0x18),"invalidate");
    *(undefined8 *)(lVar6 + 0x18) = 0;
    _swift_release(lVar6);
    lVar6 = 0;
  }
  FUN_1000c8388();
  lVar7 = lVar6;
  __s10Foundation4UUIDVACycfC(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __s10Foundation4UUIDV10uuidStringSSvg();
  (**(code **)(lVar10 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  plVar1 = (long *)(lVar6 + _TtC14UURemoteServer16ClipboardHandler::dragDropSessionID);
  lVar10 = plVar1[1];
  *plVar1 = lVar7;
  plVar1[1] = (long)pcVar8;
  _swift_bridgeObjectRelease(lVar10);
  puVar2 = (undefined8 *)(lVar6 + _TtC14UURemoteServer16ClipboardHandler::remoteDownloadPath);
  uVar9 = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0xe000000000000000;
  _swift_bridgeObjectRelease(uVar9);
  FUN_1001bc1d8();
  _swift_getObjectType();
  (**(code **)(lVar4 + 0x18))();
  _swift_unknownObjectRelease(uVar9);
  FUN_1000c8a24();
  FUN_1001cbfd8();
  _swift_release(uVar9);
  FUN_1001d4250(*(undefined8 *)(lVar3 + 0x90));
  uVar9 = *(undefined8 *)(lVar3 + 0x98);
  _swift_retain(uVar9);
  FUN_1003fb48c(FUN_1000bb1bc,0,0xd00000000000009f,0x8000000100882d60,0xd00000000000001b,
                0x8000000100885c50,0x13b,0);
  FUN_1000bb1e8();
  FUN_1000baeb4();
  _swift_release(uVar9);
  switchD_1000aeac0::caseD_2e(*(undefined8 *)(lVar3 + 0xa0));
  lVar4 = 0;
  FUN_1000c7c50();
  FUN_100407cdc(FUN_1000ce01c,*(undefined8 *)(lVar4 + 0x48),PTR___sytN_100995e90 + 8);
  FUN_1003fb48c(FUN_1002104f8,0,0xd0000000000000b2,0x8000000100885c70,0xd000000000000014,
                0x8000000100885d30,0x6a,0);
  _swift_release(lVar4);
  return;
}

