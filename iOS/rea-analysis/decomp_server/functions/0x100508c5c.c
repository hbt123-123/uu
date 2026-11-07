// rea decompile_all
// name: FUN_100508c5c
// address: 0x100508c5c
// body: available
// range: 0x100508c5c-0x100508cd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100508c5c(long param_1,uint param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  
  lVar1 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 5;
  }
  lVar3 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar3 = lVar1;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar3 = 2;
  }
  lVar1 = 1;
  if (0x7f < param_2 << 3) {
    lVar1 = lVar3;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  lVar4 = lVar1 * lVar3;
  if (SUB168(SEXT816(lVar1) * SEXT816(lVar3),8) != lVar4 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100508ccc);
    (*pcVar2)();
  }
  if (SCARRY8(lVar4,lVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100508cd0);
    (*pcVar2)();
  }
  if (!SCARRY8(*unaff_x20,lVar4 + lVar3)) {
    *unaff_x20 = *unaff_x20 + lVar4 + lVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100508cd4);
  (*pcVar2)();
}

