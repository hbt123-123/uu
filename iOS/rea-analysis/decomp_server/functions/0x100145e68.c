// rea decompile_all
// name: FUN_100145e68
// address: 0x100145e68
// body: available
// range: 0x100145e68-0x100145fcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100145e68(undefined8 *param_1,undefined1 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x2c);
  __sSS6appendyySSF(0x1000000000000017,0x8000000100891be0);
  puVar2 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8;
  puVar1 = PTR___ss26DefaultStringInterpolationVN_100995bf0;
  local_58 = CONCAT71(local_58._1_7_,param_2);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_58,&local_50,&DAT_1009a02d0,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0xe68e90e5809ce62d,0xae003ab095e6bb80);
  local_58 = _objc_msgSend(*(ID *)(param_3 + 0x18),"maxConcurrentOperationCount");
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x2d,0xe100000000000000);
  local_58 = *(ID *)(param_3 + 0x50);
  puVar3 = &DAT_100a7a280;
  FUN_100004bb4(&DAT_100a7a280,&DAT_10080ebf8);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF(&local_58,&local_50,puVar3,puVar1,puVar2);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_50;
  param_1[1] = uStack_48;
  return;
}

