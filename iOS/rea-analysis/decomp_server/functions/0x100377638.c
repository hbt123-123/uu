// rea decompile_all
// name: StreamerWrapper::ControlledSendBinaryData:data:
// address: 0x100377638
// body: available
// range: 0x100377638-0x1003776a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x1c bytes */

int StreamerWrapper::ControlledSendBinaryData_data_
              (ID param_1,SEL param_2,unsigned_int param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = param_4;
  _objc_retainAutorelease();
  IVar1 = objc_stub::bytes(IVar1);
  IVar2 = objc_stub::length(param_4);
  (**(code **)(*(long *)(param_1 + 8) + 0x50))(param_3,IVar1,IVar2);
  return param_3;
}

