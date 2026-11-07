// rea decompile_all
// name: FUN_1007c82a0
// address: 0x1007c82a0
// body: available
// range: 0x1007c82a0-0x1007c8763 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001007c8420) */
/* WARNING: Removing unreachable block (ram,0x0001007c8618) */
/* WARNING: Removing unreachable block (ram,0x0001007c83c0) */
/* WARNING: Removing unreachable block (ram,0x0001007c862c) */

ID FUN_1007c82a0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  ID self;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  long lVar7;
  ID unaff_x20;
  undefined1 *puVar8;
  undefined1 *puVar9;
  code *pcVar10;
  long unaff_x21;
  long lVar11;
  long lVar12;
  long alStack_c0 [2];
  undefined1 auStack_b0 [8];
  undefined1 *local_a8;
  long local_a0;
  long local_98;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_58 [8];
  
  puVar2 = &DAT_100abc950;
  FUN_1007b4550();
  lVar7 = *(long *)(*(long *)(puVar2 + -8) + 0x40);
  puVar2 = &DAT_100abd000;
  FUN_1007b4550();
  lVar11 = *(long *)(puVar2 + -8);
  lVar12 = (long)(auStack_b0 + -(lVar7 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  self = *(ID *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  FUN_10003f030(param_1,self);
  FUN_1007c8764();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar12,&DAT_1009ebc80,&DAT_1009ebc80,lVar3,self,uVar1);
  if (unaff_x21 == 0) {
    local_a8 = auStack_b0 + -(lVar7 + 0xfU & 0xfffffffffffffff0);
    local_a0 = param_1;
    local_98 = lVar11;
    _swift_getObjCClassFromMetadata();
    _objc_allocWithZone();
    self = _objc_msgSend(unaff_x20,"init");
    local_58[0] = 0;
    puVar9 = local_58;
    puVar6 = puVar2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF(puVar9,puVar2);
    FUN_1007ce044();
    _objc_msgSend((ID)&objc::class_t::SentryLevelBridge,"setBreadcrumbLevel:level:",self,puVar9);
    local_68[0] = 1;
    puVar9 = local_68;
    puVar4 = puVar2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF(puVar9,puVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(puVar4);
    _objc_msgSend(self,"setCategory:",puVar9);
    lVar3 = 0;
    __s10Foundation4DateVMa();
    local_70[0] = 2;
    puVar4 = &DAT_100a78008;
    FUN_100005c90(&DAT_100a78008,PTR___s10Foundation4DateVMa_100996208,
                  PTR___s10Foundation4DateVSeAAMc_100996228);
    puVar9 = local_a8;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (local_a8,lVar3,local_70,puVar2,lVar3,puVar4);
    lVar7 = *(long *)(lVar3 + -8);
    puVar8 = puVar9;
    (**(code **)(lVar7 + 0x30))(puVar9,1,lVar3);
    if ((int)puVar8 == 1) {
      puVar8 = (undefined1 *)0x0;
    }
    else {
      __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
      (**(code **)(lVar7 + 8))(puVar9,lVar3);
    }
    _objc_msgSend(self,"setTimestamp:",puVar8);
    local_78[0] = 3;
    puVar9 = local_78;
    puVar4 = puVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar9);
    if (puVar4 == (undefined *)0x0) {
      puVar9 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar4);
    }
    _objc_msgSend(self,"setType:",puVar9);
    local_80[0] = 4;
    puVar9 = local_80;
    puVar4 = puVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar9);
    if (puVar4 == (undefined *)0x0) {
      puVar9 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar4);
    }
    _objc_msgSend(self,"setMessage:",puVar9);
    local_88[0] = 6;
    puVar9 = local_88;
    puVar4 = puVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar9);
    if (puVar4 == (undefined *)0x0) {
      puVar9 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar4);
    }
    _objc_msgSend(self,"setOrigin:",puVar9);
    *(long *)(lVar12 + -0x10) = lVar12;
    pcVar5 = FUN_1007c8858;
    FUN_1007c2110();
    if (pcVar5 == (code *)0x0) {
      pcVar10 = (code *)0x0;
    }
    else {
      pcVar10 = pcVar5;
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
      _swift_bridgeObjectRelease(pcVar5);
    }
    _objc_msgSend(self,"setData:",pcVar10);
    _swift_bridgeObjectRelease(puVar6);
    (**(code **)(local_98 + 8))(lVar12,puVar2);
    FUN_10003f094(local_a0);
  }
  else {
    FUN_10003f094(param_1);
  }
  return self;
}

