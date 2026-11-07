// rea decompile_all
// name: FUN_100508638
// address: 0x100508638
// body: available
// range: 0x100508638-0x100508733 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100508638(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  long *unaff_x20;
  
  lVar1 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 5;
  }
  lVar7 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar7 = lVar1;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar7 = 2;
  }
  lVar1 = 1;
  if (0x7f < param_2 << 3) {
    lVar1 = lVar7;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    puVar9 = (uint *)(param_1 + 0x20);
    lVar10 = lVar7;
    do {
      uVar4 = *puVar9;
      if ((int)uVar4 < 0) {
        bVar6 = SCARRY8(lVar8,10);
        lVar8 = lVar8 + 10;
        if (bVar6) goto LAB_100508724;
      }
      else if (uVar4 < 0x80) {
        bVar6 = SCARRY8(lVar8,1);
        lVar8 = lVar8 + 1;
        if (bVar6) {
LAB_100508724:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100508728);
          (*pcVar5)();
        }
      }
      else {
        lVar2 = 4;
        if (uVar4 >> 0x1c != 0) {
          lVar2 = 5;
        }
        lVar3 = 3;
        if (0x1fffff < uVar4) {
          lVar3 = lVar2;
        }
        lVar2 = 2;
        if (0x3fff < uVar4) {
          lVar2 = lVar3;
        }
        bVar6 = SCARRY8(lVar8,lVar2);
        lVar8 = lVar8 + lVar2;
        if (bVar6) goto LAB_100508724;
      }
      lVar10 = lVar10 + -1;
      puVar9 = puVar9 + 1;
    } while (lVar10 != 0);
  }
  lVar10 = lVar1 * lVar7;
  if (SUB168(SEXT816(lVar1) * SEXT816(lVar7),8) != lVar10 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10050872c);
    (*pcVar5)();
  }
  if (SCARRY8(lVar10,lVar8)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100508730);
    (*pcVar5)();
  }
  if (SCARRY8(*unaff_x20,lVar10 + lVar8)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100508734);
    (*pcVar5)();
  }
  *unaff_x20 = *unaff_x20 + lVar10 + lVar8;
  return;
}

