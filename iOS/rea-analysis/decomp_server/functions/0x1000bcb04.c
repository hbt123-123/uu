// rea decompile_all
// name: FUN_1000bcb04
// address: 0x1000bcb04
// body: available
// range: 0x1000bcb04-0x1000bccc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000bcb04(ID *param_1,ID param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,ID param_8,ID param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  ID local_70;
  ID IStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ID local_50;
  ID IStack_48;
  
  local_70 = 0;
  IStack_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x62);
  local_50 = local_70;
  IStack_48 = IStack_68;
  __sSS6appendyySSF(0xd00000000000003c,0x8000000100883330);
  __sSS6appendyySSF(param_6,param_7);
  __sSS6appendyySSF(0x3d656d617266202c,0xe800000000000000);
  _objc_msgSend(param_8,"frame");
  uVar1 = 0;
  local_70 = param_2;
  IStack_68 = param_3;
  local_60 = param_4;
  uStack_58 = param_5;
  FUN_10000610c(0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_70,&local_50,uVar1,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x3d6c6576656c202c,0xe800000000000000);
  local_70 = _objc_msgSend(param_9,"level");
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x6e6972616873202c,0xee003d6570795467);
  local_70 = _objc_msgSend(param_9,"sharingType");
  puVar2 = PTR___sSus23CustomStringConvertiblesWP_100995a80;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSuN_100995a50,PTR___sSus23CustomStringConvertiblesWP_100995a80);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  param_1[3] = (ID)PTR___sSSN_1009957f8;
  *param_1 = local_50;
  param_1[1] = IStack_48;
  return;
}

