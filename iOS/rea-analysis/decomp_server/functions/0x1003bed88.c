// rea decompile_all
// name: FUN_1003bed88
// address: 0x1003bed88
// body: available
// range: 0x1003bed88-0x1003bee5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003bed88(ID param_1,long param_2)

{
  undefined8 uVar1;
  ID IVar2;
  class_t *self;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  IVar2 = _objc_msgSend(param_1,"clearAttachments");
  lVar4 = *(long *)(param_2 + 0x10);
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(param_2 + 0x28);
    do {
      uVar3 = puVar5[-1];
      uVar1 = *puVar5;
      self = &objc::class_t::SentryAttachment;
      _objc_allocWithZone();
      _swift_bridgeObjectRetain(uVar1);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,uVar1);
      IVar2 = _objc_msgSend((ID)self,"initWithPath:",uVar3);
      _objc_msgSend(param_1,"addAttachment:",IVar2);
      _swift_bridgeObjectRelease(uVar1);
      IVar2 = 0;
      puVar5 = puVar5 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return IVar2;
}

