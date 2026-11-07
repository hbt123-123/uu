// rea decompile_all
// name: FUN_100042974
// address: 0x100042974
// body: available
// range: 0x100042974-0x100042a27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100042974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  
  uVar1 = 0;
  FUN_100401b14(0);
  local_50 = (undefined4)param_3;
  local_40 = (undefined4)param_1;
  local_48 = param_4;
  local_38 = param_2;
  FUN_1003fb48c(uVar1,FUN_10004349c,auStack_60,0xd0000000000000a0,0x800000010087c790,
                0xd000000000000037,0x800000010087c840,0x108,0);
  FUN_1000439d4(param_3,param_4,param_1);
  return;
}

