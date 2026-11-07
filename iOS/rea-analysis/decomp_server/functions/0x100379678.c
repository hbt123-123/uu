// rea decompile_all
// name: MMKV::reKey:
// address: 0x100379678
// body: available
// range: 0x100379678-0x100379713 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

bool MMKV::reKey_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  void *local_68;
  undefined8 uStack_60;
  long local_58;
  void *local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_50 = (void *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  IVar1 = objc_stub::length(param_3);
  if (IVar1 != 0) {
    IVar1 = objc_stub::bytes(param_3);
    IVar2 = objc_stub::length(param_3);
    FUN_10037b73c(&local_68,IVar1,IVar2);
    uStack_48 = uStack_60;
    local_50 = local_68;
    local_40 = local_58;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  FUN_10038a348(uVar3,&local_50);
  if (local_40 < 0) {
    operator_delete(local_50);
  }
  return (bool)uVar3;
}

