// rea decompile_all
// name: FUN_100151730
// address: 0x100151730
// body: available
// range: 0x100151730-0x1001518fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100151730(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ID unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 local_48;
  
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_100152440,auStack_60,0xd0000000000000b5,0x8000000100891cf0,0xd000000000000015,
                0x80000001008901c0,0x174,7);
  lVar1 = 0;
  FUN_10016db04();
  _swift_allocObject();
  plVar2 = (long *)0x0;
  FUN_10016dae4();
  plVar3 = plVar2;
  _swift_allocObject();
  FUN_10016d3cc();
  *(long **)(lVar1 + 0x10) = plVar3;
  *(undefined1 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x28) = 0xf000000000000000;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined1 *)(lVar1 + 0x38) = 1;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  plVar4 = (long *)(unaff_x20 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData);
  _swift_weakLoadStrong();
  if (plVar4 == (long *)0x0) {
    _swift_allocObject(plVar2,0x165,7);
    FUN_10016d3cc();
    plVar4 = plVar2;
  }
  *(long **)(lVar1 + 0x10) = plVar4;
  _swift_release();
  *(undefined1 *)(lVar1 + 0x18) = 0;
  FUN_100149e1c();
  (**(code **)(*plVar3 + 0x88))(&local_48);
  _swift_release(plVar3);
  *(undefined8 *)(lVar1 + 0x30) = local_48;
  *(undefined1 *)(lVar1 + 0x38) = 0;
  lVar5 = unaff_x20 + _TtC14UURemoteServer22ClipboardBaseOperation::operationDelegate;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar5 != 0) {
    FUN_1001639b0(lVar1,0,0);
    _swift_unknownObjectRelease(lVar5);
  }
  _objc_msgSend(unaff_x20,"setExecuting:",0);
  _objc_msgSend(unaff_x20,"setFinished:",1);
  _swift_release(lVar1);
  return;
}

