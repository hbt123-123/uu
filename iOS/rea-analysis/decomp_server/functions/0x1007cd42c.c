// rea decompile_all
// name: FUN_1007cd42c
// address: 0x1007cd42c
// body: available
// range: 0x1007cd42c-0x1007cd6df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001007cd634) */
/* WARNING: Removing unreachable block (ram,0x0001007cd4e8) */

ID FUN_1007cd42c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ID unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  long unaff_x21;
  long lVar9;
  undefined1 auStack_90 [8];
  ID local_88;
  undefined *local_80;
  undefined1 local_78 [8];
  long local_70;
  undefined1 local_68 [8];
  undefined1 local_58 [8];
  
  puVar2 = &DAT_100abd1c0;
  FUN_1007b4550();
  lVar9 = *(long *)(puVar2 + -8);
  lVar6 = *(long *)(lVar9 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  IVar3 = *(ID *)(param_1 + 0x20);
  lVar8 = param_1;
  FUN_10003f030(param_1,uVar1);
  FUN_1007cd6e0();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_90 + -(lVar6 + 0xfU & 0xfffffffffffffff0),&DAT_1009ec058,&DAT_1009ec058,lVar8,
             uVar1,IVar3);
  if (unaff_x21 == 0) {
    local_58[0] = 0;
    puVar7 = local_58;
    puVar4 = puVar2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF(puVar7);
    _swift_getObjCClassFromMetadata();
    _objc_allocWithZone();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar7,puVar4);
    IVar3 = _objc_msgSend(unaff_x20,"initWithFormatted:",puVar7);
    local_68[0] = 1;
    puVar7 = local_68;
    puVar5 = puVar2;
    local_80 = puVar4;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar7);
    local_88 = IVar3;
    if (puVar5 == (undefined *)0x0) {
      puVar7 = (undefined1 *)0x0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar5);
    }
    _objc_msgSend(local_88,"setMessage:",puVar7);
    puVar4 = &DAT_100abc7b8;
    FUN_1007b4550(&DAT_100abc7b8);
    local_78[0] = 2;
    puVar5 = puVar4;
    FUN_1007ba2dc();
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_70,puVar4,local_78,puVar2,puVar4,puVar5);
    if (local_70 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = local_70;
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(local_70,PTR___sSSN_1009957f8);
      _swift_bridgeObjectRelease(local_70);
    }
    _objc_msgSend(local_88,"setParams:",lVar8);
    (**(code **)(lVar9 + 8))(auStack_90 + -(lVar6 + 0xfU & 0xfffffffffffffff0),puVar2);
    _swift_bridgeObjectRelease(local_80);
    FUN_10003f094(param_1);
  }
  else {
    FUN_10003f094(param_1);
  }
  return IVar3;
}

