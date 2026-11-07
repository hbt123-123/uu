// rea decompile_all
// name: FUN_100260574
// address: 0x100260574
// body: available
// range: 0x100260574-0x1002605f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100260574(undefined8 param_1,code *param_2)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  
  if (DAT_100a7fea0 != -1) {
    param_2 = FUN_10025674c;
    _swift_once(&DAT_100a7fea0,FUN_10025674c);
  }
  plVar3 = *(long **)(DAT_100b36400 + 0x10);
  pcVar2 = *(code **)(*plVar3 + 0xb0);
  plVar1 = plVar3;
  _swift_retain(plVar3);
  (*pcVar2)();
  _swift_release(plVar3);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = plVar1;
  return auVar4;
}

