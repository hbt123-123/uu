// rea decompile_all
// name: FUN_1000b0420
// address: 0x1000b0420
// body: available
// range: 0x1000b0420-0x1000b04e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b0420(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if (param_3 != param_2) {
    lVar3 = *param_4;
    plVar4 = (long *)(lVar3 + param_3 * 0x18 + -0x18);
    param_1 = param_1 - param_3;
    lVar6 = param_1;
    plVar5 = plVar4;
LAB_1000b0460:
    do {
      if ((*(byte *)((long)plVar4 + 0x29) & 1) == 0) {
        lVar7 = plVar4[3];
        if (((*(byte *)((long)plVar4 + 0x11) & 1) != 0) || (lVar7 < *plVar4)) goto LAB_1000b04b0;
        if (lVar7 == *plVar4) {
          if ((*(byte *)(plVar4 + 5) & 1) == 0) {
            if (((*(byte *)(plVar4 + 2) & 1) == 0) && (plVar4[4] < plVar4[1])) goto LAB_1000b04b0;
          }
          else if ((*(byte *)(plVar4 + 2) & 1) == 0) {
LAB_1000b04b0:
            if (lVar3 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1000b04e4);
              (*pcVar1)();
            }
            lVar10 = plVar4[1];
            lVar9 = *plVar4;
            lVar8 = plVar4[2];
            *plVar4 = lVar7;
            plVar4[1] = plVar4[4];
            *(byte *)(plVar4 + 2) = *(byte *)(plVar4 + 5);
            *(undefined1 *)((long)plVar4 + 0x11) = 0;
            plVar4[4] = lVar10;
            plVar4[3] = lVar9;
            plVar4[5] = lVar8;
            bVar2 = param_1 != -1;
            param_1 = param_1 + 1;
            plVar4 = plVar4 + -3;
            if (bVar2) goto LAB_1000b0460;
          }
        }
      }
      param_3 = param_3 + 1;
      plVar4 = plVar5 + 3;
      param_1 = lVar6 + -1;
      lVar6 = param_1;
      plVar5 = plVar4;
    } while (param_3 != param_2);
  }
  return;
}

