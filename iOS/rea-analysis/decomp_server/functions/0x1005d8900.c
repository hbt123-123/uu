// rea decompile_all
// name: FUN_1005d8900
// address: 0x1005d8900
// body: available
// range: 0x1005d8900-0x1005d8a4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1005d8900(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x20;
  ulong uVar6;
  long lVar7;
  long local_98 [9];
  
  lVar7 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(local_98,*(undefined8 *)(lVar7 + 0x28));
  plVar3 = local_98;
  __sSS4hash4intoys6HasherVz_tF(plVar3,param_2,param_3);
  __ss6HasherV9_finalizeSiyF();
  uVar5 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
  uVar6 = (ulong)plVar3 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar7 + 0x38 + (uVar6 >> 3 & 0xffffffffffffff8)) >> (uVar6 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar6 * 0x10);
      uVar4 = *puVar1;
      uVar2 = puVar1[1];
      if ((uVar4 == param_2 && uVar2 == param_3) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar4,uVar2,param_2,param_3,0), (uVar4 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_3);
        puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar6 * 0x10);
        uVar5 = puVar1[1];
        *param_1 = *puVar1;
        param_1[1] = uVar5;
        _swift_bridgeObjectRetain();
        return 0;
      }
      uVar6 = uVar6 + 1 & ~uVar5;
    } while ((*(ulong *)(lVar7 + 0x38 + (uVar6 >> 3 & 0xffffffffffffff8)) >> (uVar6 & 0x3f) & 1) !=
             0);
  }
  lVar7 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar7);
  local_98[0] = *unaff_x20;
  _swift_bridgeObjectRetain(param_3);
  FUN_1005d8a4c(param_2,param_3,uVar6,lVar7);
  *unaff_x20 = local_98[0];
  *param_1 = param_2;
  param_1[1] = param_3;
  return 1;
}

