// rea decompile_all
// name: FUN_1003376fc
// address: 0x1003376fc
// body: available
// range: 0x1003376fc-0x100337797 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10033777c to 0x10007ed2c FUN_10007ed2c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003376fc(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  long *unaff_x20;
  
  pcVar1 = param_1;
  uVar2 = param_2;
  (**(code **)(*unaff_x20 + 0x548))();
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6 & 1);
    FUN_10007ed2c(pcVar1,uVar2);
    return;
  }
  return;
}

