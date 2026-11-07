// rea decompile_all
// name: FUN_100521964
// address: 0x100521964
// body: available
// range: 0x100521964-0x100521adb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100521964(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar1 = param_2 + 0x40;
  uVar4 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar8 = param_1 + 1 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar8 >> 3 & 0xffffffffffffff8)) >> (uVar8 & 0x3f) & 1) != 0) {
    uVar4 = ~uVar4;
    uVar9 = param_1;
    __ss10_HashTableV12previousHole6beforeAB6BucketVAF_tF(param_1,lVar1,uVar4);
    uVar9 = uVar9 + 1 & uVar4;
    do {
      uVar5 = *(ulong *)(param_2 + 0x28);
      lVar2 = *(long *)(param_2 + 0x30);
      puVar6 = (undefined8 *)(lVar2 + uVar8 * 8);
      __ss6HasherV5_hash4seed_S2i_s6UInt64VtFZ(uVar5,*puVar6);
      uVar5 = uVar5 & uVar4;
      if ((long)param_1 < (long)uVar9) {
        if (uVar9 <= uVar5 || (long)uVar5 <= (long)param_1) {
LAB_100521a40:
          puVar7 = (undefined8 *)(lVar2 + param_1 * 8);
          if ((param_1 != uVar8) || (puVar6 + 1 <= puVar7)) {
            *puVar7 = *puVar6;
          }
          puVar6 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 0x28);
          puVar7 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar8 * 0x28);
          if ((param_1 != uVar8) || (puVar7 + 5 <= puVar6)) {
            uVar11 = puVar7[1];
            uVar10 = *puVar7;
            uVar13 = puVar7[3];
            uVar12 = puVar7[2];
            puVar6[4] = puVar7[4];
            puVar6[1] = uVar11;
            *puVar6 = uVar10;
            puVar6[3] = uVar13;
            puVar6[2] = uVar12;
            param_1 = uVar8;
          }
        }
      }
      else if (uVar9 <= uVar5 && (long)uVar5 <= (long)param_1) goto LAB_100521a40;
      uVar8 = uVar8 + 1 & uVar4;
    } while ((*(ulong *)(lVar1 + (uVar8 >> 3 & 0xffffffffffffff8)) >> (uVar8 & 0x3f) & 1) != 0);
  }
  uVar4 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar4) = *(ulong *)(lVar1 + uVar4) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100521adc);
  (*pcVar3)();
}

