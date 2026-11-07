// rea decompile_all
// name: FUN_10031289c
// address: 0x10031289c
// body: available
// range: 0x10031289c-0x10031299f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10031289c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,byte param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_12,param_11,0x1008f97a8,&TargetProtocolRequirement_1008f97b8);
  lVar3 = 0;
  __sSqMa(0,uVar2);
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
  lVar3 = 0;
  FUN_100316ccc(0,param_11,param_12);
  *(undefined8 *)(param_1 + *(int *)(lVar3 + 0x24)) = param_3;
  *(undefined8 *)(param_1 + *(int *)(lVar3 + 0x28)) = param_4;
  *(undefined8 *)(param_1 + *(int *)(lVar3 + 0x2c)) = param_5;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x30));
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(byte *)(puVar1 + 2) = param_8 & 1;
  *(undefined8 *)(param_1 + *(int *)(lVar3 + 0x34)) = param_9;
  *(undefined8 *)(param_1 + *(int *)(lVar3 + 0x38)) = param_10;
  return;
}

