// rea decompile_all
// name: FUN_10013e6b8
// address: 0x10013e6b8
// body: available
// range: 0x10013e6b8-0x10013e7fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10013e6b8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x3f);
  __sSS6appendyySSF(0x1000000000000033,0x8000000100891110);
  lVar5 = *(long *)(*(long *)(param_2 + 0x10) + 0x88);
  if (lVar5 == 0) {
    uVar7 = 0;
    uVar6 = 0;
  }
  else {
    puVar1 = (undefined8 *)(lVar5 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::file);
    uVar7 = *puVar1;
    uVar6 = puVar1[1];
    _swift_bridgeObjectRetain(uVar6);
  }
  puVar4 = &DAT_100a75b50;
  local_60 = uVar7;
  uStack_58 = uVar6;
  FUN_100004bb4(&DAT_100a75b50,&DAT_100809be0);
  puVar3 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8;
  puVar2 = PTR___ss26DefaultStringInterpolationVN_100995bf0;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_60,&local_50,puVar4,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  _swift_bridgeObjectRelease(uVar6);
  __sSS6appendyySSF(0x3a746c757365722d,0xe800000000000000);
  local_60 = CONCAT71(local_60._1_7_,*(undefined1 *)(param_2 + 0x18));
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_60,&local_50,&DAT_1009a01b0,puVar2,puVar3);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_50;
  param_1[1] = uStack_48;
  return;
}

