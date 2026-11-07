// rea decompile_all
// name: FUN_1002d98fc
// address: 0x1002d98fc
// body: available
// range: 0x1002d98fc-0x1002d9a87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ulong FUN_1002d98fc(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  lVar1 = param_2 + 0x40;
  uVar5 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar8 = param_1 + 1 & (uVar5 ^ 0xffffffffffffffff);
  uVar7 = param_1;
  if ((*(ulong *)(lVar1 + (uVar8 >> 3 & 0xffffffffffffff8)) >> (uVar8 & 0x3f) & 1) != 0) {
    uVar5 = ~uVar5;
    __ss10_HashTableV12previousHole6beforeAB6BucketVAF_tF(param_1,lVar1,uVar5);
    uVar9 = param_1 + 1 & uVar5;
    do {
      uVar6 = *(ulong *)(param_2 + 0x28);
      __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
      param_1 = 0;
      uVar6 = uVar6 & uVar5;
      if ((long)uVar7 < (long)uVar9) {
        if (uVar9 <= uVar6 || (long)uVar6 <= (long)uVar7) {
LAB_1002d99e4:
          puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar7 * 8);
          puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar8 * 8);
          if ((uVar7 != uVar8) || (puVar3 + 1 <= puVar2)) {
            *puVar2 = *puVar3;
          }
          puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar7 * 0x10);
          puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar8 * 0x10);
          if ((uVar7 != uVar8) || (puVar3 + 2 <= puVar2)) {
            uVar10 = *puVar3;
            puVar2[1] = puVar3[1];
            *puVar2 = uVar10;
            uVar7 = uVar8;
          }
        }
      }
      else if (uVar9 <= uVar6 && (long)uVar6 <= (long)uVar7) goto LAB_1002d99e4;
      uVar8 = uVar8 + 1 & uVar5;
    } while ((*(ulong *)(lVar1 + (uVar8 >> 3 & 0xffffffffffffff8)) >> (uVar8 & 0x3f) & 1) != 0);
  }
  uVar5 = uVar7 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar5) = *(ulong *)(lVar1 + uVar5) & (-1L << (uVar7 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1002d9a88);
  (*pcVar4)();
}

