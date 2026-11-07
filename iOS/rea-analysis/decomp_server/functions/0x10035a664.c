// rea decompile_all
// name: FUN_10035a664
// address: 0x10035a664
// body: available
// range: 0x10035a664-0x10035a8c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10035a664(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long alStack_a0 [2];
  ulong local_90;
  undefined8 *puStack_88;
  ulong local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = &DAT_100a88460;
  FUN_100004bb4(&DAT_100a88460,&DAT_10081c5d8);
  lVar11 = (long)&local_90 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar10 = *(long *)(lVar3 + -8);
  uVar9 = lVar11 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = lVar3;
  local_90 = param_1;
  puStack_88 = (undefined8 *)param_2;
  __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(uVar9);
  FUN_1002c6438();
  puVar2 = PTR___sSSN_1009957f8;
  uVar5 = uVar9;
  puVar6 = PTR___sSSN_1009957f8;
  __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF(uVar9,PTR___sSSN_1009957f8,lVar4);
  (**(code **)(lVar10 + 8))(uVar9,lVar3);
  _swift_bridgeObjectRelease(param_2);
  local_70 = 0x3b;
  uStack_68 = 0xe100000000000000;
  lVar3 = 0;
  local_90 = uVar5;
  puStack_88 = (undefined8 *)puVar6;
  __s10Foundation6LocaleVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar11,1,1,lVar3);
  *(long *)(uVar9 - 0x10) = lVar4;
  *(long *)(uVar9 - 8) = lVar4;
  puVar8 = &local_70;
  uVar9 = 0;
  __sSy10FoundationE5range2of7optionsAB6localeSnySS5IndexVGSgqd___So22NSStringCompareOptionsVAiA6LocaleVSgtSyRd__lF
            (puVar8,0,0,0,1,lVar11,puVar2,puVar2);
  FUN_100040bb4(lVar11,&DAT_100a88460,&DAT_10081c5d8);
  if ((uVar9 & 1) != 0) {
    uVar9 = uVar5;
    if (((ulong)puVar6 & 0x2000000000000000) != 0) {
      uVar9 = (ulong)puVar6 >> 0x38 & 0xf;
    }
    if ((((ulong)puVar6 >> 0x3c & 1) == 0) || ((uVar5 >> 0x3b & 1) != 0)) {
      puVar8 = (undefined8 *)(uVar9 << 0x10 | 7);
    }
    else {
      puVar8 = (undefined8 *)(uVar9 << 0x10 | 0xb);
    }
  }
  uVar9 = 0xf;
  puVar2 = puVar6;
  __sSSySsSnySS5IndexVGcig();
  _swift_bridgeObjectRelease(puVar6);
  local_70 = 0x2f;
  uStack_68 = 0xe100000000000000;
  local_90 = uVar9;
  puStack_88 = puVar8;
  local_80 = uVar5;
  puStack_78 = puVar2;
  FUN_10035b670();
  puVar8 = &local_70;
  __sSy10FoundationE10components11separatedBySaySSGqd___tSyRd__lF
            (puVar8,PTR___sSsN_100995a28,PTR___sSSN_1009957f8,puVar6,lVar4);
  _swift_bridgeObjectRelease(puVar2);
  if (puVar8[2] == 2) {
    uVar7 = puVar8[4];
    uVar1 = puVar8[7];
    _swift_bridgeObjectRetain(puVar8[5]);
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRelease(puVar8);
  }
  else {
    _swift_bridgeObjectRelease(puVar8);
    uVar7 = 0;
  }
  return uVar7;
}

