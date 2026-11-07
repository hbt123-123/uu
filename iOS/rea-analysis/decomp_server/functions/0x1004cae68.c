// rea decompile_all
// name: FUN_1004cae68
// address: 0x1004cae68
// body: available
// range: 0x1004cae68-0x1004caf4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004caf48 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004cae68(undefined8 *param_1,ulong param_2,ulong param_3,ulong param_4)

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
  
  puVar4 = (ulong *)*param_1;
  uVar3 = puVar4[0x1e];
  uVar1 = puVar4[0x20];
  puVar2 = (ulong *)puVar4[0x21];
  uVar5 = puVar4[0x1f];
  uVar6 = puVar2[4];
  uVar8 = puVar2[7];
  uVar7 = puVar2[6];
  uVar12 = puVar2[1];
  uVar11 = *puVar2;
  uVar10 = puVar2[3];
  uVar9 = puVar2[2];
  puVar4[5] = puVar2[5];
  puVar4[4] = uVar6;
  puVar4[7] = uVar8;
  puVar4[6] = uVar7;
  puVar4[1] = uVar12;
  *puVar4 = uVar11;
  puVar4[3] = uVar10;
  puVar4[2] = uVar9;
  uVar9 = puVar2[0xb];
  uVar8 = puVar2[10];
  uVar7 = puVar2[0xd];
  uVar6 = puVar2[0xc];
  uVar11 = puVar2[9];
  uVar10 = puVar2[8];
  puVar4[0xe] = puVar2[0xe];
  puVar4[0xb] = uVar9;
  puVar4[10] = uVar8;
  puVar4[0xd] = uVar7;
  puVar4[0xc] = uVar6;
  puVar4[9] = uVar11;
  puVar4[8] = uVar10;
  if ((param_2 & 1) == 0) {
    FUN_100040bb4(puVar4,&DAT_100aa1988,&DAT_100832138);
    *puVar2 = (ulong)(uint)uVar3;
    puVar2[1] = uVar5;
    puVar2[2] = uVar1;
    puVar2[0xc] = param_3;
    puVar2[0xe] = param_4;
  }
  else {
    FUN_100008184(uVar5,uVar1);
    FUN_100040bb4(puVar4,&DAT_100aa1988,&DAT_100832138);
    *puVar2 = (ulong)(uint)uVar3;
    puVar2[1] = uVar5;
    puVar2[2] = uVar1;
    puVar2[0xc] = param_3;
    puVar2[0xe] = param_4;
    FUN_100006cdc(puVar4[0x1f],puVar4[0x20]);
  }
  _free(puVar4);
  return;
}

