// rea decompile_all
// name: FUN_10013d8dc
// address: 0x10013d8dc
// body: available
// range: 0x10013d8dc-0x10013d90b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10013d8dc(undefined8 param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  
  pbVar3 = (byte *)(*param_2 + 0x20);
  lVar2 = *(long *)(*param_2 + 0x10);
  do {
    lVar4 = lVar2;
    if (lVar4 == 0) break;
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    lVar2 = lVar4 + -1;
  } while ((bVar1 & 1) != 0);
  *(bool *)param_1 = lVar4 == 0;
  return;
}

