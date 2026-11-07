// rea decompile_all
// name: FUN_10006c938
// address: 0x10006c938
// body: available
// range: 0x10006c938-0x10006cad7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006c938(ulong param_1,long param_2,code *param_3)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  lVar1 = param_2 + 0x40;
  uVar6 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar11 = param_1 + 1 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar11 >> 3 & 0xffffffffffffff8)) >> (uVar11 & 0x3f) & 1) != 0) {
    uVar6 = ~uVar6;
    uVar12 = param_1;
    __ss10_HashTableV12previousHole6beforeAB6BucketVAF_tF(param_1,lVar1,uVar6);
    uVar12 = uVar12 + 1 & uVar6;
    do {
      uVar7 = *(ulong *)(param_2 + 0x28);
      lVar13 = *(long *)(param_2 + 0x30);
      puVar2 = (undefined4 *)(lVar13 + uVar11 * 4);
      __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar7,*puVar2,4);
      uVar7 = uVar7 & uVar6;
      if ((long)param_1 < (long)uVar12) {
        if (uVar12 <= uVar7 || (long)uVar7 <= (long)param_1) {
LAB_10006ca10:
          puVar3 = (undefined4 *)(lVar13 + param_1 * 4);
          if ((param_1 != uVar11) || (puVar2 + 1 <= puVar3)) {
            *puVar3 = *puVar2;
          }
          lVar13 = *(long *)(param_2 + 0x38);
          lVar5 = 0;
          (*param_3)();
          lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
          lVar8 = lVar10 * param_1;
          uVar7 = lVar13 + lVar8;
          lVar9 = lVar10 * uVar11;
          lVar13 = lVar13 + lVar9;
          param_1 = uVar11;
          if (lVar8 < lVar9 || (ulong)(lVar13 + lVar10) <= uVar7) {
            _swift_arrayInitWithTakeFrontToBack(uVar7,lVar13,1,lVar5);
          }
          else if (lVar8 - lVar9 != 0) {
            _swift_arrayInitWithTakeBackToFront(uVar7,lVar13,1);
          }
        }
      }
      else if (uVar12 <= uVar7 && (long)uVar7 <= (long)param_1) goto LAB_10006ca10;
      uVar11 = uVar11 + 1 & uVar6;
    } while ((*(ulong *)(lVar1 + (uVar11 >> 3 & 0xffffffffffffff8)) >> (uVar11 & 0x3f) & 1) != 0);
  }
  uVar6 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar6) = *(ulong *)(lVar1 + uVar6) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10006cad8);
  (*pcVar4)();
}

