// rea decompile_all
// name: FUN_100151e58
// address: 0x100151e58
// body: available
// range: 0x100151e58-0x100152007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100151e58(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ID unaff_x20;
  undefined1 auStack_70 [16];
  
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_10015242c,auStack_70,0xd0000000000000b5,0x8000000100891cf0,0xd000000000000019,
                0x8000000100890170,0x18a,7);
  lVar1 = 0;
  FUN_10016db04();
  _swift_allocObject();
  lVar2 = 0;
  FUN_10016dae4();
  lVar3 = lVar2;
  _swift_allocObject();
  FUN_10016d3cc();
  *(long *)(lVar1 + 0x10) = lVar3;
  *(undefined1 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x28) = 0xf000000000000000;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined1 *)(lVar1 + 0x38) = 1;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  lVar4 = unaff_x20 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  _swift_weakLoadStrong();
  if (lVar4 == 0) {
    _swift_allocObject(lVar2,0x165,7);
    FUN_10016d3cc();
    lVar4 = lVar2;
  }
  *(long *)(lVar1 + 0x10) = lVar4;
  _swift_release(lVar3);
  *(undefined1 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x40) = param_1;
  lVar4 = unaff_x20 + _TtC14UURemoteServer22ClipboardBaseOperation::operationDelegate;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar4 != 0) {
    FUN_1001639b0(lVar1,0,0);
    _swift_unknownObjectRelease(lVar4);
  }
  _objc_msgSend(unaff_x20,"setExecuting:",0);
  _objc_msgSend(unaff_x20,"setFinished:",1);
  _swift_release(lVar1);
  return;
}

