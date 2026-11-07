// rea decompile_all
// name: FUN_1000b1a38
// address: 0x1000b1a38
// body: available
// range: 0x1000b1a38-0x1000b1b87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000b1a38(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = param_1;
  lVar3 = param_2;
  FUN_1000aee40();
  if (lVar3 == 0) {
    __ss11_StringGutsV4growyySiF(0x16);
    _swift_bridgeObjectRelease(0xe000000000000000);
    FUN_1000979e4(param_1,param_2,param_3);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(param_2);
    uVar2 = 0x27;
    uVar4 = 0xe100000000000000;
  }
  else {
    __ss11_StringGutsV4growyySiF(0x1b);
    _swift_bridgeObjectRelease(0xe000000000000000);
    FUN_1000979e4(param_1,param_2,param_3);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(param_2);
    __sSS6appendyySSF(0x3c20,0xe200000000000000);
    __sSS6appendyySSF(uVar2,lVar3);
    _swift_bridgeObjectRelease(lVar3);
    uVar2 = 0x273e;
    uVar4 = 0xe200000000000000;
  }
  __sSS6appendyySSF(uVar2,uVar4);
  auVar1._8_8_ = 0x80000001000cadb0;
  auVar1._0_8_ = 0xd000000000000013;
  return auVar1;
}

