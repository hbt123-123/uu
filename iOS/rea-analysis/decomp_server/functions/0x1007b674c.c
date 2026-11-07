// rea decompile_all
// name: FUN_1007b674c
// address: 0x1007b674c
// body: available
// range: 0x1007b674c-0x1007b6bd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001007b6ac8) */

ID FUN_1007b674c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ID self;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  ID unaff_x20;
  undefined1 *puVar7;
  code *pcVar8;
  long unaff_x21;
  undefined1 *puVar9;
  long lVar10;
  undefined8 auStack_b0 [2];
  undefined1 auStack_a0 [8];
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_58 [8];
  
  puVar2 = &DAT_100abc848;
  FUN_1007b4550();
  lVar10 = *(long *)(puVar2 + -8);
  lVar1 = -(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_a0 + lVar1;
  self = *(ID *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  FUN_10003f030(param_1,self);
  FUN_1007b6bd8();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (puVar9,&DAT_1009eadd0,&DAT_1009eadd0,lVar3,self,uVar4);
  if (unaff_x21 == 0) {
    _swift_getObjCClassFromMetadata();
    _objc_allocWithZone();
    self = _objc_msgSend(unaff_x20,"init");
    local_58[0] = 0;
    puVar7 = local_58;
    puVar5 = puVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar7);
    if (puVar5 == (undefined *)0x0) {
      puVar7 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar5);
    }
    _objc_msgSend(self,"setUserId:",puVar7);
    local_68[0] = 1;
    puVar7 = local_68;
    puVar5 = puVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar7);
    if (puVar5 == (undefined *)0x0) {
      puVar7 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar5);
    }
    _objc_msgSend(self,"setEmail:",puVar7);
    local_70[0] = 2;
    puVar7 = local_70;
    puVar5 = puVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar7);
    if (puVar5 == (undefined *)0x0) {
      puVar7 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar5);
    }
    _objc_msgSend(self,"setUsername:",puVar7);
    local_78[0] = 3;
    puVar7 = local_78;
    puVar5 = puVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar7);
    if (puVar5 == (undefined *)0x0) {
      puVar7 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar5);
    }
    _objc_msgSend(self,"setIpAddress:",puVar7);
    local_80[0] = 4;
    puVar7 = local_80;
    puVar5 = puVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar7);
    if (puVar5 == (undefined *)0x0) {
      puVar7 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar5);
    }
    _objc_msgSend(self,"setSegment:",puVar7);
    local_88[0] = 5;
    puVar7 = local_88;
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
    FUN_1007b6c1c(0);
    local_98[0] = 6;
    puVar5 = &DAT_100abc860;
    FUN_100005c90(&DAT_100abc860,FUN_1007b6c1c,&TargetProtocolConformanceDescriptor_100852584);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_90,uVar4,local_98,puVar2,uVar4,puVar5);
    _objc_msgSend(self,"setGeo:",local_90);
    *(undefined1 **)((long)auStack_b0 + lVar1) = puVar9;
    pcVar6 = FUN_1007b6ce0;
    FUN_1007c2110();
    if (pcVar6 == (code *)0x0) {
      pcVar8 = (code *)0x0;
    }
    else {
      pcVar8 = pcVar6;
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
      _swift_bridgeObjectRelease(pcVar6);
    }
    _objc_msgSend(self,"setData:",pcVar8);
    (**(code **)(lVar10 + 8))(puVar9,puVar2);
    FUN_10003f094(param_1);
  }
  else {
    FUN_10003f094(param_1);
  }
  return self;
}

