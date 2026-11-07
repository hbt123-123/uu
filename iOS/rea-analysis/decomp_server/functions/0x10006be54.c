// rea decompile_all
// name: FUN_10006be54
// address: 0x10006be54
// body: available
// range: 0x10006be54-0x10006bfcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006be54(ulong param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar1 = param_2 + 0x40;
  uVar6 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar10 = param_1 + 1 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar10 >> 3 & 0xffffffffffffff8)) >> (uVar10 & 0x3f) & 1) != 0) {
    uVar6 = ~uVar6;
    uVar11 = param_1;
    __ss10_HashTableV12previousHole6beforeAB6BucketVAF_tF(param_1,lVar1,uVar6);
    uVar11 = uVar11 + 1 & uVar6;
    do {
      uVar7 = *(ulong *)(param_2 + 0x28);
      lVar4 = *(long *)(param_2 + 0x30);
      puVar2 = (undefined4 *)(lVar4 + uVar10 * 4);
      __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar7,*puVar2,4);
      uVar7 = uVar7 & uVar6;
      if ((long)param_1 < (long)uVar11) {
        if (uVar11 <= uVar7 || (long)uVar7 <= (long)param_1) {
LAB_10006bf34:
          puVar3 = (undefined4 *)(lVar4 + param_1 * 4);
          if ((param_1 != uVar10) || (puVar2 + 1 <= puVar3)) {
            *puVar3 = *puVar2;
          }
          puVar8 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 0x18);
          puVar9 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar10 * 0x18);
          if ((param_1 != uVar10) || (puVar9 + 3 <= puVar8)) {
            uVar13 = puVar9[1];
            uVar12 = *puVar9;
            puVar8[2] = puVar9[2];
            puVar8[1] = uVar13;
            *puVar8 = uVar12;
            param_1 = uVar10;
          }
        }
      }
      else if (uVar11 <= uVar7 && (long)uVar7 <= (long)param_1) goto LAB_10006bf34;
      uVar10 = uVar10 + 1 & uVar6;
    } while ((*(ulong *)(lVar1 + (uVar10 >> 3 & 0xffffffffffffff8)) >> (uVar10 & 0x3f) & 1) != 0);
  }
  uVar6 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar6) = *(ulong *)(lVar1 + uVar6) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10006bfd0);
  (*pcVar5)();
}

