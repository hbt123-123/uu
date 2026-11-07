// rea decompile_all
// name: FUN_1007bc068
// address: 0x1007bc068
// body: available
// range: 0x1007bc068-0x1007bc4a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001007bc1dc) */
/* WARNING: Removing unreachable block (ram,0x0001007bc420) */
/* WARNING: Removing unreachable block (ram,0x0001007bc44c) */
/* WARNING: Removing unreachable block (ram,0x0001007bc140) */

ID FUN_1007bc068(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID unaff_x20;
  undefined1 *puVar8;
  long unaff_x21;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  undefined *local_78;
  undefined1 local_68 [8];
  undefined1 local_58;
  undefined7 uStack_57;
  
  puVar2 = &DAT_100abcb10;
  FUN_1007b4550();
  lVar10 = *(long *)(puVar2 + -8);
  puVar9 = auStack_80 + -(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  IVar5 = *(ID *)(param_1 + 0x20);
  lVar3 = param_1;
  FUN_10003f030(param_1,uVar6);
  FUN_1007bc4a4();
  puVar4 = &DAT_1009eb3f8;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (puVar9,&DAT_1009eb3f8,&DAT_1009eb3f8,lVar3,uVar6,IVar5);
  if (unaff_x21 == 0) {
    local_68[0] = 0;
    FUN_1007bbbd4();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_58,&DAT_1009eb530,local_68,puVar2,&DAT_1009eb530,puVar4);
    lVar3 = CONCAT71(uStack_57,local_58);
    if (lVar3 != 0) {
      local_78 = puVar4;
      _swift_getObjCClassFromMetadata();
      _objc_allocWithZone();
      IVar5 = _objc_msgSend(unaff_x20,"initWithThreadId:",lVar3);
      local_58 = 1;
      puVar8 = &local_58;
      puVar4 = puVar2;
      __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar8);
      if (puVar4 == (undefined *)0x0) {
        puVar8 = (undefined1 *)0x0;
      }
      else {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(puVar4);
      }
      puVar4 = local_78;
      _objc_msgSend(IVar5,"setName:",puVar8);
      uVar7 = 0;
      FUN_1007bc534(0);
      local_68[0] = 2;
      uVar6 = uVar7;
      FUN_1007bc570();
      __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
                (&local_58,uVar7,local_68,puVar2,uVar7,uVar6);
      _objc_msgSend(IVar5,"setStacktrace:",CONCAT71(uStack_57,local_58));
      local_68[0] = 3;
      __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
                (&local_58,&DAT_1009eb530,local_68,puVar2,&DAT_1009eb530,puVar4);
      lVar1 = CONCAT71(uStack_57,local_58);
      lVar3 = 0;
      if (lVar1 != 1) {
        lVar3 = lVar1;
      }
      _objc_msgSend(IVar5,"setCrashed:",lVar3);
      FUN_1007bbc18(lVar1);
      local_68[0] = 4;
      __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
                (&local_58,&DAT_1009eb530,local_68,puVar2,&DAT_1009eb530,puVar4);
      lVar1 = CONCAT71(uStack_57,local_58);
      lVar3 = 0;
      if (lVar1 != 1) {
        lVar3 = lVar1;
      }
      _objc_msgSend(IVar5,"setCurrent:",lVar3);
      FUN_1007bbc18(lVar1);
      local_68[0] = 5;
      __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
                (&local_58,&DAT_1009eb530,local_68,puVar2,&DAT_1009eb530,puVar4);
      lVar1 = CONCAT71(uStack_57,local_58);
      lVar3 = 0;
      if (lVar1 != 1) {
        lVar3 = lVar1;
      }
      _objc_msgSend(IVar5,"setIsMain:",lVar3);
      (**(code **)(lVar10 + 8))(puVar9,puVar2);
      FUN_1007bbc18(lVar1);
      FUN_10003f094(param_1);
      return IVar5;
    }
    local_58 = 0;
    uVar6 = 0;
    __ss13DecodingErrorOMa(0);
    puVar4 = PTR___ss13DecodingErrorOs0B0sWP_100995b18;
    _swift_allocError();
    FUN_1007bc4e8();
    __ss13DecodingErrorO013dataCorruptedB06forKey2in16debugDescriptionAB0F0Qz_xSSts05KeyedA17ContainerProtocolRzlFZ
              (puVar4,&local_58,puVar9,&DAT_d00000000000003b,0x80000001008da950,puVar2,uVar6);
    (**(code **)(lVar10 + 8))(puVar9,puVar2);
    _swift_willThrow();
  }
  FUN_10003f094(param_1);
  return IVar5;
}

