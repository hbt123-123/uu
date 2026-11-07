// rea decompile_all
// name: FUN_10007132c
// address: 0x10007132c
// body: available
// range: 0x10007132c-0x100071377 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10007132c(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined4 *unaff_x20;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_24 = *unaff_x20;
  local_20 = 0;
  uStack_18 = 0xe000000000000000;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_24,&local_20,param_1,PTR___ss26DefaultStringInterpolationVN_1000f05a8,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = local_20;
  return auVar1;
}

