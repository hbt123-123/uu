// rea decompile_all
// name: FUN_1002d972c
// address: 0x1002d972c
// body: available
// range: 0x1002d972c-0x1002d98fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d972c(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar8 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar12 = param_1 + 1 & (uVar8 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar12 >> 3 & 0xffffffffffffff8)) >> (uVar12 & 0x3f) & 1) != 0) {
    uVar8 = ~uVar8;
    uVar11 = param_1;
    __ss10_HashTableV12previousHole6beforeAB6BucketVAF_tF(param_1,lVar1,uVar8);
    uVar11 = uVar11 + 1 & uVar8;
    do {
      uVar10 = *(undefined8 *)(*(long *)(param_2 + 0x30) + uVar12 * 8);
      __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      uVar5 = 0;
      __s10Foundation4UUIDVMa(0);
      uVar6 = uVar5;
      FUN_1002d9a88();
      _swift_retain(uVar10);
      puVar7 = auStack_a8;
      __sSH4hash4intoys6HasherVz_tFTj(puVar7,uVar5,uVar6);
      __ss6HasherV9_finalizeSiyF();
      _swift_release(uVar10);
      uVar9 = (ulong)puVar7 & uVar8;
      if ((long)param_1 < (long)uVar11) {
        if (uVar9 < uVar11) {
LAB_1002d9848:
          if ((long)param_1 < (long)uVar9) goto LAB_1002d97ac;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 8);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar12 * 8);
        if ((param_1 != uVar12) || (puVar3 + 1 <= puVar2)) {
          *puVar2 = *puVar3;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar12 * 8);
        if ((param_1 != uVar12) || (puVar3 + 1 <= puVar2)) {
          *puVar2 = *puVar3;
          param_1 = uVar12;
        }
      }
      else if (uVar11 <= uVar9) goto LAB_1002d9848;
LAB_1002d97ac:
      uVar12 = uVar12 + 1 & uVar8;
    } while ((*(ulong *)(lVar1 + (uVar12 >> 3 & 0xffffffffffffff8)) >> (uVar12 & 0x3f) & 1) != 0);
  }
  uVar8 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar8) = *(ulong *)(lVar1 + uVar8) & (-1L << (param_1 & 0x3f)) - 1U;
  if (SBORROW8(*(long *)(param_2 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1002d98fc);
    (*pcVar4)();
  }
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
  *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
  return;
}

