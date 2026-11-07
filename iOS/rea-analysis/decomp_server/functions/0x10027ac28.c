// rea decompile_all
// name: FUN_10027ac28
// address: 0x10027ac28
// body: available
// range: 0x10027ac28-0x10027b04f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10027ac28(void)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined8 auStack_80 [5];
  undefined1 auStack_58 [8];
  undefined1 *local_50;
  undefined8 local_48;
  
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar14 = *(long *)(lVar3 + -8);
  lVar13 = (long)auStack_80 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_1002782c4();
  puVar12 = (undefined8 *)
            (lVar13 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  FUN_100082394();
  puVar5 = puVar12;
  _swift_getEnumCaseMultiPayload(puVar12,lVar4);
  iVar2 = (int)puVar5;
  if (iVar2 < 3) {
    if (iVar2 == 0) {
      (**(code **)(lVar14 + 0x20))(lVar13,puVar12,lVar3);
      local_50 = (undefined1 *)0x0;
      local_48 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x41);
      __sSS6appendyySSF(0xd00000000000003e,0x80000001008a90e0);
      puVar10 = &DAT_100a82498;
      FUN_100005c90(&DAT_100a82498,PTR___s10Foundation3URLVMa_100996188,
                    PTR___s10Foundation3URLVs23CustomStringConvertibleAAMc_1009961b8);
      __ss23CustomStringConvertibleP11descriptionSSvgTj(lVar3,puVar10);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar10);
      __sSS6appendyySSF(0x2e,0xe100000000000000);
      uVar6 = local_48;
      puVar1 = local_50;
      (**(code **)(lVar14 + 8))(lVar13,lVar3);
      local_50 = puVar1;
      local_48 = uVar6;
      goto LAB_10027b018;
    }
    if (iVar2 != 1) {
      uVar6 = *puVar12;
      uVar9 = puVar12[1];
      uVar11 = puVar12[2];
      local_50 = (undefined1 *)0x0;
      local_48 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x43);
      __sSS6appendyySSF(0xd000000000000017,0x80000001008a9020);
      __sSS6appendyySSF(uVar9,uVar11);
      _swift_bridgeObjectRelease(uVar11);
      __sSS6appendyySSF(0xd000000000000027,0x80000001008a9040);
      puVar7 = &DAT_100a82770;
      auStack_80[1] = uVar6;
      FUN_100004bb4(&DAT_100a82770,&DAT_1008186c0);
      puVar8 = puVar7;
      FUN_100280754();
      uVar9 = 0x2c;
      puVar10 = (undefined *)0xe100000000000000;
      __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x2c,0xe100000000000000,puVar7,puVar8);
      _swift_bridgeObjectRelease(uVar6);
      __sSS6appendyySSF(uVar9,puVar10);
      goto LAB_10027b004;
    }
    uVar11 = *puVar12;
    local_50 = (undefined1 *)0x0;
    local_48 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x57);
    __sSS6appendyySSF(0xd000000000000040,0x80000001008a9070);
    puVar10 = &DAT_100a82770;
    auStack_80[1] = uVar11;
    FUN_100004bb4(&DAT_100a82770,&DAT_1008186c0);
    puVar7 = puVar10;
    FUN_100280754();
    uVar6 = 0x2c;
    uVar9 = 0xe100000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x2c,0xe100000000000000,puVar10,puVar7);
    _swift_bridgeObjectRelease(uVar11);
    __sSS6appendyySSF(uVar6,uVar9);
    _swift_bridgeObjectRelease(uVar9);
    uVar6 = 0xd000000000000015;
    uVar9 = 0x80000001008a90c0;
  }
  else {
    if (iVar2 != 3) {
      if (iVar2 == 4) {
        uVar9 = *puVar12;
        local_50 = (undefined1 *)0x0;
        local_48 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x30);
        _swift_bridgeObjectRelease(local_48);
        local_50 = (undefined1 *)0xd00000000000002e;
        local_48 = 0x80000001008a8fc0;
        _swift_getErrorValue(uVar9,auStack_58,auStack_80 + 2);
        uVar6 = auStack_80[4];
        __ss5ErrorP10FoundationE20localizedDescriptionSSvg(auStack_80[3],auStack_80[4]);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(uVar6);
        _swift_errorRelease(uVar9);
      }
      else {
        local_48 = 0x80000001008a9120;
        local_50 = &DAT_d000000000000033;
      }
      goto LAB_10027b018;
    }
    uVar6 = *puVar12;
    local_50 = (undefined1 *)0x0;
    local_48 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x2a);
    _swift_bridgeObjectRelease(local_48);
    local_50 = (undefined1 *)0xd000000000000027;
    local_48 = 0x80000001008a8ff0;
    puVar10 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    auStack_80[1] = uVar6;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
LAB_10027b004:
    _swift_bridgeObjectRelease(puVar10);
    uVar6 = 0x2e;
    uVar9 = 0xe100000000000000;
  }
  __sSS6appendyySSF(uVar6,uVar9);
LAB_10027b018:
  auVar15._8_8_ = local_48;
  auVar15._0_8_ = local_50;
  return auVar15;
}

