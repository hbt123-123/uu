// rea decompile_all
// name: FUN_100367c10
// address: 0x100367c10
// body: available
// range: 0x100367c10-0x100368073 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100367c10(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  long local_d0 [3];
  undefined1 auStack_b8 [8];
  undefined1 local_b0 [8];
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [8];
  undefined1 local_90 [8];
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [8];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  
  lVar1 = 0;
  __s10Foundation10URLRequestVMa();
  lVar13 = *(long *)(lVar1 + -8);
  uVar4 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar11 = (long)local_d0 - uVar4;
  lVar12 = lVar11 - uVar4;
  lVar9 = lVar12 - uVar4;
  lVar2 = 0;
  FUN_100365838();
  lVar6 = lVar9 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100082394();
  lVar8 = lVar6;
  _swift_getEnumCaseMultiPayload(lVar6,lVar2);
  puVar3 = &DAT_100a88a88;
  FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
  lVar2 = *(long *)(lVar6 + *(int *)(puVar3 + 0x30));
  pcVar5 = *(code **)(lVar13 + 0x20);
  if ((int)lVar8 == 0) {
    (*pcVar5)(lVar12,lVar6,lVar1);
    local_60 = 0;
    local_58 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x30);
    _swift_bridgeObjectRelease(local_58);
    local_60 = 0xd000000000000020;
    local_58 = 0x80000001008ad030;
    FUN_10036ca70();
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(lVar6);
    __sSS6appendyySSF(0x734d726f72724520,0xac0000009abcef67);
    if (lVar2 == 0) {
      uVar7 = 0;
      uVar10 = 0;
    }
    else {
      _swift_getErrorValue(lVar2,auStack_98,local_b0);
      _swift_errorRetain(lVar2);
      uVar7 = uStack_a8;
      uVar10 = local_a0;
      __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
      _swift_errorRelease(lVar2);
    }
    puVar3 = &DAT_100a88e90;
    local_70 = uVar7;
    uStack_68 = uVar10;
    FUN_100004bb4(&DAT_100a88e90,&DAT_10081cfc0);
    __sSS10describingSSx_tclufC(&local_70,puVar3);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar3);
    _swift_errorRelease(lVar2);
  }
  else if ((int)lVar8 == 1) {
    (*pcVar5)(lVar11,lVar6,lVar1);
    local_60 = 0;
    local_58 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x2d);
    _swift_bridgeObjectRelease(local_58);
    local_60 = 0xd00000000000001d;
    local_58 = 0x80000001008ad010;
    FUN_10036ca70();
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(lVar6);
    __sSS6appendyySSF(0x734d726f72724520,0xac0000009abcef67);
    if (lVar2 == 0) {
      uVar7 = 0;
      uVar10 = 0;
    }
    else {
      _swift_getErrorValue(lVar2,auStack_78,local_90);
      _swift_errorRetain(lVar2);
      uVar7 = uStack_88;
      uVar10 = local_80;
      __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
      _swift_errorRelease(lVar2);
    }
    puVar3 = &DAT_100a88e90;
    local_70 = uVar7;
    uStack_68 = uVar10;
    FUN_100004bb4(&DAT_100a88e90,&DAT_10081cfc0);
    __sSS10describingSSx_tclufC(&local_70,puVar3);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar3);
    _swift_errorRelease(lVar2);
    lVar12 = lVar11;
  }
  else {
    (*pcVar5)(lVar9,lVar6,lVar1);
    local_60 = 0;
    local_58 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x2b);
    _swift_bridgeObjectRelease(local_58);
    local_60 = 0xd00000000000001a;
    local_58 = 0x80000001008ad060;
    FUN_10036ca70();
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(lVar6);
    __sSS6appendyySSF(0x4d726f727245202c,0xad00009abcef6773);
    if (lVar2 == 0) {
      lVar8 = 0;
      lVar12 = 0;
    }
    else {
      _swift_getErrorValue(lVar2,auStack_b8,local_d0);
      _swift_errorRetain(lVar2);
      lVar8 = local_d0[1];
      lVar12 = local_d0[2];
      __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
      _swift_errorRelease(lVar2);
    }
    puVar3 = &DAT_100a88e90;
    local_70 = lVar8;
    uStack_68 = lVar12;
    FUN_100004bb4(&DAT_100a88e90,&DAT_10081cfc0);
    __sSS10describingSSx_tclufC(&local_70,puVar3);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar3);
    _swift_errorRelease(lVar2);
    lVar12 = lVar9;
  }
  uVar10 = local_58;
  uVar7 = local_60;
  (**(code **)(lVar13 + 8))(lVar12,lVar1);
  auVar14._8_8_ = uVar10;
  auVar14._0_8_ = uVar7;
  return auVar14;
}

