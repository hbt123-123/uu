// rea decompile_all
// name: FUN_1004564a0
// address: 0x1004564a0
// body: available
// range: 0x1004564a0-0x100456567 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004564a0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    pcVar2 = *(code **)(param_7 + 0x118);
    uVar1 = param_1;
    FUN_10045eeb8();
    (*pcVar2)(param_2,1,&DAT_1009c3b70,uVar1,param_6,param_7);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (((int)param_3 == 0) ||
     ((**(code **)(param_7 + 0x18))(param_3,2,param_6,param_7), unaff_x21 == 0)) {
    FUN_10056301c(param_1,param_4,param_5,param_6,param_7);
  }
  return;
}

