// rea decompile_all
// name: FUN_100323624
// address: 0x100323624
// body: available
// range: 0x100323624-0x100323747 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_100323624(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
             undefined8 param_6,code *param_7)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long lVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  code *local_68;
  
  lVar4 = *(long *)(param_3 + -8);
  lVar5 = *(long *)(lVar4 + 0x40);
  local_68 = param_7;
  (**(code **)(lVar4 + 0x10))(auStack_70 + -(lVar5 + 0xfU & 0xfffffffffffffff0),param_1);
  uVar2 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar3 = uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff);
  _swift_allocObject(param_5,uVar3 + lVar5,uVar2 | 7);
  *(long *)(param_5 + 0x10) = param_3;
  *(long *)(param_5 + 0x18) = param_4;
  *(undefined8 *)(param_5 + 0x20) = unaff_x20;
  (**(code **)(lVar4 + 0x20))
            (param_5 + uVar3,auStack_70 + -(lVar5 + 0xfU & 0xfffffffffffffff0),param_3);
  uVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 8),param_3,0x1008fab60,&TargetProtocolRequirement_1008fab68
            );
  _swift_retain();
  (*local_68)(param_2,param_6,param_5,uVar1);
  _swift_release(param_5);
  return param_2;
}

