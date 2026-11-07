// rea decompile_all
// name: FUN_100224b8c
// address: 0x100224b8c
// body: available
// range: 0x100224b8c-0x100224d63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_100224b8c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  local_70 = 0xd000000000000026;
  uStack_68 = 0x80000001008a62c0;
  __sSS6appendyySSF();
  uVar1 = uStack_68;
  uVar5 = local_70;
  local_70 = 0xd00000000000001b;
  uStack_68 = 0x80000001008a62f0;
  __sSS6appendyySSF(param_1,param_2);
  uVar2 = uStack_68;
  uVar6 = local_70;
  IVar4 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  IVar4 = NSUserDefaults::objectForKey_(IVar4,"objectForKey:",uVar5);
  if (IVar4 == 0) {
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    FUN_100224220(&local_70);
    IVar4 = NSUserDefaults::standardUserDefaults
                      ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,uVar2);
    _swift_bridgeObjectRelease(uVar2);
    IVar4 = NSUserDefaults::objectForKey_(IVar4,"objectForKey:",uVar6);
    bVar3 = IVar4 != 0;
    if (IVar4 == 0) {
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_70,IVar4);
      _swift_unknownObjectRelease(IVar4);
    }
    FUN_100224220(&local_70);
  }
  else {
    _swift_bridgeObjectRelease(uVar2);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_70,IVar4);
    _swift_unknownObjectRelease(IVar4);
    FUN_100224220(&local_70);
    bVar3 = true;
  }
  return bVar3;
}

