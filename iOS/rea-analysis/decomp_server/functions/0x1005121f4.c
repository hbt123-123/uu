// rea decompile_all
// name: FUN_1005121f4
// address: 0x1005121f4
// body: available
// range: 0x1005121f4-0x100512297 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1005121f4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  uint unaff_w20;
  long lVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [40];
  
  lVar3 = *(long *)(param_2 + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  FUN_1000b142c(param_1,auStack_58);
  puVar1 = &DAT_100aaa438;
  FUN_100004bb4(&DAT_100aaa438,&DAT_1008361b0);
  _swift_dynamicCast(auStack_60 + -(lVar2 + 0xfU & 0xfffffffffffffff0),auStack_58,puVar1,param_2,7);
  FUN_100512020();
  (**(code **)(lVar3 + 8))(auStack_60 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_2);
  return unaff_w20 & 1;
}

