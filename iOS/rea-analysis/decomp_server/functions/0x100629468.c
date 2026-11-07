// rea decompile_all
// name: FUN_100629468
// address: 0x100629468
// body: available
// range: 0x100629468-0x10062958b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100629468(long *param_1,long param_2,undefined8 *param_3,long param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined1 (*pauVar10) [16];
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  lVar11 = *(long *)(param_2 + 0x10);
  lVar8 = lVar11;
  if (param_3 == (undefined8 *)0x0) {
    lVar12 = 0;
    goto LAB_100629554;
  }
  lVar12 = param_4;
  if (param_4 == 0) goto LAB_100629554;
  if (param_4 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10062958c);
    (*pcVar3)();
  }
  if (lVar11 == 0) {
    lVar8 = 0;
    lVar12 = lVar11;
    goto LAB_100629554;
  }
  uVar5 = lVar11 - 1;
  uVar7 = param_4 - 1;
  uVar1 = uVar5;
  if (uVar7 <= uVar5) {
    uVar1 = uVar7;
  }
  uVar1 = uVar1 + 1;
  if (uVar1 < 0x11) {
LAB_100629570:
    lVar9 = 1;
    lVar6 = lVar11;
  }
  else {
    if (uVar7 <= uVar5) {
      uVar5 = uVar7;
    }
    if ((param_3 < (undefined8 *)(param_2 + lVar11 + 0x20U)) &&
       ((undefined1 *)((lVar11 - uVar5) + param_2 + 0x1f) <
        (undefined1 *)((long)param_3 + uVar5 + 1))) goto LAB_100629570;
    uVar5 = 0x10;
    if ((uVar1 & 0xf) != 0) {
      uVar5 = uVar1 & 0xf;
    }
    lVar8 = uVar1 - uVar5;
    lVar9 = lVar8 + 1;
    puVar2 = (undefined8 *)((long)param_3 + lVar8);
    lVar6 = lVar11 - lVar8;
    puVar4 = param_3;
    pauVar10 = (undefined1 (*) [16])(lVar11 + param_2 + 0x10);
    do {
      auVar13 = NEON_rev64(*pauVar10,1);
      auVar13 = NEON_ext(auVar13,auVar13,8,1);
      puVar4[1] = auVar13._8_8_;
      *puVar4 = auVar13._0_8_;
      lVar8 = lVar8 + -0x10;
      puVar4 = puVar4 + 2;
      param_3 = puVar2;
      pauVar10 = pauVar10 + -1;
    } while (lVar8 != 0);
  }
  lVar9 = param_4 - lVar9;
  do {
    lVar8 = lVar6 + -1;
    *(undefined1 *)param_3 = *(undefined1 *)(param_2 + 0x1f + lVar6);
    lVar12 = param_4;
    if (lVar9 == 0) break;
    param_3 = (undefined8 *)((long)param_3 + 1);
    lVar9 = lVar9 + -1;
    lVar6 = lVar8;
    lVar12 = lVar11;
  } while (lVar8 != 0);
LAB_100629554:
  *param_1 = param_2;
  param_1[1] = lVar8;
  _swift_bridgeObjectRetain(param_2);
  return lVar12;
}

