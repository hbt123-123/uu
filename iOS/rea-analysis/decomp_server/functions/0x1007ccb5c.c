// rea decompile_all
// name: FUN_1007ccb5c
// address: 0x1007ccb5c
// body: available
// range: 0x1007ccb5c-0x1007ccfaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001007cce74) */
/* WARNING: Removing unreachable block (ram,0x0001007ccf4c) */
/* WARNING: Removing unreachable block (ram,0x0001007cce8c) */
/* WARNING: Removing unreachable block (ram,0x0001007ccc18) */

ID FUN_1007ccb5c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ID self;
  code *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ID unaff_x20;
  code *pcVar8;
  undefined1 *puVar9;
  long unaff_x21;
  undefined1 *puVar10;
  long lVar11;
  undefined8 auStack_80 [2];
  long local_70;
  undefined1 local_68 [8];
  undefined1 local_58;
  undefined7 uStack_57;
  
  puVar2 = &DAT_100abd188;
  FUN_1007b4550();
  lVar11 = *(long *)(puVar2 + -8);
  lVar1 = -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = local_68 + lVar1 + -8;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  self = *(ID *)(param_1 + 0x20);
  lVar3 = param_1;
  FUN_10003f030(param_1,uVar5);
  FUN_1007ccfb0();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (puVar10,&DAT_1009ebf08,&DAT_1009ebf08,lVar3,uVar5,self);
  if (unaff_x21 == 0) {
    local_58 = 0;
    puVar9 = &local_58;
    puVar7 = puVar2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF(puVar9,puVar2);
    local_70 = lVar11;
    _swift_getObjCClassFromMetadata();
    _objc_allocWithZone();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar9,puVar7);
    self = _objc_msgSend(unaff_x20,"initWithType:",puVar9);
    local_58 = 3;
    puVar9 = &local_58;
    puVar6 = puVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar9);
    if (puVar6 == (undefined *)0x0) {
      puVar9 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar6);
    }
    _objc_msgSend(self,"setDesc:",puVar9);
    *(undefined1 **)((long)auStack_80 + lVar1) = puVar10;
    pcVar4 = FUN_1007cd07c;
    FUN_1007c2110();
    if (pcVar4 == (code *)0x0) {
      pcVar8 = (code *)0x0;
    }
    else {
      pcVar8 = pcVar4;
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
      _swift_bridgeObjectRelease(pcVar4);
    }
    _objc_msgSend(self,"setData:",pcVar8);
    uVar5 = 0;
    local_68[0] = 1;
    FUN_1007bbbd4(0);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_58,&DAT_1009eb530,local_68,puVar2,&DAT_1009eb530,uVar5);
    lVar3 = CONCAT71(uStack_57,local_58);
    lVar1 = 0;
    if (lVar3 != 1) {
      lVar1 = lVar3;
    }
    _objc_msgSend(self,"setHandled:",lVar1);
    FUN_1007bbc18(lVar3);
    local_68[0] = 2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_58,&DAT_1009eb530,local_68,puVar2,&DAT_1009eb530,uVar5);
    lVar3 = CONCAT71(uStack_57,local_58);
    lVar1 = 0;
    if (lVar3 != 1) {
      lVar1 = lVar3;
    }
    _objc_msgSend(self,"setSynthetic:",lVar1);
    FUN_1007bbc18(lVar3);
    local_58 = 5;
    puVar9 = &local_58;
    puVar6 = puVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar9);
    if (puVar6 == (undefined *)0x0) {
      puVar9 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar6);
    }
    _objc_msgSend(self,"setHelpLink:",puVar9);
    uVar5 = 0;
    FUN_1007cd094(0);
    local_68[0] = 6;
    puVar6 = &DAT_100abd1a0;
    FUN_100005c90(&DAT_100abd1a0,FUN_1007cd094,&TargetProtocolConformanceDescriptor_100852884);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_58,uVar5,local_68,puVar2,uVar5,puVar6);
    lVar1 = local_70;
    _objc_msgSend(self,"setMeta:",CONCAT71(uStack_57,local_58));
    _swift_bridgeObjectRelease(puVar7);
    (**(code **)(lVar1 + 8))(puVar10,puVar2);
    FUN_10003f094(param_1);
  }
  else {
    FUN_10003f094(param_1);
  }
  return self;
}

