// rea decompile_all
// name: FUN_1005b60a4
// address: 0x1005b60a4
// body: available
// range: 0x1005b60a4-0x1005b61d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005b61a8) */
/* WARNING: Removing unreachable block (ram,0x0001005b6170) */
/* WARNING: Removing unreachable block (ram,0x0001005b613c) */
/* WARNING: Removing unreachable block (ram,0x0001005b618c) */

void FUN_1005b60a4(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, uVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 && ((uVar2 & 1) == 0))) {
    if (lVar1 < 4) {
      if (lVar1 == 1) {
        FUN_1005b61d8(param_1);
      }
      else if (lVar1 == 2) {
        FUN_1005b62c8(param_1);
      }
      else if (lVar1 == 3) {
        FUN_1005b63a0(param_1);
      }
    }
    else if (lVar1 == 4) {
      FUN_1005b6490(param_1);
    }
    else if (lVar1 == 5) {
      FUN_1005b6560();
    }
    else if (lVar1 == 6) {
      FUN_1005b66f0();
    }
  }
  return;
}

