// rea decompile_all
// name: FUN_10037d484
// address: 0x10037d484
// body: available
// range: 0x10037d484-0x10037d53b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10037d538 to 0x1007de08c ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037d484(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  plVar1 = param_1;
  FUN_10037c5d4();
  if ((int)plVar1 < 0) {
    uVar2 = 0x10;
    ___cxa_allocate_exception(0x10);
    FUN_10037b83c();
    puVar3 = PTR_typeinfo_1009965b0;
    puVar4 = PTR__length_error_1009950e8;
  }
  else {
    if (((ulong)plVar1 & 0xffffffff) <= (ulong)(param_1[1] - param_1[2])) {
      NSData::dataWithBytes_length_
                ((ID)&_OBJC_CLASS___NSData,*param_1 + param_1[2],(ulong)plVar1 & 0xffffffff);
      param_1[2] = param_1[2] + ((ulong)plVar1 & 0xffffffff);
      return;
    }
    uVar2 = 0x10;
    ___cxa_allocate_exception(0x10);
    FUN_10037c1b8();
    puVar3 = PTR_typeinfo_1009965b8;
    puVar4 = PTR__out_of_range_1009950f0;
  }
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar2,puVar3,puVar4);
}

