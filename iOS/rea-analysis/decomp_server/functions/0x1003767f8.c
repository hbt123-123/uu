// rea decompile_all
// name: StreamerWrapper::ControlledInitializeWithLogPath:configPath:
// address: 0x1003767f8
// body: available
// range: 0x1003767f8-0x100376877 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

int StreamerWrapper::ControlledInitializeWithLogPath_configPath_
              (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  
  _objc_retainAutorelease();
  IVar1 = objc_stub::cStringUsingEncoding_(param_3,4);
  _objc_retainAutorelease();
  IVar2 = objc_stub::cStringUsingEncoding_(param_4,4);
  (*(code *)**(undefined8 **)(param_1 + 8))(IVar1,IVar2,0);
  return (int)IVar1;
}

