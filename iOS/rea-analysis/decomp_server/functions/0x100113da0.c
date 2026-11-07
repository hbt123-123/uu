// rea decompile_all
// name: FUN_100113da0
// address: 0x100113da0
// body: available
// range: 0x100113da0-0x100113ef3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100113da0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *self;
  undefined *puVar2;
  ID IVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(puVar4,param_1,param_2);
  self = &_OBJC_CLASS___NSBundle;
  _objc_allocWithZone();
  puVar2 = self;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  IVar3 = _objc_msgSend((ID)self,"initWithURL:",puVar2);
  if (IVar3 == 0) {
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
  else {
    IVar3 = _objc_msgSend(IVar3,"infoDictionary");
    if (IVar3 != 0) {
      __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                (IVar3,PTR___sSSN_1009957f8,PTR___sypN_100995e88 + 8,PTR___sSSSHsWP_100995808);
      (**(code **)(lVar5 + 8))(puVar4,lVar1);
      return IVar3;
    }
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
  return 0;
}

