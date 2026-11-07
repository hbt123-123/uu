// rea decompile_all
// name: FUN_1002719b8
// address: 0x1002719b8
// body: available
// range: 0x1002719b8-0x100271b57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16]
FUN_1002719b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  long lVar2;
  ID IVar3;
  ID IVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar2 + -8);
  lVar6 = (long)&local_70 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (DAT_100a80df0 != -1) {
    _swift_once(&DAT_100a80df0,FUN_10027063c);
  }
  IVar4 = DAT_100b36428;
  IVar3 = DAT_100b36428;
  __s10Foundation4DateVACycfC(lVar6);
  __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
  (**(code **)(lVar7 + 8))(lVar6,lVar2);
  pcVar5 = "stringFromDate:";
  IVar4 = _objc_msgSend(IVar4,"stringFromDate:",IVar3);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar4);
  local_70 = 0;
  local_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x18);
  _swift_bridgeObjectRelease(local_68);
  local_70 = 0x676f4c5f61796f4d;
  local_68 = 0xee005b203a726567;
  __sSS6appendyySSF(IVar4,pcVar5);
  _swift_bridgeObjectRelease(pcVar5);
  __sSS6appendyySSF(0x205d,0xe200000000000000);
  __sSS6appendyySSF(param_1,param_2);
  __sSS6appendyySSF(0x203a,0xe200000000000000);
  __sSS6appendyySSF(param_3,param_4);
  auVar1._8_8_ = local_68;
  auVar1._0_8_ = local_70;
  return auVar1;
}

