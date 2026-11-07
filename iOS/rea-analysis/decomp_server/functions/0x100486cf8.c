// rea decompile_all
// name: FUN_100486cf8
// address: 0x100486cf8
// body: available
// range: 0x100486cf8-0x100486e1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100486e1c to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100486cf8(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  param_1 = (undefined8 *)*param_1;
  puVar6 = (undefined8 *)param_1[0x19];
  if ((param_2 & 1) == 0) {
    uVar1 = param_1[0x14];
    uVar3 = param_1[0x15];
    uVar5 = *(undefined1 *)(param_1 + 0x16);
    uVar2 = param_1[0x17];
    uVar4 = param_1[0x18];
    uVar7 = *puVar6;
    param_1[1] = puVar6[1];
    *param_1 = uVar7;
    uVar7 = puVar6[6];
    uVar9 = puVar6[9];
    uVar8 = puVar6[8];
    uVar13 = puVar6[3];
    uVar12 = puVar6[2];
    uVar11 = puVar6[5];
    uVar10 = puVar6[4];
    param_1[7] = puVar6[7];
    param_1[6] = uVar7;
    param_1[9] = uVar9;
    param_1[8] = uVar8;
    param_1[3] = uVar13;
    param_1[2] = uVar12;
    param_1[5] = uVar11;
    param_1[4] = uVar10;
    FUN_100040bb4(param_1,&DAT_100aa0b98,&DAT_10082dd80);
    *puVar6 = uVar1;
    puVar6[1] = uVar3;
    *(undefined1 *)(puVar6 + 2) = uVar5;
    puVar6[3] = uVar2;
    puVar6[4] = uVar4 & 0xcfffffffffffffff | 0x2000000000000000;
    puVar6[6] = 0;
  }
  else {
    uVar1 = param_1[0x14];
    uVar3 = param_1[0x15];
    uVar5 = *(undefined1 *)(param_1 + 0x16);
    uVar2 = param_1[0x17];
    uVar4 = param_1[0x18];
    uVar7 = *puVar6;
    param_1[1] = puVar6[1];
    *param_1 = uVar7;
    uVar7 = puVar6[6];
    uVar9 = puVar6[9];
    uVar8 = puVar6[8];
    uVar13 = puVar6[3];
    uVar12 = puVar6[2];
    uVar11 = puVar6[5];
    uVar10 = puVar6[4];
    param_1[7] = puVar6[7];
    param_1[6] = uVar7;
    param_1[9] = uVar9;
    param_1[8] = uVar8;
    param_1[3] = uVar13;
    param_1[2] = uVar12;
    param_1[5] = uVar11;
    param_1[4] = uVar10;
    _swift_bridgeObjectRetain(uVar1);
    FUN_100008184(uVar2,uVar4);
    FUN_100040bb4(param_1,&DAT_100aa0b98,&DAT_10082dd80);
    *puVar6 = uVar1;
    puVar6[1] = uVar3;
    *(undefined1 *)(puVar6 + 2) = uVar5;
    puVar6[3] = uVar2;
    puVar6[4] = uVar4 & 0xcfffffffffffffff | 0x2000000000000000;
    puVar6[6] = 0;
    uVar1 = param_1[0x17];
    uVar2 = param_1[0x18];
    _swift_bridgeObjectRelease(param_1[0x14]);
    FUN_100006cdc(uVar1,uVar2);
  }
  _free(param_1);
  return;
}

