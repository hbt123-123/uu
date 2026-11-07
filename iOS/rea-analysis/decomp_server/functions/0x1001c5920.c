// rea decompile_all
// name: FUN_1001c5920
// address: 0x1001c5920
// body: available
// range: 0x1001c5920-0x1001c59eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_1001c5920(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_allocObject();
  _swift_unknownObjectWeakInit(unaff_x20 + 0x10,0);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + 0x10,param_1);
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_1001c60b8,0,0xd000000000000095,0x8000000100885070,0x6665722874696e69,
                0xea0000000000293a,0x13,0);
  return unaff_x20;
}

