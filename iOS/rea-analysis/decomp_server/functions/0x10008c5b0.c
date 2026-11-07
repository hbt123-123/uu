// rea decompile_all
// name: FUN_10008c5b0
// address: 0x10008c5b0
// body: available
// range: 0x10008c5b0-0x10008c6d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008c5b0(undefined8 *param_1,ID param_2,ID *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ID IVar4;
  ID IVar5;
  ID local_60;
  byte local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x4a);
  __sSS6appendyySSF(0x1000000000000034,0x800000010087eef0);
  local_60 = _objc_msgSend(param_2,"frameQuality");
  uVar3 = 0;
  FUN_10000608c(0);
  puVar2 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8;
  puVar1 = PTR___ss26DefaultStringInterpolationVN_100995bf0;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_60,&local_50,uVar3,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0xd000000000000012,0x800000010087ef30);
  IVar4 = *param_3;
  IVar5 = param_3[1];
  FUN_1004e3fa0(IVar4,IVar5,param_3[2]);
  local_58 = (byte)IVar5 & 1;
  local_60 = IVar4;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_60,&local_50,&DAT_1009c02c0,puVar1,puVar2);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_50;
  param_1[1] = uStack_48;
  return;
}

