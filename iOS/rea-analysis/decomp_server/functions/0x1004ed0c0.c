// rea decompile_all
// name: FUN_1004ed0c0
// address: 0x1004ed0c0
// body: available
// range: 0x1004ed0c0-0x1004ed11f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004ed0c0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uStack_48 = unaff_x20[1];
  local_50 = *unaff_x20;
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  uStack_28 = unaff_x20[5];
  local_30 = unaff_x20[4];
  uVar1 = 0;
  __ss6HasherV5_seedABSi_tcfC(auStack_98,0);
  FUN_1004f0ce8();
  __sSH4hash4intoys6HasherVz_tFTj(auStack_98,&DAT_1009cd180,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}

