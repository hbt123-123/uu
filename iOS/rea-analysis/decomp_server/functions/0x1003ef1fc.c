// rea decompile_all
// name: FUN_1003ef1fc
// address: 0x1003ef1fc
// body: available
// range: 0x1003ef1fc-0x1003ef3e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003ef318) */

void FUN_1003ef1fc(undefined8 param_1)

{
  long lVar1;
  ID IVar2;
  undefined8 uVar3;
  char *pcVar4;
  long extraout_x8;
  undefined8 *puVar5;
  long *unaff_x20;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  
  lVar8 = *unaff_x20;
  lVar6 = *(long *)(lVar8 + 0x50);
  lVar1 = 0;
  __sSqMa(0,lVar6);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &stack0xffffffffffffff90 + -extraout_x8;
  IVar2 = unaff_x20[2];
  if (IVar2 != 0) {
    lVar1 = unaff_x20[3];
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar1,unaff_x20[4]);
    pcVar4 = "getDataForKey:";
    IVar2 = _objc_msgSend(IVar2,"getDataForKey:",lVar1);
    if (IVar2 != 0) {
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(IVar2);
      uVar3 = 0;
      __s10Foundation11JSONDecoderCMa();
      _swift_allocObject();
      __s10Foundation11JSONDecoderCACycfc();
      __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
                (puVar7,lVar6,IVar2,pcVar4,lVar6,*(undefined8 *)(lVar8 + 0x58));
      FUN_100006cdc(IVar2,pcVar4);
      _swift_release(uVar3);
      lVar1 = *(long *)(lVar6 + -8);
      (**(code **)(lVar1 + 0x38))(puVar7,0,1,lVar6);
      puVar5 = (undefined8 *)(lVar1 + 0x20);
      goto LAB_1003ef378;
    }
  }
  puVar7 = (undefined1 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78));
  puVar5 = (undefined8 *)(*(long *)(lVar6 + -8) + 0x10);
LAB_1003ef378:
  (*(code *)*puVar5)(param_1,puVar7,lVar6);
  return;
}

