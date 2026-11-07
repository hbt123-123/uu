// rea decompile_all
// name: FUN_1001b5cf4
// address: 0x1001b5cf4
// body: available
// range: 0x1001b5cf4-0x1001b5d5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b5cf4(undefined1 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined1 auStack_40 [31];
  undefined1 local_21;
  
  local_21 = *param_1;
  _swift_beginAccess(*param_2 + 0x10,auStack_40,0x21,0);
  puVar1 = &DAT_100a77428;
  FUN_100004bb4(&DAT_100a77428,&DAT_10080d8b0);
  FUN_10039f3d0(&local_21,puVar1);
  _swift_endAccess(auStack_40);
  return;
}

