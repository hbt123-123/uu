// rea decompile_all
// name: FUN_10040987c
// address: 0x10040987c
// body: available
// range: 0x10040987c-0x10040992b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10040987c(undefined8 *param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (DAT_100a89248 != -1) {
    param_3 = FUN_1003ab4b8;
    _swift_once(&DAT_100a89248);
  }
  uVar1 = 0;
  FUN_10070613c();
  FUN_100706078();
  uVar2 = uVar1;
  FUN_100260d74();
  _swift_release(uVar1);
  *param_1 = 0x2d6d617261502d58;
  param_1[1] = 0xec0000004e474953;
  param_1[2] = 0x2d6d617261702d78;
  param_1[3] = 0xe800000000000000;
  param_1[4] = uVar2;
  param_1[5] = param_3;
  return;
}

