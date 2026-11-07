// rea decompile_all
// name: FUN_1001ad6bc
// address: 0x1001ad6bc
// body: available
// range: 0x1001ad6bc-0x1001ad793 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001ad6bc(undefined8 param_1,undefined *param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 local_48;
  undefined *puStack_40;
  ulong local_38;
  
  uVar1 = (uint)(param_3 >> 0x20);
  uVar3 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar3 != 0) {
      FUN_1001232e0(param_1,param_2,param_3 & 0x3fffffffffffffff);
      puVar2 = (undefined *)0xe000000000000000;
      if (param_2 != (undefined *)0x0) {
        puVar2 = param_2;
      }
      goto LAB_1001ad770;
    }
    local_48 = param_1;
    puStack_40 = param_2;
    FUN_10010bd10();
    puVar2 = &DAT_100a75370;
    FUN_100004bb4(&DAT_100a75370,&DAT_10080e370);
  }
  else {
    if (uVar3 != 2) {
      _swift_bridgeObjectRetain(param_2);
      puVar2 = param_2;
      goto LAB_1001ad770;
    }
    local_48 = param_1;
    puStack_40 = param_2;
    local_38 = param_3 & 0x3fffffffffffffff;
    FUN_100008184();
    _swift_retain(param_3 & 0x3fffffffffffffff);
    puVar2 = &DAT_1009bf9a0;
  }
  __sSS10describingSSx_tclufC(&local_48,puVar2);
LAB_1001ad770:
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  return;
}

