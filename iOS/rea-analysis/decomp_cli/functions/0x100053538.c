// rea decompile_all
// name: FUN_100053538
// address: 0x100053538
// body: available
// range: 0x100053538-0x10005368b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100053538(ulong param_1,ulong param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  if ((param_2 == 0x68737a && param_3 == -0x1d00000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (param_2,param_3,0x68737a,0xe300000000000000,0), (param_2 & 1) != 0)) {
    uVar2 = param_1;
    _swift_bridgeObjectRetain();
    _swift_isUniquelyReferenced_nonNull_native();
    uVar6 = param_1;
    if ((uVar2 & 1) == 0) {
      uVar6 = 0;
      FUN_10006e610(0,*(long *)(param_1 + 0x10) + 1,1,param_1);
    }
    uVar2 = *(ulong *)(uVar6 + 0x10);
    param_1 = uVar6;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar2) {
      param_1 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      FUN_10006e610(param_1,uVar2 + 1,1,uVar6);
    }
    *(ulong *)(param_1 + 0x10) = uVar2 + 1;
    lVar1 = param_1 + uVar2 * 0x10;
    *(undefined8 *)(lVar1 + 0x20) = 0x20;
    *(undefined8 *)(lVar1 + 0x28) = 0xe100000000000000;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
  }
  puVar3 = &DAT_100103ed8;
  FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
  puVar4 = &DAT_100103ee0;
  FUN_10002cf3c(&DAT_100103ee0,&DAT_100103ed8,&DAT_1000d5be0,PTR___sSayxGSKsMc_1000f0378);
  uVar5 = 10;
  uVar7 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(10,0xe100000000000000,puVar3,puVar4);
  _swift_bridgeObjectRelease(param_1);
  auVar8._8_8_ = uVar7;
  auVar8._0_8_ = uVar5;
  return auVar8;
}

