// rea decompile_all
// name: FUN_10056586c
// address: 0x10056586c
// body: available
// range: 0x10056586c-0x100565923 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10056586c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x21;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    pcVar5 = *(code **)(param_4 + 0x78);
    puVar3 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar3[-1];
      uVar2 = *puVar3;
      FUN_100008184(uVar1,uVar2);
      (*pcVar5)(uVar1,uVar2,param_2,param_3,param_4);
      if (unaff_x21 != 0) {
        FUN_100006cdc(uVar1,uVar2);
        return;
      }
      puVar3 = puVar3 + 2;
      FUN_100006cdc(uVar1,uVar2);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}

