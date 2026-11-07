// rea decompile_all
// name: FUN_10023f784
// address: 0x10023f784
// body: available
// range: 0x10023f784-0x10023f813 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10023f784(undefined *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar3 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
  }
  else {
    puVar2 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((long)param_1 < 0) {
      puVar2 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    if (puVar2 == (undefined *)0x0) {
      _swift_bridgeObjectRelease(param_1);
      puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      puVar3 = puVar2;
      FUN_100242494();
      FUN_100230bb0(puVar3 + 0x20,puVar2);
      _swift_bridgeObjectRelease();
      if (param_1 != puVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10023f800);
        (*pcVar1)();
      }
    }
  }
  return puVar3;
}

