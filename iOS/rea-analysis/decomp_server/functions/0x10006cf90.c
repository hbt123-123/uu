// rea decompile_all
// name: FUN_10006cf90
// address: 0x10006cf90
// body: available
// range: 0x10006cf90-0x10006d12f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006cf90(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar5 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar7 = param_1 + 1 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar7 >> 3 & 0xffffffffffffff8)) >> (uVar7 & 0x3f) & 1) != 0) {
    uVar5 = ~uVar5;
    uVar8 = param_1;
    __ss10_HashTableV12previousHole6beforeAB6BucketVAF_tF(param_1,lVar1,uVar5);
    uVar8 = uVar8 + 1 & uVar5;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar7 * 0x10);
      uVar9 = *puVar2;
      uVar6 = puVar2[1];
      __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      __ss6HasherV8_combineyys6UInt64VF(uVar9);
      __ss6HasherV8_combineyys6UInt64VF();
      __ss6HasherV9_finalizeSiyF();
      uVar6 = uVar6 & uVar5;
      if ((long)param_1 < (long)uVar8) {
        if (uVar6 < uVar8) {
LAB_10006d080:
          if ((long)param_1 < (long)uVar6) goto LAB_10006d010;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar7 * 0x10);
        if ((param_1 != uVar7) || (puVar3 + 2 <= puVar2)) {
          uVar9 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar9;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar7 * 8);
        if ((param_1 != uVar7) || (puVar3 + 1 <= puVar2)) {
          *puVar2 = *puVar3;
          param_1 = uVar7;
        }
      }
      else if (uVar8 <= uVar6) goto LAB_10006d080;
LAB_10006d010:
      uVar7 = uVar7 + 1 & uVar5;
    } while ((*(ulong *)(lVar1 + (uVar7 >> 3 & 0xffffffffffffff8)) >> (uVar7 & 0x3f) & 1) != 0);
  }
  uVar5 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar5) = *(ulong *)(lVar1 + uVar5) & (-1L << (param_1 & 0x3f)) - 1U;
  if (SBORROW8(*(long *)(param_2 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10006d130);
    (*pcVar4)();
  }
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
  *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
  return;
}

