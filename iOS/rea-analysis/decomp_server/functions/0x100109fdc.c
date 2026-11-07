// rea decompile_all
// name: FUN_100109fdc
// address: 0x100109fdc
// body: available
// range: 0x100109fdc-0x10010a2d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100109fdc(ID param_1)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  ID IVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_80 [16];
  ID *local_70;
  ID local_60;
  char *pcStack_58;
  
  pcVar8 = "TIFFRepresentation";
  IVar1 = _objc_msgSend(param_1,"TIFFRepresentation");
  if (IVar1 != 0) {
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    puVar2 = &_OBJC_CLASS___NSBitmapImageRep;
    _objc_allocWithZone();
    FUN_100008184(IVar1,pcVar8);
    IVar3 = IVar1;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(IVar1,pcVar8);
    IVar3 = _objc_msgSend((ID)puVar2,"initWithData:",IVar3);
    FUN_100006cdc(IVar1,pcVar8);
    if (IVar3 != 0) {
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
      pcVar9 = "representationUsingType:properties:";
      IVar3 = _objc_msgSend(IVar3,"representationUsingType:properties:",4,puVar6);
      if (IVar3 != 0) {
        __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
        local_60 = IVar3;
        pcStack_58 = pcVar9;
        FUN_1003ee76c(0);
        FUN_100008184(IVar3,pcVar9);
        IVar7 = IVar3;
        pcVar10 = pcVar9;
        FUN_1003ec478(0x4092c00000000000);
        if ((ulong)pcVar10 >> 0x3c < 0xf) {
          FUN_100006cdc(IVar3,pcVar9);
          local_60 = IVar7;
          pcStack_58 = pcVar10;
        }
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_70 = &local_60;
        FUN_1003fb48c(FUN_10010a380,auStack_80,0xd000000000000097,0x8000000100889170,
                      0xd000000000000016,0x800000010088ae70,0xdd,0);
        FUN_100006cdc(IVar1,pcVar8);
        FUN_100006cdc(IVar3,pcVar9);
        pcVar8 = pcStack_58;
        IVar1 = local_60;
        FUN_100008184(local_60,pcStack_58);
        FUN_100006cdc(IVar1,pcVar8);
        goto LAB_10010a2b8;
      }
    }
    FUN_100006cdc(IVar1,pcVar8);
  }
  FUN_100401b14(0);
  FUN_1003fb4ec(FUN_10010538c,0,0xd000000000000097,0x8000000100889170,0xd000000000000016,
                0x800000010088ae70,0xd3,0);
  IVar1 = 0;
  pcVar8 = (char *)0xf000000000000000;
LAB_10010a2b8:
  auVar11._8_8_ = pcVar8;
  auVar11._0_8_ = IVar1;
  return auVar11;
}

