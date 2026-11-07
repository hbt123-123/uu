// rea decompile_all
// name: FUN_1007bb56c
// address: 0x1007bb56c
// body: available
// range: 0x1007bb56c-0x1007bbb8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001007bba0c) */
/* WARNING: Removing unreachable block (ram,0x0001007bbb3c) */
/* WARNING: Removing unreachable block (ram,0x0001007bb674) */
/* WARNING: Removing unreachable block (ram,0x0001007bb680) */

ID FUN_1007bb56c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  ID self;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  ID unaff_x20;
  undefined1 *puVar8;
  long unaff_x21;
  long lVar9;
  undefined1 auStack_80 [8];
  long local_78;
  undefined1 local_68 [8];
  undefined1 local_58;
  undefined7 uStack_57;
  
  puVar4 = &DAT_100abcae0;
  FUN_1007b4550();
  lVar9 = *(long *)(puVar4 + -8);
  lVar7 = *(long *)(lVar9 + 0x40);
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  self = _objc_msgSend(unaff_x20,"init");
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_78 = param_1;
  FUN_10003f030(param_1,uVar5);
  FUN_1007bbb90();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_80 + -(lVar7 + 0xfU & 0xfffffffffffffff0),&DAT_1009eb2a8,&DAT_1009eb2a8,param_1
             ,uVar5,uVar2);
  if (unaff_x21 == 0) {
    local_58 = 0;
    puVar8 = &local_58;
    puVar6 = puVar4;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar8);
    if (puVar6 == (undefined *)0x0) {
      puVar8 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar6);
    }
    _objc_msgSend(self,"setSymbolAddress:",puVar8);
    local_58 = 1;
    puVar8 = &local_58;
    puVar6 = puVar4;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar8);
    if (puVar6 == (undefined *)0x0) {
      puVar8 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar6);
    }
    _objc_msgSend(self,"setFileName:",puVar8);
    local_58 = 2;
    puVar8 = &local_58;
    puVar6 = puVar4;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar8);
    if (puVar6 == (undefined *)0x0) {
      puVar8 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar6);
    }
    _objc_msgSend(self,"setFunction:",puVar8);
    local_58 = 3;
    puVar8 = &local_58;
    puVar6 = puVar4;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar8);
    if (puVar6 == (undefined *)0x0) {
      puVar8 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar6);
    }
    _objc_msgSend(self,"setModule:",puVar8);
    local_58 = 4;
    puVar8 = &local_58;
    puVar6 = puVar4;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar8);
    if (puVar6 == (undefined *)0x0) {
      puVar8 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar6);
    }
    _objc_msgSend(self,"setPackage:",puVar8);
    local_58 = 5;
    puVar8 = &local_58;
    puVar6 = puVar4;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar8);
    if (puVar6 == (undefined *)0x0) {
      puVar8 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar6);
    }
    _objc_msgSend(self,"setImageAddress:",puVar8);
    local_58 = 6;
    puVar8 = &local_58;
    puVar6 = puVar4;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar8);
    if (puVar6 == (undefined *)0x0) {
      puVar8 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar6);
    }
    _objc_msgSend(self,"setPlatform:",puVar8);
    local_58 = 7;
    puVar8 = &local_58;
    puVar6 = puVar4;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar8);
    if (puVar6 == (undefined *)0x0) {
      puVar8 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar6);
    }
    _objc_msgSend(self,"setInstructionAddress:",puVar8);
    uVar5 = 0;
    local_68[0] = 8;
    FUN_1007bbbd4(0);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_58,&DAT_1009eb530,local_68,puVar4,&DAT_1009eb530,uVar5);
    lVar3 = CONCAT71(uStack_57,local_58);
    lVar1 = 0;
    if (lVar3 != 1) {
      lVar1 = lVar3;
    }
    _objc_msgSend(self,"setLineNumber:",lVar1);
    FUN_1007bbc18(lVar3);
    local_68[0] = 9;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_58,&DAT_1009eb530,local_68,puVar4,&DAT_1009eb530,uVar5);
    lVar3 = CONCAT71(uStack_57,local_58);
    lVar1 = 0;
    if (lVar3 != 1) {
      lVar1 = lVar3;
    }
    _objc_msgSend(self,"setColumnNumber:",lVar1);
    FUN_1007bbc18(lVar3);
    local_68[0] = 10;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_58,&DAT_1009eb530,local_68,puVar4,&DAT_1009eb530,uVar5);
    lVar3 = CONCAT71(uStack_57,local_58);
    lVar1 = 0;
    if (lVar3 != 1) {
      lVar1 = lVar3;
    }
    _objc_msgSend(self,"setInApp:",lVar1);
    FUN_1007bbc18(lVar3);
    local_68[0] = 0xb;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_58,&DAT_1009eb530,local_68,puVar4,&DAT_1009eb530,uVar5);
    lVar3 = CONCAT71(uStack_57,local_58);
    lVar1 = 0;
    if (lVar3 != 1) {
      lVar1 = lVar3;
    }
    _objc_msgSend(self,"setStackStart:",lVar1);
    (**(code **)(lVar9 + 8))(auStack_80 + -(lVar7 + 0xfU & 0xfffffffffffffff0),puVar4);
    FUN_1007bbc18(lVar3);
  }
  FUN_10003f094(local_78);
  return self;
}

