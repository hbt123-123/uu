// rea decompile_all
// name: FUN_1002d9414
// address: 0x1002d9414
// body: available
// range: 0x1002d9414-0x1002d959f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ulong FUN_1002d9414(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  lVar1 = param_2 + 0x40;
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar10 = param_1 + 1 & (uVar7 ^ 0xffffffffffffffff);
  uVar9 = param_1;
  if ((*(ulong *)(lVar1 + (uVar10 >> 3 & 0xffffffffffffff8)) >> (uVar10 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    __ss10_HashTableV12previousHole6beforeAB6BucketVAF_tF(param_1,lVar1,uVar7);
    uVar11 = param_1 + 1 & uVar7;
    do {
      uVar8 = *(ulong *)(param_2 + 0x28);
      __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
      param_1 = 0;
      uVar8 = uVar8 & uVar7;
      if ((long)uVar9 < (long)uVar11) {
        if (uVar11 <= uVar8 || (long)uVar8 <= (long)uVar9) {
LAB_1002d94fc:
          puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 8);
          puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar10 * 8);
          if ((uVar9 != uVar10) || (puVar3 + 1 <= puVar2)) {
            *puVar2 = *puVar3;
          }
          puVar4 = (undefined2 *)(*(long *)(param_2 + 0x38) + uVar9 * 2);
          puVar5 = (undefined2 *)(*(long *)(param_2 + 0x38) + uVar10 * 2);
          if ((uVar9 != uVar10) || (puVar5 + 1 <= puVar4)) {
            *puVar4 = *puVar5;
            uVar9 = uVar10;
          }
        }
      }
      else if (uVar11 <= uVar8 && (long)uVar8 <= (long)uVar9) goto LAB_1002d94fc;
      uVar10 = uVar10 + 1 & uVar7;
    } while ((*(ulong *)(lVar1 + (uVar10 >> 3 & 0xffffffffffffff8)) >> (uVar10 & 0x3f) & 1) != 0);
  }
  uVar7 = uVar9 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) & (-1L << (uVar9 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1002d95a0);
  (*pcVar6)();
}

