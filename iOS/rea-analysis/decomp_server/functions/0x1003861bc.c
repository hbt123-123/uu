// rea decompile_all
// name: FUN_1003861bc
// address: 0x1003861bc
// body: available
// range: 0x1003861bc-0x10038623b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003861bc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  void *local_48 [2];
  char local_31;
  
  FUN_100384ff4(local_48,".crc");
  uVar2 = param_2;
  FUN_1003830ac(param_2,local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  lVar1 = 0;
  if ((int)uVar2 == 0) {
    lVar1 = 8;
  }
  FUN_1003862a0(*(undefined8 *)(param_1 + lVar1 + 8),param_2,param_2);
  return;
}

