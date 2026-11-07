// rea decompile_all
// name: FUN_100224090
// address: 0x100224090
// body: available
// range: 0x100224090-0x1002241ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100224090(undefined8 param_1)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  code *pcVar6;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_48;
  
  local_60 = 0xd000000000000023;
  uStack_58 = 0x80000001008a6170;
  __sSS6appendyySSF();
  uVar1 = uStack_58;
  uVar3 = local_60;
  IVar2 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  IVar2 = NSUserDefaults::objectForKey_(IVar2,"objectForKey:",uVar3);
  if (IVar2 == 0) {
    uStack_78 = 0;
    local_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_80,IVar2);
    _swift_unknownObjectRelease(IVar2);
  }
  uStack_58 = uStack_78;
  local_60 = local_80;
  local_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    FUN_100224220(&local_60);
    lVar4 = 0;
    __s10Foundation4DateVMa();
    pcVar6 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
    uVar5 = 1;
  }
  else {
    lVar4 = 0;
    __s10Foundation4DateVMa();
    uVar3 = param_1;
    _swift_dynamicCast(param_1,&local_60,PTR___sypN_100995e88 + 8,lVar4,6);
    pcVar6 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
    uVar5 = (uint)uVar3 ^ 1;
  }
  (*pcVar6)(param_1,uVar5,1,lVar4);
  return;
}

