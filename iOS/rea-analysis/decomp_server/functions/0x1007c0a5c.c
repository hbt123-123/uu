// rea decompile_all
// name: FUN_1007c0a5c
// address: 0x1007c0a5c
// body: available
// range: 0x1007c0a5c-0x1007c0cc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001007c0c10) */

ID FUN_1007c0a5c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  ID self;
  undefined *puVar4;
  long lVar5;
  ID unaff_x20;
  undefined1 *puVar6;
  long unaff_x21;
  long lVar7;
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_58 [8];
  
  puVar2 = &DAT_100abcd68;
  FUN_1007b4550();
  lVar7 = *(long *)(puVar2 + -8);
  lVar5 = *(long *)(lVar7 + 0x40);
  self = *(ID *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  FUN_10003f030(param_1,self);
  FUN_1007c0cc4();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (local_70 + -(lVar5 + 0xfU & 0xfffffffffffffff0),&DAT_1009eb838,&DAT_1009eb838,lVar3,
             self,uVar1);
  if (unaff_x21 == 0) {
    _swift_getObjCClassFromMetadata();
    _objc_allocWithZone();
    self = _objc_msgSend(unaff_x20,"init");
    local_58[0] = 0;
    puVar6 = local_58;
    puVar4 = puVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar6);
    if (puVar4 == (undefined *)0x0) {
      puVar6 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar4);
    }
    _objc_msgSend(self,"setCity:",puVar6);
    local_68[0] = 1;
    puVar6 = local_68;
    puVar4 = puVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar6);
    if (puVar4 == (undefined *)0x0) {
      puVar6 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar4);
    }
    _objc_msgSend(self,"setCountryCode:",puVar6);
    local_70[0] = 2;
    puVar6 = local_70;
    puVar4 = puVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar6);
    if (puVar4 == (undefined *)0x0) {
      puVar6 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar4);
    }
    _objc_msgSend(self,"setRegion:",puVar6);
    (**(code **)(lVar7 + 8))(local_70 + -(lVar5 + 0xfU & 0xfffffffffffffff0),puVar2);
    FUN_10003f094(param_1);
  }
  else {
    FUN_10003f094(param_1);
  }
  return self;
}

