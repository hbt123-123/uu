// rea decompile_all
// name: FUN_1006404dc
// address: 0x1006404dc
// body: available
// range: 0x1006404dc-0x10064058b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006404dc(uint *param_1,uint *param_2)

{
  ulong uVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  uint uVar7;
  
  uVar4 = *param_1;
  uVar5 = 0;
  uVar7 = *param_2;
  do {
    lVar6 = *(long *)(unaff_x20 + 0xa0);
    if (*(ulong *)(lVar6 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100640584);
      (*pcVar3)();
    }
    uVar1 = uVar5 + 1;
    uVar2 = *(uint *)(lVar6 + uVar5 * 4 + 0x20) ^ uVar4;
    uVar4 = uVar2;
    FUN_100640654();
    uVar4 = uVar4 ^ uVar7;
    uVar5 = uVar1;
    uVar7 = uVar2;
  } while (uVar1 != 0x10);
  if (0x10 < *(ulong *)(lVar6 + 0x10)) {
    if (*(ulong *)(lVar6 + 0x10) != 0x11) {
      uVar7 = *(uint *)(lVar6 + 0x60);
      *param_1 = *(uint *)(lVar6 + 100) ^ uVar2;
      *param_2 = uVar7 ^ uVar4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10064058c);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100640588);
  (*pcVar3)();
}

