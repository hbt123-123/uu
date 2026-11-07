// rea decompile_all
// name: FUN_10037c320
// address: 0x10037c320
// body: available
// range: 0x10037c320-0x10037c3a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10037c3a0 to 0x1007de08c ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10037c320(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  do {
    if (0x3f < uVar4) {
      uVar2 = 0x10;
      ___cxa_allocate_exception(0x10);
      FUN_10037c5a8();
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(uVar2,PTR_typeinfo_1009965c0,PTR__invalid_argument_100995100);
    }
    uVar1 = param_1;
    FUN_10037c3b8();
    uVar3 = (uVar1 & 0x7f) << (uVar4 & 0x3f) | uVar3;
    uVar4 = uVar4 + 7;
  } while ((int)uVar1 < 0);
  return uVar3;
}

