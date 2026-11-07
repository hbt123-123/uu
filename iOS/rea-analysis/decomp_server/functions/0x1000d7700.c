// rea decompile_all
// name: FUN_1000d7700
// address: 0x1000d7700
// body: available
// range: 0x1000d7700-0x1000d7847 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1000d7700(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_x8;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  ulong local_60;
  ulong uStack_58;
  
  uVar1 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(uVar1 - 8);
  uVar2 = uVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar7 + 0x40));
  uVar6 = (long)&local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV016standardizedFileB0ACvg(uVar6);
  __s10Foundation3URLV4pathSSvg();
  pcVar8 = *(code **)(lVar7 + 8);
  uVar3 = uVar6;
  uVar4 = uVar1;
  (*pcVar8)();
  __s10Foundation3URLV016standardizedFileB0ACvg(uVar6);
  __s10Foundation3URLV4pathSSvg();
  (*pcVar8)(uVar6,uVar1);
  if ((uVar2 == uVar3 && param_2 == uVar4) ||
     (uVar1 = uVar2,
     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
               (uVar2,param_2,uVar3,uVar4,0), (uVar1 & 1) != 0)) {
    uVar5 = 1;
  }
  else {
    local_60 = uVar3;
    uStack_58 = uVar4;
    _swift_bridgeObjectRetain(uVar4);
    __sSS6appendyySSF(0x2f,0xe100000000000000);
    _swift_bridgeObjectRelease(uVar4);
    uVar4 = uStack_58;
    uVar3 = local_60;
    __sSS9hasPrefixySbSSF(local_60,uStack_58,uVar2,param_2);
    uVar5 = (uint)uVar3;
  }
  _swift_bridgeObjectRelease(uVar4);
  _swift_bridgeObjectRelease(param_2);
  return uVar5 & 1;
}

