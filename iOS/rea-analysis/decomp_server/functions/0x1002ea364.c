// rea decompile_all
// name: FUN_1002ea364
// address: 0x1002ea364
// body: available
// range: 0x1002ea364-0x1002ea4bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002ea364(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar2 = 0;
  FUN_100277ad0();
  lVar1 = -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined8 *)(&stack0xffffffffffffffa0 + lVar1);
  if (((uint)param_2 & 0xff) == 1) {
    puVar3 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    lVar4 = lVar2;
    _swift_allocError(lVar2,puVar3,0,0);
    FUN_100082394(param_5);
    *puVar5 = param_1;
    *(long *)(&stack0xffffffffffffffa8 + lVar1) = lVar4;
    _swift_storeEnumTagMultiPayload(puVar5,lVar2,8);
    _swift_allocError(lVar2,puVar3,0,0);
    FUN_100082394(puVar5);
    FUN_1002f1030(param_1,1);
    _swift_errorRetain(param_1);
    (*param_3)(lVar2,1);
    _swift_errorRelease(lVar2);
    FUN_1002f0fe4(param_1,1);
    FUN_1000d27dc(puVar5,FUN_100277ad0);
  }
  else {
    (*param_3)(param_1,param_2);
  }
  return;
}

