// rea decompile_all
// name: FUN_1007c78a8
// address: 0x1007c78a8
// body: available
// range: 0x1007c78a8-0x1007c7bc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001007c79f8) */
/* WARNING: Removing unreachable block (ram,0x0001007c7b1c) */
/* WARNING: Removing unreachable block (ram,0x0001007c7988) */

ID FUN_1007c78a8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  ID unaff_x20;
  long unaff_x21;
  long lVar9;
  undefined *local_70;
  undefined1 local_68 [8];
  undefined *local_58;
  
  puVar2 = &DAT_100abcfb8;
  FUN_1007b4550();
  lVar9 = *(long *)(puVar2 + -8);
  lVar8 = *(long *)(lVar9 + 0x40);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  FUN_10003f030(param_1,uVar7);
  FUN_1007c7bc4();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (local_68 + (-8 - (lVar8 + 0xfU & 0xfffffffffffffff0)),&DAT_1009ebb30,&DAT_1009ebb30,
             lVar3,uVar7,uVar1);
  if (unaff_x21 == 0) {
    puVar4 = &DAT_100abcfc8;
    FUN_1007b4550(&DAT_100abcfc8);
    local_68[0] = 0;
    puVar5 = puVar4;
    FUN_1007c7c08();
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_58,puVar4,local_68,puVar2,puVar4,puVar5);
    puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (local_58 != (undefined *)0x0) {
      puVar4 = local_58;
    }
    puVar5 = &DAT_100abc978;
    FUN_1007b4550(&DAT_100abc978);
    local_68[0] = 1;
    puVar6 = puVar5;
    FUN_1007ba248();
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_58,puVar5,local_68,puVar2,puVar5,puVar6);
    puVar5 = local_58;
    if (local_58 == (undefined *)0x0) {
      puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_1007c7e14();
    }
    local_70 = puVar5;
    _swift_getObjCClassFromMetadata();
    _objc_allocWithZone();
    uVar7 = 0;
    FUN_1007c7cb4(0);
    puVar6 = puVar4;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar4,uVar7);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (puVar5,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,PTR___sSSSHsWP_100995808);
    unaff_x20 = _objc_msgSend(unaff_x20,"initWithFrames:registers:",puVar6,puVar5);
    uVar7 = 0;
    local_68[0] = 2;
    FUN_1007bbbd4(0);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_58,&DAT_1009eb530,local_68,puVar2,&DAT_1009eb530,uVar7);
    puVar5 = (undefined *)0x0;
    if (local_58 != (undefined *)0x1) {
      puVar5 = local_58;
    }
    FUN_1007c7f10(local_58);
    _objc_msgSend(unaff_x20,"setSnapshot:",puVar5);
    (**(code **)(lVar9 + 8))(local_68 + (-8 - (lVar8 + 0xfU & 0xfffffffffffffff0)),puVar2);
    FUN_1007bbc18(local_58);
    FUN_1007bbc18(local_58);
    _swift_bridgeObjectRelease(puVar4);
    _swift_bridgeObjectRelease(local_70);
    FUN_10003f094(param_1);
  }
  else {
    FUN_10003f094(param_1);
  }
  return unaff_x20;
}

