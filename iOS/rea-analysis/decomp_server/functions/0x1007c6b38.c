// rea decompile_all
// name: _TtC6Sentry15SentryVideoInfo::initWithPath:height:width:duration:frameCount:frameRate:start:end:fileSize:screens:
// address: 0x1007c6b38
// body: available
// range: 0x1007c6b38-0x1007c6c6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x60 bytes */

ID _TtC6Sentry15SentryVideoInfo::
   initWithPath_height_width_duration_frameCount_frameRate_start_end_fileSize_screens_
             (ID param_1,SEL param_2,ID param_3,long_long param_4,long_long param_5,double param_6,
             long_long param_7,long_long param_8,ID param_9,ID param_10,long_long param_11,
             ID param_12)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long lVar4;
  ID IVar5;
  ID aIStack_a0 [2];
  undefined1 auStack_90 [8];
  long_long local_88;
  ID local_80;
  long_long local_78;
  
  lVar1 = 0;
  local_88 = param_7;
  local_80 = param_1;
  local_78 = param_8;
  __s10Foundation4DateVMa();
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar3 = auStack_90 + -uVar2;
  lVar4 = (long)puVar3 - uVar2;
  lVar1 = 0;
  __s10Foundation3URLVMa();
  IVar5 = lVar4 - (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(IVar5,param_3);
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar4,param_9);
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(puVar3,param_10);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_12,PTR___sSSN_1009957f8);
  *(ID *)(IVar5 - 0x10) = param_12;
  FUN_1007c6e58(param_6,IVar5,param_4,param_5,local_88,local_78,lVar4,puVar3,param_11);
  _swift_bridgeObjectRelease(param_12);
  return IVar5;
}

