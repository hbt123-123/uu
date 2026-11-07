// rea decompile_all
// name: FUN_100210524
// address: 0x100210524
// body: available
// range: 0x100210524-0x1002106ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100210524(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x76);
  __sSS6appendyySSF(0x100000000000004a,0x80000001008a5180);
  local_58 = CONCAT44(local_58._4_4_,param_2);
  puVar1 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar1);
  __sSS6appendyySSF(0x736575716572202c,0xec0000003d644974);
  puVar1 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  local_58 = param_3;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar1);
  __sSS6appendyySSF(0x3d68746170202c,0xe700000000000000);
  __sSS6appendyySSF(*param_4,param_4[1]);
  __sSS6appendyySSF(0xd000000000000011,0x80000001008a3360);
  local_58 = CONCAT71(local_58._1_7_,param_5);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_58,&local_50,&DAT_10099e260,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_50;
  param_1[1] = uStack_48;
  return;
}

