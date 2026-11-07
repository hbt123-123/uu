// rea decompile_all
// name: FUN_10066622c
// address: 0x10066622c
// body: available
// range: 0x10066622c-0x1006662fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001006662a0) */

void FUN_10066622c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_100665cbc();
  uVar1 = 0;
  FUN_1006746d8(0);
  _swift_initStackObject();
  FUN_100673404(param_3,uVar1);
  uVar1 = param_1;
  _swift_bridgeObjectRetain(param_1);
  FUN_100673628();
  _swift_release(param_3);
  _swift_bridgeObjectRelease(param_1);
  _swift_bridgeObjectRelease(param_1);
  thunk_FUN_1006654ec(uVar1);
  return;
}

