// rea decompile_all
// name: FUN_100241270
// address: 0x100241270
// body: available
// range: 0x100241270-0x10024130f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100241270(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1[1];
  if (uVar2 < 0xffffffff) {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[2] = param_2[2];
  }
  else {
    uVar3 = param_2[1];
    if (uVar3 < 0xffffffff) {
      _swift_bridgeObjectRelease(uVar2);
      _swift_bridgeObjectRelease(param_1[2]);
      uVar1 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar1;
      param_1[2] = param_2[2];
    }
    else {
      *param_1 = *param_2;
      param_1[1] = uVar3;
      _swift_bridgeObjectRelease(uVar2);
      uVar1 = param_1[2];
      param_1[2] = param_2[2];
      _swift_bridgeObjectRelease(uVar1);
    }
  }
  return param_1;
}

