// rea decompile_all
// name: FUN_10001e5e4
// address: 0x10001e5e4
// body: available
// range: 0x10001e5e4-0x10001e7cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10001e5e4(undefined8 *param_1,undefined4 param_2,ID param_3,long param_4)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_68 = 0;
  uStack_60 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x71);
  local_50 = local_68;
  uStack_48 = uStack_60;
  __sSS6appendyySSF(0xd000000000000049,0x800000010087bfc0);
  puVar2 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  local_68._0_4_ = param_2;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x496e656572637320,0xea00000000003a64);
  IVar1 = _objc_msgSend(param_3,"screenId");
  puVar2 = PTR___ss5Int32VN_100995c78;
  local_68 = CONCAT44(local_68._4_4_,(int)IVar1);
  puVar3 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x5365766974636120,0xef3a736e65657263);
  _swift_beginAccess(param_4 + 0x88,&local_68,0,0);
  uVar5 = *(undefined8 *)(param_4 + 0x88);
  uVar4 = uVar5;
  _swift_bridgeObjectRetain(uVar5);
  FUN_100045cc4();
  _swift_bridgeObjectRelease(uVar5);
  uVar5 = uVar4;
  __sSa11descriptionSSvg(uVar4,puVar2);
  _swift_bridgeObjectRelease(uVar4);
  __sSS6appendyySSF(uVar5,puVar2);
  _swift_bridgeObjectRelease(puVar2);
  uVar4 = 0xe700000000000000;
  __sSS6appendyySSF(0x3a657461747320,0xe700000000000000);
  FUN_100015370();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_50;
  param_1[1] = uStack_48;
  return;
}

