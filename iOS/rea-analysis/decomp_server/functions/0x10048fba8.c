// rea decompile_all
// name: FUN_10048fba8
// address: 0x10048fba8
// body: available
// range: 0x10048fba8-0x10048fcdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010048fcac) */
/* WARNING: Removing unreachable block (ram,0x00010048fc74) */
/* WARNING: Removing unreachable block (ram,0x00010048fc40) */
/* WARNING: Removing unreachable block (ram,0x00010048fc90) */

void FUN_10048fba8(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, uVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 && ((uVar2 & 1) == 0))) {
    if (lVar1 < 4) {
      if (lVar1 == 1) {
        FUN_10048fcdc();
      }
      else if (lVar1 == 2) {
        FUN_10048ff60();
      }
      else if (lVar1 == 3) {
        FUN_1004901dc();
      }
    }
    else if (lVar1 == 4) {
      FUN_100490528();
    }
    else if (lVar1 == 5) {
      FUN_100490730();
    }
    else if (lVar1 == 6) {
      FUN_1004909e8();
    }
  }
  return;
}

