// rea decompile_all
// name: FUN_1007d8978
// address: 0x1007d8978
// body: available
// range: 0x1007d8978-0x1007d8dcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001007d8bb4) */
/* WARNING: Removing unreachable block (ram,0x0001007d8a7c) */
/* WARNING: Removing unreachable block (ram,0x0001007d8d34) */
/* WARNING: Removing unreachable block (ram,0x0001007d8d54) */
/* WARNING: Removing unreachable block (ram,0x0001007d8a38) */

ID FUN_1007d8978(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  ID unaff_x20;
  long unaff_x21;
  long lVar10;
  undefined1 *puVar11;
  ID self;
  undefined *local_80;
  undefined *local_78;
  ID local_70;
  undefined1 local_68 [8];
  undefined1 local_58;
  undefined7 uStack_57;
  
  puVar3 = &DAT_100abd5c0;
  FUN_1007b4550();
  self = *(ID *)(puVar3 + -8);
  lVar10 = (long)&local_80 - (*(long *)(self + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = param_1;
  FUN_10003f030(param_1,uVar6);
  FUN_1007d8dcc();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar10,&DAT_1009ec640,&DAT_1009ec640,lVar4,uVar6,uVar1);
  if (unaff_x21 == 0) {
    local_58 = 0;
    puVar11 = &local_58;
    puVar7 = puVar3;
    local_70 = self;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF(puVar11);
    local_58 = 1;
    puVar5 = &local_58;
    puVar9 = puVar3;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF(puVar5);
    _swift_getObjCClassFromMetadata();
    _objc_allocWithZone();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar11,puVar7);
    local_80 = puVar9;
    local_78 = puVar7;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar5,puVar9);
    self = _objc_msgSend(unaff_x20,"initWithValue:type:",puVar11,puVar5);
    uVar6 = 0;
    FUN_1007ba60c(0,&DAT_100abd5d0,&PTR_SentryMechanism_100a65e90);
    local_68[0] = 2;
    puVar7 = &DAT_100abd5d8;
    FUN_1007ba338(&DAT_100abd5d8,&DAT_100abd5d0,&PTR_SentryMechanism_100a65e90,
                  &TargetProtocolConformanceDescriptor_100853084);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_58,uVar6,local_68,puVar3,uVar6,puVar7);
    puVar7 = local_78;
    _objc_msgSend(self,"setMechanism:",CONCAT71(uStack_57,local_58));
    local_58 = 3;
    puVar11 = &local_58;
    puVar9 = puVar3;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar11);
    if (puVar9 == (undefined *)0x0) {
      puVar11 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar9);
    }
    _objc_msgSend(self,"setModule:",puVar11);
    uVar6 = 0;
    local_68[0] = 4;
    FUN_1007bbbd4(0);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_58,&DAT_1009eb530,local_68,puVar3,&DAT_1009eb530,uVar6);
    lVar2 = CONCAT71(uStack_57,local_58);
    lVar4 = 0;
    if (lVar2 != 1) {
      lVar4 = lVar2;
    }
    _objc_msgSend(self,"setThreadId:",lVar4);
    FUN_1007bbc18(lVar2);
    uVar6 = 0;
    FUN_1007ba60c(0,&DAT_100abc9e8,&PTR_SentryStacktrace_100a65f30);
    local_68[0] = 5;
    puVar8 = &DAT_100abc9f0;
    FUN_1007ba338(&DAT_100abc9f0,&DAT_100abc9e8,&PTR_SentryStacktrace_100a65f30,
                  &TargetProtocolConformanceDescriptor_100852a64);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_58,uVar6,local_68,puVar3,uVar6,puVar8);
    _objc_msgSend(self,"setStacktrace:",CONCAT71(uStack_57,local_58));
    (**(code **)(local_70 + 8))(lVar10,puVar3);
    _swift_bridgeObjectRelease(puVar7);
    _swift_bridgeObjectRelease(local_80);
    FUN_10003f094(param_1);
  }
  else {
    FUN_10003f094(param_1);
  }
  return self;
}

