// rea decompile_all
// name: FUN_100325b14
// address: 0x100325b14
// body: available
// range: 0x100325b14-0x100325c63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100325b14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  lVar7 = *(long *)(param_6 + -8);
  lVar6 = *(long *)(lVar7 + 0x40);
  (**(code **)(lVar7 + 0x10))
            (&stack0xffffffffffffffa0 + -(lVar6 + 0xfU & 0xfffffffffffffff0),param_2,param_6);
  uVar5 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar8 = uVar5 + 0x28 & (uVar5 ^ 0xffffffffffffffff);
  puVar1 = &DAT_1009b1570;
  _swift_allocObject(&DAT_1009b1570,uVar8 + lVar6,uVar5 | 7);
  *(long *)(puVar1 + 0x10) = param_6;
  *(undefined8 *)(puVar1 + 0x18) = param_7;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  (**(code **)(lVar7 + 0x20))
            (puVar1 + uVar8,&stack0xffffffffffffffa0 + -(lVar6 + 0xfU & 0xfffffffffffffff0),param_6)
  ;
  uVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_7,param_6,0x1008f871c,&TargetProtocolRequirement_1008f8724);
  uVar3 = 0;
  FUN_100277ad0(0);
  puVar4 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  _swift_retain(param_5);
  FUN_1003255cc(param_1,param_3,param_4,FUN_10032b234,puVar1,param_5,uVar2,uVar3,puVar4);
  _swift_release(puVar1);
  return;
}

