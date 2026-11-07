// rea decompile_all
// name: FUN_1004cb758
// address: 0x1004cb758
// body: available
// range: 0x1004cb758-0x1004cb87b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004cb878 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004cb758(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  puVar4 = (ulong *)*param_1;
  uVar6 = puVar4[0x22];
  puVar2 = (ulong *)puVar4[0x23];
  uVar1 = puVar4[0x1f];
  uVar3 = puVar4[0x20];
  uVar5 = puVar4[0x21];
  uVar7 = 0x100000000;
  if (*(char *)((long)puVar4 + 0xf4) == '\0') {
    uVar7 = 0;
  }
  uVar7 = uVar7 | (uint)puVar4[0x1e];
  uVar8 = puVar2[4];
  uVar10 = puVar2[7];
  uVar9 = puVar2[6];
  uVar14 = puVar2[1];
  uVar13 = *puVar2;
  uVar12 = puVar2[3];
  uVar11 = puVar2[2];
  puVar4[5] = puVar2[5];
  puVar4[4] = uVar8;
  puVar4[7] = uVar10;
  puVar4[6] = uVar9;
  puVar4[1] = uVar14;
  *puVar4 = uVar13;
  puVar4[3] = uVar12;
  puVar4[2] = uVar11;
  uVar11 = puVar2[0xb];
  uVar10 = puVar2[10];
  uVar9 = puVar2[0xd];
  uVar8 = puVar2[0xc];
  uVar13 = puVar2[9];
  uVar12 = puVar2[8];
  puVar4[0xe] = puVar2[0xe];
  puVar4[0xb] = uVar11;
  puVar4[10] = uVar10;
  puVar4[0xd] = uVar9;
  puVar4[0xc] = uVar8;
  puVar4[9] = uVar13;
  puVar4[8] = uVar12;
  if ((param_2 & 1) == 0) {
    FUN_100040bb4(puVar4,&DAT_100aa1988,&DAT_100832138);
    *puVar2 = uVar7;
    puVar2[1] = uVar1;
    puVar2[2] = uVar3;
    puVar2[3] = uVar5;
    puVar2[4] = uVar6;
    puVar2[0xc] = 0x4000000000000000;
    puVar2[0xe] = 0x1000000000000000;
  }
  else {
    _swift_bridgeObjectRetain(uVar3);
    FUN_100008184(uVar5,uVar6);
    FUN_100040bb4(puVar4,&DAT_100aa1988,&DAT_100832138);
    *puVar2 = uVar7;
    puVar2[1] = uVar1;
    puVar2[2] = uVar3;
    puVar2[3] = uVar5;
    puVar2[4] = uVar6;
    puVar2[0xc] = 0x4000000000000000;
    puVar2[0xe] = 0x1000000000000000;
    uVar7 = puVar4[0x21];
    uVar6 = puVar4[0x22];
    _swift_bridgeObjectRelease(puVar4[0x20]);
    FUN_100006cdc(uVar7,uVar6);
  }
  _free(puVar4);
  return;
}

