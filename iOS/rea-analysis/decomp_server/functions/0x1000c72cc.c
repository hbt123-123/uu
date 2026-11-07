// rea decompile_all
// name: FUN_1000c72cc
// address: 0x1000c72cc
// body: available
// range: 0x1000c72cc-0x1000c7313 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1000c72cc(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  uint *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
    return 0;
  }
  uVar3 = 0;
  puVar4 = (uint *)(param_1 + 0x20);
  while( true ) {
    uVar1 = 0;
    if (*puVar4 < 0x40) {
      uVar1 = 1L << ((ulong)*puVar4 & 0x3f);
    }
    if ((long)uVar1 < 0) break;
    uVar3 = uVar1 | uVar3;
    lVar5 = lVar5 + -1;
    puVar4 = puVar4 + 1;
    if (lVar5 == 0) {
      return uVar3;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000c7314);
  (*pcVar2)();
}

