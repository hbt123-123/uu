// rea decompile_all
// name: FUN_100112024
// address: 0x100112024
// body: available
// range: 0x100112024-0x100112107 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100112024(undefined8 param_1,undefined8 param_2,undefined4 param_3,code *param_4)

{
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  FUN_100401b14(0);
  local_70 = param_3;
  local_68 = param_1;
  uStack_60 = param_2;
  FUN_1003fb48c(FUN_100112ac4,auStack_80,0xd0000000000000ac,0x800000010088b950,0xd000000000000035,
                0x800000010088bd50,0x1a9,0);
  local_90 = param_1;
  uStack_88 = param_2;
  FUN_1003fb48c(FUN_100112ad0,auStack_a0,0xd0000000000000ac,0x800000010088b950,0xd000000000000035,
                0x800000010088bd50,0x1aa,0);
  (*param_4)();
  return;
}

