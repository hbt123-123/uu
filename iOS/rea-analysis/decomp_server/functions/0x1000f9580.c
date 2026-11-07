// rea decompile_all
// name: FUN_1000f9580
// address: 0x1000f9580
// body: available
// range: 0x1000f9580-0x1000f96db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f9580(undefined8 *param_1,byte param_2)

{
  undefined *puVar1;
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x32);
  __sSS6appendyySSF(0x1000000000000023,0x8000000100889c40);
  local_48 = CONCAT31(local_48._1_3_,param_2);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_48,&local_40,&DAT_10099aeb0,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x6f43726f72726520,0xeb000000003d6564);
  if (param_2 < 2) {
    if (param_2 == 0) {
      local_44 = 1;
      local_48 = 0;
    }
    else {
      local_44 = 0;
      local_48 = 0xfffffffb;
    }
  }
  else if (param_2 == 2) {
    local_44 = 0;
    local_48 = 0xfffffff6;
  }
  else if (param_2 == 3) {
    local_44 = 0;
    local_48 = 0xfffffff5;
  }
  else {
    local_44 = 0;
    local_48 = 0xfffffff4;
  }
  puVar1 = &DAT_100a75ab0;
  FUN_100004bb4(&DAT_100a75ab0,&DAT_100809b40);
  __sSS10describingSSx_tclufC(&local_48,puVar1);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar1);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_40;
  param_1[1] = uStack_38;
  return;
}

