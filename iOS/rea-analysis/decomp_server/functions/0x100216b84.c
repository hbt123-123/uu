// rea decompile_all
// name: FUN_100216b84
// address: 0x100216b84
// body: available
// range: 0x100216b84-0x100216c33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100216b84(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4)

{
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x48,auStack_58,0x21,0);
  FUN_1001de460(param_3 & 0xffffffff000000ff,param_4);
  _swift_endAccess(auStack_58);
  _swift_beginAccess(param_2 + 0x40,auStack_58,0x21,0);
  FUN_10004bb5c(param_1,param_3 & 0xffffffff000000ff,param_4);
  _swift_endAccess(auStack_58);
  return;
}

