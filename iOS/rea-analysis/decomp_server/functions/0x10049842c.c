// rea decompile_all
// name: FUN_10049842c
// address: 0x10049842c
// body: available
// range: 0x10049842c-0x10049854b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100498548 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10049842c(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  puVar3 = (ulong *)*param_1;
  uVar1 = puVar3[0x16];
  puVar2 = (ulong *)puVar3[0x17];
  uVar4 = puVar3[0x15];
  uVar5 = 0x100000000;
  if (*(char *)((long)puVar3 + 0xa4) == '\0') {
    uVar5 = 0;
  }
  uVar6 = 0x1000000;
  if (*(char *)((long)puVar3 + 0xa3) == '\0') {
    uVar6 = 0;
  }
  uVar7 = 0x10000;
  if (*(char *)((long)puVar3 + 0xa2) == '\0') {
    uVar7 = 0;
  }
  uVar8 = 0x100;
  if (*(char *)((long)puVar3 + 0xa1) == '\0') {
    uVar8 = 0;
  }
  uVar5 = uVar8 | (byte)puVar3[0x14] | uVar7 | uVar6 | uVar5;
  uVar6 = *puVar2;
  puVar3[1] = puVar2[1];
  *puVar3 = uVar6;
  uVar6 = puVar2[6];
  uVar8 = puVar2[9];
  uVar7 = puVar2[8];
  uVar12 = puVar2[3];
  uVar11 = puVar2[2];
  uVar10 = puVar2[5];
  uVar9 = puVar2[4];
  puVar3[7] = puVar2[7];
  puVar3[6] = uVar6;
  puVar3[9] = uVar8;
  puVar3[8] = uVar7;
  puVar3[3] = uVar12;
  puVar3[2] = uVar11;
  puVar3[5] = uVar10;
  puVar3[4] = uVar9;
  if ((param_2 & 1) == 0) {
    FUN_100040bb4(puVar3,&DAT_100aa0b88,&DAT_10082dd70);
    *puVar2 = uVar5;
    puVar2[1] = uVar4;
    puVar2[2] = uVar1;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[9] = 0x1000000000000000;
  }
  else {
    FUN_100008184(uVar4,uVar1);
    FUN_100040bb4(puVar3,&DAT_100aa0b88,&DAT_10082dd70);
    *puVar2 = uVar5;
    puVar2[1] = uVar4;
    puVar2[2] = uVar1;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[9] = 0x1000000000000000;
    FUN_100006cdc(puVar3[0x15],puVar3[0x16]);
  }
  _free(puVar3);
  return;
}

