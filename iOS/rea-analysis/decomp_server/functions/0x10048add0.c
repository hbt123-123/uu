// rea decompile_all
// name: FUN_10048add0
// address: 0x10048add0
// body: available
// range: 0x10048add0-0x10048ae27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10048add0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_80 [72];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  uVar1 = 0;
  local_38 = param_1;
  uStack_30 = param_2;
  local_28 = param_3;
  __ss6HasherV5_seedABSi_tcfC(auStack_80,0);
  FUN_1004933f8();
  __sSH4hash4intoys6HasherVz_tFTj(auStack_80,&DAT_1009c63e8,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}

