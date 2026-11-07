// rea decompile_all
// name: FUN_1004c9fac
// address: 0x1004c9fac
// body: available
// range: 0x1004c9fac-0x1004ca19f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004ca19c to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004c9fac(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
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
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  param_1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    puVar6 = (undefined8 *)param_1[0x4b];
    bVar3 = *(byte *)(param_1 + 0xc);
    uVar1 = param_1[0xd];
    uVar2 = param_1[0xe];
    uVar16 = param_1[1];
    uVar13 = *param_1;
    uVar22 = param_1[3];
    uVar19 = param_1[2];
    uVar17 = param_1[5];
    uVar14 = param_1[4];
    uVar10 = param_1[7];
    uVar7 = param_1[6];
    uVar23 = param_1[9];
    uVar20 = param_1[8];
    uVar11 = param_1[0xb];
    uVar8 = param_1[10];
    uVar9 = puVar6[5];
    uVar4 = puVar6[4];
    uVar15 = puVar6[7];
    uVar12 = puVar6[6];
    uVar24 = *puVar6;
    uVar21 = puVar6[3];
    uVar18 = puVar6[2];
    param_1[0x10] = puVar6[1];
    param_1[0xf] = uVar24;
    param_1[0x16] = uVar15;
    param_1[0x15] = uVar12;
    param_1[0x14] = uVar9;
    param_1[0x13] = uVar4;
    param_1[0x12] = uVar21;
    param_1[0x11] = uVar18;
    uVar18 = puVar6[0xb];
    uVar15 = puVar6[10];
    uVar12 = puVar6[0xd];
    uVar9 = puVar6[0xc];
    uVar4 = puVar6[0xe];
    uVar21 = puVar6[8];
    param_1[0x18] = puVar6[9];
    param_1[0x17] = uVar21;
    param_1[0x1d] = uVar4;
    param_1[0x1c] = uVar12;
    param_1[0x1b] = uVar9;
    param_1[0x1a] = uVar18;
    param_1[0x19] = uVar15;
    FUN_100040bb4(param_1 + 0xf,&DAT_100aa1988,&DAT_100832138);
    puVar6[1] = uVar16;
    *puVar6 = uVar13;
    puVar6[3] = uVar22;
    puVar6[2] = uVar19;
    puVar6[5] = uVar17;
    puVar6[4] = uVar14;
    puVar6[7] = uVar10;
    puVar6[6] = uVar7;
    puVar6[9] = uVar23;
    puVar6[8] = uVar20;
    puVar6[0xb] = uVar11;
    puVar6[10] = uVar8;
    puVar6[0xc] = (ulong)bVar3 | 0x4000000000000000;
    puVar6[0xd] = uVar1;
    puVar6[0xe] = uVar2 & 0xcfffffffffffffff;
  }
  else {
    puVar6 = param_1 + 0x2d;
    puVar5 = (undefined8 *)param_1[0x4b];
    param_1[0x3b] = param_1[0xe];
    param_1[0x2e] = param_1[1];
    *puVar6 = *param_1;
    param_1[0x30] = param_1[3];
    param_1[0x2f] = param_1[2];
    param_1[0x38] = param_1[0xb];
    param_1[0x37] = param_1[10];
    param_1[0x3a] = param_1[0xd];
    param_1[0x39] = param_1[0xc];
    param_1[0x32] = param_1[5];
    param_1[0x31] = param_1[4];
    param_1[0x34] = param_1[7];
    param_1[0x33] = param_1[6];
    param_1[0x36] = param_1[9];
    param_1[0x35] = param_1[8];
    bVar3 = *(byte *)(param_1 + 0x39);
    uVar1 = param_1[0x3a];
    uVar2 = param_1[0x3b];
    uVar15 = param_1[0x2e];
    uVar12 = *puVar6;
    uVar21 = param_1[0x30];
    uVar18 = param_1[0x2f];
    uVar16 = param_1[0x32];
    uVar13 = param_1[0x31];
    uVar9 = param_1[0x34];
    uVar4 = param_1[0x33];
    uVar22 = param_1[0x36];
    uVar19 = param_1[0x35];
    uVar10 = param_1[0x38];
    uVar7 = param_1[0x37];
    uVar11 = puVar5[1];
    uVar8 = *puVar5;
    uVar17 = puVar5[3];
    uVar14 = puVar5[2];
    uVar20 = puVar5[4];
    uVar24 = puVar5[7];
    uVar23 = puVar5[6];
    param_1[0x23] = puVar5[5];
    param_1[0x22] = uVar20;
    param_1[0x25] = uVar24;
    param_1[0x24] = uVar23;
    param_1[0x1f] = uVar11;
    param_1[0x1e] = uVar8;
    param_1[0x21] = uVar17;
    param_1[0x20] = uVar14;
    uVar11 = puVar5[9];
    uVar8 = puVar5[8];
    uVar17 = puVar5[0xb];
    uVar14 = puVar5[10];
    uVar23 = puVar5[0xd];
    uVar20 = puVar5[0xc];
    param_1[0x2c] = puVar5[0xe];
    param_1[0x29] = uVar17;
    param_1[0x28] = uVar14;
    param_1[0x2b] = uVar23;
    param_1[0x2a] = uVar20;
    param_1[0x27] = uVar11;
    param_1[0x26] = uVar8;
    FUN_1004df84c(puVar6,param_1 + 0x3c);
    FUN_100040bb4(param_1 + 0x1e,&DAT_100aa1988,&DAT_100832138);
    puVar5[1] = uVar15;
    *puVar5 = uVar12;
    puVar5[3] = uVar21;
    puVar5[2] = uVar18;
    puVar5[5] = uVar16;
    puVar5[4] = uVar13;
    puVar5[7] = uVar9;
    puVar5[6] = uVar4;
    puVar5[9] = uVar22;
    puVar5[8] = uVar19;
    puVar5[0xb] = uVar10;
    puVar5[10] = uVar7;
    puVar5[0xc] = (ulong)bVar3 | 0x4000000000000000;
    puVar5[0xd] = uVar1;
    puVar5[0xe] = uVar2 & 0xcfffffffffffffff;
    param_1[0x1a] = param_1[0xb];
    param_1[0x19] = param_1[10];
    param_1[0x1c] = param_1[0xd];
    param_1[0x1b] = param_1[0xc];
    param_1[0x1d] = param_1[0xe];
    param_1[0x10] = param_1[1];
    param_1[0xf] = *param_1;
    param_1[0x12] = param_1[3];
    param_1[0x11] = param_1[2];
    param_1[0x14] = param_1[5];
    param_1[0x13] = param_1[4];
    param_1[0x16] = param_1[7];
    param_1[0x15] = param_1[6];
    param_1[0x18] = param_1[9];
    param_1[0x17] = param_1[8];
    FUN_1004df888(param_1 + 0xf);
  }
  _free(param_1);
  return;
}

