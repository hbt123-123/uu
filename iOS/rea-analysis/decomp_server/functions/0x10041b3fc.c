// rea decompile_all
// name: FUN_10041b3fc
// address: 0x10041b3fc
// body: available
// range: 0x10041b3fc-0x10041b523 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10041b520 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10041b3fc(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  param_1 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)param_1[0x16];
  if ((param_2 & 1) == 0) {
    uVar5 = param_1[0x12];
    uVar3 = *(undefined1 *)(param_1 + 0x13);
    uVar1 = param_1[0x14];
    uVar2 = param_1[0x15];
    uVar6 = *puVar4;
    param_1[1] = puVar4[1];
    *param_1 = uVar6;
    uVar9 = puVar4[5];
    uVar8 = puVar4[4];
    uVar7 = puVar4[7];
    uVar6 = puVar4[6];
    uVar11 = puVar4[3];
    uVar10 = puVar4[2];
    param_1[8] = puVar4[8];
    param_1[5] = uVar9;
    param_1[4] = uVar8;
    param_1[7] = uVar7;
    param_1[6] = uVar6;
    param_1[3] = uVar11;
    param_1[2] = uVar10;
    FUN_100040bb4(param_1,&DAT_100a9eea8,&DAT_100825d80);
    *puVar4 = uVar5;
    *(undefined1 *)(puVar4 + 1) = uVar3;
    puVar4[2] = uVar1;
    puVar4[3] = uVar2;
    puVar4[4] = 0;
    puVar4[6] = 0x2000000000000000;
    puVar4[8] = 0x3000000000000000;
  }
  else {
    uVar5 = param_1[0x12];
    uVar3 = *(undefined1 *)(param_1 + 0x13);
    uVar1 = param_1[0x14];
    uVar2 = param_1[0x15];
    uVar6 = *puVar4;
    param_1[1] = puVar4[1];
    *param_1 = uVar6;
    uVar9 = puVar4[5];
    uVar8 = puVar4[4];
    uVar7 = puVar4[7];
    uVar6 = puVar4[6];
    uVar11 = puVar4[3];
    uVar10 = puVar4[2];
    param_1[8] = puVar4[8];
    param_1[5] = uVar9;
    param_1[4] = uVar8;
    param_1[7] = uVar7;
    param_1[6] = uVar6;
    param_1[3] = uVar11;
    param_1[2] = uVar10;
    FUN_100008184(uVar1,uVar2);
    FUN_100040bb4(param_1,&DAT_100a9eea8,&DAT_100825d80);
    *puVar4 = uVar5;
    *(undefined1 *)(puVar4 + 1) = uVar3;
    puVar4[2] = uVar1;
    puVar4[3] = uVar2;
    puVar4[4] = 0;
    puVar4[6] = 0x2000000000000000;
    puVar4[8] = 0x3000000000000000;
    FUN_100006cdc(param_1[0x14],param_1[0x15]);
  }
  _free(param_1);
  return;
}

