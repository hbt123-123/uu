// rea decompile_all
// name: FUN_1003ab9e0
// address: 0x1003ab9e0
// body: available
// range: 0x1003ab9e0-0x1003abaef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003ab9e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  ID IVar1;
  long extraout_x8;
  ID unaff_x20;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(param_2);
  lVar3 = *(long *)(param_3 + 0x18);
  if (lVar3 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    FUN_10003f030(param_3,lVar3);
    lVar5 = *(long *)(lVar3 + -8);
    (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar5 + 0x40));
    puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar5 + 0x10))(puVar4);
    puVar2 = puVar4;
    __ss27_bridgeAnythingToObjectiveCyyXlxlF(puVar4,lVar3);
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
    FUN_10003f094(param_3);
  }
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  IVar1 = _objc_msgSend(unaff_x20,"initWithServerURL:launchOptions:",param_1,puVar2);
  _swift_unknownObjectRelease(puVar2);
  return IVar1;
}

