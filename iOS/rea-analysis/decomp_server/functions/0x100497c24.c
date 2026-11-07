// rea decompile_all
// name: FUN_100497c24
// address: 0x100497c24
// body: available
// range: 0x100497c24-0x100497d3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100497d3c to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100497c24(undefined8 *param_1,ulong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  param_1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    puVar2 = (undefined8 *)param_1[0x23];
    bVar1 = *(byte *)(param_1 + 0x18);
    uVar8 = param_1[0x15];
    uVar6 = param_1[0x14];
    uVar5 = param_1[0x17];
    uVar3 = param_1[0x16];
    uVar4 = *puVar2;
    param_1[1] = puVar2[1];
    *param_1 = uVar4;
    uVar4 = puVar2[6];
    uVar9 = puVar2[9];
    uVar7 = puVar2[8];
    uVar13 = puVar2[3];
    uVar12 = puVar2[2];
    uVar11 = puVar2[5];
    uVar10 = puVar2[4];
    param_1[7] = puVar2[7];
    param_1[6] = uVar4;
    param_1[9] = uVar9;
    param_1[8] = uVar7;
    param_1[3] = uVar13;
    param_1[2] = uVar12;
    param_1[5] = uVar11;
    param_1[4] = uVar10;
    FUN_100040bb4(param_1,&DAT_100aa0b88,&DAT_10082dd70);
    puVar2[1] = uVar8;
    *puVar2 = uVar6;
    puVar2[3] = uVar5;
    puVar2[2] = uVar3;
    puVar2[4] = (ulong)bVar1;
    puVar2[7] = 0;
    puVar2[9] = 0;
  }
  else {
    puVar2 = (undefined8 *)param_1[0x23];
    bVar1 = *(byte *)(param_1 + 0x18);
    *(byte *)(param_1 + 0x1d) = bVar1;
    param_1[0x1a] = param_1[0x15];
    param_1[0x19] = param_1[0x14];
    param_1[0x1c] = param_1[0x17];
    param_1[0x1b] = param_1[0x16];
    uVar8 = param_1[0x1a];
    uVar6 = param_1[0x19];
    uVar5 = param_1[0x1c];
    uVar3 = param_1[0x1b];
    uVar4 = *puVar2;
    param_1[1] = puVar2[1];
    *param_1 = uVar4;
    uVar4 = puVar2[6];
    uVar9 = puVar2[9];
    uVar7 = puVar2[8];
    uVar13 = puVar2[3];
    uVar12 = puVar2[2];
    uVar11 = puVar2[5];
    uVar10 = puVar2[4];
    param_1[7] = puVar2[7];
    param_1[6] = uVar4;
    param_1[9] = uVar9;
    param_1[8] = uVar7;
    param_1[3] = uVar13;
    param_1[2] = uVar12;
    param_1[5] = uVar11;
    param_1[4] = uVar10;
    FUN_10049d600(param_1 + 0x19,param_1 + 0x1e);
    FUN_100040bb4(param_1,&DAT_100aa0b88,&DAT_10082dd70);
    puVar2[1] = uVar8;
    *puVar2 = uVar6;
    puVar2[3] = uVar5;
    puVar2[2] = uVar3;
    puVar2[4] = (ulong)bVar1;
    puVar2[7] = 0;
    puVar2[9] = 0;
    *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_1 + 0x18);
    param_1[0xb] = param_1[0x15];
    param_1[10] = param_1[0x14];
    param_1[0xd] = param_1[0x17];
    param_1[0xc] = param_1[0x16];
    FUN_10049d634(param_1 + 10);
  }
  _free(param_1);
  return;
}

