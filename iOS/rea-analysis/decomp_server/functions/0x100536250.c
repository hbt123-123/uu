// rea decompile_all
// name: FUN_100536250
// address: 0x100536250
// body: available
// range: 0x100536250-0x1005363c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100536250(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *unaff_x20;
  
  FUN_100535660();
  lVar4 = unaff_x20[2];
  lVar5 = *unaff_x20;
  if (lVar5 == 0) {
    if (lVar4 == 0) goto LAB_100536320;
  }
  else if (lVar4 == unaff_x20[1] - lVar5) goto LAB_100536320;
  if (*(char *)(lVar5 + lVar4) != '\"') {
    return;
  }
  lVar6 = unaff_x20[1] - lVar5;
  lVar8 = lVar6;
  if (lVar5 == 0) {
    lVar8 = 0;
  }
  if ((lVar4 < 0) || (lVar8 <= lVar4)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005363c0);
    (*pcVar2)();
  }
  unaff_x20[2] = lVar4 + 1;
  bVar3 = lVar4 + 1 == lVar6;
  if ((lVar5 == 0) || (!bVar3)) {
    lVar7 = 0;
    lVar8 = lVar8 + -1;
    lVar9 = lVar5 + 1;
    lVar1 = lVar6 + -2;
    do {
      lVar10 = lVar1;
      if (*(char *)(lVar9 + lVar4) == '\"') {
        lVar8 = (lVar4 - lVar7) + 1;
        unaff_x20[2] = lVar8;
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1005363c8);
          (*pcVar2)();
        }
        if (!bVar3) {
          if (lVar6 <= lVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1005363c4);
            (*pcVar2)();
          }
          lVar4 = (lVar4 - lVar7) + 2;
LAB_1005363a4:
          unaff_x20[2] = lVar4;
          return;
        }
        goto LAB_100536320;
      }
      if (*(char *)(lVar9 + lVar4) == '\\') goto LAB_1005363a4;
      if (lVar4 == lVar8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005363bc);
        (*pcVar2)();
      }
      lVar9 = lVar9 + 1;
      bVar3 = lVar4 == lVar10;
      lVar7 = lVar7 + -1;
      lVar8 = lVar8 + -1;
      lVar1 = lVar10 + -1;
    } while ((lVar5 == 0) || (lVar4 != lVar10));
  }
  unaff_x20[2] = lVar6;
LAB_100536320:
  FUN_1004f98e4();
  _swift_allocError(&DAT_1009d03a0,param_1,0,0);
  param_1[1] = 0xd;
  *param_1 = 0;
  _swift_willThrow();
  return;
}

