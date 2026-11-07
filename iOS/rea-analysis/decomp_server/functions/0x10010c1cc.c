// rea decompile_all
// name: FUN_10010c1cc
// address: 0x10010c1cc
// body: available
// range: 0x10010c1cc-0x10010c283 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_10010c1cc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_allocObject();
  _swift_unknownObjectWeakInit(unaff_x20 + 0x10,0);
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined2 *)(unaff_x20 + 0x48) = 0x100;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined2 *)(unaff_x20 + 0x70) = 0x100;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined1 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined2 *)(unaff_x20 + 0x80) = 0x100;
  *(undefined4 *)(unaff_x20 + 0x88) = 0;
  *(undefined1 *)(unaff_x20 + 0x8c) = 1;
  *(code **)(unaff_x20 + 0x90) = thunk_FUN_1000f62a0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + 0x10,param_1);
  return unaff_x20;
}

