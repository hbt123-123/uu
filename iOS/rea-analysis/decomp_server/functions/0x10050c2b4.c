// rea decompile_all
// name: FUN_10050c2b4
// address: 0x10050c2b4
// body: available
// range: 0x10050c2b4-0x10050c397 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050c2b4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  FUN_100507c1c(param_2,2);
  uVar10 = *(ulong *)(param_1 + 0x10);
  if (uVar10 >> 0x3d != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10050c398);
    (*pcVar1)();
  }
  thunk_FUN_100507c64(uVar10 << 2);
  if (uVar10 == 0) {
    return;
  }
  puVar5 = *(undefined4 **)(unaff_x20 + 8);
  if ((uVar10 < 8) || ((ulong)((long)puVar5 + (-0x20 - param_1)) < 0x20)) {
    uVar3 = 0;
    puVar2 = puVar5;
  }
  else {
    uVar3 = uVar10 & 0x1ffffffffffffff8;
    puVar2 = puVar5 + uVar3;
    puVar7 = (undefined8 *)(puVar5 + 4);
    puVar8 = (undefined8 *)(param_1 + 0x30);
    uVar9 = uVar3;
    do {
      uVar11 = puVar8[-2];
      uVar13 = puVar8[1];
      uVar12 = *puVar8;
      puVar7[-1] = puVar8[-1];
      puVar7[-2] = uVar11;
      puVar7[1] = uVar13;
      *puVar7 = uVar12;
      puVar7 = puVar7 + 4;
      puVar8 = puVar8 + 4;
      uVar9 = uVar9 - 8;
    } while (uVar9 != 0);
    if (uVar10 == uVar3) goto LAB_10050c340;
  }
  lVar6 = uVar10 - uVar3;
  puVar5 = puVar2;
  puVar4 = (undefined4 *)(param_1 + uVar3 * 4 + 0x20);
  do {
    puVar2 = puVar5 + 1;
    *puVar5 = *puVar4;
    lVar6 = lVar6 + -1;
    puVar5 = puVar2;
    puVar4 = puVar4 + 1;
  } while (lVar6 != 0);
LAB_10050c340:
  *(undefined4 **)(unaff_x20 + 8) = puVar2;
  return;
}

