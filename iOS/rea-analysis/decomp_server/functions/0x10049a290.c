// rea decompile_all
// name: FUN_10049a290
// address: 0x10049a290
// body: available
// range: 0x10049a290-0x10049a303 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10049a290(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte *unaff_x20;
  
  uVar1 = 0x100;
  if (unaff_x20[1] == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x10000;
  if (unaff_x20[2] == 0) {
    uVar2 = 0;
  }
  uVar3 = 0x1000000;
  if (unaff_x20[3] == 0) {
    uVar3 = 0;
  }
  uVar4 = 0x100000000;
  if (unaff_x20[4] == 0) {
    uVar4 = 0;
  }
  FUN_10049a114(param_1,uVar1 | *unaff_x20 | uVar2 | uVar3 | uVar4,*(undefined8 *)(unaff_x20 + 8),
                *(undefined8 *)(unaff_x20 + 0x10),param_2,param_3);
  return;
}

