// rea decompile_all
// name: _TtC10Filepicker26FilePickerTaskResponseBody::initWithUrl:fileSize:mimeType:videoCoverURL:resolution:md5:
// address: 0x10036e9cc
// body: available
// range: 0x10036e9cc-0x10036eb23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x40 bytes */

ID _TtC10Filepicker26FilePickerTaskResponseBody::
   initWithUrl_fileSize_mimeType_videoCoverURL_resolution_md5_
             (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5,ID param_6,ID param_7,
             ID param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  ID IVar6;
  undefined1 auStack_70 [8];
  ID local_68;
  
  puVar3 = &DAT_100a888b8;
  puVar2 = &DAT_10081cb00;
  local_68 = param_1;
  FUN_100004bb4(&DAT_100a888b8,&DAT_10081cb00);
  puVar5 = auStack_70 + -(*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  IVar6 = (long)puVar5 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(IVar6,param_3);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  if (param_6 != 0) {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar5,param_6);
  }
  puVar3 = (undefined *)(ulong)(param_6 == 0);
  (**(code **)(lVar4 + 0x38))(puVar5,puVar3,1,lVar1);
  if (param_7 != 0) {
    puVar3 = PTR___sSiN_100995968;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_7,PTR___sSiN_100995968);
  }
  if (param_8 == 0) {
    param_8 = 0;
    puVar3 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_8);
  }
  FUN_10036e76c(IVar6,param_4,param_5,puVar2,puVar5,param_7,param_8,puVar3);
  return IVar6;
}

