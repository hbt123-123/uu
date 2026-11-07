// rea decompile_all
// name: FUN_1007d7048
// address: 0x1007d7048
// body: available
// range: 0x1007d7048-0x1007d749b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001007d73ec) */

ID FUN_1007d7048(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ID self;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  ID unaff_x20;
  undefined1 *puVar7;
  long unaff_x21;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined1 local_68 [8];
  undefined1 local_58;
  undefined7 uStack_57;
  
  puVar2 = &DAT_100abd598;
  FUN_1007b4550();
  lVar8 = *(long *)(puVar2 + -8);
  lVar6 = *(long *)(lVar8 + 0x40);
  self = *(ID *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  FUN_10003f030(param_1,self);
  FUN_1007d749c();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_70 + -(lVar6 + 0xfU & 0xfffffffffffffff0),&DAT_1009ec4f0,&DAT_1009ec4f0,lVar3,
             self,uVar4);
  if (unaff_x21 == 0) {
    _swift_getObjCClassFromMetadata();
    _objc_allocWithZone();
    self = _objc_msgSend(unaff_x20,"init");
    local_58 = 0;
    puVar7 = &local_58;
    puVar5 = puVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar7);
    if (puVar5 == (undefined *)0x0) {
      puVar7 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar5);
    }
    _objc_msgSend(self,"setUuid:",puVar7);
    local_58 = 1;
    puVar7 = &local_58;
    puVar5 = puVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar7);
    if (puVar5 == (undefined *)0x0) {
      puVar7 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar5);
    }
    _objc_msgSend(self,"setDebugID:",puVar7);
    local_58 = 2;
    puVar7 = &local_58;
    puVar5 = puVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar7);
    if (puVar5 == (undefined *)0x0) {
      puVar7 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar5);
    }
    _objc_msgSend(self,"setType:",puVar7);
    local_58 = 3;
    puVar7 = &local_58;
    puVar5 = puVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar7);
    if (puVar5 == (undefined *)0x0) {
      puVar7 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar5);
    }
    _objc_msgSend(self,"setName:",puVar7);
    uVar4 = 0;
    local_68[0] = 4;
    FUN_1007bbbd4(0);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_58,&DAT_1009eb530,local_68,puVar2,&DAT_1009eb530,uVar4);
    lVar1 = CONCAT71(uStack_57,local_58);
    lVar3 = 0;
    if (lVar1 != 1) {
      lVar3 = lVar1;
    }
    _objc_msgSend(self,"setImageSize:",lVar3);
    FUN_1007bbc18(lVar1);
    local_58 = 5;
    puVar7 = &local_58;
    puVar5 = puVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar7);
    if (puVar5 == (undefined *)0x0) {
      puVar7 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar5);
    }
    _objc_msgSend(self,"setImageAddress:",puVar7);
    local_58 = 6;
    puVar7 = &local_58;
    puVar5 = puVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar7);
    if (puVar5 == (undefined *)0x0) {
      puVar7 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar5);
    }
    _objc_msgSend(self,"setImageVmAddress:",puVar7);
    local_58 = 7;
    puVar7 = &local_58;
    puVar5 = puVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar7);
    if (puVar5 == (undefined *)0x0) {
      puVar7 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar5);
    }
    _objc_msgSend(self,"setCodeFile:",puVar7);
    (**(code **)(lVar8 + 8))(auStack_70 + -(lVar6 + 0xfU & 0xfffffffffffffff0),puVar2);
    FUN_10003f094(param_1);
  }
  else {
    FUN_10003f094(param_1);
  }
  return self;
}

