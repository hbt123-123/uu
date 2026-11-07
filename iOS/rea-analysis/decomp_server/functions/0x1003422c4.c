// rea decompile_all
// name: FUN_1003422c4
// address: 0x1003422c4
// body: available
// range: 0x1003422c4-0x1003423af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1003422c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  FUN_10034269c();
  _swift_allocObject();
  uVar2 = param_3;
  FUN_100340bd0(param_3,FUN_1002c0b40,&DAT_100a83320,&DAT_100817828,thunk_FUN_1000a0074);
  _swift_bridgeObjectRetain(param_1);
  FUN_1002c5a14(uVar2);
  *(long *)(lVar1 + 0x10) = param_1;
  FUN_100340bd0(param_3,FUN_1002c0b24,&DAT_100a83310,&DAT_1008186b0,thunk_FUN_1000a0074);
  _swift_bridgeObjectRetain(param_2);
  FUN_1002c59f8(param_3);
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  return lVar1;
}

