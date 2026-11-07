// rea decompile_all
// name: FUN_1002d9af4
// address: 0x1002d9af4
// body: available
// range: 0x1002d9af4-0x1002d9bd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d9af4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  
  FUN_1000a00a8(param_3,param_1,&DAT_100a82c30,&DAT_1008171f0);
  lVar3 = 0;
  FUN_1002d9bd8(0,param_9,param_10,param_11);
  *(undefined8 *)(param_1 + *(int *)(lVar3 + 0x2c)) = param_4;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x30));
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(param_1 + *(int *)(lVar3 + 0x34)) = param_7;
  *(undefined8 *)(param_1 + *(int *)(lVar3 + 0x38)) = param_2;
  iVar2 = *(int *)(lVar3 + 0x3c);
  lVar3 = 0;
  __ss6ResultOMa(0,param_9,param_10,param_11);
                    /* WARNING: Could not recover jumptable at 0x0001002d9bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1 + iVar2,param_8,lVar3);
  return;
}

