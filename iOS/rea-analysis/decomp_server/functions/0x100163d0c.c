// rea decompile_all
// name: FUN_100163d0c
// address: 0x100163d0c
// body: available
// range: 0x100163d0c-0x100163deb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100163d0c(long param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 == 0) {
    FUN_100401b14();
    FUN_1003fb48c(FUN_100163dec,0,0xd0000000000000a4,0x800000010088d870,&DAT_d000000000000030,
                  0x8000000100893660,0x325,0);
    if (param_2 != (code *)0x0) {
      (*param_2)(0);
    }
  }
  else {
    FUN_1001639b0(param_4,param_2,param_3);
  }
  return;
}

