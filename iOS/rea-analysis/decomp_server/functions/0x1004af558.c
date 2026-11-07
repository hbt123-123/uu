// rea decompile_all
// name: FUN_1004af558
// address: 0x1004af558
// body: available
// range: 0x1004af558-0x1004af657 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004af558(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *unaff_x20;
  long unaff_x21;
  long *plVar2;
  code *pcVar3;
  long local_60;
  undefined1 local_58;
  
  plVar1 = unaff_x20;
  FUN_1004af658();
  if (unaff_x21 == 0) {
    plVar2 = (long *)*unaff_x20;
    if (plVar2[2] != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      FUN_1004b9630();
      (*pcVar3)(plVar2,2,&DAT_1009c9520,plVar1,param_2,param_3);
      plVar1 = plVar2;
    }
    if (unaff_x20[1] != 0) {
      local_58 = (undefined1)unaff_x20[2];
      pcVar3 = *(code **)(param_3 + 0x80);
      local_60 = unaff_x20[1];
      FUN_1004b90f0();
      (*pcVar3)(&local_60,3,&DAT_1009c07d0,plVar1,param_2,param_3);
    }
    FUN_10056301c(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  }
  return;
}

