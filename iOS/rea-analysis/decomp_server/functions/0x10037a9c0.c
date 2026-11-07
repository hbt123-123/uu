// rea decompile_all
// name: MMKV::restoreOneMMKV:rootPath:fromDirectory:
// address: 0x10037a9c0
// body: available
// range: 0x10037a9c0-0x10037aac3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x28 bytes */

bool MMKV::restoreOneMMKV_rootPath_fromDirectory_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  bool bVar1;
  ID IVar2;
  void **ppvVar3;
  void *local_78 [2];
  char local_61;
  void *local_60 [2];
  char local_49;
  void *local_48 [2];
  char local_31;
  
  IVar2 = objc_stub::length(param_4);
  if (IVar2 == 0) {
    IVar2 = objc_stub::UTF8String(param_3);
    FUN_10037b888(local_48,IVar2);
    IVar2 = objc_stub::UTF8String(param_5);
    FUN_10037b888(local_60,IVar2);
    ppvVar3 = local_48;
    FUN_100383eb0(ppvVar3,local_60,0);
    bVar1 = (bool)ppvVar3;
  }
  else {
    IVar2 = objc_stub::UTF8String(param_4);
    FUN_10037b888(local_48,IVar2);
    IVar2 = objc_stub::UTF8String(param_3);
    FUN_10037b888(local_60,IVar2);
    IVar2 = objc_stub::UTF8String(param_5);
    FUN_10037b888(local_78,IVar2);
    ppvVar3 = local_60;
    FUN_100383eb0(ppvVar3,local_78,local_48);
    bVar1 = (bool)ppvVar3;
    if (local_61 < '\0') {
      operator_delete(local_78[0]);
    }
  }
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return bVar1;
}

