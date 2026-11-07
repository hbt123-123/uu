// rea decompile_all
// name: FUN_10037c000
// address: 0x10037c000
// body: available
// range: 0x10037c000-0x10037c067 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037c000(long param_1,undefined8 param_2,long param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined4 *puVar12;
  long extraout_x12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  FUN_10037bde0();
  if (param_1 == 0) {
    puVar12 = (undefined4 *)(param_3 + -0xf0);
    puVar1 = puVar12 + extraout_x12 * 4;
    uVar2 = *(undefined4 *)(param_3 + -0xec);
    uVar3 = *(undefined4 *)(param_3 + -0xe8);
    uVar4 = *(undefined4 *)(param_3 + -0xe4);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    *puVar1 = *puVar12;
    puVar1[1] = uVar2;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
    *puVar12 = uVar5;
    *(undefined4 *)(param_3 + -0xec) = uVar6;
    *(undefined4 *)(param_3 + -0xe8) = uVar7;
    *(undefined4 *)(param_3 + -0xe4) = uVar8;
    pauVar9 = (undefined1 (*) [16])(param_3 + -0xe0);
    pauVar11 = (undefined1 (*) [16])(puVar1 + -4);
    do {
      pauVar10 = pauVar11;
      auVar13 = NEON_aesimc(*pauVar9,*pauVar9);
      auVar14 = NEON_aesimc(*pauVar10,*pauVar10);
      *(int *)*pauVar10 = auVar13._0_4_;
      *(int *)(*pauVar10 + 4) = auVar13._4_4_;
      *(int *)(*pauVar10 + 8) = auVar13._8_4_;
      *(int *)(*pauVar10 + 0xc) = auVar13._12_4_;
      pauVar11 = pauVar10 + -1;
      *(int *)*pauVar9 = auVar14._0_4_;
      *(int *)(*pauVar9 + 4) = auVar14._4_4_;
      *(int *)(*pauVar9 + 8) = auVar14._8_4_;
      *(int *)(*pauVar9 + 0xc) = auVar14._12_4_;
      pauVar9 = pauVar9 + 1;
    } while (pauVar9 < pauVar11);
    auVar13 = NEON_aesimc(*pauVar9,*pauVar9);
    *(int *)*pauVar11 = auVar13._0_4_;
    *(int *)(pauVar10[-1] + 4) = auVar13._4_4_;
    *(int *)(pauVar10[-1] + 8) = auVar13._8_4_;
    *(int *)(pauVar10[-1] + 0xc) = auVar13._12_4_;
  }
  return;
}

