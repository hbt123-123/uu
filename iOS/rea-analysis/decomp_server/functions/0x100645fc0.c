// rea decompile_all
// name: FUN_100645fc0
// address: 0x100645fc0
// body: available
// range: 0x100645fc0-0x1006460af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100645fc0(void)

{
  long lVar1;
  long lVar2;
  char cVar3;
  code *pcVar4;
  ulong uVar5;
  long *unaff_x20;
  long lVar6;
  
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  cVar3 = (char)unaff_x20[2];
  lVar6 = unaff_x20[3];
  if (cVar3 == '\0') {
    if (lVar2 == 0 && lVar1 == 0) {
      return;
    }
    FUN_1006605e8(0,lVar1,lVar2,0,lVar6);
    if (lVar2 != 0) {
      return;
    }
    uVar5 = (ulong)(lVar1 != 0);
  }
  else {
    if (cVar3 == '\x01') {
      if (SBORROW8(lVar2,lVar1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1006460ac);
        (*pcVar4)();
      }
      if (lVar2 == lVar1) {
        return;
      }
      FUN_1006605e8(0,lVar1,lVar2,1,lVar6);
    }
    else {
      if (*(long *)(lVar6 + 0x10) == 0) {
        return;
      }
      FUN_1006605e8(0,lVar1,lVar2,cVar3,lVar6);
      if (cVar3 == '\x02') {
        uVar5 = *(ulong *)(lVar6 + 0x10);
        goto LAB_100646088;
      }
    }
    uVar5 = lVar2 - lVar1;
    if (SBORROW8(lVar2,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1006460b0);
      (*pcVar4)();
    }
  }
LAB_100646088:
  if (0 < (long)uVar5) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1006460a8);
  (*pcVar4)();
}

