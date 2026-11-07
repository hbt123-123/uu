// rea decompile_all
// name: FUN_100624e8c
// address: 0x100624e8c
// body: available
// range: 0x100624e8c-0x100625077 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100624e8c(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_90 [48];
  
  lVar10 = *param_1;
  lVar9 = *param_2;
  puVar1 = &DAT_100aaffc0;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  puVar5 = auStack_90 + -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100aaff00;
  puVar2 = puVar1;
  FUN_100626130(&DAT_100aaff00,&DAT_100848420,&DAT_100ab0690,&DAT_100848a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 5;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  puVar3 = puVar2;
  FUN_100612c20();
  *(undefined **)(puVar2 + 0x20) = puVar3;
  FUN_100612c20();
  *(undefined **)(puVar2 + 0x28) = puVar3;
  puVar3 = puVar2;
  FUN_10061f76c(puVar2);
  _swift_setDeallocating(puVar2);
  uVar6 = *(undefined8 *)(puVar2 + 0x10);
  FUN_100004bb4(&DAT_100aaff00,&DAT_100848420);
  _swift_arrayDestroy(puVar2 + 0x20,uVar6,puVar1);
  lVar4 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(puVar5,1,1,lVar4);
  puVar1 = &DAT_1009e0908;
  _swift_allocObject(&DAT_1009e0908,0x20,7);
  *(long **)(puVar1 + 0x10) = param_1;
  *(long **)(puVar1 + 0x18) = param_2;
  puVar2 = &DAT_1009e0930;
  _swift_allocObject(&DAT_1009e0930,0x30,7);
  uVar7 = *(undefined8 *)(lVar10 + 0x50);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  uVar8 = *(undefined8 *)(lVar9 + 0x50);
  *(undefined8 *)(puVar2 + 0x18) = uVar8;
  *(code **)(puVar2 + 0x20) = FUN_100626edc;
  *(undefined **)(puVar2 + 0x28) = puVar1;
  _swift_retain(param_1);
  _swift_retain(param_2);
  uVar6 = 0;
  _swift_getTupleTypeMetadata2(0,uVar7,uVar8,0,0);
  uVar7 = 0;
  FUN_1006119f0(0,puVar5,FUN_100626ee4,puVar2,uVar6);
  _swift_release(puVar3);
  _swift_release(puVar2);
  FUN_1006070b4(puVar5);
  return uVar7;
}

