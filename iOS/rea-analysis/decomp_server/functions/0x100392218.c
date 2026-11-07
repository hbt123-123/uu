// rea decompile_all
// name: FUN_100392218
// address: 0x100392218
// body: available
// range: 0x100392218-0x10039229b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100392218(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long *plVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = param_3;
  uStack_28 = param_1;
  if (param_4 == 0) {
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    local_50 = 0;
    local_40 = 0x3f800000;
    FUN_1003923d8(&local_30,&local_60);
    FUN_100392700(param_2,&local_60);
    for (plVar1 = (long *)local_50; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    }
    FUN_100384f80(&local_60);
  }
  else {
    FUN_1003923d8(&local_30,param_2);
  }
  return;
}

