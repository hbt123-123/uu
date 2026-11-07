// rea decompile_all
// name: FUN_100566de0
// address: 0x100566de0
// body: available
// range: 0x100566de0-0x100566e87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100566de0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 auStack_98 [24];
  undefined8 local_80;
  long lStack_78;
  undefined1 local_58;
  undefined8 local_50;
  long lStack_48;
  
  lVar1 = param_2;
  FUN_1004f6144();
  local_50 = param_1;
  lStack_48 = lVar1;
  (**(code **)(param_4 + 0x168))(&local_50,param_3,param_4);
  local_80 = local_50;
  lStack_78 = lStack_48;
  local_58 = 0;
  _swift_beginAccess(param_2 + 0x20,auStack_98,0x21,0);
  FUN_1004f99e8(&local_80,param_2 + 0x20);
  _swift_endAccess(auStack_98);
  return;
}

