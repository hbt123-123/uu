// rea decompile_all
// name: FUN_1000bf27c
// address: 0x1000bf27c
// body: available
// range: 0x1000bf27c-0x1000bf35b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000bf27c(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  __ss11_StringGutsV4growyySiF(0x60);
  __sSS6appendyySSF(0xd00000000000003e,0x8000000100883d60);
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    lVar1 = -0x1d00000000000000;
    uVar2 = 0x6c696e;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
  }
  _swift_bridgeObjectRetain();
  __sSS6appendyySSF(uVar2,lVar1);
  _swift_bridgeObjectRelease(lVar1);
  __sSS6appendyySSF(0xd000000000000020,0x8000000100883da0);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

