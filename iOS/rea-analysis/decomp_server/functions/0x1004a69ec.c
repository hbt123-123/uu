// rea decompile_all
// name: FUN_1004a69ec
// address: 0x1004a69ec
// body: available
// range: 0x1004a69ec-0x1004a6b5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004a6b58 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004a69ec(undefined8 *param_1,ulong param_2,undefined1 param_3,code *param_4,code *param_5)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  param_1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    puVar2 = (undefined8 *)param_1[0x35];
    uVar6 = param_1[0x1f];
    uVar3 = param_1[0x1e];
    uVar12 = param_1[0x21];
    uVar10 = param_1[0x20];
    uVar1 = param_1[0x22];
    uVar13 = param_1[0x1b];
    uVar11 = param_1[0x1a];
    uVar7 = param_1[0x1d];
    uVar4 = param_1[0x1c];
    uVar14 = puVar2[3];
    uVar9 = puVar2[2];
    uVar8 = puVar2[5];
    uVar5 = puVar2[4];
    uVar15 = *puVar2;
    param_1[1] = puVar2[1];
    *param_1 = uVar15;
    param_1[3] = uVar14;
    param_1[2] = uVar9;
    param_1[5] = uVar8;
    param_1[4] = uVar5;
    uVar14 = puVar2[9];
    uVar9 = puVar2[8];
    uVar8 = puVar2[0xb];
    uVar5 = puVar2[10];
    uVar16 = puVar2[7];
    uVar15 = puVar2[6];
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(puVar2 + 0xc);
    param_1[9] = uVar14;
    param_1[8] = uVar9;
    param_1[0xb] = uVar8;
    param_1[10] = uVar5;
    param_1[7] = uVar16;
    param_1[6] = uVar15;
    FUN_100040bb4(param_1,&DAT_100aa1380,&DAT_100830240);
    puVar2[5] = uVar6;
    puVar2[4] = uVar3;
    puVar2[7] = uVar12;
    puVar2[6] = uVar10;
    puVar2[9] = uStack_48;
    puVar2[8] = uVar1;
    puVar2[0xb] = uStack_38;
    puVar2[10] = uStack_40;
    puVar2[1] = uVar13;
    *puVar2 = uVar11;
    puVar2[3] = uVar7;
    puVar2[2] = uVar4;
    *(undefined1 *)(puVar2 + 0xc) = param_3;
  }
  else {
    puVar2 = (undefined8 *)param_1[0x35];
    uVar1 = param_1[0x22];
    param_1[0x2b] = uVar1;
    uVar10 = param_1[0x1f];
    uVar7 = param_1[0x1e];
    uVar5 = param_1[0x21];
    uVar3 = param_1[0x20];
    param_1[0x28] = uVar10;
    param_1[0x27] = uVar7;
    param_1[0x2a] = uVar5;
    param_1[0x29] = uVar3;
    uVar13 = param_1[0x1b];
    uVar9 = param_1[0x1a];
    uVar16 = param_1[0x1d];
    uVar15 = param_1[0x1c];
    param_1[0x24] = uVar13;
    param_1[0x23] = uVar9;
    param_1[0x26] = uVar16;
    param_1[0x25] = uVar15;
    uVar6 = puVar2[1];
    uVar4 = *puVar2;
    uVar8 = puVar2[2];
    uVar12 = puVar2[5];
    uVar11 = puVar2[4];
    param_1[3] = puVar2[3];
    param_1[2] = uVar8;
    param_1[5] = uVar12;
    param_1[4] = uVar11;
    param_1[1] = uVar6;
    *param_1 = uVar4;
    uVar6 = puVar2[7];
    uVar4 = puVar2[6];
    uVar11 = puVar2[9];
    uVar8 = puVar2[8];
    uVar14 = puVar2[0xb];
    uVar12 = puVar2[10];
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(puVar2 + 0xc);
    param_1[9] = uVar11;
    param_1[8] = uVar8;
    param_1[0xb] = uVar14;
    param_1[10] = uVar12;
    param_1[7] = uVar6;
    param_1[6] = uVar4;
    (*param_4)(param_1 + 0x23,param_1 + 0x2c);
    FUN_100040bb4(param_1,&DAT_100aa1380,&DAT_100830240);
    puVar2[5] = uVar10;
    puVar2[4] = uVar7;
    puVar2[7] = uVar5;
    puVar2[6] = uVar3;
    puVar2[9] = uStack_48;
    puVar2[8] = uVar1;
    puVar2[0xb] = uStack_38;
    puVar2[10] = uStack_40;
    puVar2[1] = uVar13;
    *puVar2 = uVar9;
    puVar2[3] = uVar16;
    puVar2[2] = uVar15;
    *(undefined1 *)(puVar2 + 0xc) = param_3;
    param_1[0x10] = param_1[0x1d];
    param_1[0xf] = param_1[0x1c];
    param_1[0x12] = param_1[0x1f];
    param_1[0x11] = param_1[0x1e];
    param_1[0x14] = param_1[0x21];
    param_1[0x13] = param_1[0x20];
    param_1[0x15] = param_1[0x22];
    param_1[0xe] = param_1[0x1b];
    param_1[0xd] = param_1[0x1a];
    (*param_5)(param_1 + 0xd);
  }
  _free(param_1);
  return;
}

