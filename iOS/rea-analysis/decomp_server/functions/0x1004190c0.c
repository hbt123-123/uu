// rea decompile_all
// name: FUN_1004190c0
// address: 0x1004190c0
// body: available
// range: 0x1004190c0-0x1004191f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004191f4 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004190c0(undefined8 *param_1,ulong param_2)

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
  puVar3 = (undefined8 *)param_1[0x18];
  if ((param_2 & 1) == 0) {
    uVar4 = param_1[0x15];
    uVar5 = param_1[0x14];
    uVar1 = param_1[0x16];
    uVar2 = param_1[0x17];
    uVar6 = *puVar3;
    param_1[1] = puVar3[1];
    *param_1 = uVar6;
    uVar10 = puVar3[5];
    uVar9 = puVar3[4];
    uVar7 = puVar3[7];
    uVar6 = puVar3[6];
    uVar8 = *(undefined8 *)((long)puVar3 + 0x39);
    uVar12 = puVar3[3];
    uVar11 = puVar3[2];
    *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)puVar3 + 0x41);
    *(undefined8 *)((long)param_1 + 0x39) = uVar8;
    param_1[5] = uVar10;
    param_1[4] = uVar9;
    param_1[7] = uVar7;
    param_1[6] = uVar6;
    param_1[3] = uVar12;
    param_1[2] = uVar11;
    FUN_100040bb4(param_1,&DAT_100a9eea0,&DAT_100825d78);
    puVar3[1] = uVar4;
    *puVar3 = uVar5;
    puVar3[2] = uVar1;
    puVar3[3] = uVar2;
    puVar3[8] = 0x2000000000000000;
    *(undefined1 *)(puVar3 + 9) = 1;
  }
  else {
    uVar1 = param_1[0x14];
    uVar5 = param_1[0x15];
    uVar2 = param_1[0x16];
    uVar6 = param_1[0x17];
    uVar4 = *puVar3;
    param_1[1] = puVar3[1];
    *param_1 = uVar4;
    uVar10 = puVar3[5];
    uVar9 = puVar3[4];
    uVar7 = puVar3[7];
    uVar4 = puVar3[6];
    uVar8 = *(undefined8 *)((long)puVar3 + 0x39);
    uVar12 = puVar3[3];
    uVar11 = puVar3[2];
    *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)puVar3 + 0x41);
    *(undefined8 *)((long)param_1 + 0x39) = uVar8;
    param_1[5] = uVar10;
    param_1[4] = uVar9;
    param_1[7] = uVar7;
    param_1[6] = uVar4;
    param_1[3] = uVar12;
    param_1[2] = uVar11;
    _swift_bridgeObjectRetain(uVar5);
    FUN_100008184(uVar2,uVar6);
    FUN_100040bb4(param_1,&DAT_100a9eea0,&DAT_100825d78);
    *puVar3 = uVar1;
    puVar3[1] = uVar5;
    puVar3[2] = uVar2;
    puVar3[3] = uVar6;
    puVar3[8] = 0x2000000000000000;
    *(undefined1 *)(puVar3 + 9) = 1;
    uVar1 = param_1[0x16];
    uVar2 = param_1[0x17];
    _swift_bridgeObjectRelease(param_1[0x15]);
    FUN_100006cdc(uVar1,uVar2);
  }
  _free(param_1);
  return;
}

