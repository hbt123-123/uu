// rea decompile_all
// name: FUN_100269194
// address: 0x100269194
// body: available
// range: 0x100269194-0x10026928f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100269194(undefined *param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  (**(code **)(param_4 + 0x30))(param_3,param_4);
  puVar2 = param_3;
  FUN_100275c44();
  FUN_10026b3ec(param_3);
  lVar4 = puVar2[2];
  if (lVar4 != 0) {
    lVar5 = 0x20;
    do {
      if (lVar4 == 0) {
        _swift_bridgeObjectRelease();
        FUN_100262084();
        puVar3 = &DAT_1009a8e98;
        _swift_allocError(&DAT_1009a8e98,puVar2,0,0);
        *puVar2 = param_1;
        puVar2[1] = 0;
        *(undefined1 *)(puVar2 + 2) = 5;
        _swift_retain(param_1);
        goto LAB_100269264;
      }
      plVar1 = (long *)((long)puVar2 + lVar5);
      lVar5 = lVar5 + 8;
      lVar4 = lVar4 + -1;
    } while (*plVar1 != *(long *)(param_1 + 0x10));
  }
  _swift_bridgeObjectRelease(puVar2);
  puVar3 = param_1;
LAB_100269264:
  _swift_retain(param_1);
  return puVar3;
}

