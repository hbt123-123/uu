// rea decompile_all
// name: FUN_1007d8590
// address: 0x1007d8590
// body: available
// range: 0x1007d8590-0x1007d85f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007d8590(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  uVar1 = -(param_2 >> 7 & 1) & 0xfffffffffffff800 | (param_2 & 0xff) << 3;
  uVar2 = *(undefined8 *)("thread_istacktra" + uVar1 + 0x10);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,*(undefined8 *)("value" + uVar1),uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}

