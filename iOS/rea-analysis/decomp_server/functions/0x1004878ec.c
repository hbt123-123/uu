// rea decompile_all
// name: FUN_1004878ec
// address: 0x1004878ec
// body: available
// range: 0x1004878ec-0x100487a3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100487a3c to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004878ec(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
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
  
  puVar6 = (ulong *)*param_1;
  puVar7 = (ulong *)puVar6[0x19];
  if ((param_2 & 1) == 0) {
    uVar4 = puVar6[0x14];
    uVar8 = puVar6[0x15];
    uVar5 = puVar6[0x16];
    uVar1 = puVar6[0x17];
    uVar2 = puVar6[0x18];
    iVar3 = *(int *)((long)puVar6 + 0xb4);
    uVar9 = *puVar7;
    puVar6[1] = puVar7[1];
    *puVar6 = uVar9;
    uVar9 = puVar7[6];
    uVar11 = puVar7[9];
    uVar10 = puVar7[8];
    uVar15 = puVar7[3];
    uVar14 = puVar7[2];
    uVar13 = puVar7[5];
    uVar12 = puVar7[4];
    puVar6[7] = puVar7[7];
    puVar6[6] = uVar9;
    puVar6[9] = uVar11;
    puVar6[8] = uVar10;
    puVar6[3] = uVar15;
    puVar6[2] = uVar14;
    puVar6[5] = uVar13;
    puVar6[4] = uVar12;
    FUN_100040bb4(puVar6,&DAT_100aa0b98,&DAT_10082dd80);
    *puVar7 = (ulong)(uint)uVar4;
    puVar7[1] = uVar8;
    *(char *)(puVar7 + 2) = (char)uVar5;
    *(char *)((long)puVar7 + 0x17) = (char)((uint)iVar3 >> 0x18);
    *(short *)((long)puVar7 + 0x15) = (short)((uint)iVar3 >> 8);
    *(int *)((long)puVar7 + 0x11) = iVar3 << 0x18;
    puVar7[3] = uVar1;
    puVar7[4] = uVar2 & 0xcfffffffffffffff;
    puVar7[6] = 0x2000000000000000;
  }
  else {
    uVar4 = puVar6[0x14];
    uVar8 = puVar6[0x15];
    uVar5 = puVar6[0x16];
    uVar1 = puVar6[0x17];
    uVar2 = puVar6[0x18];
    iVar3 = *(int *)((long)puVar6 + 0xb4);
    uVar9 = *puVar7;
    puVar6[1] = puVar7[1];
    *puVar6 = uVar9;
    uVar9 = puVar7[6];
    uVar11 = puVar7[9];
    uVar10 = puVar7[8];
    uVar15 = puVar7[3];
    uVar14 = puVar7[2];
    uVar13 = puVar7[5];
    uVar12 = puVar7[4];
    puVar6[7] = puVar7[7];
    puVar6[6] = uVar9;
    puVar6[9] = uVar11;
    puVar6[8] = uVar10;
    puVar6[3] = uVar15;
    puVar6[2] = uVar14;
    puVar6[5] = uVar13;
    puVar6[4] = uVar12;
    FUN_100008184(uVar1);
    FUN_100040bb4(puVar6,&DAT_100aa0b98,&DAT_10082dd80);
    *puVar7 = (ulong)(uint)uVar4;
    puVar7[1] = uVar8;
    *(char *)(puVar7 + 2) = (char)uVar5;
    *(char *)((long)puVar7 + 0x17) = (char)((uint)iVar3 >> 0x18);
    *(short *)((long)puVar7 + 0x15) = (short)((uint)iVar3 >> 8);
    *(int *)((long)puVar7 + 0x11) = iVar3 << 0x18;
    puVar7[3] = uVar1;
    puVar7[4] = uVar2 & 0xcfffffffffffffff;
    puVar7[6] = 0x2000000000000000;
    FUN_100006cdc(puVar6[0x17],puVar6[0x18]);
  }
  _free(puVar6);
  return;
}

