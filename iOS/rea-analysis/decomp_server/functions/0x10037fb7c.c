// rea decompile_all
// name: FUN_10037fb7c
// address: 0x10037fb7c
// body: available
// range: 0x10037fb7c-0x10037fc23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037fb7c(void)

{
  void *pvVar1;
  
  DAT_100b366d0 = operator_new(0x28);
  DAT_100b366d0[1] = 0;
  *DAT_100b366d0 = 0;
  DAT_100b366d0[3] = 0;
  DAT_100b366d0[2] = 0;
  *(undefined4 *)(DAT_100b366d0 + 4) = 0x3f800000;
  pvVar1 = operator_new(0x40);
  thunk_FUN_1003928d4();
  DAT_100b366d8 = pvVar1;
  FUN_100392a80();
  FUN_1003906f4();
  DAT_100b366f8 = pvVar1;
  FUN_100386734(1,"MMKV.cpp","initialize",0xa7,"version %s, page size %d, arch %s");
  return;
}

