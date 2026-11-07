// rea decompile_all
// name: FUN_10053684c
// address: 0x10053684c
// body: available
// range: 0x10053684c-0x100536983 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10053684c(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  undefined8 uVar7;
  
  lVar5 = unaff_x20[2];
  lVar3 = *unaff_x20;
  if (lVar3 == 0) {
    if (lVar5 != 0) goto LAB_10053687c;
  }
  else if (lVar5 != unaff_x20[1] - lVar3) {
LAB_10053687c:
    if (*(char *)(lVar3 + lVar5) != '\"') {
      uVar7 = 5;
      goto LAB_1005368bc;
    }
    lVar4 = unaff_x20[1] - lVar3;
    lVar1 = lVar4;
    if (lVar3 == 0) {
      lVar1 = 0;
    }
    if ((lVar5 < 0) || (lVar1 <= lVar5)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005368bc);
      (*pcVar2)();
    }
    lVar5 = lVar5 + 1;
    unaff_x20[2] = lVar5;
    if (lVar3 != 0) goto LAB_1005368f8;
    do {
      do {
        if (*(char *)(lVar3 + lVar5) == '\\') {
          if (lVar1 <= lVar5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100536978);
            (*pcVar2)();
          }
          if (lVar3 == 0) {
LAB_100536980:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100536984);
            (*pcVar2)();
          }
          if (lVar5 + 1 == lVar4) goto LAB_100536950;
          if (lVar4 <= lVar5 + 1) goto LAB_100536980;
          lVar6 = 2;
        }
        else {
          if (*(char *)(lVar3 + lVar5) == '\"') {
            unaff_x20[2] = lVar5;
            if (lVar5 < lVar1) {
              unaff_x20[2] = lVar5 + 1;
              return;
            }
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100536980);
            (*pcVar2)();
          }
          if (lVar1 <= lVar5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10053697c);
            (*pcVar2)();
          }
          lVar6 = 1;
        }
        lVar5 = lVar5 + lVar6;
      } while (lVar3 == 0);
LAB_1005368f8:
    } while (lVar5 != lVar4);
LAB_100536950:
    unaff_x20[2] = lVar4;
  }
  uVar7 = 0xd;
LAB_1005368bc:
  FUN_1004f98e4();
  _swift_allocError(&DAT_1009d03a0,param_1,0,0);
  *param_1 = 0;
  param_1[1] = uVar7;
  _swift_willThrow();
  return;
}

