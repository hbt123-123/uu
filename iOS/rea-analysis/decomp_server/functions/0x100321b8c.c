// rea decompile_all
// name: FUN_100321b8c
// address: 0x100321b8c
// body: available
// range: 0x100321b8c-0x100321c9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100321b8c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = *(long *)(param_3 + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  (**(code **)(lVar5 + 0x10))
            (&stack0xffffffffffffffb0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),param_1);
  uVar3 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar6 = uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff);
  puVar1 = &DAT_1009b13e0;
  _swift_allocObject(&DAT_1009b13e0,uVar6 + lVar4,uVar3 | 7);
  *(long *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = unaff_x20;
  (**(code **)(lVar5 + 0x20))
            (puVar1 + uVar6,&stack0xffffffffffffffb0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),param_3)
  ;
  uVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,0x1008fab60,&TargetProtocolRequirement_1008fab68);
  _swift_retain();
  FUN_100321a1c(param_2,FUN_10032ad24,puVar1,uVar2);
  _swift_release(puVar1);
  return param_2;
}

