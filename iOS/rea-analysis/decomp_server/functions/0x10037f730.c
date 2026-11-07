// rea decompile_all
// name: FUN_10037f730
// address: 0x10037f730
// body: available
// range: 0x10037f730-0x10037f82f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037f730(long param_1,ulong param_2)

{
  long lVar1;
  long local_38;
  
  local_38 = *(long *)(param_1 + 0xb8);
  if (local_38 != 0) {
    FUN_100392994();
  }
  if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
    FUN_100386734(1,"MMKV.cpp","clearMemoryCache",0x139,"clearMemoryCache [%s]");
    *(undefined2 *)(param_1 + 0x98) = 1;
    FUN_100380148(*(undefined8 *)(param_1 + 0x68));
    FUN_100380188(*(undefined8 *)(param_1 + 0x70));
    lVar1 = *(long *)(param_1 + 0xb0);
    if (lVar1 != 0) {
      if (*(uint *)(*(long *)(param_1 + 0xa8) + 4) < 2) {
        FUN_100392bb0(lVar1,0,0);
      }
      else {
        FUN_100392bb0(lVar1,*(long *)(param_1 + 0xa8) + 0xc,0x10);
      }
    }
    if (*(void **)(param_1 + 0x90) != (void *)0x0) {
      operator_delete(*(void **)(param_1 + 0x90));
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
    if ((param_2 & 1) == 0) {
      FUN_1003902f0(*(undefined8 *)(param_1 + 0x80),0);
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
    **(undefined4 **)(param_1 + 0xa8) = 0;
  }
  FUN_100385098(&local_38);
  return;
}

