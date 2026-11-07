// rea decompile_all
// name: FUN_10050c398
// address: 0x10050c398
// body: available
// range: 0x10050c398-0x10050c47b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050c398(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  FUN_100507c1c(param_2,2);
  uVar8 = *(ulong *)(param_1 + 0x10);
  if (uVar8 >> 0x3c != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10050c47c);
    (*pcVar1)();
  }
  thunk_FUN_100507c64(uVar8 << 3);
  if (uVar8 == 0) {
    return;
  }
  puVar5 = *(undefined8 **)(unaff_x20 + 8);
  if ((uVar8 < 6) || ((ulong)((long)puVar5 + (-0x20 - param_1)) < 0x20)) {
    uVar3 = 0;
    puVar2 = puVar5;
  }
  else {
    uVar3 = uVar8 & 0xffffffffffffffc;
    puVar2 = puVar5 + uVar3;
    puVar5 = puVar5 + 2;
    puVar4 = (undefined8 *)(param_1 + 0x30);
    uVar7 = uVar3;
    do {
      uVar9 = puVar4[-2];
      uVar11 = puVar4[1];
      uVar10 = *puVar4;
      puVar5[-1] = puVar4[-1];
      puVar5[-2] = uVar9;
      puVar5[1] = uVar11;
      *puVar5 = uVar10;
      puVar5 = puVar5 + 4;
      puVar4 = puVar4 + 4;
      uVar7 = uVar7 - 4;
    } while (uVar7 != 0);
    if (uVar8 == uVar3) goto LAB_10050c424;
  }
  lVar6 = uVar8 - uVar3;
  puVar5 = puVar2;
  puVar4 = (undefined8 *)(param_1 + uVar3 * 8 + 0x20);
  do {
    puVar2 = puVar5 + 1;
    *puVar5 = *puVar4;
    lVar6 = lVar6 + -1;
    puVar5 = puVar2;
    puVar4 = puVar4 + 1;
  } while (lVar6 != 0);
LAB_10050c424:
  *(undefined8 **)(unaff_x20 + 8) = puVar2;
  return;
}

