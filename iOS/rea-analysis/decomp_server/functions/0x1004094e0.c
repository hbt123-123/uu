// rea decompile_all
// name: FUN_1004094e0
// address: 0x1004094e0
// body: available
// range: 0x1004094e0-0x10040957b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1004094e0(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar2;
  undefined1 auStack_40 [12];
  undefined4 local_34;
  
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(param_1 + -8) + 0x40));
  puVar2 = auStack_40 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar1 = puVar2;
  (**(code **)(extraout_x12 + 0x10))(puVar2);
  FUN_10040983c();
  __sSBsEyxqd__cSBRd__lufC(&local_34,puVar2,PTR___sSfN_100995928,param_1,puVar1,param_2);
  return local_34;
}

