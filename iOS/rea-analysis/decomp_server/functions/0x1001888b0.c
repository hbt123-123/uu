// rea decompile_all
// name: FUN_1001888b0
// address: 0x1001888b0
// body: available
// range: 0x1001888b0-0x1001889fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1001888b0(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  if (uVar1 == 0) {
LAB_100188944:
    uVar2 = 0;
    FUN_100401b14(0);
    FUN_1003fb45c(uVar2,FUN_1001889fc,param_1,0xd0000000000000a5,0x8000000100893d50,
                  0x7255656c69467369,0xed0000293a5f286c,0x26,7);
    uVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    if (uVar1 == 0x662e63696c627570 && param_2 == -0x10938d8ad29a9397) {
      _swift_bridgeObjectRelease(param_2);
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      _swift_bridgeObjectRelease(param_2);
      if ((uVar1 & 1) == 0) goto LAB_100188944;
    }
    uVar2 = 0;
    FUN_100401b14(0);
    FUN_1003fb45c(uVar2,FUN_100188a24,param_1,0xd0000000000000a5,0x8000000100893d50,
                  0x7255656c69467369,0xed0000293a5f286c,0x23,7);
    uVar2 = 1;
  }
  return uVar2;
}

