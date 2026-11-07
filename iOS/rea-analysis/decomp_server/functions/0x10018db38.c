// rea decompile_all
// name: FUN_10018db38
// address: 0x10018db38
// body: available
// range: 0x10018db38-0x10018dc5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10018db38(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  __ss11_StringGutsV4growyySiF(0x29);
  _swift_bridgeObjectRelease(0xe000000000000000);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  _swift_bridgeObjectRetain(uVar2);
  __sSS6appendyySSF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __sSS6appendyySSF(0x2d,0xe100000000000000);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  _swift_bridgeObjectRetain(uVar2);
  __sSS6appendyySSF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __sSS6appendyySSF(0x2d,0xe100000000000000);
  puVar3 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0x1000000000000021;
  param_1[1] = 0x8000000100899010;
  return;
}

