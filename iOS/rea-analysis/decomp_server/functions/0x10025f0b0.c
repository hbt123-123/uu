// rea decompile_all
// name: FUN_10025f0b0
// address: 0x10025f0b0
// body: available
// range: 0x10025f0b0-0x10025f26f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10025f0b0(ulong param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 auStack_a8 [72];
  
  lVar10 = *unaff_x20;
  lVar1 = lVar10 + 0x38;
  uVar8 = -1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
  uVar11 = param_1 + 1 & (uVar8 ^ 0xffffffffffffffff);
  uVar9 = 1L << (uVar11 & 0x3f);
  if ((uVar9 & *(ulong *)(lVar1 + (uVar11 >> 6) * 8)) == 0) {
    uVar8 = param_1 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = *(ulong *)(lVar1 + uVar8) & (-1L << (param_1 & 0x3f)) - 1U;
  }
  else {
    uVar8 = ~uVar8;
    uVar7 = param_1;
    __ss10_HashTableV12previousHole6beforeAB6BucketVAF_tF(param_1,lVar1,uVar8);
    if ((*(ulong *)(lVar1 + (uVar11 >> 6) * 8) & uVar9) != 0) {
      uVar9 = uVar7 + 1 & uVar8;
      do {
        puVar2 = (undefined8 *)(*(long *)(lVar10 + 0x30) + uVar11 * 0x10);
        uVar12 = *puVar2;
        uVar4 = puVar2[1];
        __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar10 + 0x28));
        FUN_100008184(uVar12,uVar4);
        puVar6 = auStack_a8;
        __s10Foundation4DataV4hash4intoys6HasherVz_tF(puVar6,uVar12,uVar4);
        __ss6HasherV9_finalizeSiyF();
        FUN_100006cdc(uVar12,uVar4);
        uVar7 = (ulong)puVar6 & uVar8;
        if ((long)param_1 < (long)uVar9) {
          if (uVar7 < uVar9) {
LAB_10025f1c4:
            if ((long)param_1 < (long)uVar7) goto LAB_10025f140;
          }
          puVar2 = (undefined8 *)(*(long *)(lVar10 + 0x30) + param_1 * 0x10);
          puVar3 = (undefined8 *)(*(long *)(lVar10 + 0x30) + uVar11 * 0x10);
          if ((param_1 != uVar11) || (puVar3 + 2 <= puVar2)) {
            uVar12 = *puVar3;
            puVar2[1] = puVar3[1];
            *puVar2 = uVar12;
            param_1 = uVar11;
          }
        }
        else if (uVar9 <= uVar7) goto LAB_10025f1c4;
LAB_10025f140:
        uVar11 = uVar11 + 1 & uVar8;
      } while ((*(ulong *)(lVar1 + (uVar11 >> 3 & 0xffffffffffffff8)) >> (uVar11 & 0x3f) & 1) != 0);
    }
    uVar8 = param_1 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = (-1L << (param_1 & 0x3f)) - 1U & *(ulong *)(lVar1 + uVar8);
  }
  if (SBORROW8(*(long *)(lVar10 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10025f270);
    (*pcVar5)();
  }
  *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + -1;
  *(int *)(lVar10 + 0x24) = *(int *)(lVar10 + 0x24) + 1;
  return;
}

