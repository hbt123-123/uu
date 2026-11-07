// rea decompile_all
// name: FUN_1002a7244
// address: 0x1002a7244
// body: available
// range: 0x1002a7244-0x1002a73fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_1002a7244(undefined8 param_1,long param_2,ID param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  char *pcVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar1 = 0;
  local_68 = param_6;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar1 + -8);
  uVar5 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar9 = auStack_70 + -uVar5;
  lVar8 = (long)puVar9 - uVar5;
  IVar2 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar2 = NSFileManager::URLsForDirectory_inDomains_
                    (IVar2,"URLsForDirectory:inDomains:",param_4,param_5);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(IVar2,lVar1);
  pcVar4 = "suggestedFilename";
  IVar3 = _objc_msgSend(param_3,"suggestedFilename");
  if (IVar3 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    if (*(long *)(IVar2 + 0x10) != 0) {
      (**(code **)(lVar7 + 0x10))
                (puVar9,IVar2 + ((ulong)*(byte *)(lVar7 + 0x50) + 0x20 &
                                ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff)),lVar1);
      _swift_bridgeObjectRelease(IVar2);
      __s10Foundation3URLV22appendingPathComponentyACSSF(lVar8,IVar3,pcVar4);
      _swift_bridgeObjectRelease(pcVar4);
      (**(code **)(lVar7 + 8))(puVar9,lVar1);
      pcVar6 = *(code **)(lVar7 + 0x20);
      param_2 = lVar8;
      goto LAB_1002a73d0;
    }
    _swift_bridgeObjectRelease(pcVar4);
  }
  _swift_bridgeObjectRelease(IVar2);
  pcVar6 = *(code **)(lVar7 + 0x10);
LAB_1002a73d0:
  (*pcVar6)(param_1,param_2,lVar1);
  return local_68;
}

