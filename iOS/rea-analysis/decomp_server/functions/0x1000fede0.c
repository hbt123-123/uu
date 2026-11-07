// rea decompile_all
// name: FUN_1000fede0
// address: 0x1000fede0
// body: available
// range: 0x1000fede0-0x1000feeb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000fede0(undefined8 param_1,code *param_2)

{
  code *pcVar1;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 local_68 [3];
  undefined *local_50;
  code *local_48;
  code *local_40;
  undefined1 local_38;
  
  FUN_100401b14(0);
  pcVar1 = FUN_100103134;
  local_70 = param_1;
  FUN_1003fb48c(FUN_100103134,auStack_80,0xd000000000000094,0x800000010088a280,0xd00000000000001e,
                0x800000010088a320,0xbb,0);
  local_50 = &DAT_1009d9878;
  FUN_10010313c();
  local_48 = pcVar1;
  FUN_10010317c();
  local_38 = 1;
  local_68[0] = param_1;
  local_40 = pcVar1;
  _swift_bridgeObjectRetain(param_1);
  (*param_2)(local_68);
  FUN_100102518(local_68);
  return;
}

