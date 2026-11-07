// rea decompile_all
// name: FUN_10009c39c
// address: 0x10009c39c
// body: available
// range: 0x10009c39c-0x10009c4a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009c39c(ulong *param_1,long param_2,ulong param_3,uint param_4)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  long *unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar1 = *unaff_x20;
  uVar7 = unaff_x20[1];
  FUN_10009f444(param_2,param_3,param_4 & 0x1ff,lVar1,uVar7);
  if ((param_3 & 1) == 0) {
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10009c498);
      (*pcVar3)();
    }
    uVar8 = *(ulong *)(lVar1 + 0x10);
    if (uVar8 < uVar7 || (long)uVar8 < param_2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10009c49c);
      (*pcVar3)();
    }
    if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10009c4a0);
      (*pcVar3)();
    }
    lVar5 = (uVar8 - param_2) + 1;
    pcVar2 = (char *)(lVar1 + param_2 * 0x40 + 0x58);
    do {
      pcVar6 = pcVar2;
      lVar5 = lVar5 + -1;
      if (lVar5 == 0) goto LAB_10009c3cc;
      pcVar2 = pcVar6 + 0x40;
    } while (*pcVar6 != '\x01');
    uVar7 = *(ulong *)(pcVar6 + -0x10);
    uVar8 = *(ulong *)(pcVar6 + -8);
    FUN_10009e590(uVar7,uVar8,1);
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10009c4a4);
      (*pcVar3)();
    }
    if (*(ulong *)(unaff_x20[2] + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10009c4a8);
      (*pcVar3)();
    }
    lVar1 = unaff_x20[2] + uVar7 * 0x10;
    uVar4 = *(ulong *)(lVar1 + 0x28);
    uVar10 = *(ulong *)(lVar1 + 0x20);
    _swift_bridgeObjectRetain();
    uVar9 = 1;
  }
  else {
LAB_10009c3cc:
    uVar4 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
  }
  param_1[1] = uVar8;
  *param_1 = uVar7;
  param_1[3] = uVar10;
  param_1[2] = uVar9;
  param_1[4] = uVar4;
  return;
}

