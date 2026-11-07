// rea decompile_all
// name: FUN_1001df764
// address: 0x1001df764
// body: available
// range: 0x1001df764-0x1001df8d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001df764(ulong param_1)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar8 = *unaff_x20;
  lVar1 = lVar8 + 0x38;
  uVar7 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar9 = param_1 + 1 & (uVar7 ^ 0xffffffffffffffff);
  uVar10 = 1L << (uVar9 & 0x3f);
  if ((uVar10 & *(ulong *)(lVar1 + (uVar9 >> 6) * 8)) == 0) {
    uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) & (-1L << (param_1 & 0x3f)) - 1U;
  }
  else {
    uVar7 = ~uVar7;
    uVar6 = param_1;
    __ss10_HashTableV12previousHole6beforeAB6BucketVAF_tF(param_1,lVar1,uVar7);
    if ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) & uVar10) != 0) {
      uVar10 = uVar6 + 1 & uVar7;
      do {
        uVar6 = *(ulong *)(lVar8 + 0x28);
        lVar4 = *(long *)(lVar8 + 0x30);
        puVar2 = (undefined4 *)(lVar4 + uVar9 * 4);
        __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar6,*puVar2,4);
        uVar6 = uVar6 & uVar7;
        if ((long)param_1 < (long)uVar10) {
          if (uVar10 <= uVar6 || (long)uVar6 <= (long)param_1) {
LAB_1001df844:
            puVar3 = (undefined4 *)(lVar4 + param_1 * 4);
            if ((param_1 != uVar9) || (puVar2 + 1 <= puVar3)) {
              *puVar3 = *puVar2;
              param_1 = uVar9;
            }
          }
        }
        else if (uVar10 <= uVar6 && (long)uVar6 <= (long)param_1) goto LAB_1001df844;
        uVar9 = uVar9 + 1 & uVar7;
      } while ((*(ulong *)(lVar1 + (uVar9 >> 3 & 0xffffffffffffff8)) >> (uVar9 & 0x3f) & 1) != 0);
    }
    uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar7) = (-1L << (param_1 & 0x3f)) - 1U & *(ulong *)(lVar1 + uVar7);
  }
  if (!SBORROW8(*(long *)(lVar8 + 0x10),1)) {
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + -1;
    *(int *)(lVar8 + 0x24) = *(int *)(lVar8 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1001df8d8);
  (*pcVar5)();
}

