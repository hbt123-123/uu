// rea decompile_all
// name: FUN_1003e8550
// address: 0x1003e8550
// body: available
// range: 0x1003e8550-0x1003e872b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e8550(ulong param_1,long param_2,code *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar8 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar14 = param_1 + 1 & (uVar8 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar14 >> 3 & 0xffffffffffffff8)) >> (uVar14 & 0x3f) & 1) != 0) {
    uVar8 = ~uVar8;
    uVar15 = param_1;
    __ss10_HashTableV12previousHole6beforeAB6BucketVAF_tF(param_1,lVar1,uVar8);
    uVar15 = uVar15 + 1 & uVar8;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar14 * 0x10);
      uVar16 = *puVar2;
      uVar4 = puVar2[1];
      __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      _swift_bridgeObjectRetain(uVar4);
      puVar6 = auStack_a8;
      __sSS4hash4intoys6HasherVz_tF(puVar6,uVar16,uVar4);
      __ss6HasherV9_finalizeSiyF();
      _swift_bridgeObjectRelease(uVar4);
      uVar9 = (ulong)puVar6 & uVar8;
      if ((long)param_1 < (long)uVar15) {
        if (uVar9 < uVar15) {
LAB_1003e8650:
          if ((long)param_1 < (long)uVar9) goto LAB_1003e85d4;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar14 * 0x10);
        if ((param_1 != uVar14) || (puVar3 + 2 <= puVar2)) {
          uVar16 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar16;
        }
        lVar13 = *(long *)(param_2 + 0x38);
        lVar7 = 0;
        (*param_3)();
        lVar12 = *(long *)(*(long *)(lVar7 + -8) + 0x48);
        lVar10 = lVar12 * param_1;
        uVar9 = lVar13 + lVar10;
        lVar11 = lVar12 * uVar14;
        lVar13 = lVar13 + lVar11;
        param_1 = uVar14;
        if (lVar10 < lVar11 || (ulong)(lVar13 + lVar12) <= uVar9) {
          _swift_arrayInitWithTakeFrontToBack(uVar9,lVar13,1,lVar7);
        }
        else if (lVar10 - lVar11 != 0) {
          _swift_arrayInitWithTakeBackToFront(uVar9,lVar13,1);
        }
      }
      else if (uVar15 <= uVar9) goto LAB_1003e8650;
LAB_1003e85d4:
      uVar14 = uVar14 + 1 & uVar8;
    } while ((*(ulong *)(lVar1 + (uVar14 >> 3 & 0xffffffffffffff8)) >> (uVar14 & 0x3f) & 1) != 0);
  }
  uVar8 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar8) = *(ulong *)(lVar1 + uVar8) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1003e872c);
  (*pcVar5)();
}

