// rea decompile_all
// name: FUN_10033ec78
// address: 0x10033ec78
// body: available
// range: 0x10033ec78-0x10033ed9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


code * FUN_10033ec78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  code *pcVar7;
  
  lVar1 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  lVar6 = *(long *)(lVar1 + -8);
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar5 = &stack0xffffffffffffffa0 + -uVar3;
  lVar4 = (long)puVar5 - uVar3;
  pcVar7 = *(code **)(lVar6 + 0x10);
  (*pcVar7)(lVar4,param_2,lVar1);
  puVar2 = &DAT_1009b2f28;
  _swift_allocObject(&DAT_1009b2f28,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  (*pcVar7)(puVar5,lVar4,lVar1);
  _swift_allocObject();
  _swift_bridgeObjectRetain(param_1);
  _swift_retain(param_4);
  pcVar7 = thunk_FUN_10033f2a0;
  FUN_10033f114(thunk_FUN_10033f2a0,puVar2,puVar5,param_3,param_4);
  _swift_release(puVar2);
  (**(code **)(lVar6 + 8))(lVar4,lVar1);
  return pcVar7;
}

