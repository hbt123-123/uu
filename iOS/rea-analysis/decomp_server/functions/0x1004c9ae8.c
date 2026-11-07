// rea decompile_all
// name: FUN_1004c9ae8
// address: 0x1004c9ae8
// body: available
// range: 0x1004c9ae8-0x1004c9c4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004c9c4c to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004c9ae8(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  puVar6 = (ulong *)*param_1;
  puVar7 = (ulong *)puVar6[0x25];
  if ((param_2 & 1) == 0) {
    uVar3 = puVar6[0x1e];
    uVar8 = puVar6[0x1f];
    uVar4 = puVar6[0x20];
    uVar9 = puVar6[0x21];
    uVar5 = puVar6[0x22];
    uVar1 = puVar6[0x23];
    uVar2 = puVar6[0x24];
    uVar10 = puVar7[4];
    uVar12 = puVar7[7];
    uVar11 = puVar7[6];
    uVar16 = puVar7[1];
    uVar15 = *puVar7;
    uVar14 = puVar7[3];
    uVar13 = puVar7[2];
    puVar6[5] = puVar7[5];
    puVar6[4] = uVar10;
    puVar6[7] = uVar12;
    puVar6[6] = uVar11;
    puVar6[1] = uVar16;
    *puVar6 = uVar15;
    puVar6[3] = uVar14;
    puVar6[2] = uVar13;
    uVar13 = puVar7[0xb];
    uVar12 = puVar7[10];
    uVar11 = puVar7[0xd];
    uVar10 = puVar7[0xc];
    uVar15 = puVar7[9];
    uVar14 = puVar7[8];
    puVar6[0xe] = puVar7[0xe];
    puVar6[0xb] = uVar13;
    puVar6[10] = uVar12;
    puVar6[0xd] = uVar11;
    puVar6[0xc] = uVar10;
    puVar6[9] = uVar15;
    puVar6[8] = uVar14;
    FUN_100040bb4(puVar6,&DAT_100aa1988,&DAT_100832138);
    *puVar7 = (ulong)(uint)uVar3;
    puVar7[1] = uVar8;
    *(char *)(puVar7 + 2) = (char)uVar4;
    puVar7[3] = uVar9;
    *(char *)(puVar7 + 4) = (char)uVar5;
    puVar7[5] = uVar1;
    puVar7[6] = uVar2;
    puVar7[0xc] = 0x2000000000000000;
    puVar7[0xe] = 0;
  }
  else {
    uVar3 = puVar6[0x1e];
    uVar8 = puVar6[0x1f];
    uVar4 = puVar6[0x20];
    uVar9 = puVar6[0x21];
    uVar5 = puVar6[0x22];
    uVar1 = puVar6[0x23];
    uVar2 = puVar6[0x24];
    uVar10 = puVar7[4];
    uVar12 = puVar7[7];
    uVar11 = puVar7[6];
    uVar16 = puVar7[1];
    uVar15 = *puVar7;
    uVar14 = puVar7[3];
    uVar13 = puVar7[2];
    puVar6[5] = puVar7[5];
    puVar6[4] = uVar10;
    puVar6[7] = uVar12;
    puVar6[6] = uVar11;
    puVar6[1] = uVar16;
    *puVar6 = uVar15;
    puVar6[3] = uVar14;
    puVar6[2] = uVar13;
    uVar13 = puVar7[0xb];
    uVar12 = puVar7[10];
    uVar11 = puVar7[0xd];
    uVar10 = puVar7[0xc];
    uVar15 = puVar7[9];
    uVar14 = puVar7[8];
    puVar6[0xe] = puVar7[0xe];
    puVar6[0xb] = uVar13;
    puVar6[10] = uVar12;
    puVar6[0xd] = uVar11;
    puVar6[0xc] = uVar10;
    puVar6[9] = uVar15;
    puVar6[8] = uVar14;
    FUN_100008184(uVar1,uVar2);
    FUN_100040bb4(puVar6,&DAT_100aa1988,&DAT_100832138);
    *puVar7 = (ulong)(uint)uVar3;
    puVar7[1] = uVar8;
    *(char *)(puVar7 + 2) = (char)uVar4;
    puVar7[3] = uVar9;
    *(char *)(puVar7 + 4) = (char)uVar5;
    puVar7[5] = uVar1;
    puVar7[6] = uVar2;
    puVar7[0xc] = 0x2000000000000000;
    puVar7[0xe] = 0;
    FUN_100006cdc(puVar6[0x23],puVar6[0x24]);
  }
  _free(puVar6);
  return;
}

