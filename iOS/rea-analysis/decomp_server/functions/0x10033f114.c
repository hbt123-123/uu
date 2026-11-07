// rea decompile_all
// name: FUN_10033f114
// address: 0x10033f114
// body: available
// range: 0x10033f114-0x10033f297 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10033f114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  undefined4 *puVar7;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  
  lVar3 = 0;
  FUN_10033f2a8();
  puVar8 = &stack0xffffffffffffffa0 +
           -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  lVar9 = *(long *)(lVar4 + -8);
  (**(code **)(lVar9 + 0x10))(puVar8,param_3,lVar4);
  puVar5 = &DAT_1009b3128;
  _swift_allocObject(&DAT_1009b3128,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  *(undefined8 *)(puVar5 + 0x18) = param_2;
  iVar2 = *(int *)(lVar3 + 0x14);
  *(undefined8 *)(puVar8 + iVar2) = param_4;
  *(undefined8 *)((long)(puVar8 + iVar2) + 8) = param_5;
  iVar2 = *(int *)(lVar3 + 0x18);
  *(code **)(puVar8 + iVar2) = FUN_10033fd50;
  *(undefined **)((long)(puVar8 + iVar2) + 8) = puVar5;
  *(undefined8 *)(puVar8 + *(int *)(lVar3 + 0x1c)) = 0;
  puVar1 = (undefined8 *)(puVar8 + *(int *)(lVar3 + 0x20));
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined **)(puVar8 + *(int *)(lVar3 + 0x24)) = PTR___swiftEmptyArrayStorage_100995ea0;
  plVar6 = (long *)&DAT_100a86ee0;
  FUN_100004bb4(&DAT_100a86ee0,&DAT_10081ae78);
  _swift_allocObject();
  lVar3 = 0;
  FUN_1002c6dd8();
  _swift_allocObject();
  _swift_retain(param_2);
  puVar7 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(undefined4 **)(lVar3 + 0x10) = puVar7;
  *puVar7 = 0;
  (**(code **)(lVar9 + 8))(param_3,lVar4);
  plVar6[2] = lVar3;
  FUN_10033fda0(puVar8,(undefined *)((long)plVar6 + *(long *)(*plVar6 + 0x60)));
  *(long **)(unaff_x20 + 0x10) = plVar6;
  return;
}

