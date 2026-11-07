// rea decompile_all
// name: FUN_10033dd08
// address: 0x10033dd08
// body: available
// range: 0x10033dd08-0x10033de67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


code * FUN_10033dd08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 unaff_x20;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_80 [8];
  
  lVar1 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  lVar7 = *(long *)(lVar1 + -8);
  puVar9 = auStack_80 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s7Network11NWInterfaceV13InterfaceTypeOMa();
  lVar8 = *(long *)(lVar2 + -8);
  lVar11 = *(long *)(lVar8 + 0x40);
  lVar10 = (long)puVar9 - (lVar11 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar8 + 0x10))(lVar10,param_1,lVar2);
  uVar5 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar6 = uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff);
  puVar3 = &DAT_1009b2e88;
  _swift_allocObject(&DAT_1009b2e88,uVar6 + lVar11,uVar5 | 7);
  (**(code **)(lVar8 + 0x20))(puVar3 + uVar6,lVar10,lVar2);
  (**(code **)(lVar7 + 0x10))(puVar9,param_2,lVar1);
  _swift_allocObject(unaff_x20,0x18,7);
  pcVar4 = thunk_FUN_10033f368;
  FUN_10033f114(thunk_FUN_10033f368,puVar3,puVar9,param_3,param_4,unaff_x20);
  _swift_release(puVar3);
  (**(code **)(lVar7 + 8))(param_2,lVar1);
  (**(code **)(lVar8 + 8))(param_1,lVar2);
  return pcVar4;
}

