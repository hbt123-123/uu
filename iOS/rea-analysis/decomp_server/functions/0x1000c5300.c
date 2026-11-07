// rea decompile_all
// name: FUN_1000c5300
// address: 0x1000c5300
// body: available
// range: 0x1000c5300-0x1000c554b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000c5548 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

code * FUN_1000c5300(code *param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  if (((*(byte *)(unaff_x20 + 0x50) & 1) == 0) && (*(long *)(unaff_x20 + 0x30) == 0)) {
    puVar1 = &DAT_100a772e0;
    FUN_100004bb4(&DAT_100a772e0,&DAT_10080c098);
    _swift_initStaticObject();
    FUN_1000c72cc();
    lVar2 = 1;
    _CGEventTapCreate(1,1,1,puVar1,FUN_1000c5834);
    if (lVar2 != 0) {
      lVar3 = *(long *)PTR__kCFAllocatorDefault_1009953c8;
      _CFMachPortCreateRunLoopSource(lVar3,lVar2,0);
      if (lVar3 == 0) {
        _CFMachPortInvalidate(lVar2);
        FUN_100401b14(0);
        FUN_1003fb4bc(FUN_1000c5888,0,0xd0000000000000ac,0x8000000100884780,0x4e66497472617473,
                      0xef29286465646565,0x6e,0);
      }
      else {
        *(long *)(unaff_x20 + 0x30) = lVar2;
        *(long *)(unaff_x20 + 0x38) = lVar3;
        _CFRunLoopGetMain(0);
        _CFRunLoopAddSource();
        _CGEventTapEnable(lVar2,1);
        FUN_100401b14(0);
        FUN_1003fb48c(FUN_1000c58b4,0,0xd0000000000000ac,0x8000000100884780,0x4e66497472617473,
                      0xef29286465646565,0x77,0);
      }
      return (code *)0x0;
    }
    FUN_100401b14();
    param_1 = FUN_1000c5600;
    FUN_1003fb4bc(FUN_1000c5600,0,0xd0000000000000ac,0x8000000100884780,0x4e66497472617473,
                  0xef29286465646565,0x67,0);
  }
  return param_1;
}

