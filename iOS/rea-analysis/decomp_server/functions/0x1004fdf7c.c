// rea decompile_all
// name: FUN_1004fdf7c
// address: 0x1004fdf7c
// body: available
// range: 0x1004fdf7c-0x1004fdffb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004fdf7c(undefined8 *param_1)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  if (*(char *)((long)unaff_x20 + 0x21) == '\x01') {
    if (unaff_x20[1] < 8) {
      FUN_100506290();
      _swift_allocError(&DAT_1009cdf18,param_1,0,0);
      *(undefined1 *)param_1 = 1;
      _swift_willThrow();
    }
    else {
      uVar1 = *(undefined8 *)*unaff_x20;
      *unaff_x20 = (long)((undefined8 *)*unaff_x20 + 1);
      unaff_x20[1] = unaff_x20[1] + -8;
      *param_1 = uVar1;
      *(undefined1 *)(unaff_x20 + 4) = 1;
    }
  }
  return;
}

