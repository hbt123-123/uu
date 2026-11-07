// rea decompile_all
// name: _TtC6Sentry16SentryRRWebEvent::initWithType:timestamp:data:
// address: 0x1007b401c
// body: available
// range: 0x1007b401c-0x1007b413f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x28 bytes */

ID _TtC6Sentry16SentryRRWebEvent::initWithType_timestamp_data_
             (ID param_1,SEL param_2,long_long param_3,ID param_4,ID param_5)

{
  long lVar1;
  class_t *pcVar2;
  ID IVar3;
  long lVar4;
  long lVar5;
  objc_super local_60;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  lVar4 = (long)&local_60 - (*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar4,param_4);
  if (param_5 != 0) {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_5,PTR___sSSN_1009957f8,PTR___sypN_100995e88 + 8,PTR___sSSSHsWP_100995808);
  }
  *(long_long *)(param_1 + type) = param_3;
  (**(code **)(lVar5 + 0x10))(param_1 + timestamp,lVar4,lVar1);
  *(ID *)(param_1 + data) = param_5;
  pcVar2 = (class_t *)0x0;
  FUN_1007b4438();
  local_60.receiver = param_1;
  local_60.super_class = pcVar2;
  _swift_bridgeObjectRetain(param_5);
  IVar3 = _objc_msgSendSuper2(&local_60,"init");
  (**(code **)(lVar5 + 8))(lVar4,lVar1);
  _swift_bridgeObjectRelease(param_5);
  return IVar3;
}

