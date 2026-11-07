// rea decompile_all
// name: FUN_100251f60
// address: 0x100251f60
// body: available
// range: 0x100251f60-0x100251fbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100251fb8 to 0x100251324 FUN_100251324 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100251f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (param_4 != (undefined8 *)0x0) {
    uStack_58 = param_4[5];
    local_60 = param_4[4];
    uStack_48 = param_4[7];
    uStack_50 = param_4[6];
    local_40 = param_4[8];
    uStack_78 = param_4[1];
    local_80 = *param_4;
    uStack_68 = param_4[3];
    uStack_70 = param_4[2];
    local_28 = 0;
    uStack_20 = 0;
    FUN_100251324(param_1,param_2,0,param_3,&local_80);
    return;
  }
  FUN_100251324(param_1,param_2,0,param_3,0);
  return;
}

