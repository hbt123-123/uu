// rea decompile_all
// name: FUN_1004a7204
// address: 0x1004a7204
// body: available
// range: 0x1004a7204-0x1004a7313 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004a7310 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004a7204(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  param_1 = (undefined8 *)*param_1;
  uVar6 = param_1[0x1a];
  uVar1 = param_1[0x1e];
  puVar3 = (undefined8 *)param_1[0x1f];
  uVar2 = param_1[0x1b];
  uVar4 = param_1[0x1c];
  uVar5 = param_1[0x1d];
  uVar10 = puVar3[3];
  uVar9 = puVar3[2];
  uVar8 = puVar3[5];
  uVar7 = puVar3[4];
  uVar11 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar11;
  param_1[3] = uVar10;
  param_1[2] = uVar9;
  param_1[5] = uVar8;
  param_1[4] = uVar7;
  uVar10 = puVar3[9];
  uVar9 = puVar3[8];
  uVar8 = puVar3[0xb];
  uVar7 = puVar3[10];
  uVar12 = puVar3[7];
  uVar11 = puVar3[6];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(puVar3 + 0xc);
  param_1[9] = uVar10;
  param_1[8] = uVar9;
  param_1[0xb] = uVar8;
  param_1[10] = uVar7;
  param_1[7] = uVar12;
  param_1[6] = uVar11;
  if ((param_2 & 1) == 0) {
    FUN_100040bb4(param_1,&DAT_100aa1380,&DAT_100830240);
    *puVar3 = uVar6;
    puVar3[1] = uVar2;
    puVar3[2] = uVar4;
    puVar3[3] = uVar5;
    puVar3[4] = uVar1;
    *(undefined1 *)(puVar3 + 0xc) = 7;
  }
  else {
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRetain(uVar4);
    FUN_100008184(uVar5,uVar1);
    FUN_100040bb4(param_1,&DAT_100aa1380,&DAT_100830240);
    *puVar3 = uVar6;
    puVar3[1] = uVar2;
    puVar3[2] = uVar4;
    puVar3[3] = uVar5;
    puVar3[4] = uVar1;
    *(undefined1 *)(puVar3 + 0xc) = 7;
    uVar2 = param_1[0x1c];
    uVar1 = param_1[0x1d];
    uVar4 = param_1[0x1e];
    _swift_bridgeObjectRelease(param_1[0x1b]);
    _swift_bridgeObjectRelease(uVar2);
    FUN_100006cdc(uVar1,uVar4);
  }
  _free(param_1);
  return;
}

