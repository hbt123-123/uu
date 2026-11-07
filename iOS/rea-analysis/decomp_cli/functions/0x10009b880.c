// rea decompile_all
// name: FUN_10009b880
// address: 0x10009b880
// body: available
// range: 0x10009b880-0x10009bad7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009b880(ulong param_1,long param_2)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar14 = param_1 + 1 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar14 >> 3 & 0xffffffffffffff8)) >> (uVar14 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    uVar13 = param_1;
    __ss10_HashTableV12previousHole6beforeAB6BucketVAF_tF(param_1,lVar1,uVar7);
    uVar13 = uVar13 + 1 & uVar7;
    do {
      puVar8 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar14 * 0x18);
      uVar15 = *puVar8;
      uVar16 = puVar8[1];
      lVar12 = puVar8[2];
      __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      _swift_bridgeObjectRetain(uVar16);
      _swift_bridgeObjectRetain(lVar12);
      __sSS4hash4intoys6HasherVz_tF(auStack_a8,uVar15,uVar16);
      uVar6 = *(ulong *)(lVar12 + 0x10);
      __ss6HasherV8_combineyySuF();
      lVar10 = *(long *)(lVar12 + 0x10);
      if (lVar10 != 0) {
        puVar11 = (ulong *)(lVar12 + 0x28);
        do {
          uVar4 = puVar11[-1];
          uVar6 = *puVar11;
          _swift_bridgeObjectRetain(uVar6);
          __sSS4hash4intoys6HasherVz_tF(auStack_a8,uVar4,uVar6);
          _swift_bridgeObjectRelease();
          puVar11 = puVar11 + 2;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      __ss6HasherV9_finalizeSiyF();
      _swift_bridgeObjectRelease(lVar12);
      _swift_bridgeObjectRelease(uVar16);
      uVar6 = uVar6 & uVar7;
      if ((long)param_1 < (long)uVar13) {
        if (uVar6 < uVar13) {
joined_r0x00010009b9f8:
          if ((long)param_1 < (long)uVar6) goto LAB_10009b8fc;
        }
        puVar8 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x18);
        puVar9 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar14 * 0x18);
        if ((param_1 != uVar14) || (puVar9 + 3 <= puVar8)) {
          uVar16 = puVar9[1];
          uVar15 = *puVar9;
          puVar8[2] = puVar9[2];
          puVar8[1] = uVar16;
          *puVar8 = uVar15;
        }
        pvVar2 = (void *)(*(long *)(param_2 + 0x38) + param_1 * 0x48);
        pvVar3 = (void *)(*(long *)(param_2 + 0x38) + uVar14 * 0x48);
        if ((((long)(param_1 * 0x48) < (long)(uVar14 * 0x48)) ||
            ((void *)((long)pvVar3 + 0x48U) <= pvVar2)) || (param_1 != uVar14)) {
          _memmove(pvVar2,pvVar3,0x48);
          param_1 = uVar14;
        }
      }
      else if (uVar13 <= uVar6) goto joined_r0x00010009b9f8;
LAB_10009b8fc:
      uVar14 = uVar14 + 1 & uVar7;
    } while ((*(ulong *)(lVar1 + (uVar14 >> 3 & 0xffffffffffffff8)) >> (uVar14 & 0x3f) & 1) != 0);
  }
  uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) & (-1L << (param_1 & 0x3f)) - 1U;
  if (SBORROW8(*(long *)(param_2 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10009bad8);
    (*pcVar5)();
  }
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
  *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
  return;
}

