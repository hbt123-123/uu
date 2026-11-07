// rea decompile_all
// name: FUN_1002c69a0
// address: 0x1002c69a0
// body: available
// range: 0x1002c69a0-0x1002c6a3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong * FUN_1002c69a0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  if (*param_1 < 0xffffffff) {
    if (uVar2 < 0xffffffff) {
      uVar2 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar2;
    }
    else {
      uVar1 = param_2[1];
      *param_1 = uVar2;
      param_1[1] = uVar1;
    }
  }
  else if (uVar2 < 0xffffffff) {
    _swift_release(param_1[1]);
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
  }
  else {
    uVar3 = param_2[1];
    uVar1 = param_1[1];
    *param_1 = uVar2;
    param_1[1] = uVar3;
    _swift_release(uVar1);
  }
  return param_1;
}

