// rea decompile_all
// name: FUN_1004cc128
// address: 0x1004cc128
// body: available
// range: 0x1004cc128-0x1004cc237 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004cc234 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004cc128(undefined8 *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  puVar5 = (ulong *)*param_1;
  uVar4 = puVar5[0x1e];
  uVar1 = puVar5[0x22];
  puVar2 = (ulong *)puVar5[0x23];
  uVar6 = puVar5[0x1f];
  uVar3 = puVar5[0x20];
  uVar7 = puVar5[0x21];
  uVar8 = puVar2[4];
  uVar10 = puVar2[7];
  uVar9 = puVar2[6];
  uVar14 = puVar2[1];
  uVar13 = *puVar2;
  uVar12 = puVar2[3];
  uVar11 = puVar2[2];
  puVar5[5] = puVar2[5];
  puVar5[4] = uVar8;
  puVar5[7] = uVar10;
  puVar5[6] = uVar9;
  puVar5[1] = uVar14;
  *puVar5 = uVar13;
  puVar5[3] = uVar12;
  puVar5[2] = uVar11;
  uVar11 = puVar2[0xb];
  uVar10 = puVar2[10];
  uVar9 = puVar2[0xd];
  uVar8 = puVar2[0xc];
  uVar13 = puVar2[9];
  uVar12 = puVar2[8];
  puVar5[0xe] = puVar2[0xe];
  puVar5[0xb] = uVar11;
  puVar5[10] = uVar10;
  puVar5[0xd] = uVar9;
  puVar5[0xc] = uVar8;
  puVar5[9] = uVar13;
  puVar5[8] = uVar12;
  if ((param_2 & 1) == 0) {
    FUN_100040bb4(puVar5,&DAT_100aa1988,&DAT_100832138);
    *puVar2 = (ulong)(uint)uVar4;
    puVar2[1] = uVar6;
    puVar2[2] = uVar3;
    puVar2[3] = uVar7;
    puVar2[4] = uVar1;
    puVar2[0xc] = param_3;
    puVar2[0xe] = param_4;
  }
  else {
    _swift_bridgeObjectRetain(uVar3);
    FUN_100008184(uVar7,uVar1);
    FUN_100040bb4(puVar5,&DAT_100aa1988,&DAT_100832138);
    *puVar2 = (ulong)(uint)uVar4;
    puVar2[1] = uVar6;
    puVar2[2] = uVar3;
    puVar2[3] = uVar7;
    puVar2[4] = uVar1;
    puVar2[0xc] = param_3;
    puVar2[0xe] = param_4;
    uVar1 = puVar5[0x21];
    uVar6 = puVar5[0x22];
    _swift_bridgeObjectRelease(puVar5[0x20]);
    FUN_100006cdc(uVar1,uVar6);
  }
  _free(puVar5);
  return;
}

