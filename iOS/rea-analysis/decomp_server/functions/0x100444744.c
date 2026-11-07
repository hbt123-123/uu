// rea decompile_all
// name: FUN_100444744
// address: 0x100444744
// body: available
// range: 0x100444744-0x1004447af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100444744(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [72];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined5 uStack_48;
  undefined3 uStack_43;
  undefined5 uStack_40;
  
  uStack_68 = unaff_x20[1];
  local_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  local_50 = unaff_x20[4];
  uStack_48 = (undefined5)unaff_x20[5];
  uStack_43 = (undefined3)*(undefined8 *)((long)unaff_x20 + 0x2d);
  uStack_40 = (undefined5)((ulong)*(undefined8 *)((long)unaff_x20 + 0x2d) >> 0x18);
  __ss6HasherV5_seedABSi_tcfC(auStack_b8);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_b8,param_2,param_3);
  __ss6HasherV9_finalizeSiyF();
  return;
}

