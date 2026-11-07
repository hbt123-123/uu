// rea decompile_all
// name: FUN_10006d334
// address: 0x10006d334
// body: available
// range: 0x10006d334-0x10006d533 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006d334(ulong param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar9 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar11 = param_1 + 1 & (uVar9 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar11 >> 3 & 0xffffffffffffff8)) >> (uVar11 & 0x3f) & 1) != 0) {
    uVar9 = ~uVar9;
    uVar10 = param_1;
    __ss10_HashTableV12previousHole6beforeAB6BucketVAF_tF(param_1,lVar1,uVar9);
    uVar10 = uVar10 + 1 & uVar9;
    do {
      puVar2 = (undefined1 *)(*(long *)(param_2 + 0x30) + uVar11 * 0x10);
      uVar7 = *puVar2;
      uVar5 = *(undefined4 *)(puVar2 + 4);
      uVar6 = *(undefined4 *)(puVar2 + 8);
      uVar12 = (ulong)*(uint *)(puVar2 + 0xc);
      __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      __ss6HasherV8_combineyySuF(uVar7);
      __ss6HasherV8_combineyys6UInt32VF(uVar5);
      __ss6HasherV8_combineyys6UInt32VF(uVar6);
      __ss6HasherV8_combineyys6UInt32VF();
      __ss6HasherV9_finalizeSiyF();
      uVar12 = uVar12 & uVar9;
      if ((long)param_1 < (long)uVar10) {
        if (uVar12 < uVar10) {
joined_r0x00010006d478:
          if ((long)param_1 < (long)uVar12) goto LAB_10006d3b8;
        }
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar11 * 0x10);
        if ((param_1 != uVar11) || (puVar4 + 2 <= puVar3)) {
          uVar13 = *puVar4;
          puVar3[1] = puVar4[1];
          *puVar3 = uVar13;
        }
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
        puVar4 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar11 * 8);
        if ((param_1 != uVar11) || (puVar4 + 1 <= puVar3)) {
          *puVar3 = *puVar4;
          param_1 = uVar11;
        }
      }
      else if (uVar10 <= uVar12) goto joined_r0x00010006d478;
LAB_10006d3b8:
      uVar11 = uVar11 + 1 & uVar9;
    } while ((*(ulong *)(lVar1 + (uVar11 >> 3 & 0xffffffffffffff8)) >> (uVar11 & 0x3f) & 1) != 0);
  }
  uVar9 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar9) = *(ulong *)(lVar1 + uVar9) & (-1L << (param_1 & 0x3f)) - 1U;
  if (SBORROW8(*(long *)(param_2 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10006d534);
    (*pcVar8)();
  }
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
  *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
  return;
}

