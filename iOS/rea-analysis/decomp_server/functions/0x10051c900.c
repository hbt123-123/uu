// rea decompile_all
// name: FUN_10051c900
// address: 0x10051c900
// body: available
// range: 0x10051c900-0x10051c997 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10051c900(long param_1,undefined8 *param_2)

{
  long *unaff_x20;
  long unaff_x21;
  
  FUN_10053317c();
  if (unaff_x21 == 0) {
    FUN_10051c4d8();
    _swift_bridgeObjectRelease();
    if (param_1 == 0) {
      FUN_1004f98e4();
      _swift_allocError(&DAT_1009d03a0,param_2,0,0);
      param_2[1] = 0x10;
      *param_2 = 0;
      _swift_willThrow();
    }
    else {
      _swift_bridgeObjectRelease(*unaff_x20);
      *unaff_x20 = param_1;
    }
  }
  return;
}

