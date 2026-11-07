// rea decompile_all
// name: FUN_1000fd188
// address: 0x1000fd188
// body: available
// range: 0x1000fd188-0x1000fd30f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000fd188(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  undefined4 uVar5;
  undefined1 auStack_70 [12];
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  
  lVar2 = 0;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  local_60 = 0;
  local_58 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x1f);
  _swift_bridgeObjectRelease(local_58);
  local_60 = 0x736552206f686345;
  local_58 = 0xed0000203a746c75;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC
            (param_2,param_3,auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = param_2;
  }
  lVar2 = -0x2000000000000000;
  if (param_3 != 0) {
    lVar2 = param_3;
  }
  __sSS6appendyySSF(uVar1,lVar2);
  _swift_bridgeObjectRelease(lVar2);
  __sSS6appendyySSF(0x65746f6d6552202c,0xee00203a64695020);
  lVar2 = *(long *)(param_4 + _TtC14UURemoteServer19XPCControlledClient::connection);
  if (lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = lVar2;
    _swift_retain();
    uVar5 = (undefined4)lVar3;
    FUN_1005d21f0();
    _swift_release(lVar2);
  }
  puVar4 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  local_64 = uVar5;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_60;
  param_1[1] = local_58;
  return;
}

