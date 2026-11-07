// rea decompile_all
// name: SAIdentifier::isValidForLogin:value:
// address: 0x10070af7c
// body: available
// range: 0x10070af7c-0x10070b063 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

bool SAIdentifier::isValidForLogin_value_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ID IVar2;
  uint uVar3;
  
  bVar1 = isValidLoginIDKey_(param_1,param_3);
  if ((bVar1 == 0) || (bVar1 = isValidLoginId_(param_1,param_4), bVar1 == 0)) {
    uVar3 = 0;
  }
  else {
    IVar2 = loginIDKey(param_1);
    IVar2 = objc_stub::isEqualToString_(IVar2,param_3);
    if ((IVar2 & 1) == 0) {
      uVar3 = 1;
    }
    else {
      IVar2 = originalLoginId(param_1);
      IVar2 = objc_stub::isEqualToString_(IVar2,param_4);
      uVar3 = (uint)IVar2 ^ 1;
    }
  }
  return uVar3 & 1;
}

