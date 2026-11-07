// rea decompile_all
// name: FUN_10025b59c
// address: 0x10025b59c
// body: available
// range: 0x10025b59c-0x10025b60b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10025b59c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_1002704ac();
  uVar2 = *param_1;
  lVar1 = 0;
  FUN_100271c68();
  _swift_allocObject();
  *(code **)(lVar1 + 0x10) = thunk_FUN_1002719b8;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(code **)(lVar1 + 0x20) = thunk_FUN_10025ffe0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(code **)(lVar1 + 0x30) = thunk_FUN_10025ffe0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(code **)(lVar1 + 0x40) = thunk_FUN_1002718ec;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x50) = uVar2;
  DAT_100b36408 = lVar1;
  return;
}

