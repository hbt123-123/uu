// rea decompile_all
// name: FUN_1007b8b88
// address: 0x1007b8b88
// body: available
// range: 0x1007b8b88-0x1007ba053 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001007b9e98) */
/* WARNING: Removing unreachable block (ram,0x0001007b9cdc) */
/* WARNING: Removing unreachable block (ram,0x0001007b9480) */
/* WARNING: Removing unreachable block (ram,0x0001007b9248) */
/* WARNING: Removing unreachable block (ram,0x0001007b9008) */
/* WARNING: Removing unreachable block (ram,0x0001007b8e78) */
/* WARNING: Removing unreachable block (ram,0x0001007b8dd8) */
/* WARNING: Removing unreachable block (ram,0x0001007b8e7c) */
/* WARNING: Removing unreachable block (ram,0x0001007b8f68) */
/* WARNING: Removing unreachable block (ram,0x0001007b9018) */
/* WARNING: Removing unreachable block (ram,0x0001007b9024) */
/* WARNING: Removing unreachable block (ram,0x0001007b90c4) */
/* WARNING: Removing unreachable block (ram,0x0001007b9548) */
/* WARNING: Removing unreachable block (ram,0x0001007b93e0) */
/* WARNING: Removing unreachable block (ram,0x0001007b9b64) */
/* WARNING: Removing unreachable block (ram,0x0001007b9b74) */
/* WARNING: Removing unreachable block (ram,0x0001007b9fbc) */
/* WARNING: Removing unreachable block (ram,0x0001007b8cd4) */
/* WARNING: Removing unreachable block (ram,0x0001007b8e8c) */
/* WARNING: Removing unreachable block (ram,0x0001007b8e9c) */
/* WARNING: Removing unreachable block (ram,0x0001007b8ea8) */
/* WARNING: Removing unreachable block (ram,0x0001007b8eb0) */

void FUN_1007b8b88(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ID self;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ID unaff_x20;
  undefined1 *puVar12;
  code *pcVar13;
  long unaff_x21;
  long lVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  undefined1 auStack_e0 [16];
  long alStack_d0 [2];
  ID local_c0;
  undefined *local_b8;
  undefined *local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  undefined *local_80;
  undefined1 local_68 [8];
  undefined1 local_58;
  undefined7 uStack_57;
  
  puVar2 = &DAT_100abc950;
  FUN_1007b4550();
  lVar15 = (long)&local_c0 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_88 = lVar15;
  __s10Foundation4DateVMa();
  lVar14 = *(long *)(lVar3 + -8);
  lVar15 = lVar15 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100abc958;
  FUN_1007b4550();
  lVar17 = *(long *)(puVar2 + -8);
  lVar10 = lVar15 - (*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = param_1;
  local_80 = puVar2;
  FUN_10003f030(param_1,uVar5);
  FUN_1007ba054();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar10,&DAT_1009eafa8,&DAT_1009eafa8,lVar4,uVar5,uVar7);
  if (unaff_x21 != 0) {
    FUN_10003f094(param_1);
    return;
  }
  local_a8 = lVar14;
  local_a0 = lVar15;
  local_98 = lVar3;
  local_90 = lVar17;
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  self = _objc_msgSend(unaff_x20,"init");
  puVar1 = local_80;
  local_58 = 0;
  puVar12 = &local_58;
  puVar6 = local_80;
  __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF(puVar12);
  FUN_1007d6b40(0);
  _objc_allocWithZone();
  _swift_bridgeObjectRetain(puVar6);
  FUN_1007d6664(puVar12,puVar6);
  _swift_bridgeObjectRelease(puVar6);
  _objc_msgSend(self,"setEventId:",puVar12);
  uVar5 = 0;
  FUN_1007ba60c(0,&DAT_100abc968,&PTR_SentryMessage_100a65988);
  local_68[0] = 1;
  puVar2 = &DAT_100abc970;
  FUN_1007ba338(&DAT_100abc970,&DAT_100abc968,&PTR_SentryMessage_100a65988,
                &TargetProtocolConformanceDescriptor_100853288);
  __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
            (&local_58,uVar5,local_68,puVar1,uVar5,puVar2);
  local_b0 = puVar6;
  _objc_msgSend(self,"setMessage:",CONCAT71(uStack_57,local_58));
  local_58 = 2;
  puVar2 = &DAT_100a78008;
  FUN_100005c90(&DAT_100a78008,PTR___s10Foundation4DateVMa_100996208,
                PTR___s10Foundation4DateVSeAAMc_100996228);
  lVar15 = local_98;
  lVar3 = local_a0;
  lVar14 = local_98;
  local_b8 = puVar2;
  __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
            (local_a0,local_98,&local_58,puVar1,local_98,puVar2);
  local_c0 = self;
  __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
  lVar4 = local_a8;
  pcVar16 = *(code **)(local_a8 + 8);
  (*pcVar16)(lVar3,lVar15);
  _objc_msgSend(self,"setTimestamp:",lVar14);
  lVar3 = local_88;
  local_58 = 3;
  __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
            (local_88,lVar15,&local_58,puVar1,lVar15,local_b8);
  lVar14 = lVar3;
  (**(code **)(lVar4 + 0x30))(lVar3,1,lVar15);
  if ((int)lVar14 == 1) {
    lVar14 = 0;
  }
  else {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (*pcVar16)(lVar3,lVar15);
  }
  _objc_msgSend(self,"setStartTimestamp:",lVar14);
  local_58 = 4;
  puVar12 = &local_58;
  puVar2 = puVar1;
  __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar12);
  if (puVar2 == (undefined *)0x0) {
    _objc_msgSend((ID)&objc::class_t::SentryLevelBridge,"setBreadcrumbLevelOnEvent:level:",self,0);
  }
  else {
    FUN_1007ce044();
    _objc_msgSend((ID)&objc::class_t::SentryLevelBridge,"setBreadcrumbLevelOnEvent:level:",self,
                  puVar12);
    _swift_bridgeObjectRelease(puVar2);
  }
  local_58 = 5;
  puVar12 = &local_58;
  puVar2 = puVar1;
  __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF(puVar12,puVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(puVar2);
  _objc_msgSend(self,"setPlatform:",puVar12);
  local_58 = 6;
  puVar12 = &local_58;
  puVar2 = puVar1;
  __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar12);
  if (puVar2 == (undefined *)0x0) {
    puVar12 = (undefined1 *)0x0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(puVar2);
  }
  _objc_msgSend(self,"setLogger:",puVar12);
  local_58 = 7;
  puVar12 = &local_58;
  puVar2 = puVar1;
  __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar12);
  if (puVar2 == (undefined *)0x0) {
    puVar12 = (undefined1 *)0x0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(puVar2);
  }
  _objc_msgSend(self,"setServerName:",puVar12);
  local_58 = 8;
  puVar12 = &local_58;
  puVar2 = puVar1;
  __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar12);
  if (puVar2 == (undefined *)0x0) {
    puVar12 = (undefined1 *)0x0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(puVar2);
  }
  _objc_msgSend(self,"setReleaseName:",puVar12);
  local_58 = 9;
  puVar12 = &local_58;
  puVar2 = puVar1;
  __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar12);
  if (puVar2 == (undefined *)0x0) {
    puVar12 = (undefined1 *)0x0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(puVar2);
  }
  _objc_msgSend(self,"setDist:",puVar12);
  local_58 = 10;
  puVar12 = &local_58;
  puVar2 = puVar1;
  __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar12);
  if (puVar2 == (undefined *)0x0) {
    puVar12 = (undefined1 *)0x0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(puVar2);
  }
  _objc_msgSend(self,"setEnvironment:",puVar12);
  local_58 = 0xb;
  puVar12 = &local_58;
  puVar2 = puVar1;
  __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar12);
  if (puVar2 == (undefined *)0x0) {
    puVar12 = (undefined1 *)0x0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(puVar2);
  }
  _objc_msgSend(self,"setTransaction:",puVar12);
  local_58 = 0xc;
  puVar12 = &local_58;
  puVar2 = puVar1;
  __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar12);
  if (puVar2 == (undefined *)0x0) {
    puVar12 = (undefined1 *)0x0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(puVar2);
  }
  _objc_msgSend(self,"setType:",puVar12);
  puVar2 = &DAT_100abc978;
  FUN_1007b4550(&DAT_100abc978);
  local_68[0] = 0xd;
  puVar6 = puVar2;
  FUN_1007ba248();
  __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
            (&local_58,puVar2,local_68,puVar1,puVar2,puVar6);
  lVar4 = CONCAT71(uStack_57,local_58);
  local_88 = unaff_x21;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar4;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar4,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,PTR___sSSSHsWP_100995808);
    _swift_bridgeObjectRelease(lVar4);
  }
  _objc_msgSend(self,"setTags:",lVar3);
  *(long *)(lVar10 + -0x10) = lVar10;
  pcVar16 = FUN_1007ba2a4;
  FUN_1007c2110(FUN_1007ba2a4,lVar10 + -0x20);
  if (pcVar16 == (code *)0x0) {
    pcVar13 = (code *)0x0;
  }
  else {
    pcVar13 = pcVar16;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(pcVar16);
  }
  _objc_msgSend(self,"setExtra:",pcVar13);
  *(long *)(lVar10 + -0x10) = lVar10;
  pcVar16 = FUN_1007ba2c0;
  FUN_1007c2110(FUN_1007ba2c0,lVar10 + -0x20);
  if (pcVar16 == (code *)0x0) {
    pcVar13 = (code *)0x0;
  }
  else {
    pcVar13 = pcVar16;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(pcVar16);
  }
  _objc_msgSend(self,"setSdk:",pcVar13);
  local_68[0] = 0x10;
  __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
            (&local_58,puVar2,local_68,puVar1,puVar2,puVar6);
  if (local_88 != 0) {
    _swift_bridgeObjectRelease(local_b0);
    (**(code **)(local_90 + 8))(lVar10,puVar1);
    FUN_10003f094(param_1);
    return;
  }
  lVar4 = CONCAT71(uStack_57,local_58);
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar4;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar4,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,PTR___sSSSHsWP_100995808);
    _swift_bridgeObjectRelease(lVar4);
  }
  _objc_msgSend(self,"setModules:",lVar3);
  puVar2 = &DAT_100abc7b8;
  FUN_1007b4550(&DAT_100abc7b8);
  local_68[0] = 0x11;
  puVar6 = puVar2;
  FUN_1007ba2dc();
  __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
            (&local_58,puVar2,local_68,puVar1,puVar2,puVar6);
  lVar4 = CONCAT71(uStack_57,local_58);
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar4;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,PTR___sSSN_1009957f8);
    _swift_bridgeObjectRelease(lVar4);
  }
  _objc_msgSend(self,"setFingerprint:",lVar3);
  uVar5 = 0;
  FUN_1007ba60c(0,&DAT_100abc980,&PTR_SentryUser_100a65ab0);
  local_68[0] = 0x12;
  puVar2 = &DAT_100abc988;
  FUN_1007ba338(&DAT_100abc988,&DAT_100abc980,&PTR_SentryUser_100a65ab0,
                &TargetProtocolConformanceDescriptor_100851470);
  __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
            (&local_58,uVar5,local_68,puVar1,uVar5,puVar2);
  _objc_msgSend(self,"setUser:",CONCAT71(uStack_57,local_58));
  *(long *)(lVar10 + -0x10) = lVar10;
  pcVar16 = FUN_1007ba378;
  FUN_1007c2224(FUN_1007ba378,lVar10 + -0x20);
  if (pcVar16 == (code *)0x0) {
    pcVar13 = (code *)0x0;
  }
  else {
    puVar2 = &DAT_100abc780;
    FUN_1007b4550(&DAT_100abc780);
    pcVar13 = pcVar16;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (pcVar16,PTR___sSSN_1009957f8,puVar2,PTR___sSSSHsWP_100995808);
    _swift_bridgeObjectRelease(pcVar16);
  }
  _objc_msgSend(self,"setContext:",pcVar13);
  puVar2 = &DAT_100abc990;
  FUN_1007b4550(&DAT_100abc990);
  local_68[0] = 0x14;
  puVar6 = &DAT_100abc998;
  FUN_1007ba414(&DAT_100abc998,&DAT_100abc990,FUN_1007ba390);
  __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
            (&local_58,puVar2,local_68,puVar1,puVar2,puVar6);
  lVar4 = CONCAT71(uStack_57,local_58);
  if (lVar4 != 0) {
    if (*(long *)(lVar4 + 0x10) == 0) {
LAB_1007b9ad4:
      uVar5 = 0;
    }
    else {
      _swift_bridgeObjectRetain(lVar4);
      lVar3 = 0x7365756c6176;
      uVar9 = 0;
      FUN_1001a2c70();
      if ((uVar9 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar4);
        goto LAB_1007b9ad4;
      }
      uVar11 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar3 * 8);
      _swift_bridgeObjectRetain(uVar11);
      _swift_bridgeObjectRelease(lVar4);
      uVar7 = 0;
      FUN_1007ba60c(0,&DAT_100abc9b8,&PTR_SentryThread_100a65f00);
      uVar5 = uVar11;
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar11,uVar7);
      _swift_bridgeObjectRelease(uVar11);
    }
    _objc_msgSend(self,"setThreads:",uVar5);
    _swift_bridgeObjectRelease(lVar4);
  }
  puVar2 = &DAT_100abc9c0;
  FUN_1007b4550(&DAT_100abc9c0);
  local_68[0] = 0x15;
  puVar6 = &DAT_100abc9c8;
  FUN_1007ba414(&DAT_100abc9c8,&DAT_100abc9c0,FUN_1007ba480);
  __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
            (&local_58,puVar2,local_68,puVar1,puVar2,puVar6);
  lVar4 = CONCAT71(uStack_57,local_58);
  if (lVar4 != 0) {
    if (*(long *)(lVar4 + 0x10) == 0) {
LAB_1007b9c28:
      uVar5 = 0;
    }
    else {
      _swift_bridgeObjectRetain(lVar4);
      lVar3 = 0x7365756c6176;
      uVar9 = 0;
      FUN_1001a2c70();
      if ((uVar9 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar4);
        goto LAB_1007b9c28;
      }
      uVar11 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar3 * 8);
      _swift_bridgeObjectRetain(uVar11);
      _swift_bridgeObjectRelease(lVar4);
      uVar7 = 0;
      FUN_1007ba60c(0,&DAT_100a8c7e0,&PTR_SentryException_100a65ac0);
      uVar5 = uVar11;
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar11,uVar7);
      _swift_bridgeObjectRelease(uVar11);
    }
    _objc_msgSend(self,"setExceptions:",uVar5);
    _swift_bridgeObjectRelease(lVar4);
  }
  uVar5 = 0;
  FUN_1007ba60c(0,&DAT_100abc9e8,&PTR_SentryStacktrace_100a65f30);
  local_68[0] = 0x16;
  puVar8 = &DAT_100abc9f0;
  FUN_1007ba338(&DAT_100abc9f0,&DAT_100abc9e8,&PTR_SentryStacktrace_100a65f30,
                &TargetProtocolConformanceDescriptor_100852a64);
  __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
            (&local_58,uVar5,local_68,puVar1,uVar5,puVar8);
  _objc_msgSend(self,"setStacktrace:",CONCAT71(uStack_57,local_58));
  puVar2 = &DAT_100abc9f8;
  FUN_1007b4550(&DAT_100abc9f8);
  local_68[0] = 0x17;
  puVar6 = &DAT_100abca00;
  FUN_1007ba414(&DAT_100abca00,&DAT_100abc9f8,FUN_1007ba504);
  __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
            (&local_58,puVar2,local_68,puVar1,puVar2,puVar6);
  lVar4 = CONCAT71(uStack_57,local_58);
  if (lVar4 == 0) goto LAB_1007b9e40;
  if (*(long *)(lVar4 + 0x10) == 0) {
LAB_1007b9e10:
    uVar5 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lVar4);
    lVar3 = 0x736567616d69;
    uVar9 = 0;
    FUN_1001a2c70();
    if ((uVar9 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar4);
      goto LAB_1007b9e10;
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar3 * 8);
    _swift_bridgeObjectRetain(uVar11);
    _swift_bridgeObjectRelease(lVar4);
    uVar7 = 0;
    FUN_1007ba60c(0,&DAT_100abca20,&PTR_SentryDebugMeta_100a65f38);
    uVar5 = uVar11;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar11,uVar7);
    _swift_bridgeObjectRelease(uVar11);
  }
  _objc_msgSend(self,"setDebugMeta:",uVar5);
  _swift_bridgeObjectRelease(lVar4);
LAB_1007b9e40:
  puVar2 = &DAT_100abca28;
  FUN_1007b4550(&DAT_100abca28);
  local_68[0] = 0x18;
  puVar6 = puVar2;
  FUN_1007ba588();
  __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
            (&local_58,puVar2,local_68,puVar1,puVar2,puVar6);
  lVar4 = CONCAT71(uStack_57,local_58);
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  else {
    uVar5 = 0;
    FUN_1007ba60c(0,&DAT_100abca40,&PTR_SentryBreadcrumb_100a66080);
    lVar3 = lVar4;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,uVar5);
    _swift_bridgeObjectRelease(lVar4);
  }
  _objc_msgSend(self,"setBreadcrumbs:",lVar3);
  uVar5 = 0;
  FUN_1007ba60c(0,&DAT_100abca48,&PTR_SentryRequest_100a66068);
  local_68[0] = 0x19;
  puVar2 = &DAT_100abca50;
  FUN_1007ba338(&DAT_100abca50,&DAT_100abca48,&PTR_SentryRequest_100a66068,
                &TargetProtocolConformanceDescriptor_100853590);
  __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
            (&local_58,uVar5,local_68,puVar1,uVar5,puVar2);
  _objc_msgSend(self,"setRequest:",CONCAT71(uStack_57,local_58));
  _swift_bridgeObjectRelease(local_b0);
  (**(code **)(local_90 + 8))(lVar10,puVar1);
  FUN_10003f094(param_1);
  return;
}

