// rea decompile_all
// name: FUN_100150570
// address: 0x100150570
// body: available
// range: 0x100150570-0x100150637 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100150570(undefined8 param_1,long param_2,ulong param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if ((param_2 != 0) && (FUN_1001512f0(), (param_3 & 1) != 0)) {
    FUN_100401b14(0);
    FUN_1003fb45c(FUN_100150638,0,0xd0000000000000b5,0x8000000100891cf0,0xd000000000000016,
                  0x8000000100892690,0x135,7);
    FUN_100152230();
    FUN_100151730();
  }
  return;
}

