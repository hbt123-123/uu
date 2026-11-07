// rea decompile_all
// name: FUN_100122a78
// address: 0x100122a78
// body: available
// range: 0x100122a78-0x100122b33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100122a78(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  ulong local_28;
  
  uVar1 = (uint)(param_3 >> 0x20);
  uVar3 = uVar1 >> 0x1e;
  local_38 = param_1;
  uStack_30 = param_2;
  if (uVar1 >> 0x1e < 2) {
    if (uVar3 != 0) {
      FUN_1001232e0(param_1,param_2,param_3 & 0x3fffffffffffffff);
      return;
    }
    FUN_10010bd10();
    puVar2 = &DAT_100a75370;
    FUN_100004bb4(&DAT_100a75370,&DAT_10080e370);
  }
  else {
    if (uVar3 != 2) {
      _swift_bridgeObjectRetain(param_2);
      return;
    }
    local_28 = param_3 & 0x3fffffffffffffff;
    FUN_100008184();
    _swift_retain(param_3 & 0x3fffffffffffffff);
    puVar2 = &DAT_1009bf9a0;
  }
  __sSS10describingSSx_tclufC(&local_38,puVar2);
  return;
}

