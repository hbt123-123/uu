// rea decompile_all
// name: FUN_1003b18d4
// address: 0x1003b18d4
// body: available
// range: 0x1003b18d4-0x1003b19f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003b199c to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003b18d4(undefined8 param_1)

{
  code *pcVar1;
  ID IVar2;
  long lVar3;
  ulong uVar4;
  
  IVar2 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar2 = NSFileManager::URLsForDirectory_inDomains_(IVar2,"URLsForDirectory:inDomains:",7,2);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(IVar2,lVar3);
  if (*(long *)(IVar2 + 0x10) != 0) {
    uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))
              (param_1,IVar2 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff)),lVar3);
    _swift_bridgeObjectRelease(IVar2);
    return;
  }
  _swift_bridgeObjectRelease(IVar2);
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,&DAT_d000000000000010,0x80000001008b3b40,
             "UUCommon/DataDirectoryPath.swift",0x20,2,0x10,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003b19f4);
  (*pcVar1)();
}

