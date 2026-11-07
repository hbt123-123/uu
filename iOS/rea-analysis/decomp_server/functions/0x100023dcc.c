// rea decompile_all
// name: FUN_100023dcc
// address: 0x100023dcc
// body: available
// range: 0x100023dcc-0x100023ec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100023dcc(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_90 [16];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 auStack_70 [16];
  undefined4 local_60;
  
  FUN_100401b14(0);
  local_60 = (int)param_1;
  FUN_1003fb48c(FUN_10003fcc4,auStack_70,0xd0000000000000a9,0x8000000100877660,0xd000000000000012,
                0x8000000100879e50,0x405,0);
  uVar1 = param_1;
  FUN_10001adc4(param_1,*(undefined8 *)(unaff_x20 + 0x10),1);
  uStack_7c = (undefined4)uVar1;
  local_80 = (int)param_1;
  FUN_1003fb48c(FUN_10003fccc,auStack_90,0xd0000000000000a9,0x8000000100877660,0xd000000000000012,
                0x8000000100879e50,0x407,0);
  FUN_1000162bc(param_1,0);
  return;
}

