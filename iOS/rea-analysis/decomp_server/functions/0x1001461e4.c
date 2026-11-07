// rea decompile_all
// name: FUN_1001461e4
// address: 0x1001461e4
// body: available
// range: 0x1001461e4-0x1001462cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001461e4(long param_1,undefined8 param_2)

{
  long *plVar1;
  code *pcVar2;
  undefined8 local_50;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    FUN_100401b14(0);
    FUN_1003fb45c(FUN_100149758,param_2,0xd0000000000000ab,0x8000000100891c00,0x286b736154646461,
                  0xee00293a6b736174,0x35,7);
    plVar1 = *(long **)(param_1 + 0x20);
    pcVar2 = *(code **)(*plVar1 + 0x88);
    local_50 = param_2;
    _swift_retain(plVar1);
    (*pcVar2)(&local_50);
    _swift_release(plVar1);
    FUN_1001468fc();
    _swift_release(param_1);
  }
  return;
}

