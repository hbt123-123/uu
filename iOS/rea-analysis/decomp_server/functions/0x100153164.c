// rea decompile_all
// name: FUN_100153164
// address: 0x100153164
// body: available
// range: 0x100153164-0x100153207 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100153164(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar1 = _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___clipboardAbility;
  lVar2 = *(long *)(unaff_x20 +
                   _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___clipboardAbility);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar2 = unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::managerDelegate;
    lVar3 = lVar2;
    _swift_unknownObjectWeakLoadStrong();
    uVar5 = *(undefined8 *)(lVar2 + 8);
    uVar4 = 0;
    FUN_10018b620(0);
    _swift_allocObject();
    FUN_100188a9c(lVar3,uVar5,uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    _swift_retain();
    _swift_release(uVar4);
    lVar2 = 0;
  }
  _swift_retain(lVar2);
  return lVar3;
}

