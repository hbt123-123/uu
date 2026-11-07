// rea decompile_all
// name: FUN_1005a0db0
// address: 0x1005a0db0
// body: available
// range: 0x1005a0db0-0x1005a0e9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005a0e7c) */
/* WARNING: Removing unreachable block (ram,0x0001005a0e98) */

void FUN_1005a0db0(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_4 + 0x10);
  lVar1 = param_3;
  uVar2 = param_4;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while ((uVar2 & 1) == 0) {
      if (lVar1 == 5) {
        FUN_1005a0fd0(param_2,param_1,param_3,param_4);
      }
      else if (lVar1 == 4) {
        FUN_1005a0f3c(param_2,param_1,param_3,param_4);
      }
      else if (lVar1 == 3) {
        FUN_1005a0e9c(param_2,param_1,param_3,param_4,FUN_1005b26f8,&DAT_1009d4480);
      }
      lVar1 = param_3;
      uVar2 = param_4;
      (*pcVar3)();
    }
  }
  return;
}

