// rea decompile_all
// name: FUN_10054cb84
// address: 0x10054cb84
// body: available
// range: 0x10054cb84-0x10054cbdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10054cb84(void)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  uVar2 = (uint)((ulong)unaff_x20[1] >> 0x20);
  uVar5 = uVar2 >> 0x1e;
  if (1 < uVar2 >> 0x1e) {
    if (uVar5 != 2) {
      return 0;
    }
    if (!SBORROW8(*(long *)(lVar1 + 0x18),*(long *)(lVar1 + 0x10))) {
      return *(long *)(lVar1 + 0x18) - *(long *)(lVar1 + 0x10);
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10054cbd8);
    (*pcVar3)();
  }
  if (uVar5 == 0) {
    return (ulong)unaff_x20[1] >> 0x30 & 0xff;
  }
  iVar4 = (int)((ulong)lVar1 >> 0x20);
  if (!SBORROW4(iVar4,(int)lVar1)) {
    return (long)(iVar4 - (int)lVar1);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10054cbdc);
  (*pcVar3)();
}

