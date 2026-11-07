// rea decompile_all
// name: FUN_100388b1c
// address: 0x100388b1c
// body: available
// range: 0x100388b1c-0x100388bbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100388b1c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 local_28;
  
  local_28 = param_3;
  FUN_10038774c();
  if (*(long *)(param_2 + 0xb0) == 0) {
    lVar1 = *(long *)(param_2 + 0x68);
    FUN_100385ff8(lVar1,&local_28);
    if (lVar1 != 0) {
      FUN_10037e108(param_1,lVar1 + 0x18,*(long *)(*(long *)(param_2 + 0x80) + 0x20) + 4);
      return;
    }
  }
  else {
    lVar1 = *(long *)(param_2 + 0x70);
    FUN_100385ff8(lVar1,&local_28);
    if (lVar1 != 0) {
      FUN_10037e5ac(param_1,lVar1 + 0x18,*(long *)(*(long *)(param_2 + 0x80) + 0x20) + 4,
                    *(undefined8 *)(param_2 + 0xb0));
      return;
    }
  }
  thunk_FUN_10037e7cc(param_1,0);
  return;
}

