// rea decompile_all
// name: FUN_100040fd4
// address: 0x100040fd4
// body: available
// range: 0x100040fd4-0x1000410b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100040fd4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  uVar1 = 0;
  __ss8readLine16strippingNewlineSSSgSb_tF();
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    uVar2 = 0;
    uVar3 = 0xe100000000000000;
    __sSS9hasSuffixySbSSF(10,0xe100000000000000,uVar1,param_2);
    _swift_bridgeObjectRelease(param_2);
    if ((uVar2 & 1) != 0) {
      FUN_1000410b4();
      _swift_bridgeObjectRelease(uVar3);
    }
    uVar2 = 0xd;
    uVar3 = 0xe100000000000000;
    __sSS9hasSuffixySbSSF(0xd,0xe100000000000000,uVar1,param_2);
    if ((uVar2 & 1) != 0) {
      FUN_1000410b4();
      _swift_bridgeObjectRelease(uVar3);
    }
    uVar2 = uVar1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar2 = param_2 >> 0x38 & 0xf;
    }
    if (uVar2 == 0) {
      _swift_bridgeObjectRelease(param_2);
      uVar1 = 0;
      param_2 = 0;
    }
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = uVar1;
  return auVar4;
}

