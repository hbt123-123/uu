// rea decompile_all
// name: FUN_100153444
// address: 0x100153444
// body: available
// range: 0x100153444-0x10015352f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100153444(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___fileReceiveProcess;
  lVar2 = *(long *)(unaff_x20 +
                   _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___fileReceiveProcess);
  lVar4 = lVar2;
  if (lVar2 == 0) {
    lVar4 = unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::managerDelegate;
    lVar2 = lVar4;
    _swift_unknownObjectWeakLoadStrong(lVar4);
    uVar5 = *(undefined8 *)(lVar4 + 8);
    lVar3 = lVar2;
    FUN_1001533d4();
    lVar4 = 0;
    FUN_100170324();
    _swift_allocObject();
    *(undefined8 *)(lVar4 + 0x10) = 0;
    *(undefined8 *)(lVar4 + 0x20) = 0;
    _swift_unknownObjectWeakInit(lVar4 + 0x18,0);
    _swift_unknownObjectWeakInit(lVar4 + 0x28,0);
    *(undefined8 *)(lVar4 + 0x20) = uVar5;
    _swift_unknownObjectWeakAssign(lVar4 + 0x18,lVar2);
    _swift_unknownObjectRelease(lVar2);
    _swift_unknownObjectWeakAssign(lVar4 + 0x28,lVar3);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar4;
    _swift_retain(lVar4);
    _swift_release(uVar5);
    lVar2 = 0;
  }
  _swift_retain(lVar2);
  return lVar4;
}

