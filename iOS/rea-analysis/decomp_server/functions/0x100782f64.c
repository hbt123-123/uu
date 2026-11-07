// rea decompile_all
// name: FUN_100782f64
// address: 0x100782f64
// body: available
// range: 0x100782f64-0x100782fb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100782f64(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  
  if ((DAT_100b2e040 != (undefined8 *)0x0) &&
     (uVar2 = (ulong)DAT_100b2e030, puVar1 = DAT_100b2e040, plVar3 = DAT_100b2e038,
     0 < (int)DAT_100b2e030)) {
    do {
      if (*plVar3 == param_1) {
        return *puVar1;
      }
      uVar2 = uVar2 - 1;
      puVar1 = puVar1 + 1;
      plVar3 = plVar3 + 1;
    } while (uVar2 != 0);
  }
  return 0;
}

