// rea decompile_all
// name: _TtC6Sentry20SentryRRWebSpanEvent::initWithTimestamp:endTimestamp:operation:description:data:
// address: 0x1007b7028
// body: available
// range: 0x1007b7028-0x1007b7143 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x38 bytes */

ID _TtC6Sentry20SentryRRWebSpanEvent::initWithTimestamp_endTimestamp_operation_description_data_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7)

{
  long lVar1;
  SEL pcVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ID IVar5;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar4 = &stack0xffffffffffffffb0 + -uVar3;
  IVar5 = (long)puVar4 - uVar3;
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(IVar5,param_3);
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(puVar4,param_4);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  pcVar2 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_7,PTR___sSSN_1009957f8,PTR___sypN_100995e88 + 8,PTR___sSSSHsWP_100995808);
  FUN_1007b721c(IVar5,puVar4,param_5,param_2,param_6,pcVar2,param_7);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(pcVar2);
  _swift_bridgeObjectRelease(param_7);
  return IVar5;
}

