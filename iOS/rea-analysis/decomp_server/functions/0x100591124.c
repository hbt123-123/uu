// rea decompile_all
// name: FUN_100591124
// address: 0x100591124
// body: available
// range: 0x100591124-0x1005911f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100591124(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  lVar1 = param_1;
  if (unaff_x20[4] != 0) {
    lVar1 = unaff_x20[3];
    (**(code **)(param_3 + 0x70))(lVar1,unaff_x20[4],1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    lVar2 = *unaff_x20;
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      FUN_1005a8714();
      (*pcVar3)(lVar2,2,&DAT_1009d4e68,lVar1,param_2,param_3);
    }
    FUN_1005911f8();
    FUN_10056301c(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}

