// rea decompile_all
// name: FUN_100137d10
// address: 0x100137d10
// body: available
// range: 0x100137d10-0x100137e53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100137d10(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x3d);
  __sSS6appendyySSF(0x100000000000002b,0x80000001008904b0);
  uStack_58 = ((undefined8 *)
              (param_2 + _TtC14UURemoteServer29ClipboardReceiveCopyOperation::blockKey))[1];
  local_60 = *(undefined8 *)
              (param_2 + _TtC14UURemoteServer29ClipboardReceiveCopyOperation::blockKey);
  puVar3 = &DAT_100a75b50;
  FUN_100004bb4(&DAT_100a75b50,&DAT_100809be0);
  puVar2 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8;
  puVar1 = PTR___ss26DefaultStringInterpolationVN_100995bf0;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_60,&local_50,puVar3,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0xe6849ae7979de52d,0xae003ab095e6bb80);
  local_60 = CONCAT35(local_60._5_3_,
                      *(undefined5 *)
                       (param_2 + _TtC14UURemoteServer29ClipboardReceiveCopyOperation::blockCount));
  puVar3 = &DAT_100a75ab0;
  FUN_100004bb4(&DAT_100a75ab0,&DAT_100809b40);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF(&local_60,&local_50,puVar3,puVar1,puVar2);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_50;
  param_1[1] = uStack_48;
  return;
}

