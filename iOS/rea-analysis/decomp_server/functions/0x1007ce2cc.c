// rea decompile_all
// name: FUN_1007ce2cc
// address: 0x1007ce2cc
// body: available
// range: 0x1007ce2cc-0x1007ce6fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001007ce64c) */

ID FUN_1007ce2cc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  ID self;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ID unaff_x20;
  long lVar8;
  undefined1 *puVar9;
  long unaff_x21;
  long lVar10;
  undefined1 auStack_70 [8];
  undefined1 local_68 [8];
  undefined1 local_58;
  undefined7 uStack_57;
  
  puVar2 = &DAT_100abd250;
  FUN_1007b4550();
  lVar10 = *(long *)(puVar2 + -8);
  lVar7 = *(long *)(lVar10 + 0x40);
  self = *(ID *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  FUN_10003f030(param_1,self);
  FUN_1007ce6fc();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_70 + -(lVar7 + 0xfU & 0xfffffffffffffff0),&DAT_1009ec230,&DAT_1009ec230,lVar3,
             self,uVar1);
  if (unaff_x21 == 0) {
    _swift_getObjCClassFromMetadata();
    _objc_allocWithZone();
    self = _objc_msgSend(unaff_x20,"init");
    local_68[0] = 0;
    IVar4 = self;
    FUN_1007bbbd4();
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_58,&DAT_1009eb530,local_68,puVar2,&DAT_1009eb530,IVar4);
    lVar8 = CONCAT71(uStack_57,local_58);
    lVar3 = 0;
    if (lVar8 != 1) {
      lVar3 = lVar8;
    }
    _objc_msgSend(self,"setBodySize:",lVar3);
    FUN_1007bbc18(lVar8);
    local_58 = 1;
    puVar9 = &local_58;
    puVar5 = puVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar9);
    if (puVar5 == (undefined *)0x0) {
      puVar9 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar5);
    }
    _objc_msgSend(self,"setCookies:",puVar9);
    puVar5 = &DAT_100abc978;
    FUN_1007b4550(&DAT_100abc978);
    local_68[0] = 2;
    puVar6 = puVar5;
    FUN_1007ba248();
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_58,puVar5,local_68,puVar2,puVar5,puVar6);
    lVar3 = CONCAT71(uStack_57,local_58);
    if (lVar3 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar3;
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                (lVar3,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,PTR___sSSSHsWP_100995808);
      _swift_bridgeObjectRelease(lVar3);
    }
    _objc_msgSend(self,"setHeaders:",lVar8);
    local_58 = 3;
    puVar9 = &local_58;
    puVar5 = puVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar9);
    if (puVar5 == (undefined *)0x0) {
      puVar9 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar5);
    }
    _objc_msgSend(self,"setFragment:",puVar9);
    local_58 = 4;
    puVar9 = &local_58;
    puVar5 = puVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar9);
    if (puVar5 == (undefined *)0x0) {
      puVar9 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar5);
    }
    _objc_msgSend(self,"setMethod:",puVar9);
    local_58 = 5;
    puVar9 = &local_58;
    puVar5 = puVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar9);
    if (puVar5 == (undefined *)0x0) {
      puVar9 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar5);
    }
    _objc_msgSend(self,"setQueryString:",puVar9);
    local_58 = 6;
    puVar9 = &local_58;
    puVar5 = puVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar9);
    if (puVar5 == (undefined *)0x0) {
      puVar9 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar5);
    }
    _objc_msgSend(self,"setUrl:",puVar9);
    (**(code **)(lVar10 + 8))(auStack_70 + -(lVar7 + 0xfU & 0xfffffffffffffff0),puVar2);
    FUN_10003f094(param_1);
  }
  else {
    FUN_10003f094(param_1);
  }
  return self;
}

