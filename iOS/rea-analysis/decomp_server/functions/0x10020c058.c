// rea decompile_all
// name: FUN_10020c058
// address: 0x10020c058
// body: available
// range: 0x10020c058-0x10020c1a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10020c058(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long extraout_x8;
  uint uVar6;
  long lVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar1 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar7 = *(long *)(lVar1 + -8);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar7 + 0x40));
  uVar4 = (long)&local_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_50 = param_1;
  uStack_48 = param_2;
  __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(uVar4);
  FUN_10009ff0c();
  uVar3 = uVar4;
  puVar5 = PTR___sSSN_1009957f8;
  __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF(uVar4,PTR___sSSN_1009957f8,lVar2);
  (**(code **)(lVar7 + 8))(uVar4,lVar1);
  uVar4 = uVar3 & 0xffffffffffff;
  if (((ulong)puVar5 & 0x2000000000000000) != 0) {
    uVar4 = (ulong)puVar5 >> 0x38 & 0xf;
  }
  if ((((uVar4 == 0) || (uVar3 == 0x2f3a && puVar5 == (undefined *)0xe200000000000000)) ||
      (uVar4 = uVar3,
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar3,puVar5,0x2f3a,0xe200000000000000,0), (uVar4 & 1) != 0)) ||
     (uVar3 == 0x6c75616665442f3a && puVar5 == (undefined *)0xe900000000000074)) {
    _swift_bridgeObjectRelease(puVar5);
    uVar6 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar3,puVar5,0x6c75616665442f3a,0xe900000000000074,0);
    uVar6 = (uint)uVar3;
    _swift_bridgeObjectRelease(puVar5);
  }
  return uVar6 & 1;
}

