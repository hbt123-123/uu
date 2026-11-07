// rea decompile_all
// name: FUN_1005a0320
// address: 0x1005a0320
// body: available
// range: 0x1005a0320-0x1005a0453 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005a0320(undefined1 *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,undefined8 param_6,long param_7)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long unaff_x21;
  code *pcVar3;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = param_1;
  if (*(long *)(param_2 + 0x10) != 0) {
    pcVar3 = *(code **)(param_7 + 0x118);
    FUN_1005a8794();
    (*pcVar3)(param_2,1,&DAT_1009d5f48,puVar1,param_6,param_7);
    puVar1 = param_2;
    if (unaff_x21 != 0) {
      return;
    }
  }
  puVar2 = puVar1;
  if ((param_5 & 0xff) != 0xc) {
    local_52 = (undefined1)param_5;
    pcVar3 = *(code **)(param_7 + 0x80);
    FUN_1005b26f8();
    puVar2 = &local_52;
    (*pcVar3)(puVar2,4,&DAT_1009d4480,puVar1,param_6,param_7);
  }
  if (unaff_x21 == 0) {
    if ((param_5 >> 8 & 0xff) != 0xc) {
      local_51 = (undefined1)(param_5 >> 8);
      pcVar3 = *(code **)(param_7 + 0x80);
      FUN_1005b26f8();
      (*pcVar3)(&local_51,5,&DAT_1009d4480,puVar2,param_6,param_7);
    }
    FUN_10056301c(param_1,param_3,param_4,param_6,param_7);
  }
  return;
}

