// rea decompile_all
// name: FUN_1003ce0fc
// address: 0x1003ce0fc
// body: available
// range: 0x1003ce0fc-0x1003ce21f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003ce0fc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  __ss11_StringGutsV4growyySiF(0x4f);
  __sSS6appendyySSF(0x1000000000000025,0x80000001008b4110);
  __sSS6appendyySSF(*param_2,param_2[1]);
  __sSS6appendyySSF(0x6e696769726f202c,0xeb000000003d6c61);
  uVar1 = 0x6e776f6e6b6e75;
  if (param_4 != 0) {
    uVar1 = param_3;
  }
  lVar2 = -0x1900000000000000;
  if (param_4 != 0) {
    lVar2 = param_4;
  }
  _swift_bridgeObjectRetain(param_4);
  __sSS6appendyySSF(uVar1,lVar2);
  _swift_bridgeObjectRelease(lVar2);
  __sSS6appendyySSF(0x100000000000001b,0x80000001008b4140);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

