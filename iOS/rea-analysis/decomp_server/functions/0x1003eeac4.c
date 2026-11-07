// rea decompile_all
// name: FUN_1003eeac4
// address: 0x1003eeac4
// body: available
// range: 0x1003eeac4-0x1003eee0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003eee0c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1003eeac4(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ID self;
  ID IVar5;
  char *pcVar6;
  char *pcVar7;
  long extraout_x8;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auStack_80 [4];
  uint local_7c;
  ulong local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  puVar2 = &_OBJC_CLASS___NSTask;
  _objc_allocWithZone();
  IVar3 = _objc_msgSend((ID)puVar2,"init");
  __s10Foundation3URLV15fileURLWithPathACSSh_tcfC
            (auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,param_3);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  (**(code **)(lVar10 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  _objc_msgSend(IVar3,"setExecutableURL:",param_2);
  puVar2 = PTR___sSSN_1009957f8;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_4,PTR___sSSN_1009957f8);
  _objc_msgSend(IVar3,"setArguments:",param_4);
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (param_5,puVar2,puVar2,PTR___sSSSHsWP_100995808);
  _objc_msgSend(IVar3,"setEnvironment:",param_5);
  puVar2 = &_OBJC_CLASS___NSPipe;
  _objc_allocWithZone();
  IVar4 = _objc_msgSend((ID)puVar2,"init");
  puVar2 = &_OBJC_CLASS___NSPipe;
  _objc_allocWithZone();
  self = _objc_msgSend((ID)puVar2,"init");
  _objc_msgSend(IVar3,"setStandardOutput:",IVar4);
  _objc_msgSend(IVar3,"setStandardError:",self);
  local_70 = 0;
  IVar5 = _objc_msgSend(IVar3,"launchAndReturnError:",&local_70);
  if ((int)IVar5 == 0) {
    uVar9 = local_70;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _swift_willThrow(0);
    IVar3 = 0;
    pcVar6 = (char *)0x0;
    IVar4 = 0;
    uVar8 = 0;
  }
  else {
    _objc_msgSend(IVar3,"waitUntilExit");
    IVar3 = _objc_msgSend(IVar3,"terminationStatus");
    local_7c = (uint)IVar3;
    IVar3 = _objc_msgSend(IVar4,"fileHandleForReading");
    pcVar6 = "availableData";
    IVar3 = _objc_msgSend(IVar3,"availableData");
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    IVar4 = _objc_msgSend(self,"fileHandleForReading");
    pcVar7 = "availableData";
    IVar4 = _objc_msgSend(IVar4,"availableData");
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    uVar9 = (ulong)local_7c;
    uVar8 = (ulong)pcVar7 | 0x2000000000000000;
  }
  *param_1 = uVar9;
  param_1[1] = IVar3;
  param_1[2] = (ulong)pcVar6;
  param_1[3] = IVar4;
  param_1[4] = uVar8;
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

