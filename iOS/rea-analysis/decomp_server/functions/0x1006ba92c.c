// rea decompile_all
// name: FUN_1006ba92c
// address: 0x1006ba92c
// body: available
// range: 0x1006ba92c-0x1006ba97f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1006ba92c(ulong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  
  *(undefined4 *)(param_1 + 0x428) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  if (param_4 < -0x20000) {
    param_4 = -0x20000;
  }
  else if (param_4 < 0x17) {
    if (param_4 == 0) goto LAB_1006ba95c;
  }
  else {
    param_4 = 0x16;
  }
  *(int *)(param_1 + 0x3c) = param_4;
LAB_1006ba95c:
  FUN_1006b6ec4();
  uVar1 = 0;
  if (0xffffffffffffff88 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

