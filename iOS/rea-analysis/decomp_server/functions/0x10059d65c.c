// rea decompile_all
// name: FUN_10059d65c
// address: 0x10059d65c
// body: available
// range: 0x10059d65c-0x10059d6ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10059d65c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x60);
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    pcVar3 = *(code **)(param_4 + 0x78);
    FUN_100008184(uVar2,uVar1);
    (*pcVar3)(uVar2,uVar1,7,param_3,param_4);
    FUN_100006cc8(uVar2,uVar1);
  }
  return;
}

