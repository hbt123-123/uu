// rea decompile_all
// name: FUN_10041ac80
// address: 0x10041ac80
// body: available
// range: 0x10041ac80-0x10041adab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10041ada8 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10041ac80(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  puVar5 = (ulong *)*param_1;
  puVar6 = (ulong *)puVar5[0x17];
  if ((param_2 & 1) == 0) {
    uVar3 = puVar5[0x12];
    uVar7 = puVar5[0x13];
    uVar4 = puVar5[0x14];
    uVar1 = puVar5[0x15];
    uVar2 = puVar5[0x16];
    uVar8 = *puVar6;
    puVar5[1] = puVar6[1];
    *puVar5 = uVar8;
    uVar11 = puVar6[5];
    uVar10 = puVar6[4];
    uVar9 = puVar6[7];
    uVar8 = puVar6[6];
    uVar13 = puVar6[3];
    uVar12 = puVar6[2];
    puVar5[8] = puVar6[8];
    puVar5[5] = uVar11;
    puVar5[4] = uVar10;
    puVar5[7] = uVar9;
    puVar5[6] = uVar8;
    puVar5[3] = uVar13;
    puVar5[2] = uVar12;
    FUN_100040bb4(puVar5,&DAT_100a9eea8,&DAT_100825d80);
    *puVar6 = (ulong)(uint)uVar3;
    puVar6[1] = uVar7;
    *(char *)(puVar6 + 2) = (char)uVar4;
    puVar6[3] = uVar1;
    puVar6[4] = uVar2 & 0xcfffffffffffffff;
    puVar6[6] = 0x2000000000000000;
    puVar6[8] = 0x2000000000000000;
  }
  else {
    uVar3 = puVar5[0x12];
    uVar7 = puVar5[0x13];
    uVar4 = puVar5[0x14];
    uVar1 = puVar5[0x15];
    uVar2 = puVar5[0x16];
    uVar8 = *puVar6;
    puVar5[1] = puVar6[1];
    *puVar5 = uVar8;
    uVar11 = puVar6[5];
    uVar10 = puVar6[4];
    uVar9 = puVar6[7];
    uVar8 = puVar6[6];
    uVar13 = puVar6[3];
    uVar12 = puVar6[2];
    puVar5[8] = puVar6[8];
    puVar5[5] = uVar11;
    puVar5[4] = uVar10;
    puVar5[7] = uVar9;
    puVar5[6] = uVar8;
    puVar5[3] = uVar13;
    puVar5[2] = uVar12;
    FUN_100008184(uVar1);
    FUN_100040bb4(puVar5,&DAT_100a9eea8,&DAT_100825d80);
    *puVar6 = (ulong)(uint)uVar3;
    puVar6[1] = uVar7;
    *(char *)(puVar6 + 2) = (char)uVar4;
    puVar6[3] = uVar1;
    puVar6[4] = uVar2 & 0xcfffffffffffffff;
    puVar6[6] = 0x2000000000000000;
    puVar6[8] = 0x2000000000000000;
    FUN_100006cdc(puVar5[0x15],puVar5[0x16]);
  }
  _free(puVar5);
  return;
}

