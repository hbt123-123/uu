// rea decompile_all
// name: FUN_10041a878
// address: 0x10041a878
// body: available
// range: 0x10041a878-0x10041a9ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10041a9fc to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10041a878(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  param_1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    puVar7 = (undefined8 *)param_1[0x2d];
    uVar1 = param_1[4];
    uVar3 = param_1[5];
    uVar2 = param_1[6];
    uVar4 = param_1[7];
    uVar5 = param_1[8];
    uVar14 = param_1[1];
    uVar12 = *param_1;
    uVar10 = param_1[3];
    uVar8 = param_1[2];
    uVar6 = *puVar7;
    param_1[10] = puVar7[1];
    param_1[9] = uVar6;
    uVar15 = puVar7[5];
    uVar13 = puVar7[4];
    uVar11 = puVar7[7];
    uVar9 = puVar7[6];
    uVar6 = puVar7[8];
    uVar16 = puVar7[2];
    param_1[0xc] = puVar7[3];
    param_1[0xb] = uVar16;
    param_1[0x11] = uVar6;
    param_1[0x10] = uVar11;
    param_1[0xf] = uVar9;
    param_1[0xe] = uVar15;
    param_1[0xd] = uVar13;
    FUN_100040bb4(param_1 + 9,&DAT_100a9eea8,&DAT_100825d80);
    puVar7[1] = uVar14;
    *puVar7 = uVar12;
    puVar7[3] = uVar10;
    puVar7[2] = uVar8;
    puVar7[4] = uVar1 & 0xcfffffffffffffff;
    puVar7[5] = uVar3;
    puVar7[6] = uVar2 & 0xcfffffffffffffff;
    puVar7[7] = uVar4;
    puVar7[8] = uVar5 & 0xcfffffffffffffff | 0x2000000000000000;
  }
  else {
    puVar7 = (undefined8 *)param_1[0x2d];
    param_1[0x20] = param_1[5];
    param_1[0x1f] = param_1[4];
    param_1[0x22] = param_1[7];
    param_1[0x21] = param_1[6];
    param_1[0x1c] = param_1[1];
    param_1[0x1b] = *param_1;
    param_1[0x1e] = param_1[3];
    param_1[0x1d] = param_1[2];
    uVar5 = param_1[8];
    param_1[0x23] = uVar5;
    uVar1 = param_1[0x1f];
    uVar3 = param_1[0x20];
    uVar2 = param_1[0x21];
    uVar4 = param_1[0x22];
    uVar13 = param_1[0x1c];
    uVar11 = param_1[0x1b];
    uVar9 = param_1[0x1e];
    uVar6 = param_1[0x1d];
    uVar8 = *puVar7;
    param_1[0x13] = puVar7[1];
    param_1[0x12] = uVar8;
    uVar10 = puVar7[3];
    uVar8 = puVar7[2];
    uVar14 = puVar7[5];
    uVar12 = puVar7[4];
    uVar16 = puVar7[7];
    uVar15 = puVar7[6];
    param_1[0x1a] = puVar7[8];
    param_1[0x17] = uVar14;
    param_1[0x16] = uVar12;
    param_1[0x19] = uVar16;
    param_1[0x18] = uVar15;
    param_1[0x15] = uVar10;
    param_1[0x14] = uVar8;
    FUN_10042d240(param_1 + 0x1b,param_1 + 0x24);
    FUN_100040bb4(param_1 + 0x12,&DAT_100a9eea8,&DAT_100825d80);
    puVar7[1] = uVar13;
    *puVar7 = uVar11;
    puVar7[3] = uVar9;
    puVar7[2] = uVar6;
    puVar7[4] = uVar1 & 0xcfffffffffffffff;
    puVar7[5] = uVar3;
    puVar7[6] = uVar2 & 0xcfffffffffffffff;
    puVar7[7] = uVar4;
    puVar7[8] = uVar5 & 0xcfffffffffffffff | 0x2000000000000000;
    param_1[0xe] = param_1[5];
    param_1[0xd] = param_1[4];
    param_1[0x10] = param_1[7];
    param_1[0xf] = param_1[6];
    param_1[0x11] = param_1[8];
    param_1[10] = param_1[1];
    param_1[9] = *param_1;
    param_1[0xc] = param_1[3];
    param_1[0xb] = param_1[2];
    FUN_10042d274(param_1 + 9);
  }
  _free(param_1);
  return;
}

