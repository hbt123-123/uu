// rea decompile_all
// name: FUN_1003eb674
// address: 0x1003eb674
// body: available
// range: 0x1003eb674-0x1003eb81f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_1003eb674(void)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  char *pcVar7;
  char *pcVar8;
  ID unaff_x20;
  undefined1 auVar9 [16];
  
  pcVar7 = "TIFFRepresentation";
  IVar1 = _objc_msgSend(unaff_x20,"TIFFRepresentation");
  if (IVar1 != 0) {
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    puVar2 = &_OBJC_CLASS___NSBitmapImageRep;
    _objc_allocWithZone();
    FUN_100008184(IVar1,pcVar7);
    IVar3 = IVar1;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(IVar1,pcVar7);
    IVar3 = _objc_msgSend((ID)puVar2,"initWithData:",IVar3);
    FUN_100006cdc(IVar1,pcVar7);
    if (IVar3 == 0) {
      FUN_100006cdc(IVar1,pcVar7);
    }
    else {
      puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_1000cbd50(PTR___swiftEmptyArrayStorage_100995ea0);
      uVar4 = 0;
      FUN_100005ef8(0);
      puVar5 = &DAT_100a752c0;
      FUN_100005c90(&DAT_100a752c0,FUN_100005ef8,&TargetProtocolConformanceDescriptor_100809344);
      puVar6 = puVar2;
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                (puVar2,uVar4,PTR___sypN_100995e88 + 8,puVar5);
      _swift_bridgeObjectRelease(puVar2);
      pcVar8 = "representationUsingType:properties:";
      IVar3 = _objc_msgSend(IVar3,"representationUsingType:properties:",4,puVar6);
      if (IVar3 != 0) {
        __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(IVar3);
        FUN_100006cdc(IVar1,pcVar7);
        goto LAB_1003eb80c;
      }
      FUN_100006cdc(IVar1,pcVar7);
    }
  }
  IVar3 = 0;
  pcVar8 = (char *)0xf000000000000000;
LAB_1003eb80c:
  auVar9._8_8_ = pcVar8;
  auVar9._0_8_ = IVar3;
  return auVar9;
}

