// rea decompile_all
// name: FUN_100509270
// address: 0x100509270
// body: available
// range: 0x100509270-0x1005093af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100509270(long param_1,uint param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar1 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 5;
  }
  lVar4 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar4 = lVar1;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar4 = 2;
  }
  lVar1 = 1;
  if (0x7f < param_2 << 3) {
    lVar1 = lVar4;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    plVar5 = (long *)(param_1 + 0x20);
    do {
      uVar6 = *plVar5 << 1 ^ *plVar5 >> 0x3f;
      if (uVar6 < 0x80) {
        lVar7 = 1;
      }
      else if ((long)uVar6 < 0) {
        lVar7 = 10;
      }
      else if (uVar6 >> 0x23 == 0) {
        if (uVar6 < 0x200000) {
          lVar7 = 2;
          if (uVar6 < 0x4000) goto LAB_10050934c;
        }
        else {
          lVar7 = 4;
LAB_100509340:
          if (uVar6 >> 0x1c == 0) goto LAB_10050934c;
        }
LAB_100509348:
        lVar7 = lVar7 + 1;
      }
      else {
        if (uVar6 >> 0x31 != 0) {
          uVar6 = uVar6 >> 0x1c;
          lVar7 = 8;
          goto LAB_100509340;
        }
        lVar7 = 6;
        if (uVar6 >> 0x2a != 0) goto LAB_100509348;
      }
LAB_10050934c:
      bVar3 = SCARRY8(lVar8,lVar7);
      lVar8 = lVar8 + lVar7;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005093a4);
        (*pcVar2)();
      }
      lVar4 = lVar4 + -1;
      plVar5 = plVar5 + 1;
    } while (lVar4 != 0);
  }
  lVar4 = lVar8;
  FUN_1005630a4();
  if (SCARRY8(lVar1,lVar4)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005093a8);
    (*pcVar2)();
  }
  lVar7 = lVar1 + lVar4 + lVar8;
  if (SCARRY8(lVar1 + lVar4,lVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005093ac);
    (*pcVar2)();
  }
  if (SCARRY8(*unaff_x20,lVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005093b0);
    (*pcVar2)();
  }
  *unaff_x20 = *unaff_x20 + lVar7;
  return;
}

