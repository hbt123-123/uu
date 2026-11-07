// rea decompile_all
// name: FUN_1006413c4
// address: 0x1006413c4
// body: available
// range: 0x1006413c4-0x10064148f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1006413c4(long *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long unaff_x20;
  undefined8 uVar12;
  
  if (param_2 == (undefined8 *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_3;
    if (param_3 != 0) {
      if (param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100641490);
        (*pcVar4)();
      }
      lVar8 = *(long *)(unaff_x20 + 0x10);
      lVar7 = *(long *)(lVar8 + 0x10);
      lVar6 = lVar7;
      if (lVar7 != 0) {
        uVar1 = lVar7 - 1U;
        if (param_3 - 1U <= lVar7 - 1U) {
          uVar1 = param_3 - 1U;
        }
        uVar1 = uVar1 + 1;
        if ((uVar1 < 0x11) || ((undefined1 *)((long)param_2 + (-0x20 - lVar8)) < (undefined1 *)0x10)
           ) {
          lVar9 = 0;
          lVar10 = 1;
          puVar5 = param_2;
        }
        else {
          uVar3 = 0x10;
          if ((uVar1 & 0xf) != 0) {
            uVar3 = uVar1 & 0xf;
          }
          lVar9 = uVar1 - uVar3;
          lVar10 = lVar9 + 1;
          puVar5 = (undefined8 *)((long)param_2 + lVar9);
          lVar6 = lVar9;
          puVar11 = (undefined8 *)(lVar8 + 0x20);
          do {
            uVar12 = *puVar11;
            param_2[1] = puVar11[1];
            *param_2 = uVar12;
            lVar6 = lVar6 + -0x10;
            param_2 = param_2 + 2;
            puVar11 = puVar11 + 2;
          } while (lVar6 != 0);
        }
        do {
          *(undefined1 *)puVar5 = *(undefined1 *)(lVar8 + 0x20 + lVar9);
          lVar6 = param_3;
          if (param_3 == lVar10) break;
          puVar5 = (undefined8 *)((long)puVar5 + 1);
          lVar2 = lVar10 + 1;
          lVar6 = lVar7;
          lVar9 = lVar10;
          lVar10 = lVar2;
        } while (lVar7 + 1 != lVar2);
      }
    }
  }
  *param_1 = unaff_x20;
  param_1[1] = lVar6;
  return lVar6;
}

