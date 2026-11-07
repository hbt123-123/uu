// rea decompile_all
// name: FUN_1001bc1d8
// address: 0x1001bc1d8
// body: available
// range: 0x1001bc1d8-0x1001bc2b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1001bc1d8(void)

{
  ulong *puVar1;
  ulong uVar2;
  ID self;
  ulong uVar3;
  undefined **ppuVar4;
  long unaff_x20;
  long *plVar5;
  undefined1 auVar6 [16];
  
  puVar1 = (ulong *)(unaff_x20 +
                    _TtC14UURemoteServer16ClipboardHandler::___lazy_storage___clipboardManager);
  uVar2 = *puVar1;
  if (uVar2 == 0) {
    FUN_1001bc2b4();
    if ((uVar2 & 1) == 0) {
      self = 0;
      FUN_100153bbc();
      ppuVar4 = &PTR_PTR_10099f550;
      plVar5 = &_TtC14UURemoteServer18ClipboardPCManager::managerDelegate;
    }
    else {
      self = 0;
      FUN_1001165b8();
      ppuVar4 = &PTR_PTR_10099d7d0;
      plVar5 = &_TtC14UURemoteServer22ClipboardMobileManager::delegate;
    }
    _objc_allocWithZone();
    uVar3 = _objc_msgSend(self,"init");
    *(undefined ***)(uVar3 + *plVar5 + 8) = &PTR_PTR_1009a2a40;
    _swift_unknownObjectWeakAssign();
    uVar2 = *puVar1;
    *puVar1 = uVar3;
    puVar1[1] = (ulong)ppuVar4;
    _swift_unknownObjectRetain(uVar3);
    _swift_unknownObjectRelease(uVar2);
    uVar2 = 0;
  }
  else {
    ppuVar4 = (undefined **)puVar1[1];
    uVar3 = uVar2;
  }
  _swift_unknownObjectRetain(uVar2);
  auVar6._8_8_ = ppuVar4;
  auVar6._0_8_ = uVar3;
  return auVar6;
}

