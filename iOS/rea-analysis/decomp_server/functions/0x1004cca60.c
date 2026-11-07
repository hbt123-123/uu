// rea decompile_all
// name: FUN_1004cca60
// address: 0x1004cca60
// body: available
// range: 0x1004cca60-0x1004ccb77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004ccb74 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004cca60(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  puVar8 = (ulong *)*param_1;
  uVar7 = puVar8[0x1e];
  uVar1 = puVar8[0x1f];
  uVar4 = puVar8[0x20];
  uVar2 = puVar8[0x21];
  uVar5 = puVar8[0x22];
  uVar3 = puVar8[0x23];
  puVar6 = (ulong *)puVar8[0x24];
  uVar9 = puVar6[4];
  uVar11 = puVar6[7];
  uVar10 = puVar6[6];
  uVar15 = puVar6[1];
  uVar14 = *puVar6;
  uVar13 = puVar6[3];
  uVar12 = puVar6[2];
  puVar8[5] = puVar6[5];
  puVar8[4] = uVar9;
  puVar8[7] = uVar11;
  puVar8[6] = uVar10;
  puVar8[1] = uVar15;
  *puVar8 = uVar14;
  puVar8[3] = uVar13;
  puVar8[2] = uVar12;
  uVar12 = puVar6[0xb];
  uVar11 = puVar6[10];
  uVar10 = puVar6[0xd];
  uVar9 = puVar6[0xc];
  uVar14 = puVar6[9];
  uVar13 = puVar6[8];
  puVar8[0xe] = puVar6[0xe];
  puVar8[0xb] = uVar12;
  puVar8[10] = uVar11;
  puVar8[0xd] = uVar10;
  puVar8[0xc] = uVar9;
  puVar8[9] = uVar14;
  puVar8[8] = uVar13;
  if ((param_2 & 1) == 0) {
    FUN_100040bb4(puVar8,&DAT_100aa1988,&DAT_100832138);
    *puVar6 = (ulong)(uint)uVar7;
    puVar6[1] = uVar1;
    puVar6[2] = uVar4;
    puVar6[3] = uVar2;
    puVar6[4] = uVar5;
    puVar6[5] = uVar3;
    puVar6[0xc] = 0x2000000000000000;
    puVar6[0xe] = 0x2000000000000000;
  }
  else {
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar2);
    FUN_100008184(uVar5,uVar3);
    FUN_100040bb4(puVar8,&DAT_100aa1988,&DAT_100832138);
    *puVar6 = (ulong)(uint)uVar7;
    puVar6[1] = uVar1;
    puVar6[2] = uVar4;
    puVar6[3] = uVar2;
    puVar6[4] = uVar5;
    puVar6[5] = uVar3;
    puVar6[0xc] = 0x2000000000000000;
    puVar6[0xe] = 0x2000000000000000;
    uVar2 = puVar8[0x21];
    uVar1 = puVar8[0x22];
    uVar3 = puVar8[0x23];
    _swift_bridgeObjectRelease(puVar8[0x20]);
    _swift_bridgeObjectRelease(uVar2);
    FUN_100006cdc(uVar1,uVar3);
  }
  _free(puVar8);
  return;
}

