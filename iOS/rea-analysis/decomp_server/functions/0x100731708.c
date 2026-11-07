// rea decompile_all
// name: FUN_100731708
// address: 0x100731708
// body: available
// range: 0x100731708-0x1007317af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100731708(undefined8 param_1,ID param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  ulong uVar4;
  
  IVar2 = param_2;
  _objc_opt_respondsToSelector(param_2,"priority");
  if ((IVar2 & 1) == 0) {
    IVar2 = 500;
  }
  else {
    IVar2 = objc_stub::priority(param_2);
  }
  IVar3 = param_3;
  _objc_opt_respondsToSelector(param_3,"priority");
  if ((IVar3 & 1) == 0) {
    uVar4 = 500;
  }
  else {
    uVar4 = objc_stub::priority(param_3);
  }
  uVar1 = 0xffffffffffffffff;
  if (uVar4 < IVar2) {
    uVar1 = 1;
  }
  return uVar1;
}

