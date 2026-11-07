// rea decompile_all
// name: FUN_10039a024
// address: 0x10039a024
// body: available
// range: 0x10039a024-0x10039a10f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10039a024(uint param_1,code *param_2,undefined8 param_3)

{
  ID IVar1;
  undefined *puVar2;
  code **ppcVar3;
  ID unaff_x20;
  code *local_50;
  undefined *puStack_48;
  
  ppcVar3 = &local_50;
  IVar1 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
  if ((int)IVar1 == 0) {
    _swift_getObjCClassFromMetadata();
    puVar2 = &DAT_1009b6228;
    _swift_allocObject(&DAT_1009b6228,0x20,7);
    *(code **)(puVar2 + 0x10) = param_2;
    *(undefined8 *)(puVar2 + 0x18) = param_3;
    local_50 = FUN_100102840;
    puStack_48 = puVar2;
    _swift_retain(param_3);
    puVar2 = &DAT_100a8aca8;
    FUN_100004bb4(&DAT_100a8aca8,&DAT_10081f490);
    __ss38_bridgeAnythingNonVerbatimToObjectiveCyyXlxnlF(&local_50,puVar2);
    _objc_msgSend(unaff_x20,"performSelectorOnMainThread:withObject:waitUntilDone:","execute:",
                  ppcVar3,(ulong)(param_1 & 1));
    _swift_unknownObjectRelease(ppcVar3);
  }
  else {
    (*param_2)();
  }
  return;
}

