// rea decompile_all
// name: FUN_1002ed9dc
// address: 0x1002ed9dc
// body: available
// range: 0x1002ed9dc-0x1002edbcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002ed9dc(ulong param_1)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
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
  uVar9 = param_1 + 1 & (uVar8 ^ 0xffffffffffffffff);
  uVar11 = 1L << (uVar9 & 0x3f);
  if ((uVar11 & *(ulong *)(lVar1 + (uVar9 >> 6) * 8)) == 0) {
    uVar8 = param_1 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = *(ulong *)(lVar1 + uVar8) & (-1L << (param_1 & 0x3f)) - 1U;
  }
  else {
    uVar8 = ~uVar8;
    uVar7 = param_1;
    __ss10_HashTableV12previousHole6beforeAB6BucketVAF_tF(param_1,lVar1,uVar8);
    if ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) & uVar11) != 0) {
      uVar11 = uVar7 + 1 & uVar8;
      do {
        uVar12 = *(undefined8 *)(*(long *)(lVar10 + 0x30) + uVar9 * 8);
        __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar10 + 0x28));
        uVar4 = 0;
        __s10Foundation4UUIDVMa(0);
        puVar5 = &DAT_100a82768;
        FUN_100005c90(&DAT_100a82768,PTR___s10Foundation4UUIDVMa_100996230,
                      PTR___s10Foundation4UUIDVSHAAMc_100996248);
        _swift_retain(uVar12);
        puVar6 = auStack_a8;
        __sSH4hash4intoys6HasherVz_tFTj(puVar6,uVar4,puVar5);
        __ss6HasherV9_finalizeSiyF();
        _swift_release(uVar12);
        uVar7 = (ulong)puVar6 & uVar8;
        if ((long)param_1 < (long)uVar11) {
          if (uVar7 < uVar11) {
LAB_1002edb20:
            if ((long)param_1 < (long)uVar7) goto LAB_1002eda6c;
          }
          puVar5 = (undefined8 *)(*(long *)(lVar10 + 0x30) + param_1 * 8);
          puVar2 = (undefined8 *)(*(long *)(lVar10 + 0x30) + uVar9 * 8);
          if ((param_1 != uVar9) || (puVar2 + 1 <= puVar5)) {
            *puVar5 = *puVar2;
            param_1 = uVar9;
          }
        }
        else if (uVar11 <= uVar7) goto LAB_1002edb20;
LAB_1002eda6c:
        uVar9 = uVar9 + 1 & uVar8;
      } while ((*(ulong *)(lVar1 + (uVar9 >> 3 & 0xffffffffffffff8)) >> (uVar9 & 0x3f) & 1) != 0);
    }
    uVar8 = param_1 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = (-1L << (param_1 & 0x3f)) - 1U & *(ulong *)(lVar1 + uVar8);
  }
  if (SBORROW8(*(long *)(lVar10 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1002edbcc);
    (*pcVar3)();
  }
  *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + -1;
  *(int *)(lVar10 + 0x24) = *(int *)(lVar10 + 0x24) + 1;
  return;
}

