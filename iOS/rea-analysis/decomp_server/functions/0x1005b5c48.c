// rea decompile_all
// name: FUN_1005b5c48
// address: 0x1005b5c48
// body: available
// range: 0x1005b5c48-0x1005b5d0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005b5c48(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x21;
  code *pcVar3;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    pcVar3 = *(code **)(param_6 + 0x1a8);
    uVar1 = param_1;
    FUN_1005b92b4();
    uVar2 = uVar1;
    FUN_100519b60();
    (*pcVar3)(param_2,1,&DAT_1009cf730,&DAT_1009d6da8,&PTR_PTR_1009cf548,uVar1,uVar2,param_5,param_6
             );
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_10056301c(param_1,param_3,param_4,param_5,param_6);
  return;
}

