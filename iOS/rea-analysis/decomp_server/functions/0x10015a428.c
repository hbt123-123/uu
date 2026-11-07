// rea decompile_all
// name: FUN_10015a428
// address: 0x10015a428
// body: available
// range: 0x10015a428-0x10015a68b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_10015a428(undefined8 *param_1,long param_2,undefined4 *param_3,long param_4,long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(100);
  __sSS6appendyySSF(0x1000000000000032,0x8000000100895210);
  uVar5 = *(ulong *)(param_2 + 0xb8) >> 0x3c;
  local_68 = 0;
  if (uVar5 < 0xf) {
    local_68 = *(undefined8 *)(param_2 + 0xa8);
  }
  uVar2 = 0;
  if (uVar5 < 0xf) {
    uVar2 = *(undefined8 *)(param_2 + 0xb0);
  }
  uVar1 = 0xc000000000000000;
  if (uVar5 < 0xf) {
    uVar1 = *(ulong *)(param_2 + 0xb8);
  }
  FUN_100040b80();
  FUN_100006cdc(uVar2,uVar1);
  puVar4 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x4974616d726f662d,0xea00000000003a44);
  puVar4 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  local_68._0_4_ = *param_3;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x654b6b636f6c622d,0xea00000000003a79);
  uVar2 = *(undefined8 *)(param_4 + 0x10);
  uVar3 = *(undefined8 *)(param_4 + 0x18);
  _swift_bridgeObjectRetain(uVar3);
  __sSS6appendyySSF(uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x6f436b636f6c622d,0xec0000003a746e75);
  local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(param_4 + 0x20));
  puVar4 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x3a8b9ee5bbb1e72d,0xa800000000000000);
  if (param_5 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = *(undefined8 *)(param_5 + 0x18);
  }
  puVar4 = &DAT_100a762d0;
  FUN_100004bb4(&DAT_100a762d0,&DAT_10080aac0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_68,&local_60,puVar4,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_60;
  param_1[1] = uStack_58;
  return 0;
}

