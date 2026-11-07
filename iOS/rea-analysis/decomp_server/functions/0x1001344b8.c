// rea decompile_all
// name: FUN_1001344b8
// address: 0x1001344b8
// body: available
// range: 0x1001344b8-0x10013464f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001344b8(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar4 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&local_90 - extraout_x8;
  local_90 = 0;
  uStack_88 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x3e);
  local_70 = local_90;
  uStack_68 = uStack_88;
  __sSS6appendyySSF(0x100000000000002f,0x800000010088fdf0);
  uStack_88 = *(undefined8 *)(param_2 + 0x18);
  local_90 = *(undefined8 *)(param_2 + 0x10);
  puVar5 = &DAT_100a75b50;
  FUN_100004bb4(&DAT_100a75b50,&DAT_100809be0);
  puVar2 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8;
  puVar1 = PTR___ss26DefaultStringInterpolationVN_100995bf0;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_90,&local_70,puVar5,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x557265646c6f662d,0xeb000000003a6c52);
  lVar3 = _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::folderURl;
  _swift_beginAccess(param_2 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::folderURl,
                     &local_90,0,0);
  FUN_1000e3888(param_2 + lVar3,lVar6);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF(lVar6,&local_70,puVar4,puVar1,puVar2);
  FUN_100040bb4(lVar6,&DAT_100a766c8,&DAT_10080b1d0);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_70;
  param_1[1] = uStack_68;
  return;
}

