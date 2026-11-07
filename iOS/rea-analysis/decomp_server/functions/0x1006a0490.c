// rea decompile_all
// name: FUN_1006a0490
// address: 0x1006a0490
// body: available
// range: 0x1006a0490-0x1006a05cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_1006a0490(undefined4 *param_1,string *param_2,undefined8 param_3)

{
  code *local_58;
  undefined8 uStack_50;
  undefined4 *local_48;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0x13) = 0;
  *(undefined8 *)(param_1 + 0x11) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[0x15] = 6;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  thunk_FUN_10069eca0(param_1 + 0x22);
  local_58 = FUN_10069f968;
  uStack_50 = 0;
  local_48 = param_1;
  FUN_1006a4ce0(param_1 + 0x26,&local_58,0,0);
  FUN_1006978f8(param_1 + 0x3c,0);
  FUN_1006978f8(param_1 + 0x52,0);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x6a) = 0;
  *(undefined2 *)(param_1 + 0x6c) = 0x100;
  FUN_1006977cc(param_1 + 0x6e);
  *(undefined8 *)(param_1 + 0x92) = param_3;
  *(undefined8 *)(param_1 + 0x94) = 0xd2f00;
  _bzero(param_1 + 0x96,0x428);
  *param_1 = *(undefined4 *)param_2;
  std::string::operator=(param_2,(string *)(param_1 + 2));
  std::string::operator=(param_2,(string *)(param_1 + 8));
  std::string::operator=(param_2,(string *)(param_1 + 0xe));
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x50);
  std::string::operator=(param_2,(string *)(param_1 + 0x16));
  param_1[0x1c] = *(undefined4 *)(param_2 + 0x70);
  return param_1;
}

