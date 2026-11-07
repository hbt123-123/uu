// rea decompile_all
// name: FUN_1000bc6e8
// address: 0x1000bc6e8
// body: available
// range: 0x1000bc6e8-0x1000bc887 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000bc83c to 0x1007de9c8 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000bc6e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ID param_5,ID param_6)

{
  ID IVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  _objc_msgSend(param_6,"frame");
  _objc_msgSend(param_6,"frame");
  _objc_msgSend(param_5,"setFrame:display:animate:",1,0);
  IVar1 = _objc_msgSend(param_5,"contentView");
  _objc_msgSend(IVar1,"setFrame:",0,0,param_3,param_4);
  IVar1 = _objc_msgSend(param_5,"contentView");
  _objc_msgSend(IVar1,"setBounds:",0,0,param_3,param_4);
  lVar2 = 0;
  FUN_1000b6da8();
  if (*(char *)(lVar2 + 0x50) == '\x01') {
    if (DAT_100a73b50 != -1) {
      _swift_once(&DAT_100a73b50,FUN_1000c5570);
    }
    puVar3 = &DAT_100a77208;
  }
  else {
    if (DAT_100a73b48 != -1) {
      _swift_once(&DAT_100a73b48,FUN_1000c554c);
    }
    puVar3 = &DAT_100a77200;
  }
  uVar4 = *puVar3;
  _swift_release();
  _objc_msgSend(param_5,"setLevel:",uVar4);
  _objc_msgSend(param_5,"setSharingType:",0);
  return;
}

