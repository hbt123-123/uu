// rea decompile_all
// name: FUN_1004cbb78
// address: 0x1004cbb78
// body: available
// range: 0x1004cbb78-0x1004cbc9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004cbc9c to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004cbb78(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
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
  
  puVar7 = (ulong *)*param_1;
  uVar5 = puVar7[0x1e];
  uVar1 = puVar7[0x24];
  puVar3 = (ulong *)puVar7[0x25];
  uVar2 = puVar7[0x1f];
  uVar4 = puVar7[0x20];
  uVar9 = puVar7[0x21];
  uVar6 = puVar7[0x22];
  uVar8 = puVar7[0x23];
  uVar10 = puVar3[4];
  uVar12 = puVar3[7];
  uVar11 = puVar3[6];
  uVar16 = puVar3[1];
  uVar15 = *puVar3;
  uVar14 = puVar3[3];
  uVar13 = puVar3[2];
  puVar7[5] = puVar3[5];
  puVar7[4] = uVar10;
  puVar7[7] = uVar12;
  puVar7[6] = uVar11;
  puVar7[1] = uVar16;
  *puVar7 = uVar15;
  puVar7[3] = uVar14;
  puVar7[2] = uVar13;
  uVar13 = puVar3[0xb];
  uVar12 = puVar3[10];
  uVar11 = puVar3[0xd];
  uVar10 = puVar3[0xc];
  uVar15 = puVar3[9];
  uVar14 = puVar3[8];
  puVar7[0xe] = puVar3[0xe];
  puVar7[0xb] = uVar13;
  puVar7[10] = uVar12;
  puVar7[0xd] = uVar11;
  puVar7[0xc] = uVar10;
  puVar7[9] = uVar15;
  puVar7[8] = uVar14;
  if ((param_2 & 1) == 0) {
    FUN_100040bb4(puVar7,&DAT_100aa1988,&DAT_100832138);
    *puVar3 = (ulong)(uint)uVar5;
    puVar3[1] = uVar2;
    puVar3[2] = uVar4;
    puVar3[3] = uVar9;
    puVar3[4] = (ulong)(byte)uVar6;
    puVar3[5] = uVar8;
    puVar3[6] = uVar1;
    puVar3[0xc] = 0x6000000000000000;
    puVar3[0xe] = 0x1000000000000000;
  }
  else {
    _swift_bridgeObjectRetain(uVar9);
    FUN_100008184(uVar8,uVar1);
    FUN_100040bb4(puVar7,&DAT_100aa1988,&DAT_100832138);
    *puVar3 = (ulong)(uint)uVar5;
    puVar3[1] = uVar2;
    puVar3[2] = uVar4;
    puVar3[3] = uVar9;
    puVar3[4] = (ulong)(byte)uVar6;
    puVar3[5] = uVar8;
    puVar3[6] = uVar1;
    puVar3[0xc] = 0x6000000000000000;
    puVar3[0xe] = 0x1000000000000000;
    uVar1 = puVar7[0x23];
    uVar2 = puVar7[0x24];
    _swift_bridgeObjectRelease(puVar7[0x21]);
    FUN_100006cdc(uVar1,uVar2);
  }
  _free(puVar7);
  return;
}

