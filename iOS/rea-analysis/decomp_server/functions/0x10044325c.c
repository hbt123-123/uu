// rea decompile_all
// name: FUN_10044325c
// address: 0x10044325c
// body: available
// range: 0x10044325c-0x10044339f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10044339c to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10044325c(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint5 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  
  param_1 = (undefined8 *)*param_1;
  puVar14 = (undefined8 *)param_1[5];
  uVar12 = *param_1;
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar10 = *(uint *)(param_1 + 4);
  uVar13 = (ulong)*(byte *)(param_1 + 1) | (ulong)*(uint *)((long)param_1 + 0xc) << 0x20;
  uVar1 = 0x100000000;
  if (*(char *)((long)param_1 + 0x24) == '\0') {
    uVar1 = 0;
  }
  uVar3 = *puVar14;
  uVar7 = puVar14[1];
  uVar4 = puVar14[2];
  uVar8 = puVar14[3];
  uVar5 = puVar14[4];
  uVar9 = puVar14[5];
  uVar11 = *(uint5 *)(puVar14 + 6);
  if ((param_2 & 1) == 0) {
    FUN_1000407fc(uVar3,uVar7,uVar4,uVar8,uVar5,uVar9,(ulong)uVar11);
    *puVar14 = uVar12;
    puVar14[1] = uVar13;
    puVar14[2] = uVar2;
    puVar14[3] = uVar6;
    puVar14[4] = uVar1 | uVar10;
    puVar14[5] = 0;
    *(undefined4 *)(puVar14 + 6) = 0;
    *(undefined1 *)((long)puVar14 + 0x34) = 0x40;
  }
  else {
    FUN_100008184(uVar2,uVar6);
    FUN_1000407fc(uVar3,uVar7,uVar4,uVar8,uVar5,uVar9,(ulong)uVar11);
    *puVar14 = uVar12;
    puVar14[1] = uVar13;
    puVar14[2] = uVar2;
    puVar14[3] = uVar6;
    puVar14[4] = uVar1 | uVar10;
    puVar14[5] = 0;
    *(undefined1 *)((long)puVar14 + 0x34) = 0x40;
    *(undefined4 *)(puVar14 + 6) = 0;
    FUN_100006cdc(param_1[2],param_1[3]);
  }
  _free(param_1);
  return;
}

