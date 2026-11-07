// rea decompile_all
// name: FUN_100215c9c
// address: 0x100215c9c
// body: available
// range: 0x100215c9c-0x100215e9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100215c9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x7c);
  __sSS6appendyySSF(0x100000000000004c,0x80000001008a4c00);
  puVar1 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  local_68 = param_2;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar1);
  __sSS6appendyySSF(0x64496b736174202c,0xe90000000000003d);
  puVar3 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  puVar1 = PTR___ss5Int32VN_100995c78;
  puVar2 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  local_68._0_4_ = (int)((ulong)param_3 >> 0x20);
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x6e49656c6966202c,0xec0000003d786564);
  local_68._0_4_ = (undefined4)param_4;
  puVar2 = puVar3;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar1,puVar3);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x496b636f6c62202c,0xea00000000003d64);
  local_68 = CONCAT44(local_68._4_4_,(int)((ulong)param_4 >> 0x20));
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar1,puVar3);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x3d646e696b202c,0xe700000000000000);
  local_68 = CONCAT71(local_68._1_7_,(char)param_3);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_68,&local_60,&DAT_1009a53a0,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_60;
  param_1[1] = uStack_58;
  return;
}

