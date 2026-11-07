// rea decompile_all
// name: FUN_1003ace4c
// address: 0x1003ace4c
// body: available
// range: 0x1003ace4c-0x1003aceb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003ace4c(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *unaff_x20;
  uVar1 = *(undefined8 *)(lVar2 + 0x40);
  *(undefined8 *)(lVar2 + 0x38) = param_1;
  *(undefined8 *)(lVar2 + 0x40) = param_2;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRelease(uVar1);
  if (*(char *)(lVar2 + 0x30) == '\x01') {
    FUN_100237814(0);
    thunk_FUN_100237ed8(param_1,param_2);
  }
  return;
}

