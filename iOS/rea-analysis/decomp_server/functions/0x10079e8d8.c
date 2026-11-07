// rea decompile_all
// name: FUN_10079e8d8
// address: 0x10079e8d8
// body: available
// range: 0x10079e8d8-0x10079e953 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10079e8d8(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  ulong uVar3;
  undefined1 auStack_388 [44];
  undefined1 local_35c;
  code *local_350;
  void *pvVar2;
  
  pvVar2 = _memcpy(param_2 + 0x68,*(void **)(param_1 + 0x30),0x330);
  uVar1 = SUB84(pvVar2,0);
  FUN_1007871b4();
  *param_2 = uVar1;
  *(undefined1 *)(param_2 + 0x66) = 1;
  *(undefined1 *)((long)param_2 + 0x19b) = 1;
  FUN_100769e5c(auStack_388,0x96,param_2);
  do {
    uVar3 = 0;
    (*local_350)();
  } while ((uVar3 & 1) != 0);
  *(undefined1 *)((long)param_2 + 0x19a) = local_35c;
  FUN_10079e7b4(param_2);
  return 1;
}

