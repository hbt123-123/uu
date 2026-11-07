// rea decompile_all
// name: FUN_1003f0504
// address: 0x1003f0504
// body: available
// range: 0x1003f0504-0x1003f05cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003f05cc to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003f0504(code *param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined *puVar2;
  
  pcVar1 = param_1;
  (*param_1)();
  puVar2 = &DAT_1009bb7d0;
  _swift_allocObject(&DAT_1009bb7d0,0x48,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  puVar2[0x18] = param_4 & 1;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  *(undefined8 *)(puVar2 + 0x30) = param_7;
  *(code **)(puVar2 + 0x38) = param_1;
  *(undefined8 *)(puVar2 + 0x40) = param_2;
  _swift_retain(param_7);
  _swift_retain(param_2);
  _swift_retain(param_3);
  FUN_1006157c0(FUN_1003f227c,puVar2);
  _swift_release(pcVar1);
  _swift_release(puVar2);
  return;
}

