// rea decompile_all
// name: FUN_100625b28
// address: 0x100625b28
// body: available
// range: 0x100625b28-0x100625dcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100625b28(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *local_120;
  long *local_118;
  long local_110;
  undefined *local_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  
  local_100 = *param_1;
  lStack_f8 = *param_2;
  local_f0 = *param_3;
  lStack_e8 = *param_4;
  local_e0 = *param_5;
  puVar1 = &DAT_100aaffc0;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar4 = (long)&local_120 - (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100aaff00;
  local_110 = lVar4;
  FUN_100626130(&DAT_100aaff00,&DAT_100848420,&DAT_100ab0690,&DAT_100848a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 0xb;
  *(undefined8 *)(puVar1 + 0x10) = 5;
  puVar2 = puVar1;
  FUN_100612c20();
  *(undefined **)(puVar1 + 0x20) = puVar2;
  FUN_100612c20();
  *(undefined **)(puVar1 + 0x28) = puVar2;
  FUN_100612c20();
  *(undefined **)(puVar1 + 0x30) = puVar2;
  local_120 = param_4;
  FUN_100612c20();
  *(undefined **)(puVar1 + 0x38) = puVar2;
  local_118 = param_5;
  FUN_100612c20();
  *(undefined **)(puVar1 + 0x40) = puVar2;
  puVar2 = puVar1;
  FUN_10061f76c();
  local_108 = puVar2;
  _swift_setDeallocating(puVar1);
  uVar9 = *(undefined8 *)(puVar1 + 0x10);
  puVar2 = &DAT_100aaff00;
  FUN_100004bb4(&DAT_100aaff00,&DAT_100848420);
  _swift_arrayDestroy(puVar1 + 0x20,uVar9,puVar2);
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar4,1,1,lVar3);
  puVar1 = &DAT_1009e09f8;
  _swift_allocObject(&DAT_1009e09f8,0x38,7);
  *(long **)(puVar1 + 0x10) = param_1;
  *(long **)(puVar1 + 0x18) = param_2;
  *(long **)(puVar1 + 0x20) = param_3;
  *(long **)(puVar1 + 0x28) = param_4;
  *(long **)(puVar1 + 0x30) = param_5;
  puVar2 = &DAT_1009e0a20;
  _swift_allocObject(&DAT_1009e0a20,0x48,7);
  uVar10 = *(undefined8 *)(local_100 + 0x50);
  *(undefined8 *)(puVar2 + 0x10) = uVar10;
  uVar6 = *(undefined8 *)(lStack_f8 + 0x50);
  *(undefined8 *)(puVar2 + 0x18) = uVar6;
  uVar5 = *(undefined8 *)(local_f0 + 0x50);
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar7 = *(undefined8 *)(lStack_e8 + 0x50);
  *(undefined8 *)(puVar2 + 0x28) = uVar7;
  uVar8 = *(undefined8 *)(local_e0 + 0x50);
  *(undefined8 *)(puVar2 + 0x30) = uVar8;
  *(code **)(puVar2 + 0x38) = FUN_1006270c8;
  *(undefined **)(puVar2 + 0x40) = puVar1;
  _swift_retain(param_1);
  _swift_retain(param_2);
  _swift_retain(param_3);
  _swift_retain(local_120);
  _swift_retain(local_118);
  uVar9 = 0;
  local_d8 = uVar10;
  uStack_d0 = uVar6;
  local_c8 = uVar5;
  uStack_c0 = uVar7;
  local_b8 = uVar8;
  _swift_getTupleTypeMetadata(0,5,&local_d8,0,0);
  puVar1 = local_108;
  lVar3 = local_110;
  uVar5 = 0;
  FUN_1006119f0(0,local_110,FUN_100627118,puVar2,uVar9);
  _swift_release(puVar1);
  _swift_release(puVar2);
  FUN_1006070b4(lVar3);
  return uVar5;
}

