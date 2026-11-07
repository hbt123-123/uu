// rea decompile_all
// name: FUN_1000d5080
// address: 0x1000d5080
// body: available
// range: 0x1000d5080-0x1000d524f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000d5080(ulong param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x12;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  ulong local_60;
  long lStack_58;
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)&local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar5 = lVar6 - extraout_x12;
  if (((param_1 == 0x2f3a) && (param_2 == -0x1e00000000000000)) ||
     (uVar3 = param_1,
     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
               (param_1,param_2,0x2f3a,0xe200000000000000,0), (uVar3 & 1) != 0)) {
LAB_1000d5224:
    uVar5 = 0;
    lVar8 = 0;
  }
  else {
    FUN_1000d6df8(param_1,param_2);
    __s10Foundation3URLV15fileURLWithPath11isDirectoryACSSh_SbtcfC(uVar5);
    _swift_bridgeObjectRelease(param_2);
    __s10Foundation3URLV016standardizedFileB0ACvg(lVar6);
    pcVar9 = *(code **)(lVar8 + 8);
    lVar8 = lVar2;
    (*pcVar9)();
    __s10Foundation3URLV4pathSSvg();
    (*pcVar9)(lVar6,lVar2);
    plVar7 = (long *)(param_3 + 0x28);
    lVar2 = *(long *)(param_3 + 0x10) + 1;
    do {
      lVar2 = lVar2 + -1;
      if (lVar2 == 0) {
        _swift_bridgeObjectRelease(lVar8);
        goto LAB_1000d5224;
      }
      uVar3 = plVar7[-1];
      lVar6 = *plVar7;
      if ((uVar5 == uVar3 && lVar8 == lVar6) ||
         (uVar4 = uVar5,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (uVar5,lVar8,uVar3,lVar6,0), (uVar4 & 1) != 0)) break;
      plVar7 = plVar7 + 2;
      local_60 = uVar3;
      lStack_58 = lVar6;
      _swift_bridgeObjectRetain_n(lVar6,2);
      __sSS6appendyySSF(0x2f,0xe100000000000000);
      lVar1 = lStack_58;
      uVar3 = local_60;
      __sSS9hasPrefixySbSSF(local_60,lStack_58,uVar5,lVar8);
      _swift_bridgeObjectRelease(lVar1);
      _swift_bridgeObjectRelease(lVar6);
    } while ((uVar3 & 1) == 0);
  }
  auVar10._8_8_ = lVar8;
  auVar10._0_8_ = uVar5;
  return auVar10;
}

