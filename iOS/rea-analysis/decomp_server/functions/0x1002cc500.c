// rea decompile_all
// name: FUN_1002cc500
// address: 0x1002cc500
// body: available
// range: 0x1002cc500-0x1002cc5f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002cc500(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *plVar4;
  undefined1 auStack_90 [24];
  long local_78;
  undefined1 auStack_68 [24];
  
  plVar4 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar3 = *(undefined8 *)(plVar4[2] + 0x10);
  _os_unfair_lock_lock(uVar3);
  lVar1 = (long)plVar4 + *(long *)(*plVar4 + 0x60);
  _swift_beginAccess(lVar1,auStack_68,0x21,0);
  FUN_10007f314(lVar1 + 0x38,auStack_90,&DAT_100a83d20,0x1008188a8);
  FUN_100040bb4(auStack_90,&DAT_100a83d20,0x1008188a8);
  if (local_78 == 0) {
    FUN_100040bb4(lVar1 + 0x38,&DAT_100a83d20,0x1008188a8);
    FUN_1000b142c(param_1,lVar1 + 0x38);
    _swift_endAccess(auStack_68);
    _os_unfair_lock_unlock(uVar3);
    _swift_retain();
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1002cc5f4);
  (*pcVar2)();
}

