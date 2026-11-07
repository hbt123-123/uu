// rea decompile_all
// name: FUN_1000d6cb0
// address: 0x1000d6cb0
// body: available
// range: 0x1000d6cb0-0x1000d6df7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1000d6cb0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar1 + -8);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar6 + 0x40));
  puVar4 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar5 = (long)puVar4 - extraout_x12;
  __s10Foundation3URLV016standardizedFileB0ACvg(lVar5);
  __s10Foundation3URLV4pathSSvg();
  pcVar7 = *(code **)(lVar6 + 8);
  lVar6 = lVar1;
  (*pcVar7)();
  __s10Foundation3URLV016standardizedFileB0ACvg(puVar4);
  __s10Foundation3URLV4pathSSvg();
  (*pcVar7)(puVar4,lVar1);
  if (lVar2 == lVar5 && param_2 == lVar6) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(lVar6);
    uVar3 = 0;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (lVar2,param_2,lVar5,lVar6,0);
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(lVar6);
    uVar3 = (uint)lVar2 ^ 1;
  }
  return uVar3 & 1;
}

