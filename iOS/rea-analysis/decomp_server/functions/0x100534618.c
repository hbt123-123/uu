// rea decompile_all
// name: FUN_100534618
// address: 0x100534618
// body: available
// range: 0x100534618-0x1005346a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100534618(void)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  
  FUN_100535660();
  puVar1 = (undefined8 *)*unaff_x20;
  if (puVar1 == (undefined8 *)0x0) {
    if (unaff_x20[2] != 0) goto LAB_100534654;
  }
  else if (unaff_x20[2] != unaff_x20[1] - (long)puVar1) {
LAB_100534654:
    FUN_100534adc();
    return;
  }
  FUN_1004f98e4();
  _swift_allocError(&DAT_1009d03a0,puVar1,0,0);
  puVar1[1] = 0xd;
  *puVar1 = 0;
  _swift_willThrow();
  return;
}

