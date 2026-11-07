// rea decompile_all
// name: FUN_10064058c
// address: 0x10064058c
// body: available
// range: 0x10064058c-0x100640653 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10064058c(uint *param_1,uint *param_2)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  long unaff_x20;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  if (0x11 < *(ulong *)(*(long *)(unaff_x20 + 0xa0) + 0x10)) {
    uVar1 = *param_2;
    uVar4 = *(uint *)(*(long *)(unaff_x20 + 0xa0) + 100) ^ *param_1;
    uVar3 = uVar4;
    FUN_100640654();
    uVar3 = uVar3 ^ uVar1;
    lVar5 = 0x18;
    while( true ) {
      lVar6 = *(long *)(unaff_x20 + 0xa0);
      if (*(ulong *)(lVar6 + 0x10) <= lVar5 - 8U) break;
      uVar1 = *(uint *)(lVar6 + lVar5 * 4) ^ uVar3;
      uVar3 = uVar1;
      FUN_100640654();
      uVar3 = uVar3 ^ uVar4;
      lVar5 = lVar5 + -1;
      uVar4 = uVar1;
      if (lVar5 == 9) {
        if (1 < *(ulong *)(lVar6 + 0x10)) {
          uVar4 = *(uint *)(lVar6 + 0x24);
          *param_1 = *(uint *)(lVar6 + 0x20) ^ uVar1;
          *param_2 = uVar4 ^ uVar3;
          return;
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100640654);
        (*pcVar2)();
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100640650);
  (*pcVar2)();
}

