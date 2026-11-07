// rea decompile_all
// name: FUN_10037f5f0
// address: 0x10037f5f0
// body: available
// range: 0x10037f5f0-0x10037f72b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10037f5f0(undefined8 *param_1)

{
  void *pvVar1;
  
  FUN_10037f730(param_1,0);
  pvVar1 = (void *)param_1[0xd];
  if (pvVar1 != (void *)0x0) {
    FUN_100384f38();
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0xe];
  if (pvVar1 != (void *)0x0) {
    FUN_100384f80();
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x16];
  if (pvVar1 != (void *)0x0) {
    thunk_FUN_100392c48();
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x10];
  if (pvVar1 != (void *)0x0) {
    FUN_100384c44();
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x14];
  if (pvVar1 != (void *)0x0) {
    FUN_100384c44();
    operator_delete(pvVar1);
  }
  if ((void *)param_1[0x15] != (void *)0x0) {
    operator_delete((void *)param_1[0x15]);
  }
  pvVar1 = (void *)param_1[0x17];
  if (pvVar1 != (void *)0x0) {
    thunk_FUN_100392960();
    operator_delete(pvVar1);
  }
  if ((void *)param_1[0x18] != (void *)0x0) {
    operator_delete((void *)param_1[0x18]);
  }
  if ((void *)param_1[0x19] != (void *)0x0) {
    operator_delete((void *)param_1[0x19]);
  }
  if ((void *)param_1[0x1a] != (void *)0x0) {
    operator_delete((void *)param_1[0x1a]);
  }
  FUN_100386734(1,"MMKV.cpp","~MMKV",0x96,"destruct [%s]");
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    operator_delete((void *)param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    operator_delete((void *)*param_1);
  }
  return param_1;
}

