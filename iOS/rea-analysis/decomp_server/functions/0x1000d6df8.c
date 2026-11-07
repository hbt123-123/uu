// rea decompile_all
// name: FUN_1000d6df8
// address: 0x1000d6df8
// body: available
// range: 0x1000d6df8-0x1000d7007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000d6df8(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  undefined8 *puStack_68;
  
  puVar5 = param_1;
  FUN_10009ff0c();
  _swift_bridgeObjectRetain_n(param_2,2);
  puVar3 = PTR___sSSN_1009957f8;
  puVar6 = PTR___sSSN_1009957f8;
  puVar9 = puVar5;
  local_70 = (undefined8 *)param_1;
  puStack_68 = (undefined8 *)param_2;
  __sSy10FoundationE23removingPercentEncodingSSSgvg();
  puVar4 = PTR___sSSN_1009957f8;
  do {
    puVar2 = puVar9;
    puVar1 = puVar6;
    if (puVar2 == (undefined *)0x0) {
      _swift_bridgeObjectRelease(param_2);
LAB_1000d6f00:
      local_80 = 0x2b5c5c;
      uStack_78 = 0xe300000000000000;
      local_90 = 0x2f;
      uStack_88 = 0xe100000000000000;
      puVar7 = &local_80;
      puVar10 = &local_90;
      local_70 = (undefined8 *)param_1;
      puStack_68 = (undefined8 *)param_2;
      __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                (puVar7,puVar10,0x400,0,0,1,puVar3,puVar3,puVar3,puVar5,puVar5,puVar5);
      _swift_bridgeObjectRelease(param_2);
      _swift_bridgeObjectRetain(puVar10);
      uVar8 = 0x2f;
      __sSS9hasPrefixySbSSF(0x2f,0xe100000000000000,puVar7,puVar10);
      _swift_bridgeObjectRelease(puVar10);
      if ((uVar8 & 1) == 0) {
        uVar8 = 0;
        __sSS9hasPrefixySbSSF(0x7e,0xe100000000000000,puVar7,puVar10);
        if ((uVar8 & 1) == 0) {
          uVar8 = (ulong)puVar7 & 0xffffffffffff;
          if (((ulong)puVar10 & 0x2000000000000000) != 0) {
            uVar8 = (ulong)puVar10 >> 0x38 & 0xf;
          }
          if (uVar8 != 0) {
            local_70 = (undefined8 *)0x2f;
            puStack_68 = (undefined8 *)0xe100000000000000;
            __sSS6appendyySSF(puVar7,puVar10);
            _swift_bridgeObjectRelease(puVar10);
            puVar10 = puStack_68;
            puVar7 = local_70;
          }
        }
      }
      auVar11._8_8_ = puVar10;
      auVar11._0_8_ = puVar7;
      return auVar11;
    }
    _swift_bridgeObjectRelease(param_2);
    if (((puVar1 == param_1) && (puVar2 == param_2)) ||
       (puVar6 = puVar1,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                 (puVar1,puVar2,param_1,param_2,0), ((ulong)puVar6 & 1) != 0)) {
      _swift_bridgeObjectRelease(puVar2);
      goto LAB_1000d6f00;
    }
    _swift_bridgeObjectRetain(puVar2);
    _swift_bridgeObjectRelease(param_2);
    puVar6 = puVar4;
    puVar9 = puVar5;
    local_70 = (undefined8 *)puVar1;
    puStack_68 = (undefined8 *)puVar2;
    __sSy10FoundationE23removingPercentEncodingSSSgvg();
    param_2 = puVar2;
    param_1 = puVar1;
  } while( true );
}

