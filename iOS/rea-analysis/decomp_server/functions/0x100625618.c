// rea decompile_all
// name: FUN_100625618
// address: 0x100625618
// body: available
// range: 0x100625618-0x10062586f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100625618(long *param_1,long *param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long local_f0;
  undefined *local_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  local_e0 = *param_1;
  lStack_d8 = *param_2;
  local_d0 = *param_3;
  lStack_c8 = *param_4;
  puVar1 = &DAT_100aaffc0;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar5 = (long)&local_f0 - (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100aaff00;
  puVar2 = puVar1;
  local_f0 = lVar5;
  FUN_100626130(&DAT_100aaff00,&DAT_100848420,&DAT_100ab0690,&DAT_100848a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 9;
  *(undefined8 *)(puVar2 + 0x10) = 4;
  puVar3 = puVar2;
  FUN_100612c20();
  *(undefined **)(puVar2 + 0x20) = puVar3;
  FUN_100612c20();
  *(undefined **)(puVar2 + 0x28) = puVar3;
  FUN_100612c20();
  *(undefined **)(puVar2 + 0x30) = puVar3;
  FUN_100612c20();
  *(undefined **)(puVar2 + 0x38) = puVar3;
  puVar3 = puVar2;
  FUN_10061f76c();
  local_e8 = puVar3;
  _swift_setDeallocating(puVar2);
  uVar8 = *(undefined8 *)(puVar2 + 0x10);
  FUN_100004bb4(&DAT_100aaff00,&DAT_100848420);
  _swift_arrayDestroy(puVar2 + 0x20,uVar8,puVar1);
  lVar4 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar5,1,1,lVar4);
  puVar1 = &DAT_1009e09a8;
  _swift_allocObject(&DAT_1009e09a8,0x30,7);
  *(long **)(puVar1 + 0x10) = param_1;
  *(long **)(puVar1 + 0x18) = param_2;
  *(long **)(puVar1 + 0x20) = param_3;
  *(long **)(puVar1 + 0x28) = param_4;
  puVar2 = &DAT_1009e09d0;
  _swift_allocObject(&DAT_1009e09d0,0x40,7);
  uVar9 = *(undefined8 *)(local_e0 + 0x50);
  *(undefined8 *)(puVar2 + 0x10) = uVar9;
  uVar10 = *(undefined8 *)(lStack_d8 + 0x50);
  *(undefined8 *)(puVar2 + 0x18) = uVar10;
  uVar7 = *(undefined8 *)(local_d0 + 0x50);
  *(undefined8 *)(puVar2 + 0x20) = uVar7;
  uVar6 = *(undefined8 *)(lStack_c8 + 0x50);
  *(undefined8 *)(puVar2 + 0x28) = uVar6;
  *(code **)(puVar2 + 0x30) = FUN_100627004;
  *(undefined **)(puVar2 + 0x38) = puVar1;
  _swift_retain(param_1);
  _swift_retain(param_2);
  _swift_retain(param_3);
  _swift_retain(param_4);
  uVar8 = 0;
  local_c0 = uVar9;
  uStack_b8 = uVar10;
  local_b0 = uVar7;
  uStack_a8 = uVar6;
  _swift_getTupleTypeMetadata(0,4,&local_c0,0,0);
  puVar1 = local_e8;
  lVar4 = local_f0;
  uVar6 = 0;
  FUN_1006119f0(0,local_f0,FUN_100627010,puVar2,uVar8);
  _swift_release(puVar1);
  _swift_release(puVar2);
  FUN_1006070b4(lVar4);
  return uVar6;
}

