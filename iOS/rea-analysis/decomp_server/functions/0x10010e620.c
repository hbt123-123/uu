// rea decompile_all
// name: FUN_10010e620
// address: 0x10010e620
// body: available
// range: 0x10010e620-0x10010e813 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10010e7f8 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10010e620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 unaff_x20;
  undefined8 uVar9;
  
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar1 = DAT_100b360a8;
  self = *(ID *)(*(long *)(DAT_100b360a8 + 0x80) + 0x10);
  IVar2 = _objc_msgSend(self,"resolutionWidth");
  if ((0 < (int)IVar2) && (IVar2 = _objc_msgSend(self,"resolutionHeight"), 0 < (int)IVar2)) {
    uVar9 = *(undefined8 *)(lVar1 + 0x80);
    _swift_retain(uVar9);
    IVar2 = _objc_msgSend(self,"screenId");
    IVar3 = _objc_msgSend(self,"resolutionWidth");
    IVar4 = _objc_msgSend(self,"resolutionHeight");
    IVar5 = _objc_msgSend(self,"resolutionPixelWidth");
    IVar6 = _objc_msgSend(self,"resolutionPixelHeight");
    FUN_100024470(IVar2,IVar3,IVar4,IVar5,IVar6);
    _swift_release(uVar9);
  }
  puVar7 = &DAT_10099d6c8;
  _swift_allocObject(&DAT_10099d6c8,0x18,7);
  _swift_weakInit(puVar7 + 0x10,unaff_x20);
  puVar8 = &DAT_10099d6f0;
  _swift_allocObject(&DAT_10099d6f0,0x28,7);
  *(undefined **)(puVar8 + 0x10) = puVar7;
  *(int *)(puVar8 + 0x18) = (int)param_1;
  *(ID *)(puVar8 + 0x20) = self;
  _swift_retain(puVar7);
  FUN_1001127fc(param_1,param_2,param_3,param_4,FUN_1001127ec,puVar8);
  _swift_release(puVar7);
  _swift_release(puVar8);
  return;
}

