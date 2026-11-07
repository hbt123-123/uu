// rea decompile_all
// name: FUN_1007b206c
// address: 0x1007b206c
// body: available
// range: 0x1007b206c-0x1007b20df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1007b206c(int param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  uVar2 = 0;
  do {
    if (((&DAT_1009ea7d8)[uVar2 * 8] == param_1) && ((0xaeUL >> (uVar2 & 0x3f) & 1) != 0)) {
      uVar1 = (&DAT_1009ea7f0)[uVar2 * 8];
      if ((int)uVar1 < 2) {
        uVar1 = 1;
      }
      uVar3 = (ulong)uVar1;
      puVar4 = (undefined8 *)((&DAT_1009ea7e8)[uVar2 * 4] + 8);
      do {
        if (*(int *)(puVar4 + -1) == param_2) {
          return *puVar4;
        }
        puVar4 = puVar4 + 2;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 9);
  return 0;
}

