// rea decompile_all
// name: FUN_1000e7c50
// address: 0x1000e7c50
// body: available
// range: 0x1000e7c50-0x1000e7e4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000e7c50(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined1 param_6)

{
  undefined8 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x80);
  __sSS6appendyySSF(0x1000000000000050,0x80000001008881d0);
  local_68 = CONCAT44(local_68._4_4_,param_2);
  puVar3 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x736575716572202c,0xec0000003d644974);
  puVar3 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  local_68 = param_3;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  uVar4 = 0xe700000000000000;
  __sSS6appendyySSF(0x3d68746170202c,0xe700000000000000);
  __s10Foundation3URLV4pathSSvg();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  __sSS6appendyySSF(0x757365527369202c,0xeb000000003d656d);
  bVar2 = (param_5 & 1) == 0;
  uVar4 = 0x65757274;
  if (bVar2) {
    uVar4 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar2) {
    uVar1 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar4,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0x3d726f727265202c,0xe800000000000000);
  local_68 = CONCAT71(local_68._1_7_,param_6);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_68,&local_60,&DAT_10099c0d0,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_60;
  param_1[1] = uStack_58;
  return;
}

