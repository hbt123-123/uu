// rea decompile_all
// name: FUN_1001052d8
// address: 0x1001052d8
// body: available
// range: 0x1001052d8-0x10010538b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001052d8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = 0;
  local_38 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x31);
  uVar1 = local_38;
  _swift_bridgeObjectRelease(local_38);
  local_40 = 0x100000000000003f;
  local_38 = 0x800000010088b200;
  local_48 = param_2;
  FUN_10010a2d4();
  uVar2 = 0x10;
  __sSS_5radix9uppercaseSSx_SiSbtcSzRzlufC(&local_48,0x10,0,PTR___ss6UInt64VN_100995e10,uVar1);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar2);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_40;
  param_1[1] = local_38;
  return;
}

