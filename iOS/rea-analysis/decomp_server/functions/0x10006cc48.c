// rea decompile_all
// name: FUN_10006cc48
// address: 0x10006cc48
// body: available
// range: 0x10006cc48-0x10006cdb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006cc48(ulong param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  lVar1 = param_2 + 0x40;
  uVar8 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar10 = param_1 + 1 & (uVar8 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar10 >> 3 & 0xffffffffffffff8)) >> (uVar10 & 0x3f) & 1) != 0) {
    uVar8 = ~uVar8;
    uVar11 = param_1;
    __ss10_HashTableV12previousHole6beforeAB6BucketVAF_tF(param_1,lVar1,uVar8);
    uVar11 = uVar11 + 1 & uVar8;
    do {
      uVar9 = *(ulong *)(param_2 + 0x28);
      lVar6 = *(long *)(param_2 + 0x30);
      puVar2 = (undefined4 *)(lVar6 + uVar10 * 4);
      __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar9,*puVar2,4);
      uVar9 = uVar9 & uVar8;
      if ((long)param_1 < (long)uVar11) {
        if (uVar11 <= uVar9 || (long)uVar9 <= (long)param_1) {
LAB_10006cd1c:
          puVar3 = (undefined4 *)(lVar6 + param_1 * 4);
          if ((param_1 != uVar10) || (puVar2 + 1 <= puVar3)) {
            *puVar3 = *puVar2;
          }
          puVar4 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
          puVar5 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar10 * 8);
          if ((param_1 != uVar10) || (puVar5 + 1 <= puVar4)) {
            *puVar4 = *puVar5;
            param_1 = uVar10;
          }
        }
      }
      else if (uVar11 <= uVar9 && (long)uVar9 <= (long)param_1) goto LAB_10006cd1c;
      uVar10 = uVar10 + 1 & uVar8;
    } while ((*(ulong *)(lVar1 + (uVar10 >> 3 & 0xffffffffffffff8)) >> (uVar10 & 0x3f) & 1) != 0);
  }
  uVar8 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar8) = *(ulong *)(lVar1 + uVar8) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10006cdb8);
  (*pcVar7)();
}

