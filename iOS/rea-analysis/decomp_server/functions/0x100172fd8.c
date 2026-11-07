// rea decompile_all
// name: FUN_100172fd8
// address: 0x100172fd8
// body: available
// range: 0x100172fd8-0x10017318b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100172fd8(undefined8 *param_1,undefined4 *param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_68 = 0;
  uStack_60 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x60);
  local_50 = local_68;
  uStack_48 = uStack_60;
  __sSS6appendyySSF(0x1000000000000040,0x80000001008966a0);
  local_68 = CONCAT44(local_68._4_4_,*param_2);
  puVar1 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar1);
  __sSS6appendyySSF(0x497473696c8cbcef,0xad00003d7865646e);
  param_3 = param_3 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  _swift_weakLoadStrong();
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_3 + 0x90);
    _swift_release();
  }
  local_68 = CONCAT44(local_68._4_4_,uVar2);
  puVar1 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar1);
  __sSS6appendyySSF(0x664f736f708cbcef,0xad00003d74657366);
  _swift_beginAccess(param_4,&local_68,0,0);
  puVar1 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt64VN_100995e10,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar1);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_50;
  param_1[1] = uStack_48;
  return;
}

