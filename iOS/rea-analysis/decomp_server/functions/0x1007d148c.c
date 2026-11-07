// rea decompile_all
// name: _TtC6Sentry21SentryRRWebVideoEvent::initWithTimestamp:segmentId:size:duration:encoding:container:height:width:frameCount:frameRateType:frameRate:left:top:
// address: 0x1007d148c
// body: available
// range: 0x1007d148c-0x1007d15c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x78 bytes */

ID _TtC6Sentry21SentryRRWebVideoEvent::
   initWithTimestamp_segmentId_size_duration_encoding_container_height_width_frameCount_frameRateType_frameRate_left_top_
             (ID param_1,SEL param_2,ID param_3,long_long param_4,long_long param_5,double param_6,
             ID param_7,ID param_8,long_long param_9,long_long param_10,long_long param_11,
             ID param_12,long_long param_13,long_long param_14,long_long param_15)

{
  long_long lVar1;
  long lVar2;
  ID IVar3;
  SEL pcVar4;
  SEL pcVar5;
  long_long alStack_e0 [2];
  ID aIStack_d0 [2];
  long_long alStack_c0 [4];
  long_long local_a0;
  long_long lStack_98;
  long_long local_88;
  ID local_80;
  long_long local_78;
  
  lStack_98 = param_14;
  local_a0 = param_13;
  lVar2 = 0;
  local_88 = param_5;
  local_80 = param_1;
  local_78 = param_9;
  __s10Foundation4DateVMa();
  lVar2 = -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  IVar3 = (long)&local_a0 + lVar2;
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(IVar3,param_3);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_7);
  pcVar4 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_8);
  pcVar5 = pcVar4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(long_long *)((long)alStack_c0 + lVar2 + 0x10) = param_15;
  lVar1 = local_a0;
  *(long_long *)((long)alStack_c0 + lVar2 + 8) = lStack_98;
  *(long_long *)((long)alStack_c0 + lVar2) = lVar1;
  *(ID *)((long)aIStack_d0 + lVar2) = param_12;
  *(SEL *)((long)aIStack_d0 + lVar2 + 8) = pcVar5;
  *(long_long *)((long)alStack_e0 + lVar2) = param_10;
  *(long_long *)((long)alStack_e0 + lVar2 + 8) = param_11;
  FUN_1007d169c(param_6,IVar3,param_4,local_88,param_7,param_2,param_8,pcVar4,local_78);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(pcVar4);
  _swift_bridgeObjectRelease(pcVar5);
  return IVar3;
}

