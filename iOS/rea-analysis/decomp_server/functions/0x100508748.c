// rea decompile_all
// name: FUN_100508748
// address: 0x100508748
// body: available
// range: 0x100508748-0x10050882b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100508748(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  long *unaff_x20;
  
  lVar1 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 5;
  }
  lVar6 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar6 = lVar1;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar6 = 2;
  }
  lVar1 = 1;
  if (0x7f < param_2 << 3) {
    lVar1 = lVar6;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    puVar8 = (uint *)(param_1 + 0x20);
    lVar9 = lVar6;
    do {
      uVar3 = *puVar8;
      if (uVar3 < 0x80) {
        lVar10 = 1;
      }
      else {
        lVar2 = 4;
        if (uVar3 >> 0x1c != 0) {
          lVar2 = 5;
        }
        lVar10 = 3;
        if (0x1fffff < uVar3) {
          lVar10 = lVar2;
        }
        if (uVar3 >> 0xe == 0) {
          lVar10 = 2;
        }
      }
      bVar5 = SCARRY8(lVar7,lVar10);
      lVar7 = lVar7 + lVar10;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100508820);
        (*pcVar4)();
      }
      lVar9 = lVar9 + -1;
      puVar8 = puVar8 + 1;
    } while (lVar9 != 0);
  }
  lVar9 = lVar1 * lVar6;
  if (SUB168(SEXT816(lVar1) * SEXT816(lVar6),8) != lVar9 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100508824);
    (*pcVar4)();
  }
  if (SCARRY8(lVar9,lVar7)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100508828);
    (*pcVar4)();
  }
  if (SCARRY8(*unaff_x20,lVar9 + lVar7)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10050882c);
    (*pcVar4)();
  }
  *unaff_x20 = *unaff_x20 + lVar9 + lVar7;
  return;
}

