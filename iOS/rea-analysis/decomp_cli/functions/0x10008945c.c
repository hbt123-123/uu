// rea decompile_all
// name: FUN_10008945c
// address: 0x10008945c
// body: available
// range: 0x10008945c-0x100089527 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008945c(undefined8 param_1)

{
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [32];
  undefined8 local_80;
  undefined1 local_78;
  undefined1 local_70 [24];
  undefined *local_58;
  
  local_58 = PTR___sSbN_1000f03a0;
  local_70[0] = 1;
  FUN_1000866dc(local_70,auStack_a0);
  local_78 = 1;
  local_b8 = in_x5;
  uStack_b0 = in_x6;
  local_a8 = in_x7;
  local_80 = param_1;
  _swift_bridgeObjectRetain(in_x6);
  _swift_bridgeObjectRetain(in_x7);
  _swift_bridgeObjectRetain(param_1);
  FUN_100099afc(&local_b8);
  FUN_100065194(&local_b8);
  FUN_10001fc18(local_70,&DAT_100104198,&DAT_1000d5180);
  return;
}

