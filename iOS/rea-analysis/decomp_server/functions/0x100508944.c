// rea decompile_all
// name: FUN_100508944
// address: 0x100508944
// body: available
// range: 0x100508944-0x100508a33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100508944(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long *unaff_x20;
  
  lVar1 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 5;
  }
  lVar5 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar5 = lVar1;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar5 = 2;
  }
  lVar1 = 1;
  if (0x7f < param_2 << 3) {
    lVar1 = lVar5;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    piVar7 = (int *)(param_1 + 0x20);
    lVar8 = lVar5;
    do {
      uVar2 = *piVar7 << 1 ^ *piVar7 >> 0x1f;
      if (uVar2 < 0x80) {
        lVar9 = 1;
      }
      else if (uVar2 >> 0xe == 0) {
        lVar9 = 2;
      }
      else if (uVar2 < 0x200000) {
        lVar9 = 3;
      }
      else {
        lVar9 = 4;
        if (uVar2 >> 0x1c != 0) {
          lVar9 = 5;
        }
      }
      bVar4 = SCARRY8(lVar6,lVar9);
      lVar6 = lVar6 + lVar9;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100508a28);
        (*pcVar3)();
      }
      lVar8 = lVar8 + -1;
      piVar7 = piVar7 + 1;
    } while (lVar8 != 0);
  }
  lVar8 = lVar1 * lVar5;
  if (SUB168(SEXT816(lVar1) * SEXT816(lVar5),8) != lVar8 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100508a2c);
    (*pcVar3)();
  }
  if (SCARRY8(lVar8,lVar6)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100508a30);
    (*pcVar3)();
  }
  if (SCARRY8(*unaff_x20,lVar8 + lVar6)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100508a34);
    (*pcVar3)();
  }
  *unaff_x20 = *unaff_x20 + lVar8 + lVar6;
  return;
}

