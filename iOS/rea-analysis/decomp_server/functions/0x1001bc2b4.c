// rea decompile_all
// name: FUN_1001bc2b4
// address: 0x1001bc2b4
// body: available
// range: 0x1001bc2b4-0x1001bc387 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1001bc2b4(void)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined1 auStack_58 [24];
  
  lVar2 = _TtC14UURemoteServer16ClipboardHandler::ref;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer16ClipboardHandler::ref,auStack_58,0,0);
  lVar5 = unaff_x20 + lVar2;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar5 == 0) {
LAB_1001bc328:
    lVar2 = unaff_x20 + lVar2;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar2 != 0) {
      FUN_1000c7b64();
      lVar5 = *(long *)(lVar2 + 0x40);
      bVar1 = *(byte *)(lVar2 + 0x49);
      _swift_release(lVar2);
      if (((bVar1 & 1) == 0) && (lVar5 == 2)) goto LAB_1001bc364;
    }
    uVar3 = 0;
  }
  else {
    FUN_1000c7b64();
    lVar4 = *(long *)(lVar5 + 0x40);
    bVar1 = *(byte *)(lVar5 + 0x49);
    _swift_release(lVar5);
    if (((bVar1 & 1) != 0) || (lVar4 != 1)) goto LAB_1001bc328;
LAB_1001bc364:
    uVar3 = 1;
  }
  return uVar3;
}

