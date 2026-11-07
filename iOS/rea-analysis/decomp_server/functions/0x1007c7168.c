// rea decompile_all
// name: FUN_1007c7168
// address: 0x1007c7168
// body: available
// range: 0x1007c7168-0x1007c740b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001007c7394) */

ID FUN_1007c7168(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  ID self;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ID unaff_x20;
  long unaff_x21;
  code *pcVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 auStack_90 [2];
  undefined1 auStack_80 [8];
  undefined1 local_68 [8];
  undefined8 local_58;
  
  puVar3 = &DAT_100abcf80;
  FUN_1007b4550();
  lVar10 = *(long *)(puVar3 + -8);
  lVar2 = -(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_80 + lVar2;
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  self = _objc_msgSend(unaff_x20,"init");
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = param_1;
  FUN_10003f030(param_1,uVar6);
  FUN_1007c740c();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (puVar9,&DAT_1009eb9e0,&DAT_1009eb9e0,lVar4,uVar6,uVar1);
  if (unaff_x21 == 0) {
    *(undefined1 **)((long)auStack_90 + lVar2) = puVar9;
    pcVar5 = FUN_1007c7450;
    FUN_1007c2110();
    if (pcVar5 == (code *)0x0) {
      pcVar8 = (code *)0x0;
    }
    else {
      pcVar8 = pcVar5;
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
      _swift_bridgeObjectRelease(pcVar5);
    }
    _objc_msgSend(self,"setSignal:",pcVar8);
    *(undefined1 **)((long)auStack_90 + lVar2) = puVar9;
    pcVar5 = FUN_1007c74f4;
    FUN_1007c2110();
    if (pcVar5 == (code *)0x0) {
      pcVar8 = (code *)0x0;
    }
    else {
      pcVar8 = pcVar5;
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
      _swift_bridgeObjectRelease(pcVar5);
    }
    _objc_msgSend(self,"setMachException:",pcVar8);
    uVar6 = 0;
    FUN_1007c7510(0);
    local_68[0] = 2;
    puVar7 = &DAT_100abcf98;
    FUN_100005c90(&DAT_100abcf98,FUN_1007c7510,&TargetProtocolConformanceDescriptor_100853798);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_58,uVar6,local_68,puVar3,uVar6,puVar7);
    _objc_msgSend(self,"setError:",local_58);
    (**(code **)(lVar10 + 8))(puVar9,puVar3);
  }
  FUN_10003f094(param_1);
  return self;
}

