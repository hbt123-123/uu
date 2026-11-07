// rea decompile_all
// name: FUN_100487180
// address: 0x100487180
// body: available
// range: 0x100487180-0x1004872f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004872f4 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100487180(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
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
  
  param_1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    puVar4 = (undefined8 *)param_1[0x32];
    uVar1 = param_1[4];
    uVar2 = param_1[5];
    uVar3 = param_1[6];
    uVar11 = param_1[8];
    uVar9 = param_1[7];
    uVar5 = param_1[9];
    uVar15 = param_1[1];
    uVar13 = *param_1;
    uVar8 = param_1[3];
    uVar6 = param_1[2];
    uVar7 = *puVar4;
    param_1[0xb] = puVar4[1];
    param_1[10] = uVar7;
    uVar7 = puVar4[6];
    uVar12 = puVar4[9];
    uVar10 = puVar4[8];
    uVar18 = puVar4[3];
    uVar17 = puVar4[2];
    uVar16 = puVar4[5];
    uVar14 = puVar4[4];
    param_1[0x11] = puVar4[7];
    param_1[0x10] = uVar7;
    param_1[0x13] = uVar12;
    param_1[0x12] = uVar10;
    param_1[0xd] = uVar18;
    param_1[0xc] = uVar17;
    param_1[0xf] = uVar16;
    param_1[0xe] = uVar14;
    FUN_100040bb4(param_1 + 10,&DAT_100aa0b98,&DAT_10082dd80);
    puVar4[1] = uVar15;
    *puVar4 = uVar13;
    puVar4[3] = uVar8;
    puVar4[2] = uVar6;
    puVar4[4] = uVar1 & 0xcfffffffffffffff;
    puVar4[5] = uVar2;
    puVar4[6] = uVar3 & 0xcfffffffffffffff | 0x1000000000000000;
    puVar4[8] = uVar11;
    puVar4[7] = uVar9;
    puVar4[9] = uVar5;
  }
  else {
    puVar4 = (undefined8 *)param_1[0x32];
    param_1[0x23] = param_1[5];
    param_1[0x22] = param_1[4];
    param_1[0x25] = param_1[7];
    param_1[0x24] = param_1[6];
    param_1[0x27] = param_1[9];
    param_1[0x26] = param_1[8];
    param_1[0x1f] = param_1[1];
    param_1[0x1e] = *param_1;
    param_1[0x21] = param_1[3];
    param_1[0x20] = param_1[2];
    uVar1 = param_1[0x22];
    uVar2 = param_1[0x23];
    uVar3 = param_1[0x24];
    uVar12 = param_1[0x26];
    uVar10 = param_1[0x25];
    uVar5 = param_1[0x27];
    uVar16 = param_1[0x1f];
    uVar14 = param_1[0x1e];
    uVar8 = param_1[0x21];
    uVar6 = param_1[0x20];
    uVar7 = *puVar4;
    param_1[0x15] = puVar4[1];
    param_1[0x14] = uVar7;
    uVar9 = puVar4[3];
    uVar7 = puVar4[2];
    uVar13 = puVar4[5];
    uVar11 = puVar4[4];
    uVar15 = puVar4[6];
    uVar18 = puVar4[9];
    uVar17 = puVar4[8];
    param_1[0x1b] = puVar4[7];
    param_1[0x1a] = uVar15;
    param_1[0x1d] = uVar18;
    param_1[0x1c] = uVar17;
    param_1[0x17] = uVar9;
    param_1[0x16] = uVar7;
    param_1[0x19] = uVar13;
    param_1[0x18] = uVar11;
    FUN_100493098(param_1 + 0x1e,param_1 + 0x28);
    FUN_100040bb4(param_1 + 0x14,&DAT_100aa0b98,&DAT_10082dd80);
    puVar4[1] = uVar16;
    *puVar4 = uVar14;
    puVar4[3] = uVar8;
    puVar4[2] = uVar6;
    puVar4[4] = uVar1 & 0xcfffffffffffffff;
    puVar4[5] = uVar2;
    puVar4[6] = uVar3 & 0xcfffffffffffffff | 0x1000000000000000;
    puVar4[8] = uVar12;
    puVar4[7] = uVar10;
    puVar4[9] = uVar5;
    param_1[0xf] = param_1[5];
    param_1[0xe] = param_1[4];
    param_1[0x11] = param_1[7];
    param_1[0x10] = param_1[6];
    param_1[0x13] = param_1[9];
    param_1[0x12] = param_1[8];
    param_1[0xb] = param_1[1];
    param_1[10] = *param_1;
    param_1[0xd] = param_1[3];
    param_1[0xc] = param_1[2];
    FUN_1004930cc(param_1 + 10);
  }
  _free(param_1);
  return;
}

