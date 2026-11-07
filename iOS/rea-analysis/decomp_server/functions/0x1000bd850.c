// rea decompile_all
// name: FUN_1000bd850
// address: 0x1000bd850
// body: available
// range: 0x1000bd850-0x1000bdb0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000bd944) */

undefined8 FUN_1000bd850(undefined1 *param_1,undefined *param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [4];
  undefined4 local_8c;
  undefined1 *local_88;
  undefined *puStack_80;
  long local_78;
  long lStack_70;
  
  lVar2 = 0;
  local_88 = param_1;
  puStack_80 = param_2;
  __s10Foundation12CharacterSetVMa();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  puVar14 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar11 = (long)puVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  lVar15 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_1000baaa8(lVar15,param_3);
  __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar11);
  lVar3 = lVar15;
  __sSS10FoundationE10contentsOf8encodingSSAA3URLVh_SSAAE8EncodingVtKcfC();
  puVar9 = puStack_80;
  puVar7 = local_88;
  local_8c = (undefined4)param_3;
  lVar5 = lVar15;
  (**(code **)(lVar13 + 8))(lVar15,lVar4);
  local_78 = lVar3;
  lStack_70 = lVar11;
  __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(puVar14);
  FUN_10009ff0c();
  puVar6 = puVar14;
  puVar8 = PTR___sSSN_1009957f8;
  __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
            (puVar14,PTR___sSSN_1009957f8,lVar5);
  (**(code **)(lVar12 + 8))(puVar14,lVar2);
  _swift_bridgeObjectRelease(lVar11);
  uVar1 = (ulong)puVar6 & 0xffffffffffff;
  if (((ulong)puVar8 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)puVar8 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    FUN_1000be0a8();
    puVar10 = puVar8;
    __sSS10lowercasedSSyF();
    _swift_bridgeObjectRelease(puVar8);
    if (puVar7 != puVar6 || puVar9 != puVar10) {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (puVar7,puVar9,puVar6,puVar10,0);
      _swift_bridgeObjectRelease(puVar9);
      _swift_bridgeObjectRelease(puVar10);
      if (((ulong)puVar7 & 1) != 0) {
        return 1;
      }
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(char *)(lVar15 + -0x10) = (char)local_8c;
      FUN_1003fb4bc(FUN_1000c1144,lVar15 + -0x20,0xd00000000000009f,0x8000000100882d60,
                    0xd00000000000001e,0x8000000100883170,0x2d4,0);
      return 0;
    }
    _swift_bridgeObjectRelease(puVar9);
    puVar8 = puVar10;
  }
  _swift_bridgeObjectRelease(puVar8);
  return 1;
}

