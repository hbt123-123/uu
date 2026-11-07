// rea decompile_all
// name: FUN_1000a0248
// address: 0x1000a0248
// body: available
// range: 0x1000a0248-0x1000a03b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1000a0248(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined1 auStack_180 [136];
  long local_f8;
  undefined *local_e8 [17];
  long local_60;
  
  lVar5 = *(long *)(param_2 + 0x10);
  _swift_bridgeObjectRetain(param_2);
  lVar6 = lVar5 + 1;
  plVar4 = (long *)(param_2 + lVar5 * 0x10 + 0x18);
  do {
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) {
      _swift_bridgeObjectRelease(param_2);
      puVar2 = &DAT_1001041a0;
      FUN_10000eb08(&DAT_1001041a0,&DAT_1000d4300);
      _swift_initStaticObject();
      local_e8[0] = PTR___swiftEmptySetSingleton_1000f0750;
      puVar3 = puVar2;
      FUN_100066b80();
      _swift_arrayDestroy(puVar2 + 0x20,2,&DAT_1000f8130);
      _swift_bridgeObjectRelease(local_e8[0]);
      FUN_1000a7000(param_1,puVar3);
      _swift_bridgeObjectRelease(puVar3);
      return param_1;
    }
    lVar5 = plVar4[-1];
    lVar1 = *plVar4;
    pcVar7 = *(code **)(lVar1 + 0x10);
    (*pcVar7)(auStack_180,lVar5,lVar1);
    FUN_10006e954(auStack_180);
    plVar4 = plVar4 + -2;
  } while (local_f8 == 0);
  (*pcVar7)(local_e8,lVar5,lVar1);
  _swift_bridgeObjectRetain(local_60);
  FUN_10006e954(local_e8);
  if (local_60 != 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRetain(local_60);
    FUN_1000a7000(param_1,local_60);
    _swift_bridgeObjectRelease_n(local_60,2);
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1000a03b4);
  (*pcVar7)();
}

