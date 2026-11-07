// rea decompile_all
// name: SentryDebugImageProvider::getDebugImagesCrashed:
// address: 0x1007650d0
// body: available
// range: 0x1007650d0-0x1007651d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007651d4 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x14 bytes */

ID SentryDebugImageProvider::getDebugImagesCrashed_(ID param_1,SEL param_2,bool param_3)

{
  ID self;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  self = objc_stub::new((ID)&_OBJC_CLASS___NSMutableArray);
  IVar1 = objc_stub::FUN_1007e5da0(param_1);
  IVar1 = objc_stub::FUN_1007ea720(IVar1);
  if (0 < (long)IVar1) {
    IVar3 = 0;
    do {
      IVar2 = objc_stub::FUN_1007e5da0(param_1);
      if (IVar2 == 0) {
        uStack_58 = 0;
        local_60 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_78 = 0;
        local_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        objc_stub::FUN_1007ea2e0(IVar2,&local_80,IVar3,(ulong)param_3);
      }
      uStack_b8 = uStack_78;
      local_c0 = local_80;
      uStack_a8 = uStack_68;
      uStack_b0 = uStack_70;
      uStack_98 = uStack_58;
      local_a0 = local_60;
      uStack_88 = uStack_48;
      uStack_90 = uStack_50;
      IVar2 = objc_stub::FUN_1007e9b20(param_1,&local_c0);
      objc_stub::addObject_(self,IVar2);
      IVar3 = IVar3 + 1;
    } while (IVar1 != IVar3);
  }
  return self;
}

