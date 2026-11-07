// rea decompile_all
// name: FUN_1007ae970
// address: 0x1007ae970
// body: available
// range: 0x1007ae970-0x1007ae9df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1007ae970(long param_1)

{
  bool bVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  iVar5 = 0x13;
  lVar6 = param_1;
  while( true ) {
    pbVar3 = *(byte **)((*(ulong *)(lVar6 + 0x20) & 0x7ffffffffff8) + 8);
    if (((ulong)pbVar3 & 1) != 0) {
      pbVar3 = *(byte **)((ulong)pbVar3 & 0xfffffffffffffffe);
    }
    if ((*pbVar3 >> 1 & 1) != 0) break;
    lVar4 = *(long *)(lVar6 + 8);
    lVar2 = lVar4;
    FUN_1007ae8ec();
    bVar1 = iVar5 == 0;
    iVar5 = iVar5 + -1;
    param_1 = lVar6;
    lVar6 = lVar4;
    if ((int)lVar2 == 0 || bVar1) {
      return 0;
    }
  }
  return param_1;
}

