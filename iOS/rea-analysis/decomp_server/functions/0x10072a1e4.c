// rea decompile_all
// name: FUN_10072a1e4
// address: 0x10072a1e4
// body: available
// range: 0x10072a1e4-0x10072a297 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10072a294 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10072a1e4(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  
  if (param_4 == 0) {
    puVar1 = &_OBJC_CLASS___NSHTTPURLResponse;
    _objc_opt_class(&_OBJC_CLASS___NSHTTPURLResponse);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x20);
      pcVar4 = *(code **)(lVar3 + 0x10);
      param_4 = 0;
      goto LAB_10072a270;
    }
  }
  lVar3 = *(long *)(param_1 + 0x20);
  pcVar4 = *(code **)(lVar3 + 0x10);
  param_2 = 0;
  param_3 = 0;
LAB_10072a270:
  (*pcVar4)(lVar3,param_2,param_3,param_4);
  return 0;
}

