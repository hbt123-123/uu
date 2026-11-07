// rea decompile_all
// name: FUN_1001119f8
// address: 0x1001119f8
// body: available
// range: 0x1001119f8-0x100111c2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001119f8(undefined8 *param_1,undefined4 param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ID local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x5d);
  __sSS6appendyySSF(0xd000000000000034,0x800000010088bf00);
  puVar6 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  puVar1 = PTR___ss6UInt32VN_100995dc0;
  puVar4 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  local_68._0_4_ = param_2;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x496e656572637320,0xea00000000003a64);
  IVar2 = _objc_msgSend(param_3,"screenId");
  puVar7 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  puVar4 = PTR___ss5Int32VN_100995c78;
  local_68._0_4_ = (undefined4)IVar2;
  puVar5 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x3a6b6361727420,0xe700000000000000);
  IVar2 = _objc_msgSend(param_3,"videoTrackIndex");
  local_68._0_4_ = (undefined4)IVar2;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar1,puVar6);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x3a73706620,0xe500000000000000);
  IVar2 = _objc_msgSend(param_3,"fps");
  local_68 = CONCAT44(local_68._4_4_,(int)IVar2);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar7);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar7);
  __sSS6appendyySSF(0x7974696c61757120,0xe90000000000003a);
  local_68 = _objc_msgSend(param_3,"frameQuality");
  uVar3 = 0;
  FUN_10000608c(0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_68,&local_60,uVar3,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_60;
  param_1[1] = uStack_58;
  return;
}

