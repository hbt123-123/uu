// rea decompile_all
// name: FUN_1001b81e0
// address: 0x1001b81e0
// body: available
// range: 0x1001b81e0-0x1001b82df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1001b81e0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [16];
  undefined4 local_40;
  
  lVar1 = param_1;
  lVar2 = param_2;
  FUN_10040ce00();
  if (lVar2 != 0) {
    if (*(long *)(param_2 + 0x30) != 0) {
      if (lVar1 == *(long *)(param_2 + 0x28) && lVar2 == *(long *)(param_2 + 0x30)) {
        _swift_bridgeObjectRelease(lVar2);
        return 1;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      _swift_bridgeObjectRelease(lVar2);
      return (uint)lVar1 & 1;
    }
    _swift_bridgeObjectRelease(lVar2);
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_40 = (undefined4)param_1;
  FUN_1003fb4bc(FUN_1001b97c0,auStack_50,0xd000000000000093,0x800000010089b8d0,0xd000000000000016,
                0x800000010089c0b0,0x150,0);
  return 1;
}

