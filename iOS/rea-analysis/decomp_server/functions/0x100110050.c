// rea decompile_all
// name: FUN_100110050
// address: 0x100110050
// body: available
// range: 0x100110050-0x100110123 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100110050(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_e0 = 0;
  uStack_d8 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x21);
  local_40 = local_e0;
  uStack_38 = uStack_d8;
  __sSS6appendyySSF(0xd00000000000001f,0x800000010088c550);
  uStack_78 = param_2[0xd];
  local_80 = param_2[0xc];
  uStack_68 = param_2[0xf];
  uStack_70 = param_2[0xe];
  uStack_58 = param_2[0x11];
  local_60 = param_2[0x10];
  local_50 = param_2[0x12];
  uStack_b8 = param_2[5];
  local_c0 = param_2[4];
  uStack_a8 = param_2[7];
  uStack_b0 = param_2[6];
  uStack_98 = param_2[9];
  local_a0 = param_2[8];
  uStack_88 = param_2[0xb];
  uStack_90 = param_2[10];
  uStack_d8 = param_2[1];
  local_e0 = *param_2;
  uStack_c8 = param_2[3];
  uStack_d0 = param_2[2];
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_e0,&local_40,&DAT_1009bf758,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_40;
  param_1[1] = uStack_38;
  return;
}

