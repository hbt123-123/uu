// rea decompile_all
// name: FUN_10033e9c4
// address: 0x10033e9c4
// body: available
// range: 0x10033e9c4-0x10033eac3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


code * FUN_10033e9c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  lVar5 = *(long *)(lVar1 + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  puVar2 = &DAT_1009b2ed8;
  _swift_allocObject(&DAT_1009b2ed8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  (**(code **)(lVar5 + 0x10))
            (&stack0xffffffffffffffa0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),param_3,lVar1);
  _swift_allocObject();
  _swift_retain(param_2);
  _swift_retain(param_5);
  pcVar3 = FUN_100102840;
  FUN_10033f114(FUN_100102840,puVar2,&stack0xffffffffffffffa0 + -(lVar4 + 0xfU & 0xfffffffffffffff0)
                ,param_4,param_5);
  _swift_release(puVar2);
  return pcVar3;
}

