// rea decompile_all
// name: FUN_10010e4c0
// address: 0x10010e4c0
// body: available
// range: 0x10010e4c0-0x10010e61f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10010e4c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_60;
  byte local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x4e);
  __sSS6appendyySSF(0x100000000000002b,0x800000010088bf70);
  uVar1 = param_2;
  uVar2 = param_3;
  FUN_1004359b0(param_2,param_3,param_4);
  local_58 = (byte)uVar2 & 1;
  local_60 = uVar1;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_60,&local_50,&DAT_1009c0230,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x1000000000000011,0x800000010088bfa0);
  uVar1 = param_3;
  FUN_10043654c(param_2,param_3,param_4);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0x63697665648cbcef,0xac0000003d644965);
  FUN_100435bb4(param_2,param_3,param_4);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(param_3);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_50;
  param_1[1] = uStack_48;
  return;
}

