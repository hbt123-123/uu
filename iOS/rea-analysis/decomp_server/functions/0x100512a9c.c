// rea decompile_all
// name: FUN_100512a9c
// address: 0x100512a9c
// body: available
// range: 0x100512a9c-0x100512b2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100512a9c(undefined8 param_1,long param_2,code *param_3)

{
  undefined *puVar1;
  uint unaff_w20;
  undefined1 auStack_88 [40];
  undefined1 auStack_60 [48];
  
  FUN_1000b142c(param_1,auStack_88);
  puVar1 = &DAT_100aaa438;
  FUN_100004bb4(&DAT_100aaa438,&DAT_1008361b0);
  _swift_dynamicCast(auStack_60,auStack_88,puVar1,param_2,7);
  (*param_3)();
  (**(code **)(*(long *)(param_2 + -8) + 8))(auStack_60,param_2);
  return unaff_w20 & 1;
}

