// rea decompile_all
// name: FUN_100621dc4
// address: 0x100621dc4
// body: available
// range: 0x100621dc4-0x100621edb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100621dc4(long param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_9,param_5,0x100904f48,&TargetProtocolRequirement_100904f50);
  uVar2 = 0xff;
  local_80 = uVar1;
  _swift_getAssociatedTypeWitness
            (0xff,param_10,param_6,0x100904f48,&TargetProtocolRequirement_100904f50);
  uVar1 = 0xff;
  local_78 = uVar2;
  _swift_getAssociatedTypeWitness
            (0xff,param_11,param_7,0x100904f48,&TargetProtocolRequirement_100904f50);
  uVar2 = 0xff;
  local_70 = uVar1;
  _swift_getAssociatedTypeWitness
            (0xff,param_12,param_8,0x100904f48,&TargetProtocolRequirement_100904f50);
  lVar3 = 0;
  local_68 = uVar2;
  _swift_getTupleTypeMetadata(0,4,&local_80,0,0);
  (*param_3)(param_1,param_1 + *(int *)(lVar3 + 0x30),param_1 + *(int *)(lVar3 + 0x40),
             param_1 + *(int *)(lVar3 + 0x50));
  return;
}

