// rea decompile_all
// name: FUN_10038955c
// address: 0x10038955c
// body: available
// range: 0x10038955c-0x1003895eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10038955c(undefined8 param_1,ulong param_2,ID param_3,undefined8 param_4)

{
  uint uVar1;
  ID IVar2;
  undefined1 auVar3 [16];
  char local_4a;
  byte local_49;
  uint local_48;
  
  IVar2 = objc_stub::dataUsingEncoding_(param_3,4);
  thunk_FUN_10037e9f0(&local_4a,IVar2,1);
  uVar1 = (uint)local_49;
  if (local_4a != '\0') {
    uVar1 = local_48;
  }
  FUN_100389df4(param_1,param_2,&local_4a,param_4,uVar1);
  thunk_FUN_10037edac(&local_4a);
  auVar3._8_8_ = param_2 & 0xffffffffff;
  auVar3._0_8_ = param_1;
  return auVar3;
}

