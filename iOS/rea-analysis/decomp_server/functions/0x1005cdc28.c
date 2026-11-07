// rea decompile_all
// name: FUN_1005cdc28
// address: 0x1005cdc28
// body: available
// range: 0x1005cdc28-0x1005cdd5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1005cdc28(ulong param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  ulong local_98 [9];
  
  uVar9 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(local_98,*(undefined8 *)(uVar9 + 0x28));
  puVar3 = local_98;
  __sSS4hash4intoys6HasherVz_tF(puVar3,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  uVar5 = -1L << ((ulong)*(byte *)(uVar9 + 0x20) & 0x3f);
  uVar6 = (ulong)puVar3 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(uVar9 + 0x38 + (uVar6 >> 3 & 0xffffffffffffff8)) >> (uVar6 & 0x3f) & 1) != 0) {
    do {
      puVar3 = (ulong *)(*(long *)(uVar9 + 0x30) + uVar6 * 0x10);
      uVar4 = *puVar3;
      uVar2 = puVar3[1];
      if ((uVar4 == param_1 && uVar2 == param_2) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar4,uVar2,param_1,param_2,0), (uVar4 & 1) != 0)) {
        uVar5 = *unaff_x20;
        _swift_isUniquelyReferenced_nonNull_native();
        local_98[0] = *unaff_x20;
        if ((uVar5 & 1) == 0) {
          FUN_1005cd640();
        }
        puVar1 = (undefined8 *)(*(long *)(local_98[0] + 0x30) + uVar6 * 0x10);
        uVar7 = *puVar1;
        uVar8 = puVar1[1];
        FUN_10024a5f8(uVar6);
        *unaff_x20 = local_98[0];
        goto LAB_1005cdd2c;
      }
      uVar6 = uVar6 + 1 & ~uVar5;
    } while ((*(ulong *)(uVar9 + 0x38 + (uVar6 >> 3 & 0xffffffffffffff8)) >> (uVar6 & 0x3f) & 1) !=
             0);
  }
  uVar7 = 0;
  uVar8 = 0;
LAB_1005cdd2c:
  auVar10._8_8_ = uVar8;
  auVar10._0_8_ = uVar7;
  return auVar10;
}

