// rea decompile_all
// name: FUN_1001bc61c
// address: 0x1001bc61c
// body: available
// range: 0x1001bc61c-0x1001bc71f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001bc61c(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  lVar5 = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar5 + 0x40));
  __s10Foundation4UUIDVACycfC(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
  ;
  __s10Foundation4UUIDV10uuidStringSSvg();
  (**(code **)(lVar5 + 8))(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  plVar1 = (long *)(unaff_x20 + _TtC14UURemoteServer16ClipboardHandler::dragDropSessionID);
  lVar5 = plVar1[1];
  *plVar1 = lVar4;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar5);
  puVar2 = (undefined8 *)(unaff_x20 + _TtC14UURemoteServer16ClipboardHandler::remoteDownloadPath);
  *puVar2 = 0;
  puVar2[1] = 0xe000000000000000;
  _swift_bridgeObjectRelease();
  FUN_1001bc1d8();
  _swift_getObjectType();
  (**(code **)(lVar3 + 0x18))();
  _swift_unknownObjectRelease();
  FUN_1001bc5d8();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"dealloc");
  return;
}

