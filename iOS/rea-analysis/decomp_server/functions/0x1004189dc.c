// rea decompile_all
// name: FUN_1004189dc
// address: 0x1004189dc
// body: available
// range: 0x1004189dc-0x100418b13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100418b10 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004189dc(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  param_1 = (undefined8 *)*param_1;
  puVar5 = (undefined8 *)param_1[0x1a];
  if ((param_2 & 1) == 0) {
    uVar6 = param_1[0x14];
    uVar3 = *(uint *)(param_1 + 0x15);
    uVar7 = param_1[0x16];
    uVar4 = *(uint *)(param_1 + 0x17);
    uVar1 = param_1[0x18];
    uVar2 = param_1[0x19];
    uVar8 = *puVar5;
    param_1[1] = puVar5[1];
    *param_1 = uVar8;
    uVar12 = puVar5[5];
    uVar11 = puVar5[4];
    uVar9 = puVar5[7];
    uVar8 = puVar5[6];
    uVar10 = *(undefined8 *)((long)puVar5 + 0x39);
    uVar14 = puVar5[3];
    uVar13 = puVar5[2];
    *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)puVar5 + 0x41);
    *(undefined8 *)((long)param_1 + 0x39) = uVar10;
    param_1[5] = uVar12;
    param_1[4] = uVar11;
    param_1[7] = uVar9;
    param_1[6] = uVar8;
    param_1[3] = uVar14;
    param_1[2] = uVar13;
    FUN_100040bb4(param_1,&DAT_100a9eea0,&DAT_100825d78);
    *puVar5 = uVar6;
    puVar5[1] = (ulong)uVar3;
    puVar5[2] = uVar7;
    puVar5[3] = (ulong)uVar4;
    puVar5[4] = uVar1;
    puVar5[5] = uVar2;
    puVar5[8] = 0;
    *(undefined1 *)(puVar5 + 9) = 1;
  }
  else {
    uVar6 = param_1[0x14];
    uVar3 = *(uint *)(param_1 + 0x15);
    uVar7 = param_1[0x16];
    uVar4 = *(uint *)(param_1 + 0x17);
    uVar1 = param_1[0x18];
    uVar2 = param_1[0x19];
    uVar8 = *puVar5;
    param_1[1] = puVar5[1];
    *param_1 = uVar8;
    uVar12 = puVar5[5];
    uVar11 = puVar5[4];
    uVar9 = puVar5[7];
    uVar8 = puVar5[6];
    uVar10 = *(undefined8 *)((long)puVar5 + 0x39);
    uVar14 = puVar5[3];
    uVar13 = puVar5[2];
    *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)puVar5 + 0x41);
    *(undefined8 *)((long)param_1 + 0x39) = uVar10;
    param_1[5] = uVar12;
    param_1[4] = uVar11;
    param_1[7] = uVar9;
    param_1[6] = uVar8;
    param_1[3] = uVar14;
    param_1[2] = uVar13;
    FUN_100008184(uVar1,uVar2);
    FUN_100040bb4(param_1,&DAT_100a9eea0,&DAT_100825d78);
    *puVar5 = uVar6;
    puVar5[1] = (ulong)uVar3;
    puVar5[2] = uVar7;
    puVar5[3] = (ulong)uVar4;
    puVar5[4] = uVar1;
    puVar5[5] = uVar2;
    puVar5[8] = 0;
    *(undefined1 *)(puVar5 + 9) = 1;
    FUN_100006cdc(param_1[0x18],param_1[0x19]);
  }
  _free(param_1);
  return;
}

