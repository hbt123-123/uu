// rea decompile_all
// name: _TtC6Sentry8SentryId::initWithUuid:
// address: 0x1007d622c
// body: available
// range: 0x1007d622c-0x1007d62e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry8SentryId::initWithUuid_(ID param_1,SEL param_2,ID param_3)

{
  class_t *pcVar1;
  long lVar2;
  ID IVar3;
  long lVar4;
  long lVar5;
  objc_super local_50;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  lVar5 = *(long *)(lVar2 + -8);
  lVar4 = (long)&local_50 - (*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4UUIDV36_unconditionallyBridgeFromObjectiveCyACSo6NSUUIDCSgFZ(lVar4,param_3);
  (**(code **)(lVar5 + 0x10))(param_1 + id,lVar4,lVar2);
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  IVar3 = _objc_msgSendSuper2(&local_50,"init");
  (**(code **)(lVar5 + 8))(lVar4,lVar2);
  return IVar3;
}

