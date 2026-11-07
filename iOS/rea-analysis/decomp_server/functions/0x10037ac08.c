// rea decompile_all
// name: MMKV::restoreAll:fromDirectory:
// address: 0x10037ac08
// body: available
// range: 0x10037ac08-0x10037acbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

unsigned_long_long MMKV::restoreAll_fromDirectory_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  void **ppvVar2;
  void *local_50 [2];
  char local_39;
  void *local_38 [2];
  char local_21;
  
  ppvVar2 = local_50;
  IVar1 = objc_stub::length(param_3);
  if (IVar1 == 0) {
    IVar1 = objc_stub::UTF8String(param_4);
    FUN_10037b888(local_38,IVar1);
    ppvVar2 = local_38;
    FUN_100384570(ppvVar2,0);
  }
  else {
    IVar1 = objc_stub::UTF8String(param_3);
    FUN_10037b888(local_38,IVar1);
    IVar1 = objc_stub::UTF8String(param_4);
    FUN_10037b888(local_50,IVar1);
    FUN_100384570(local_50,local_38);
    if (local_39 < '\0') {
      operator_delete(local_50[0]);
    }
  }
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return (unsigned_long_long)ppvVar2;
}

