// rea decompile_all
// name: FUN_100419a8c
// address: 0x100419a8c
// body: available
// range: 0x100419a8c-0x100419b4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100419b48 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100419a8c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  param_1 = (undefined8 *)*param_1;
  uVar3 = param_1[0x12];
  uVar1 = param_1[0x13];
  puVar2 = (undefined8 *)param_1[0x14];
  uVar4 = *puVar2;
  param_1[1] = puVar2[1];
  *param_1 = uVar4;
  uVar7 = puVar2[5];
  uVar6 = puVar2[4];
  uVar5 = puVar2[7];
  uVar4 = puVar2[6];
  uVar9 = puVar2[3];
  uVar8 = puVar2[2];
  param_1[8] = puVar2[8];
  param_1[5] = uVar7;
  param_1[4] = uVar6;
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  if ((param_2 & 1) == 0) {
    FUN_100040bb4(param_1,&DAT_100a9eea8,&DAT_100825d80);
    *puVar2 = uVar3;
    puVar2[1] = uVar1;
    puVar2[4] = 0;
    puVar2[6] = 0;
    puVar2[8] = 0;
  }
  else {
    FUN_100008184(uVar3,uVar1);
    FUN_100040bb4(param_1,&DAT_100a9eea8,&DAT_100825d80);
    *puVar2 = uVar3;
    puVar2[1] = uVar1;
    puVar2[4] = 0;
    puVar2[6] = 0;
    puVar2[8] = 0;
    FUN_100006cdc(param_1[0x12],param_1[0x13]);
  }
  _free(param_1);
  return;
}

