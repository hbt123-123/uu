// rea decompile_all
// name: FUN_1001fd9b0
// address: 0x1001fd9b0
// body: available
// range: 0x1001fd9b0-0x1001fdf67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001fd9b0(undefined8 *param_1,ID param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ID local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0xe1);
  __sSS6appendyySSF(0x100000000000002f,0x80000001008a2b60);
  pcVar8 = "description";
  IVar5 = _objc_msgSend(param_2,"description");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar5);
  __sSS6appendyySSF(IVar5,pcVar8);
  _swift_bridgeObjectRelease(pcVar8);
  __sSS6appendyySSF(0x3a73706620,0xe500000000000000);
  IVar5 = _objc_msgSend(param_2,"fps");
  puVar11 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  puVar3 = PTR___ss5Int32VN_100995c78;
  local_78 = CONCAT44(local_78._4_4_,(int)IVar5);
  puVar9 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar9);
  __sSS6appendyySSF(0x7551656d61726620,0xee003a7974696c61);
  local_78 = _objc_msgSend(param_2,"frameQuality");
  uVar6 = 0;
  FUN_10000608c(0);
  puVar2 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8;
  puVar9 = PTR___ss26DefaultStringInterpolationVN_100995bf0;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_78,&local_70,uVar6,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x79546365646f6320,0xeb000000003a6570);
  local_78 = _objc_msgSend(param_2,"codecType");
  uVar7 = 0;
  FUN_100006078(0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF(&local_78,&local_70,uVar7,puVar9,puVar2);
  __sSS6appendyySSF(&DAT_d000000000000010,0x800000010088c480);
  local_78 = _objc_msgSend(param_2,"chromaSampling");
  uVar7 = 0;
  FUN_100006064(0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF(&local_78,&local_70,uVar7,puVar9,puVar2);
  __sSS6appendyySSF(0x3a72646820,0xe500000000000000);
  IVar5 = _objc_msgSend(param_2,"hdr");
  bVar4 = (int)IVar5 == 0;
  uVar7 = 0x65757274;
  if (bVar4) {
    uVar7 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar4) {
    uVar1 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar7,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0x6c61635378616d20,0xeb00000000203a65);
  IVar5 = _objc_msgSend(param_2,"maxScaleWidth");
  puVar10 = puVar11;
  local_78._0_4_ = (int)IVar5;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar11);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar10);
  __sSS6appendyySSF(0x202a20,0xe300000000000000);
  IVar5 = _objc_msgSend(param_2,"maxScaleHeight");
  local_78._0_4_ = (undefined4)IVar5;
  puVar10 = puVar11;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar11);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar10);
  __sSS6appendyySSF(0x74756c6f73657220,0xed0000203a6e6f69);
  IVar5 = _objc_msgSend(param_2,"resolutionWidth");
  local_78._0_4_ = (undefined4)IVar5;
  puVar10 = puVar11;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar11);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar10);
  __sSS6appendyySSF(0x202a20,0xe300000000000000);
  IVar5 = _objc_msgSend(param_2,"resolutionHeight");
  local_78._0_4_ = (undefined4)IVar5;
  puVar10 = puVar11;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar11);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar10);
  __sSS6appendyySSF(0x202d20,0xe300000000000000);
  IVar5 = _objc_msgSend(param_2,"resolutionPixelWidth");
  local_78._0_4_ = (undefined4)IVar5;
  puVar10 = puVar11;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar11);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar10);
  __sSS6appendyySSF(0x202a20,0xe300000000000000);
  IVar5 = _objc_msgSend(param_2,"resolutionPixelHeight");
  local_78._0_4_ = (undefined4)IVar5;
  puVar10 = puVar11;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar11);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar10);
  __sSS6appendyySSF(&DAT_d000000000000013,0x800000010088c4a0);
  IVar5 = _objc_msgSend(param_2,"maxCustomBitrate");
  local_78 = CONCAT44(local_78._4_4_,(int)IVar5);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar11);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar11);
  __sSS6appendyySSF(0xd000000000000015,0x80000001008a2b90);
  local_78 = _objc_msgSend(param_2,"autoHighestQuality");
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF(&local_78,&local_70,uVar6,puVar9,puVar2);
  __sSS6appendyySSF(0xd000000000000015,0x80000001008a2bb0);
  local_78 = _objc_msgSend(param_2,"autoStartupQuality");
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF(&local_78,&local_70,uVar6,puVar9,puVar2);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_70;
  param_1[1] = uStack_68;
  return;
}

