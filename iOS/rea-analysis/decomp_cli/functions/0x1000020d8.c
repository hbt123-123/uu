// rea decompile_all
// name: FUN_1000020d8
// address: 0x1000020d8
// body: available
// range: 0x1000020d8-0x10000218f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000020d8(undefined1 *param_1,undefined1 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = param_2;
  lVar3 = 0;
  FUN_10000eb4c(0,param_5,param_6,param_7);
  iVar2 = *(int *)(lVar3 + 0x2c);
  lVar4 = 0;
  __sSqMa(0,param_5);
  lVar5 = *(long *)(lVar4 + -8);
  (**(code **)(lVar5 + 0x10))(param_1 + iVar2,param_3,lVar4);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x30));
  uVar6 = *param_4;
  uVar8 = param_4[3];
  uVar7 = param_4[2];
  puVar1[1] = param_4[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar8;
  puVar1[2] = uVar7;
  puVar1[4] = param_4[4];
  __s10Foundation4DateVACycfC(param_1 + *(int *)(lVar3 + 0x34));
                    /* WARNING: Could not recover jumptable at 0x00010000218c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))(param_3,lVar4);
  return;
}

