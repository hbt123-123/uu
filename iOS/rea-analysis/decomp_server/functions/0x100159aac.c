// rea decompile_all
// name: FUN_100159aac
// address: 0x100159aac
// body: available
// range: 0x100159aac-0x100159bdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100159aac(undefined8 *param_1,undefined5 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_58 = 0;
  uStack_50 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x3e);
  local_40 = local_58;
  uStack_38 = uStack_50;
  __sSS6appendyySSF(0x1000000000000031,0x8000000100894e50);
  _swift_beginAccess(param_2,&local_58,0,0);
  local_60 = CONCAT35(local_60._5_3_,*param_2);
  puVar1 = &DAT_100a75aa8;
  FUN_100004bb4(&DAT_100a75aa8,&DAT_10080eab0);
  __sSS10describingSSx_tclufC(&local_60,puVar1);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar1);
  __sSS6appendyySSF(0x726f7272658cbcef,0xa90000000000003d);
  puVar1 = &DAT_100a75b40;
  local_60 = param_3;
  FUN_100004bb4(&DAT_100a75b40,&DAT_100809bd0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_60,&local_40,puVar1,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_40;
  param_1[1] = uStack_38;
  return;
}

