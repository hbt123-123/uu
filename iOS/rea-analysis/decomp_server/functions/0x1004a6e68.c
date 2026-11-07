// rea decompile_all
// name: FUN_1004a6e68
// address: 0x1004a6e68
// body: available
// range: 0x1004a6e68-0x1004a6fdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004a6fd8 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004a6e68(undefined8 *param_1,ulong param_2,undefined1 param_3,code *param_4,code *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  param_1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    puVar1 = (undefined8 *)param_1[0x3e];
    uVar6 = param_1[0x1f];
    uVar2 = param_1[0x1e];
    uVar14 = param_1[0x21];
    uVar10 = param_1[0x20];
    uVar7 = param_1[0x23];
    uVar3 = param_1[0x22];
    uVar15 = param_1[0x25];
    uVar11 = param_1[0x24];
    uVar8 = param_1[0x1b];
    uVar4 = param_1[0x1a];
    uVar16 = param_1[0x1d];
    uVar12 = param_1[0x1c];
    uVar17 = puVar1[3];
    uVar13 = puVar1[2];
    uVar9 = puVar1[5];
    uVar5 = puVar1[4];
    uVar18 = *puVar1;
    param_1[1] = puVar1[1];
    *param_1 = uVar18;
    param_1[3] = uVar17;
    param_1[2] = uVar13;
    param_1[5] = uVar9;
    param_1[4] = uVar5;
    uVar17 = puVar1[9];
    uVar13 = puVar1[8];
    uVar9 = puVar1[0xb];
    uVar5 = puVar1[10];
    uVar19 = puVar1[7];
    uVar18 = puVar1[6];
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(puVar1 + 0xc);
    param_1[9] = uVar17;
    param_1[8] = uVar13;
    param_1[0xb] = uVar9;
    param_1[10] = uVar5;
    param_1[7] = uVar19;
    param_1[6] = uVar18;
    FUN_100040bb4(param_1,&DAT_100aa1380,&DAT_100830240);
    puVar1[5] = uVar6;
    puVar1[4] = uVar2;
    puVar1[7] = uVar14;
    puVar1[6] = uVar10;
    puVar1[9] = uVar7;
    puVar1[8] = uVar3;
    puVar1[0xb] = uVar15;
    puVar1[10] = uVar11;
    puVar1[1] = uVar8;
    *puVar1 = uVar4;
    puVar1[3] = uVar16;
    puVar1[2] = uVar12;
    *(undefined1 *)(puVar1 + 0xc) = param_3;
  }
  else {
    puVar1 = (undefined8 *)param_1[0x3e];
    uVar8 = param_1[0x1b];
    uVar6 = param_1[0x1a];
    uVar4 = param_1[0x1d];
    uVar2 = param_1[0x1c];
    param_1[0x27] = uVar8;
    param_1[0x26] = uVar6;
    param_1[0x29] = uVar4;
    param_1[0x28] = uVar2;
    uVar15 = param_1[0x23];
    uVar14 = param_1[0x22];
    uVar12 = param_1[0x25];
    uVar10 = param_1[0x24];
    param_1[0x2f] = uVar15;
    param_1[0x2e] = uVar14;
    param_1[0x31] = uVar12;
    param_1[0x30] = uVar10;
    uVar19 = param_1[0x1f];
    uVar18 = param_1[0x1e];
    uVar17 = param_1[0x21];
    uVar16 = param_1[0x20];
    param_1[0x2b] = uVar19;
    param_1[0x2a] = uVar18;
    param_1[0x2d] = uVar17;
    param_1[0x2c] = uVar16;
    uVar5 = puVar1[1];
    uVar3 = *puVar1;
    uVar7 = puVar1[2];
    uVar11 = puVar1[5];
    uVar9 = puVar1[4];
    param_1[3] = puVar1[3];
    param_1[2] = uVar7;
    param_1[5] = uVar11;
    param_1[4] = uVar9;
    param_1[1] = uVar5;
    *param_1 = uVar3;
    uVar5 = puVar1[7];
    uVar3 = puVar1[6];
    uVar9 = puVar1[9];
    uVar7 = puVar1[8];
    uVar13 = puVar1[0xb];
    uVar11 = puVar1[10];
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(puVar1 + 0xc);
    param_1[9] = uVar9;
    param_1[8] = uVar7;
    param_1[0xb] = uVar13;
    param_1[10] = uVar11;
    param_1[7] = uVar5;
    param_1[6] = uVar3;
    (*param_4)(param_1 + 0x26,param_1 + 0x32);
    FUN_100040bb4(param_1,&DAT_100aa1380,&DAT_100830240);
    puVar1[5] = uVar19;
    puVar1[4] = uVar18;
    puVar1[7] = uVar17;
    puVar1[6] = uVar16;
    puVar1[9] = uVar15;
    puVar1[8] = uVar14;
    puVar1[0xb] = uVar12;
    puVar1[10] = uVar10;
    puVar1[1] = uVar8;
    *puVar1 = uVar6;
    puVar1[3] = uVar4;
    puVar1[2] = uVar2;
    *(undefined1 *)(puVar1 + 0xc) = param_3;
    param_1[0x12] = param_1[0x1f];
    param_1[0x11] = param_1[0x1e];
    param_1[0x14] = param_1[0x21];
    param_1[0x13] = param_1[0x20];
    param_1[0x16] = param_1[0x23];
    param_1[0x15] = param_1[0x22];
    param_1[0x18] = param_1[0x25];
    param_1[0x17] = param_1[0x24];
    param_1[0xe] = param_1[0x1b];
    param_1[0xd] = param_1[0x1a];
    param_1[0x10] = param_1[0x1d];
    param_1[0xf] = param_1[0x1c];
    (*param_5)(param_1 + 0xd);
  }
  _free(param_1);
  return;
}

