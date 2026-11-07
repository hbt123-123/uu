// rea decompile_all
// name: FUN_10027a52c
// address: 0x10027a52c
// body: available
// range: 0x10027a52c-0x10027a627 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10027a52c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_50 = param_1;
  if ((param_3 & 1) == 0) {
    local_40 = 0;
    uStack_38 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x36);
    __sSS6appendyySSF(0xd000000000000034,0x80000001008a8c70);
    puVar2 = &DAT_1009aa558;
    uStack_48 = param_2;
  }
  else {
    local_40 = 0;
    uStack_38 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x30);
    __sSS6appendyySSF(0xd00000000000002e,0x80000001008a8c40);
    puVar2 = &DAT_100a82488;
    FUN_100004bb4(&DAT_100a82488,&DAT_100816c20);
  }
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_50,&local_40,puVar2,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = local_40;
  return auVar1;
}

