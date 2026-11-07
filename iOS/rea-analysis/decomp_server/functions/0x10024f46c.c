// rea decompile_all
// name: FUN_10024f46c
// address: 0x10024f46c
// body: available
// range: 0x10024f46c-0x10024f4af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10024f4ac to 0x10024eea8 FUN_10024eea8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10024f46c(undefined8 param_1,undefined8 *param_2)

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
  
  if (param_2 != (undefined8 *)0x0) {
    uStack_58 = param_2[5];
    local_60 = param_2[4];
    uStack_48 = param_2[7];
    uStack_50 = param_2[6];
    local_40 = param_2[8];
    uStack_78 = param_2[1];
    local_80 = *param_2;
    uStack_68 = param_2[3];
    uStack_70 = param_2[2];
    local_28 = 0;
    uStack_20 = 0;
    FUN_10024eea8(param_1,&local_80);
    return;
  }
  FUN_10024eea8();
  return;
}

