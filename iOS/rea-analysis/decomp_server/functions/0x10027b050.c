// rea decompile_all
// name: FUN_10027b050
// address: 0x10027b050
// body: available
// range: 0x10027b050-0x10027b4b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10027b050(void)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined8 local_d0 [3];
  undefined1 auStack_b8 [8];
  undefined1 local_b0 [8];
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [8];
  undefined1 local_90 [8];
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [8];
  undefined1 *local_70;
  undefined8 local_68;
  
  lVar3 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar13 = *(long *)(lVar3 + -8);
  lVar11 = (long)local_d0 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar14 = *(long *)(lVar4 + -8);
  lVar12 = lVar11 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  FUN_100278368();
  puVar10 = (undefined8 *)
            (lVar12 - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  FUN_100082394();
  puVar6 = puVar10;
  _swift_getEnumCaseMultiPayload(puVar10,lVar5);
  iVar2 = (int)puVar6;
  if (iVar2 < 4) {
    if (iVar2 < 2) {
      if (iVar2 == 0) {
        (**(code **)(lVar14 + 0x20))(lVar12,puVar10,lVar4);
        local_70 = (undefined1 *)0x0;
        local_68 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x43);
        __sSS6appendyySSF(0xd000000000000040,0x80000001008a92b0);
        puVar7 = &DAT_100a82498;
        FUN_100005c90(&DAT_100a82498,PTR___s10Foundation3URLVMa_100996188,
                      PTR___s10Foundation3URLVs23CustomStringConvertibleAAMc_1009961b8);
        __ss23CustomStringConvertibleP11descriptionSSvgTj(lVar4,puVar7);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar7);
        __sSS6appendyySSF(0x2e,0xe100000000000000);
        uVar8 = local_68;
        puVar1 = local_70;
        (**(code **)(lVar14 + 8))(lVar12,lVar4);
        local_70 = puVar1;
        local_68 = uVar8;
      }
      else {
        (**(code **)(lVar13 + 0x20))(lVar11,puVar10,lVar3);
        local_70 = (undefined1 *)0x0;
        local_68 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x31);
        _swift_bridgeObjectRelease(local_68);
        local_70 = (undefined1 *)0xd00000000000002e;
        local_68 = 0x80000001008a9280;
        puVar7 = &DAT_100a82780;
        FUN_100005c90(&DAT_100a82780,PTR___sSS10FoundationE8EncodingVMa_100996308,
                      PTR___sSS10FoundationE8EncodingVs23CustomStringConvertibleAAMc_100996318);
        __ss23CustomStringConvertibleP11descriptionSSvgTj(lVar3,puVar7);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar7);
        __sSS6appendyySSF(0x2e,0xe100000000000000);
        uVar8 = local_68;
        puVar1 = local_70;
        (**(code **)(lVar13 + 8))(lVar11,lVar3);
        local_70 = puVar1;
        local_68 = uVar8;
      }
      goto LAB_10027b474;
    }
    if (iVar2 == 2) {
      uVar9 = *puVar10;
      local_70 = (undefined1 *)0x0;
      local_68 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x31);
      _swift_bridgeObjectRelease(local_68);
      local_70 = (undefined1 *)0xd00000000000002f;
      local_68 = 0x80000001008a9250;
      _swift_getErrorValue(uVar9,auStack_b8,local_d0);
      uVar8 = local_d0[2];
    }
    else {
      uVar9 = *puVar10;
      local_70 = (undefined1 *)0x0;
      local_68 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x32);
      _swift_bridgeObjectRelease(local_68);
      local_70 = &DAT_d000000000000030;
      local_68 = 0x80000001008a9190;
      _swift_getErrorValue(uVar9,auStack_98,local_b0);
      local_d0[1] = uStack_a8;
      uVar8 = local_a0;
    }
  }
  else {
    if (5 < iVar2) {
      if (iVar2 == 6) {
        local_68 = 0x80000001008a9340;
        local_70 = (undefined1 *)0xd000000000000044;
      }
      else {
        local_68 = 0x80000001008a9300;
        local_70 = (undefined1 *)0xd000000000000035;
      }
      goto LAB_10027b474;
    }
    if (iVar2 != 4) {
      uVar8 = *puVar10;
      uVar9 = puVar10[1];
      local_70 = (undefined1 *)0x0;
      local_68 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x66);
      __sSS6appendyySSF(&DAT_d000000000000030,0x80000001008a91d0);
      __sSS6appendyySSF(uVar8,uVar9);
      _swift_bridgeObjectRelease(uVar9);
      __sSS6appendyySSF(0xd000000000000034,0x80000001008a9210);
      goto LAB_10027b474;
    }
    uVar9 = *puVar10;
    local_70 = (undefined1 *)0x0;
    local_68 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x30);
    _swift_bridgeObjectRelease(local_68);
    local_70 = (undefined1 *)0xd00000000000002e;
    local_68 = 0x80000001008a9160;
    _swift_getErrorValue(uVar9,auStack_78,local_90);
    local_d0[1] = uStack_88;
    uVar8 = local_80;
  }
  __ss5ErrorP10FoundationE20localizedDescriptionSSvg(local_d0[1],uVar8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar8);
  _swift_errorRelease(uVar9);
LAB_10027b474:
  auVar15._8_8_ = local_68;
  auVar15._0_8_ = local_70;
  return auVar15;
}

