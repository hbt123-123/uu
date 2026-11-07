// rea decompile_all
// name: FUN_10006c448
// address: 0x10006c448
// body: available
// range: 0x10006c448-0x10006c5f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006c448(ulong param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  void *pvVar4;
  void *pvVar5;
  char cVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar9 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar10 = param_1 + 1 & (uVar9 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar10 >> 3 & 0xffffffffffffff8)) >> (uVar10 & 0x3f) & 1) != 0) {
    uVar9 = ~uVar9;
    uVar11 = param_1;
    __ss10_HashTableV12previousHole6beforeAB6BucketVAF_tF(param_1,lVar1,uVar9);
    uVar11 = uVar11 + 1 & uVar9;
    do {
      cVar6 = *(char *)(*(long *)(param_2 + 0x30) + uVar10);
      __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      uVar8 = *(ulong *)(&DAT_10080ae18 + (long)cVar6 * 8);
      __ss6HasherV8_combineyySuF();
      __ss6HasherV9_finalizeSiyF();
      uVar8 = uVar8 & uVar9;
      if ((long)param_1 < (long)uVar11) {
        if (uVar8 < uVar11) {
LAB_10006c534:
          if ((long)param_1 < (long)uVar8) goto LAB_10006c4d4;
        }
        puVar2 = (undefined1 *)(*(long *)(param_2 + 0x30) + param_1);
        puVar3 = (undefined1 *)(*(long *)(param_2 + 0x30) + uVar10);
        if ((param_1 != uVar10) || (puVar3 + 1 <= puVar2)) {
          *puVar2 = *puVar3;
        }
        pvVar4 = (void *)(*(long *)(param_2 + 0x38) + param_1 * 0x58);
        pvVar5 = (void *)(*(long *)(param_2 + 0x38) + uVar10 * 0x58);
        if ((((long)(param_1 * 0x58) < (long)(uVar10 * 0x58)) ||
            ((void *)((long)pvVar5 + 0x58U) <= pvVar4)) || (param_1 != uVar10)) {
          _memmove(pvVar4,pvVar5,0x58);
          param_1 = uVar10;
        }
      }
      else if (uVar11 <= uVar8) goto LAB_10006c534;
LAB_10006c4d4:
      uVar10 = uVar10 + 1 & uVar9;
    } while ((*(ulong *)(lVar1 + (uVar10 >> 3 & 0xffffffffffffff8)) >> (uVar10 & 0x3f) & 1) != 0);
  }
  uVar9 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar9) = *(ulong *)(lVar1 + uVar9) & (-1L << (param_1 & 0x3f)) - 1U;
  if (SBORROW8(*(long *)(param_2 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10006c5f4);
    (*pcVar7)();
  }
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
  *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
  return;
}

