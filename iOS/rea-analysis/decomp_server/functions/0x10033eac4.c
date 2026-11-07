// rea decompile_all
// name: FUN_10033eac4
// address: 0x10033eac4
// body: available
// range: 0x10033eac4-0x10033ec77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


code * FUN_10033eac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 unaff_x20;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined8 local_90;
  long local_88;
  long local_80;
  
  lVar1 = 0;
  local_90 = param_2;
  __s8Dispatch0A12TimeIntervalOMa();
  lVar11 = *(long *)(lVar1 + -8);
  uVar4 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_88 = (long)&local_90 - uVar4;
  lVar7 = local_88 - uVar4;
  lVar2 = 0;
  local_80 = lVar11;
  __s7Network11NWInterfaceV13InterfaceTypeOMa();
  lVar6 = *(long *)(lVar2 + -8);
  lVar8 = *(long *)(lVar6 + 0x40);
  uVar4 = lVar8 + 0xfU & 0xfffffffffffffff0;
  lVar10 = lVar7 - uVar4;
  pcVar12 = *(code **)(lVar6 + 0x10);
  (*pcVar12)(lVar10,param_1,lVar2);
  pcVar9 = *(code **)(lVar11 + 0x10);
  (*pcVar9)(lVar7,local_90,lVar1);
  lVar11 = lVar10 - uVar4;
  (*pcVar12)(lVar11,lVar10,lVar2);
  uVar4 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar5 = uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff);
  puVar3 = &DAT_1009b2f00;
  _swift_allocObject(&DAT_1009b2f00,uVar5 + lVar8,uVar4 | 7);
  (**(code **)(lVar6 + 0x20))(puVar3 + uVar5,lVar11,lVar2);
  lVar8 = local_88;
  (*pcVar9)(local_88,lVar7,lVar1);
  _swift_allocObject(unaff_x20,0x18,7);
  _swift_retain(param_4);
  pcVar9 = thunk_FUN_10033f368;
  FUN_10033f114(thunk_FUN_10033f368,puVar3,lVar8,param_3,param_4);
  _swift_release(puVar3);
  (**(code **)(local_80 + 8))(lVar7,lVar1);
  (**(code **)(lVar6 + 8))(lVar10,lVar2);
  return pcVar9;
}

