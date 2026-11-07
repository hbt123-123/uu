// rea decompile_all
// name: FUN_100442d94
// address: 0x100442d94
// body: available
// range: 0x100442d94-0x100442f47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100442f44 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100442d94(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  byte bVar6;
  uint5 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  param_1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    puVar10 = (undefined8 *)param_1[0x1c];
    uVar15 = param_1[1];
    uVar12 = *param_1;
    uVar9 = param_1[2];
    uVar8 = param_1[5];
    uVar5 = *(undefined4 *)(param_1 + 6);
    bVar6 = *(byte *)((long)param_1 + 0x34);
    uVar16 = param_1[4];
    uVar13 = param_1[3];
    FUN_1000407fc(*puVar10,puVar10[1],puVar10[2],puVar10[3],puVar10[4],puVar10[5],
                  (ulong)*(uint5 *)(puVar10 + 6));
    puVar10[1] = uVar15;
    *puVar10 = uVar12;
    puVar10[2] = uVar9;
    puVar10[4] = (ulong)((uint5)uVar16 & 0x1ffffffff);
    puVar10[3] = uVar13 & 0xcfffffffffffffff;
    puVar10[5] = uVar8 & 0x1ffffffff;
    *(byte *)((long)puVar10 + 0x34) = bVar6 & 1;
    *(undefined4 *)(puVar10 + 6) = uVar5;
  }
  else {
    puVar10 = (undefined8 *)param_1[0x1c];
    param_1[0xf] = param_1[1];
    param_1[0xe] = *param_1;
    param_1[0x11] = param_1[3];
    param_1[0x10] = param_1[2];
    param_1[0x13] = param_1[5];
    param_1[0x12] = param_1[4];
    *(undefined8 *)((long)param_1 + 0x9d) = *(undefined8 *)((long)param_1 + 0x2d);
    uVar14 = param_1[0xf];
    uVar11 = param_1[0xe];
    uVar9 = param_1[0x10];
    uVar13 = param_1[0x11];
    uVar8 = param_1[0x12];
    uVar1 = param_1[0x13];
    uVar5 = *(undefined4 *)(param_1 + 0x14);
    bVar6 = *(byte *)((long)param_1 + 0xa4);
    uVar12 = *puVar10;
    uVar2 = puVar10[1];
    uVar15 = puVar10[2];
    uVar3 = puVar10[3];
    uVar7 = *(uint5 *)(puVar10 + 6);
    uVar16 = puVar10[4];
    uVar4 = puVar10[5];
    FUN_100442f48(param_1 + 0xe,param_1 + 0x15);
    FUN_1000407fc(uVar12,uVar2,uVar15,uVar3,uVar16,uVar4,(ulong)uVar7);
    puVar10[1] = uVar14;
    *puVar10 = uVar11;
    puVar10[2] = uVar9;
    puVar10[3] = uVar13 & 0xcfffffffffffffff;
    puVar10[4] = uVar8 & 0x1ffffffff;
    puVar10[5] = uVar1 & 0x1ffffffff;
    *(byte *)((long)puVar10 + 0x34) = bVar6 & 1;
    *(undefined4 *)(puVar10 + 6) = uVar5;
    *(undefined8 *)((long)param_1 + 0x65) = *(undefined8 *)((long)param_1 + 0x2d);
    param_1[0xc] = param_1[5];
    param_1[0xb] = param_1[4];
    param_1[10] = param_1[3];
    param_1[9] = param_1[2];
    param_1[8] = param_1[1];
    param_1[7] = *param_1;
    FUN_100442f7c(param_1 + 7);
  }
  _free(param_1);
  return;
}

