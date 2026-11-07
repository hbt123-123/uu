// rea decompile_all
// name: FUN_100509160
// address: 0x100509160
// body: available
// range: 0x100509160-0x10050926f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100509160(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  
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
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    piVar6 = (int *)(param_1 + 0x20);
    do {
      uVar2 = *piVar6 << 1 ^ *piVar6 >> 0x1f;
      if (uVar2 < 0x80) {
        lVar7 = 1;
      }
      else if (uVar2 >> 0xe == 0) {
        lVar7 = 2;
      }
      else if (uVar2 < 0x200000) {
        lVar7 = 3;
      }
      else {
        lVar7 = 4;
        if (uVar2 >> 0x1c != 0) {
          lVar7 = 5;
        }
      }
      bVar4 = SCARRY8(lVar8,lVar7);
      lVar8 = lVar8 + lVar7;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100509264);
        (*pcVar3)();
      }
      lVar5 = lVar5 + -1;
      piVar6 = piVar6 + 1;
    } while (lVar5 != 0);
  }
  lVar5 = lVar8;
  FUN_1005630a4();
  if (SCARRY8(lVar1,lVar5)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100509268);
    (*pcVar3)();
  }
  lVar7 = lVar1 + lVar5 + lVar8;
  if (SCARRY8(lVar1 + lVar5,lVar8)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10050926c);
    (*pcVar3)();
  }
  if (SCARRY8(*unaff_x20,lVar7)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100509270);
    (*pcVar3)();
  }
  *unaff_x20 = *unaff_x20 + lVar7;
  return;
}

