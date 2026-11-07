// rea decompile_all
// name: FUN_1003fdb80
// address: 0x1003fdb80
// body: available
// range: 0x1003fdb80-0x1003fdbfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003fdb80(void)

{
  undefined1 auVar1 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined *local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0;
  uStack_18 = 0xe000000000000000;
  local_28 = PTR___sSSN_1009957f8;
  local_40 = 0x1000000000000037;
  uStack_38 = 0x80000001008b5ab0;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_40,&local_20,PTR___sypN_100995e88 + 8,
             PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  FUN_10003f094(&local_40);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = local_20;
  return auVar1;
}

