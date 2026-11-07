// rea decompile_all
// name: FUN_100116f54
// address: 0x100116f54
// body: available
// range: 0x100116f54-0x1001170cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_100116f54(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0xe000000000000000;
  __sSS6appendyySSF(0x28,0xe100000000000000);
  __sSd5write2toyxz_ts16TextOutputStreamRzlF
            (param_1,&local_60,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  uVar2 = 0xe100000000000000;
  __sSS6appendyySSF(0x3a,0xe100000000000000);
  if ((param_3 & 1) == 0) {
    puVar3 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar3);
    uVar2 = 0xe800000000000000;
    __sSS6appendyySSF(0x3d65646f4379656b,0xe800000000000000);
    _swift_bridgeObjectRelease(0xe800000000000000);
  }
  __ss11_StringGutsV4growyySiF(0x11);
  _swift_bridgeObjectRelease(0xe000000000000000);
  FUN_1003e6894(param_4);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar2);
  __sSS6appendyySSF(0x65696669646f6d2c,0xef3d7367616c4672);
  _swift_bridgeObjectRelease(0xef3d7367616c4672);
  __sSS6appendyySSF(0x29,0xe100000000000000);
  auVar1._8_8_ = uStack_58;
  auVar1._0_8_ = local_60;
  return auVar1;
}

