// rea decompile_all
// name: FUN_1007ceac0
// address: 0x1007ceac0
// body: available
// range: 0x1007ceac0-0x1007cec6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001007cebbc) */
/* WARNING: Removing unreachable block (ram,0x0001007ceb7c) */

ID FUN_1007ceac0(ID param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ID IVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ID IVar7;
  undefined *puVar8;
  long lVar9;
  ID unaff_x20;
  long unaff_x21;
  long lVar10;
  undefined1 auStack_70 [8];
  undefined1 local_68 [8];
  undefined1 local_58 [8];
  
  puVar3 = &DAT_100abd278;
  FUN_1007b4550();
  lVar10 = *(long *)(puVar3 + -8);
  lVar9 = *(long *)(lVar10 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  IVar7 = param_1;
  FUN_10003f030(param_1,uVar1);
  IVar4 = IVar7;
  FUN_1007cec70();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_70 + -(lVar9 + 0xfU & 0xfffffffffffffff0),&DAT_1009ec380,&DAT_1009ec380,IVar4,
             uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_58[0] = 0;
    puVar5 = local_58;
    puVar8 = puVar3;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF(puVar5,puVar3);
    local_68[0] = 1;
    puVar6 = local_68;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(puVar6,puVar3);
    _swift_getObjCClassFromMetadata();
    _objc_allocWithZone();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar5,puVar8);
    IVar7 = _objc_msgSend(unaff_x20,"initWithDomain:code:",puVar5,puVar6);
    (**(code **)(lVar10 + 8))(auStack_70 + -(lVar9 + 0xfU & 0xfffffffffffffff0),puVar3);
    _swift_bridgeObjectRelease(puVar8);
    FUN_10003f094(param_1);
  }
  else {
    FUN_10003f094(param_1);
  }
  return IVar7;
}

