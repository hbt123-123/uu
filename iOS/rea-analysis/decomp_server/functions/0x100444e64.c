// rea decompile_all
// name: FUN_100444e64
// address: 0x100444e64
// body: available
// range: 0x100444e64-0x100444eeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100444e64(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a0 [72];
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 local_34;
  
  local_58 = *unaff_x20;
  local_50 = *(undefined1 *)(unaff_x20 + 1);
  local_4c = *(undefined4 *)((long)unaff_x20 + 0xc);
  local_38 = *(undefined4 *)(unaff_x20 + 4);
  local_34 = *(undefined1 *)((long)unaff_x20 + 0x24);
  uStack_40 = unaff_x20[3];
  local_48 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_a0,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_a0,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}

