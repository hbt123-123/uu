// rea decompile_all
// name: FUN_100095ae4
// address: 0x100095ae4
// body: available
// range: 0x100095ae4-0x100095bcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100095ae4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 local_70 [8];
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 auStack_58 [8];
  undefined1 *local_50;
  undefined8 local_48;
  
  local_50 = (undefined1 *)0x0;
  local_48 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x25);
  _swift_bridgeObjectRelease(local_48);
  local_50 = &DAT_d000000000000018;
  local_48 = 0x8000000100880530;
  __sSS6appendyySSF(param_2,param_3);
  __sSS6appendyySSF(0x3a64656c69616620,0xe900000000000020);
  _swift_getErrorValue(param_4,auStack_58,local_70);
  uVar1 = local_60;
  __ss5ErrorP10FoundationE20localizedDescriptionSSvg(uStack_68,local_60);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar1);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_50;
  param_1[1] = local_48;
  return;
}

