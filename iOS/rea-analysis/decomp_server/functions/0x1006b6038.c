// rea decompile_all
// name: FUN_1006b6038
// address: 0x1006b6038
// body: available
// range: 0x1006b6038-0x1006b60ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1006b6038(long param_1,ulong param_2,long param_3,undefined8 param_4,long param_5,
                   int param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_2;
  if (param_6 == 0) {
    FUN_1006b4e7c(param_2,param_3 - param_2,param_4,param_5,param_7);
  }
  else {
    FUN_1006b5030();
  }
  uVar3 = (param_2 + uVar2) - param_1;
  if (param_5 - 1U <= uVar3) {
    uVar3 = 0;
  }
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = uVar3;
  }
  if (uVar2 < 0xffffffffffffff89) {
    uVar2 = uVar1;
  }
  return uVar2;
}

