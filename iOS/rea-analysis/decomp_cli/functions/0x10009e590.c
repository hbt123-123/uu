// rea decompile_all
// name: FUN_10009e590
// address: 0x10009e590
// body: available
// range: 0x10009e590-0x10009e71b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10009e6d8 to 0x10009e71c FUN_10009e71c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10009e6fc to 0x10009e878 FUN_10009e878 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009e590(long param_1,long param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *unaff_x20;
  
  lVar5 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = *(ulong *)(lVar5 + 0x10);
  if ((long)uVar2 < (long)uVar3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10009e708);
    (*pcVar1)();
  }
  if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10009e70c);
    (*pcVar1)();
  }
  if (uVar3 < uVar2) {
    lVar8 = uVar3 << 6;
    uVar10 = uVar3;
    do {
      lVar9 = *(long *)(lVar5 + lVar8 + 0x48);
      if (lVar9 == param_1) {
        if ((param_3 & 1) == 0) {
          if (*(char *)(lVar5 + lVar8 + 0x58) == '\x01') {
            FUN_10009e71c(uVar10);
            uVar10 = uVar10 + 1;
            lVar5 = *unaff_x20;
            uVar3 = unaff_x20[1];
          }
          if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10009e710);
            (*pcVar1)();
          }
          uVar2 = *(ulong *)(lVar5 + 0x10);
          if ((uVar2 < uVar3) || ((long)uVar2 < (long)uVar10)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10009e718);
            (*pcVar1)();
          }
          if ((long)uVar10 < (long)uVar3) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10009e71c);
            (*pcVar1)();
          }
          if (uVar10 == uVar2) {
            return;
          }
          pbVar6 = (byte *)(lVar5 + uVar10 * 0x40 + 0x58);
          while( true ) {
            if ((long)uVar2 <= (long)uVar10) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10009e704);
              (*pcVar1)();
            }
            if (((*(long *)(pbVar6 + -0x10) == param_1) && ((*pbVar6 & 1) == 0)) &&
               (*(long *)(pbVar6 + -8) == param_2)) break;
            uVar10 = uVar10 + 1;
            pbVar6 = pbVar6 + 0x40;
            if (uVar2 == uVar10) {
              return;
            }
          }
          FUN_10009e71c(uVar10);
          return;
        }
        uVar3 = uVar2;
        if (uVar2 == uVar10) goto LAB_10009e6e0;
        plVar4 = (long *)(lVar5 + lVar8 + 0x48);
        uVar7 = uVar10;
        goto LAB_10009e600;
      }
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + 0x40;
    } while (lVar9 <= param_1 && (long)uVar10 < (long)uVar2);
  }
  return;
  while (uVar7 = uVar7 + 1, uVar3 = uVar2, plVar4 = plVar4 + 8, uVar2 != uVar7) {
LAB_10009e600:
    uVar3 = uVar7;
    if (*plVar4 != param_1) break;
  }
LAB_10009e6e0:
  if ((long)uVar3 < (long)uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10009e714);
    (*pcVar1)();
  }
  FUN_10009e878(uVar10,uVar3);
  return;
}

