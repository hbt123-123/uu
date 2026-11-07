// rea decompile_all
// name: FUN_10008d668
// address: 0x10008d668
// body: available
// range: 0x10008d668-0x10008d773 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008d668(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_68 = 0;
  uStack_60 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x3a);
  local_50 = local_68;
  uStack_48 = uStack_60;
  __sSS6appendyySSF(0x100000000000002e,0x800000010087f910);
  local_68 = CONCAT44(local_68._4_4_,param_2);
  puVar1 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar1);
  __sSS6appendyySSF(0x3d746c7573657220,0xe800000000000000);
  local_68 = param_3;
  uStack_60 = param_4;
  local_58 = param_5;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_68,&local_50,&DAT_100999a70,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_50;
  param_1[1] = uStack_48;
  return;
}

