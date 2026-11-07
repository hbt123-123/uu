// rea decompile_all
// name: FUN_1001425d4
// address: 0x1001425d4
// body: available
// range: 0x1001425d4-0x1001426bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001425d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  __ss11_StringGutsV4growyySiF(0x31);
  _swift_bridgeObjectRelease(0xe000000000000000);
  __sSS6appendyySSF(param_2,param_3);
  __sSS6appendyySSF(0x3a656c69662d,0xe600000000000000);
  uVar1 = *(undefined8 *)(param_4 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::file);
  uVar2 = ((undefined8 *)(param_4 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::file))[1];
  _swift_bridgeObjectRetain(uVar2);
  __sSS6appendyySSF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0x1000000000000027;
  param_1[1] = 0x8000000100890c10;
  return;
}

