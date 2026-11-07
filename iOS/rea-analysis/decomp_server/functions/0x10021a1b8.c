// rea decompile_all
// name: FUN_10021a1b8
// address: 0x10021a1b8
// body: available
// range: 0x10021a1b8-0x10021a46f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10021a1b8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long lVar14;
  long lVar15;
  long alStack_90 [2];
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar15 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  lVar13 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100a7c220;
  puVar9 = &DAT_100810220;
  FUN_100004bb4();
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar13 - extraout_x8_00;
  __s10Foundation3URLV4pathSSvg();
  puVar3 = puVar2;
  puVar6 = puVar9;
  __s10Foundation3URLV4pathSSvg();
  uVar11 = (ulong)puVar3 & 0xffffffffffff;
  if (((ulong)puVar6 & 0x2000000000000000) != 0) {
    uVar11 = (ulong)puVar6 >> 0x38 & 0xf;
  }
  if (uVar11 != 0) {
    uVar11 = (ulong)puVar2 & 0xffffffffffff;
    if (((ulong)puVar9 & 0x2000000000000000) != 0) {
      uVar11 = (ulong)puVar9 >> 0x38 & 0xf;
    }
    if (uVar11 != 0) {
      puVar4 = puVar3;
      __sSS5countSivg();
      puVar5 = puVar2;
      __sSS5countSivg(puVar2,puVar9);
      if ((long)puVar5 < (long)puVar4) {
        puVar4 = puVar3;
        __sSS5countSivg(puVar3,puVar6);
        puVar5 = puVar2;
        __sSS5countSivg(puVar2,puVar9);
        if (puVar4 == puVar5) {
          _swift_bridgeObjectRelease(puVar6);
          _swift_bridgeObjectRelease(puVar9);
          __s10Foundation3URLV17lastPathComponentSSvg();
          return;
        }
        lVar7 = 0;
        local_80 = puVar2;
        puStack_78 = puVar9;
        local_70 = puVar3;
        puStack_68 = puVar6;
        __s10Foundation6LocaleVMa();
        lVar8 = lVar14;
        (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar14,1,1,lVar7);
        FUN_10009ff0c();
        *(long *)(lVar14 + -0x10) = lVar8;
        *(long *)(lVar14 + -8) = lVar8;
        uVar10 = 0;
        uVar11 = 0;
        uVar12 = 0;
        __sSy10FoundationE5range2of7optionsAB6localeSnySS5IndexVGSgqd___So22NSStringCompareOptionsVAiA6LocaleVSgtSyRd__lF
                  (&local_80,0,0,0,1,lVar14,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
        FUN_100040bb4(lVar14,&DAT_100a7c220,&DAT_100810220);
        _swift_bridgeObjectRelease(puVar9);
        if ((uVar11 & 1) == 0) {
          puVar2 = puVar6;
          FUN_10000c68c(uVar10,puVar3,puVar6);
          _swift_bridgeObjectRelease(puVar6);
          __sSS14_fromSubstringySSSshFZ(uVar10,puVar3,puVar2,uVar12);
          _swift_bridgeObjectRelease(uVar12);
          local_70 = (undefined *)uVar10;
          puStack_68 = puVar3;
          __s10Foundation12CharacterSetV12charactersInACSSh_tcfC(lVar13,0x2f,0xe100000000000000);
          __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
                    (lVar13,PTR___sSSN_1009957f8,lVar8);
          (**(code **)(lVar15 + 8))(lVar13,lVar1);
          _swift_bridgeObjectRelease(puVar3);
          return;
        }
        goto LAB_10021a304;
      }
    }
  }
  _swift_bridgeObjectRelease(puVar6);
  puVar6 = puVar9;
LAB_10021a304:
  _swift_bridgeObjectRelease(puVar6);
  return;
}

