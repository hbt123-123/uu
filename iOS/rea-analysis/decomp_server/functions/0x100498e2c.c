// rea decompile_all
// name: FUN_100498e2c
// address: 0x100498e2c
// body: available
// range: 0x100498e2c-0x100498eff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100498efc to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100498e2c(undefined8 *param_1,ulong param_2,ulong param_3)

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
  uVar1 = puVar4[0x16];
  puVar2 = (ulong *)puVar4[0x17];
  uVar3 = puVar4[0x14];
  uVar5 = puVar4[0x15];
  uVar6 = *puVar2;
  puVar4[1] = puVar2[1];
  *puVar4 = uVar6;
  uVar6 = puVar2[6];
  uVar8 = puVar2[9];
  uVar7 = puVar2[8];
  uVar12 = puVar2[3];
  uVar11 = puVar2[2];
  uVar10 = puVar2[5];
  uVar9 = puVar2[4];
  puVar4[7] = puVar2[7];
  puVar4[6] = uVar6;
  puVar4[9] = uVar8;
  puVar4[8] = uVar7;
  puVar4[3] = uVar12;
  puVar4[2] = uVar11;
  puVar4[5] = uVar10;
  puVar4[4] = uVar9;
  if ((param_2 & 1) == 0) {
    FUN_100040bb4(puVar4,&DAT_100aa0b88,&DAT_10082dd70);
    *puVar2 = (ulong)(byte)uVar3;
    puVar2[1] = uVar5;
    puVar2[2] = uVar1;
    puVar2[4] = 0;
    puVar2[7] = 0x8000000000000000;
    puVar2[9] = param_3;
  }
  else {
    FUN_100008184(uVar5,uVar1);
    FUN_100040bb4(puVar4,&DAT_100aa0b88,&DAT_10082dd70);
    *puVar2 = (ulong)(byte)uVar3;
    puVar2[1] = uVar5;
    puVar2[2] = uVar1;
    puVar2[4] = 0;
    puVar2[7] = 0x8000000000000000;
    puVar2[9] = param_3;
    FUN_100006cdc(puVar4[0x15],puVar4[0x16]);
  }
  _free(puVar4);
  return;
}

