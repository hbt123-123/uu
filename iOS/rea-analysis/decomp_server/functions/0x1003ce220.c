// rea decompile_all
// name: FUN_1003ce220
// address: 0x1003ce220
// body: available
// range: 0x1003ce220-0x1003ce2eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003ce2e8 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003ce220(ID param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  class_t *self;
  undefined8 uVar5;
  undefined8 uVar6;
  ID IVar7;
  
  _objc_msgSend(param_1,"clearAttachments");
  lVar4 = 0;
  FUN_1003c5f68();
  puVar1 = (undefined8 *)(param_2 + *(int *)(lVar4 + 0x20));
  uVar5 = *puVar1;
  uVar2 = puVar1[1];
  puVar1 = (undefined8 *)(param_2 + *(int *)(lVar4 + 0x24));
  uVar6 = *puVar1;
  uVar3 = puVar1[1];
  self = &objc::class_t::SentryAttachment;
  _objc_allocWithZone();
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar5,uVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,uVar3);
  IVar7 = _objc_msgSend((ID)self,"initWithData:filename:",uVar5,uVar6);
  _objc_msgSend(param_1,"addAttachment:",IVar7);
  return 0;
}

