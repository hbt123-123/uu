// rea decompile_all
// name: FUN_1004cce50
// address: 0x1004cce50
// body: available
// range: 0x1004cce50-0x1004ccfef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004ccfec to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004cce50(undefined8 *param_1,ulong param_2)

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
  
  param_1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    puVar1 = (undefined8 *)param_1[0x39];
    uVar2 = param_1[0x26];
    uVar9 = param_1[0x1f];
    uVar7 = param_1[0x1e];
    uVar13 = param_1[0x21];
    uVar11 = param_1[0x20];
    uVar16 = param_1[0x23];
    uVar15 = param_1[0x22];
    uVar5 = param_1[0x25];
    uVar3 = param_1[0x24];
    uVar4 = puVar1[4];
    uVar8 = puVar1[7];
    uVar6 = puVar1[6];
    uVar17 = puVar1[1];
    uVar14 = *puVar1;
    uVar12 = puVar1[3];
    uVar10 = puVar1[2];
    param_1[5] = puVar1[5];
    param_1[4] = uVar4;
    param_1[7] = uVar8;
    param_1[6] = uVar6;
    param_1[1] = uVar17;
    *param_1 = uVar14;
    param_1[3] = uVar12;
    param_1[2] = uVar10;
    uVar10 = puVar1[0xb];
    uVar8 = puVar1[10];
    uVar6 = puVar1[0xd];
    uVar4 = puVar1[0xc];
    uVar14 = puVar1[9];
    uVar12 = puVar1[8];
    param_1[0xe] = puVar1[0xe];
    param_1[0xb] = uVar10;
    param_1[10] = uVar8;
    param_1[0xd] = uVar6;
    param_1[0xc] = uVar4;
    param_1[9] = uVar14;
    param_1[8] = uVar12;
    FUN_100040bb4(param_1,&DAT_100aa1988,&DAT_100832138);
    puVar1[1] = uVar9;
    *puVar1 = uVar7;
    puVar1[3] = uVar13;
    puVar1[2] = uVar11;
    puVar1[5] = uVar16;
    puVar1[4] = uVar15;
    puVar1[7] = uVar5;
    puVar1[6] = uVar3;
    puVar1[8] = uVar2;
    puVar1[0xc] = 0x4000000000000000;
    puVar1[0xe] = 0x2000000000000000;
  }
  else {
    puVar1 = (undefined8 *)param_1[0x39];
    param_1[0x2f] = param_1[0x26];
    param_1[0x28] = param_1[0x1f];
    param_1[0x27] = param_1[0x1e];
    param_1[0x2a] = param_1[0x21];
    param_1[0x29] = param_1[0x20];
    param_1[0x2c] = param_1[0x23];
    param_1[0x2b] = param_1[0x22];
    param_1[0x2e] = param_1[0x25];
    param_1[0x2d] = param_1[0x24];
    uVar2 = param_1[0x2f];
    uVar11 = param_1[0x28];
    uVar9 = param_1[0x27];
    uVar15 = param_1[0x2a];
    uVar13 = param_1[0x29];
    uVar6 = param_1[0x2c];
    uVar3 = param_1[0x2b];
    uVar7 = param_1[0x2e];
    uVar4 = param_1[0x2d];
    uVar8 = puVar1[1];
    uVar5 = *puVar1;
    uVar12 = puVar1[3];
    uVar10 = puVar1[2];
    uVar14 = puVar1[4];
    uVar17 = puVar1[7];
    uVar16 = puVar1[6];
    param_1[5] = puVar1[5];
    param_1[4] = uVar14;
    param_1[7] = uVar17;
    param_1[6] = uVar16;
    param_1[1] = uVar8;
    *param_1 = uVar5;
    param_1[3] = uVar12;
    param_1[2] = uVar10;
    uVar8 = puVar1[9];
    uVar5 = puVar1[8];
    uVar12 = puVar1[0xb];
    uVar10 = puVar1[10];
    uVar16 = puVar1[0xd];
    uVar14 = puVar1[0xc];
    param_1[0xe] = puVar1[0xe];
    param_1[0xb] = uVar12;
    param_1[10] = uVar10;
    param_1[0xd] = uVar16;
    param_1[0xc] = uVar14;
    param_1[9] = uVar8;
    param_1[8] = uVar5;
    FUN_1004df92c(param_1 + 0x27,param_1 + 0x30);
    FUN_100040bb4(param_1,&DAT_100aa1988,&DAT_100832138);
    puVar1[1] = uVar11;
    *puVar1 = uVar9;
    puVar1[3] = uVar15;
    puVar1[2] = uVar13;
    puVar1[5] = uVar6;
    puVar1[4] = uVar3;
    puVar1[7] = uVar7;
    puVar1[6] = uVar4;
    puVar1[8] = uVar2;
    puVar1[0xc] = 0x4000000000000000;
    puVar1[0xe] = 0x2000000000000000;
    param_1[0x14] = param_1[0x23];
    param_1[0x13] = param_1[0x22];
    param_1[0x16] = param_1[0x25];
    param_1[0x15] = param_1[0x24];
    param_1[0x17] = param_1[0x26];
    param_1[0x10] = param_1[0x1f];
    param_1[0xf] = param_1[0x1e];
    param_1[0x12] = param_1[0x21];
    param_1[0x11] = param_1[0x20];
    FUN_1004df968(param_1 + 0xf);
  }
  _free(param_1);
  return;
}

