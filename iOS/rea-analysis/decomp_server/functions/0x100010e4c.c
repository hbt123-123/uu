// rea decompile_all
// name: FUN_100010e4c
// address: 0x100010e4c
// body: available
// range: 0x100010e4c-0x100010ee3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100010e4c(void)

{
  undefined8 uVar1;
  undefined1 auStack_2c [4];
  undefined8 local_28;
  
  uVar1 = 5;
  __sSh15minimumCapacityShyxGSi_tcfC(5,PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32VSHsWP_100995dd0);
  local_28 = uVar1;
  FUN_10006d93c(auStack_2c,0);
  FUN_10006d93c(auStack_2c,1);
  FUN_10006d93c(auStack_2c,2);
  FUN_10006d93c(auStack_2c,3);
  FUN_10006d93c(auStack_2c,4);
  DAT_100a756e0 = local_28;
  return;
}

