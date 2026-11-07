// rea decompile_all
// name: FUN_100509030
// address: 0x100509030
// body: available
// range: 0x100509030-0x10050914b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100509030(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  uint *puVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar2 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar2 = 5;
  }
  lVar7 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar7 = lVar2;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar7 = 2;
  }
  lVar2 = 1;
  if (0x7f < param_2 << 3) {
    lVar2 = lVar7;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    puVar8 = (uint *)(param_1 + 0x20);
    do {
      uVar4 = *puVar8;
      if ((int)uVar4 < 0) {
        bVar6 = SCARRY8(lVar9,10);
        lVar9 = lVar9 + 10;
        if (bVar6) goto LAB_10050913c;
      }
      else if (uVar4 < 0x80) {
        bVar6 = SCARRY8(lVar9,1);
        lVar9 = lVar9 + 1;
        if (bVar6) {
LAB_10050913c:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100509140);
          (*pcVar5)();
        }
      }
      else {
        lVar1 = 4;
        if (uVar4 >> 0x1c != 0) {
          lVar1 = 5;
        }
        lVar3 = 3;
        if (0x1fffff < uVar4) {
          lVar3 = lVar1;
        }
        lVar1 = 2;
        if (0x3fff < uVar4) {
          lVar1 = lVar3;
        }
        bVar6 = SCARRY8(lVar9,lVar1);
        lVar9 = lVar9 + lVar1;
        if (bVar6) goto LAB_10050913c;
      }
      lVar7 = lVar7 + -1;
      puVar8 = puVar8 + 1;
    } while (lVar7 != 0);
  }
  lVar7 = lVar9;
  FUN_1005630a4();
  if (SCARRY8(lVar2,lVar7)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100509144);
    (*pcVar5)();
  }
  lVar1 = lVar2 + lVar7 + lVar9;
  if (SCARRY8(lVar2 + lVar7,lVar9)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100509148);
    (*pcVar5)();
  }
  if (SCARRY8(*unaff_x20,lVar1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10050914c);
    (*pcVar5)();
  }
  *unaff_x20 = *unaff_x20 + lVar1;
  return;
}

