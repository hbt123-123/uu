// rea decompile_all
// name: FUN_100541db0
// address: 0x100541db0
// body: available
// range: 0x100541db0-0x100541ed7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100541db0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  
  uVar1 = param_2;
  uVar2 = param_2;
  _swift_bridgeObjectRetain();
  __sSS8IteratorV4nextSJSgyF();
  if (uVar2 != 0) {
    bVar5 = false;
    do {
      uVar4 = uVar2;
      if (((uVar1 == 0x5f) && (uVar2 == 0xe100000000000000)) ||
         (uVar3 = uVar1,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (), (uVar3 & 1) != 0)) {
        _swift_bridgeObjectRelease();
        bVar5 = true;
      }
      else {
        if (bVar5) {
          uVar3 = uVar2;
          __sSS10uppercasedSSyF(uVar1);
          _swift_bridgeObjectRelease(uVar2);
          uVar4 = uVar3;
          __sSS6appendyySSF(uVar1);
          uVar2 = uVar3;
        }
        else {
          uVar4 = uVar2;
          __sSS6appendyySSF(uVar1);
        }
        _swift_bridgeObjectRelease();
        bVar5 = false;
      }
      __sSS8IteratorV4nextSJSgyF();
      uVar1 = uVar2;
      uVar2 = uVar4;
    } while (uVar4 != 0);
  }
  _swift_bridgeObjectRelease(param_2);
  return ZEXT816(0xe000000000000000) << 0x40;
}

