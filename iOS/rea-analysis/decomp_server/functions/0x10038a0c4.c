// rea decompile_all
// name: FUN_10038a0c4
// address: 0x10038a0c4
// body: available
// range: 0x10038a0c4-0x10038a14b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10038a0c4(ulong param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_1003805d0();
  if ((uVar2 & 1) == 0) {
    FUN_100386734(2,"MMKV_IO.cpp","checkSizeForOverride",0x3c9,"[%s] file not valid");
    bVar1 = false;
  }
  else {
    uVar2 = *(ulong *)(*(long *)(param_1 + 0x80) + 0x28);
    bVar1 = param_2 <= uVar2 && param_2 + 8 <= uVar2;
  }
  return bVar1;
}

