// rea decompile_all
// name: FUN_1006afffc
// address: 0x1006afffc
// body: available
// range: 0x1006afffc-0x1006b003f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1006afffc(undefined2 *param_1,uint param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    *param_1 = (short)param_2;
    uVar3 = 1;
    param_1[1] = 1;
    do {
      puVar1 = param_1 + (ulong)(uVar3 - 1) * 2 + 2;
      *puVar1 = 0;
      *(char *)(puVar1 + 1) = (char)(uVar3 - 1);
      *(char *)((long)puVar1 + 3) = (char)param_2;
      uVar2 = uVar3 >> (ulong)(param_2 & 0x1f);
      uVar3 = uVar3 + 1;
    } while (uVar2 == 0);
    return 0;
  }
  return 0xffffffffffffffff;
}

