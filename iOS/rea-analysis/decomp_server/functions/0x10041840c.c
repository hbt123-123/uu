// rea decompile_all
// name: FUN_10041840c
// address: 0x10041840c
// body: available
// range: 0x10041840c-0x10041857f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10041857c to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10041840c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  param_1 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)param_1[0x1b];
  if ((param_2 & 1) == 0) {
    uVar1 = param_1[0x14];
    uVar2 = param_1[0x15];
    uVar3 = *(uint *)(param_1 + 0x16);
    uVar11 = param_1[0x18];
    uVar5 = param_1[0x17];
    uVar9 = param_1[0x1a];
    uVar6 = param_1[0x19];
    uVar7 = *puVar4;
    param_1[1] = puVar4[1];
    *param_1 = uVar7;
    uVar13 = puVar4[5];
    uVar12 = puVar4[4];
    uVar10 = puVar4[7];
    uVar7 = puVar4[6];
    uVar8 = *(undefined8 *)((long)puVar4 + 0x39);
    uVar15 = puVar4[3];
    uVar14 = puVar4[2];
    *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)puVar4 + 0x41);
    *(undefined8 *)((long)param_1 + 0x39) = uVar8;
    param_1[5] = uVar13;
    param_1[4] = uVar12;
    param_1[7] = uVar10;
    param_1[6] = uVar7;
    param_1[3] = uVar15;
    param_1[2] = uVar14;
    FUN_100040bb4(param_1,&DAT_100a9eea0,&DAT_100825d78);
    *puVar4 = uVar1;
    puVar4[1] = uVar2;
    puVar4[2] = (ulong)uVar3;
    puVar4[6] = uVar9;
    puVar4[5] = uVar6;
    puVar4[4] = uVar11;
    puVar4[3] = uVar5;
    puVar4[8] = 0x2000000000000000;
    *(undefined1 *)(puVar4 + 9) = 0;
  }
  else {
    uVar1 = param_1[0x14];
    uVar7 = param_1[0x15];
    uVar3 = *(uint *)(param_1 + 0x16);
    uVar2 = param_1[0x17];
    uVar9 = param_1[0x18];
    uVar6 = param_1[0x19];
    uVar10 = param_1[0x1a];
    uVar5 = *puVar4;
    param_1[1] = puVar4[1];
    *param_1 = uVar5;
    uVar13 = puVar4[5];
    uVar12 = puVar4[4];
    uVar8 = puVar4[7];
    uVar5 = puVar4[6];
    uVar11 = *(undefined8 *)((long)puVar4 + 0x39);
    uVar15 = puVar4[3];
    uVar14 = puVar4[2];
    *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)puVar4 + 0x41);
    *(undefined8 *)((long)param_1 + 0x39) = uVar11;
    param_1[5] = uVar13;
    param_1[4] = uVar12;
    param_1[7] = uVar8;
    param_1[6] = uVar5;
    param_1[3] = uVar15;
    param_1[2] = uVar14;
    _swift_bridgeObjectRetain(uVar7);
    FUN_100008184(uVar2,uVar9);
    FUN_100008184(uVar6,uVar10);
    FUN_100040bb4(param_1,&DAT_100a9eea0,&DAT_100825d78);
    *puVar4 = uVar1;
    puVar4[1] = uVar7;
    puVar4[2] = (ulong)uVar3;
    puVar4[3] = uVar2;
    puVar4[4] = uVar9;
    puVar4[5] = uVar6;
    puVar4[6] = uVar10;
    puVar4[8] = 0x2000000000000000;
    *(undefined1 *)(puVar4 + 9) = 0;
    uVar1 = param_1[0x17];
    uVar6 = param_1[0x18];
    uVar2 = param_1[0x19];
    uVar7 = param_1[0x1a];
    _swift_bridgeObjectRelease(param_1[0x15]);
    FUN_100006cdc(uVar1,uVar6);
    FUN_100006cdc(uVar2,uVar7);
  }
  _free(param_1);
  return;
}

