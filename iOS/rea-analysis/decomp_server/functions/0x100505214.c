// rea decompile_all
// name: FUN_100505214
// address: 0x100505214
// body: available
// range: 0x100505214-0x1005052cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100505214(undefined1 *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  long unaff_x21;
  
  if ((0 < *(long *)(unaff_x20 + 8)) && (FUN_1004fdea4(), unaff_x21 == 0)) {
    if ((param_1 < (undefined1 *)0xffffffff) && (FUN_1005163ec(), ((ulong)param_1 >> 0x20 & 1) == 0)
       ) {
      puVar1 = param_1;
      FUN_1005163d8();
      *(char *)(unaff_x20 + 0x21) = (char)puVar1;
      *(ulong *)(unaff_x20 + 0x28) = (ulong)param_1 >> 3 & 0x1fffffff;
    }
    else {
      FUN_100506290();
      _swift_allocError(&DAT_1009cdf18,param_1,0,0);
      *param_1 = 3;
      _swift_willThrow();
    }
  }
  return;
}

