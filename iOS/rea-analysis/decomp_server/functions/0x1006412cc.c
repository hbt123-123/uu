// rea decompile_all
// name: FUN_1006412cc
// address: 0x1006412cc
// body: available
// range: 0x1006412cc-0x1006413c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1006412cc(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 uVar2;
  byte bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *unaff_x20;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar11 = unaff_x20[1];
  uVar10 = *unaff_x20;
  uVar2 = *(undefined1 *)(unaff_x20 + 2);
  uVar9 = unaff_x20[3];
  bVar3 = *(byte *)(unaff_x20 + 4);
  uVar8 = unaff_x20[5];
  if (param_2 == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = param_3;
    if (param_3 != (undefined8 *)0x0) {
      if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1006413c4);
        (*pcVar4)();
      }
      puVar7 = (undefined8 *)0x0;
      puVar5 = param_1;
      while (FUN_100660be4(), puVar6 = puVar7, puVar7 != puVar5) {
        FUN_10065fa88();
        puVar5 = puVar6;
        FUN_100660be4();
        if ((long)puVar5 <= (long)puVar7) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1006413c0);
          (*pcVar4)();
        }
        *(undefined8 **)(param_2 + (long)puVar7 * 8) = puVar6;
        puVar6 = param_3;
        if ((undefined8 *)((long)param_3 + -1) == puVar7) break;
        lVar1 = (long)puVar7 + 1;
        puVar7 = (undefined8 *)((long)puVar7 + 1);
        if (SCARRY8(lVar1,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100641368);
          (*pcVar4)();
        }
      }
    }
  }
  param_1[1] = uVar11;
  *param_1 = uVar10;
  *(undefined1 *)(param_1 + 2) = uVar2;
  param_1[3] = uVar9;
  *(byte *)(param_1 + 4) = bVar3 & 1;
  param_1[5] = uVar8;
  param_1[6] = puVar6;
  return puVar6;
}

