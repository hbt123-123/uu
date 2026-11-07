// rea decompile_all
// name: FUN_10041a21c
// address: 0x10041a21c
// body: available
// range: 0x10041a21c-0x10041a38b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10041a388 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10041a21c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  param_1 = (undefined8 *)*param_1;
  puVar7 = (undefined8 *)param_1[0x19];
  if ((param_2 & 1) == 0) {
    uVar1 = param_1[0x12];
    uVar3 = param_1[0x13];
    uVar5 = *(uint *)(param_1 + 0x14);
    uVar8 = param_1[0x15];
    uVar6 = *(undefined1 *)(param_1 + 0x16);
    uVar2 = param_1[0x17];
    uVar4 = param_1[0x18];
    uVar9 = *puVar7;
    param_1[1] = puVar7[1];
    *param_1 = uVar9;
    uVar12 = puVar7[5];
    uVar11 = puVar7[4];
    uVar10 = puVar7[7];
    uVar9 = puVar7[6];
    uVar14 = puVar7[3];
    uVar13 = puVar7[2];
    param_1[8] = puVar7[8];
    param_1[5] = uVar12;
    param_1[4] = uVar11;
    param_1[7] = uVar10;
    param_1[6] = uVar9;
    param_1[3] = uVar14;
    param_1[2] = uVar13;
    FUN_100040bb4(param_1,&DAT_100a9eea8,&DAT_100825d80);
    *puVar7 = uVar1;
    puVar7[1] = uVar3;
    puVar7[2] = (ulong)uVar5;
    puVar7[3] = uVar8;
    *(undefined1 *)(puVar7 + 4) = uVar6;
    *(undefined1 *)((long)puVar7 + 0x27) = 0;
    *(undefined2 *)((long)puVar7 + 0x25) = 0;
    *(undefined4 *)((long)puVar7 + 0x21) = 0;
    puVar7[5] = uVar2;
    puVar7[6] = uVar4 & 0xcfffffffffffffff;
    puVar7[8] = 0x1000000000000000;
  }
  else {
    uVar1 = param_1[0x12];
    uVar3 = param_1[0x13];
    uVar5 = *(uint *)(param_1 + 0x14);
    uVar8 = param_1[0x15];
    uVar6 = *(undefined1 *)(param_1 + 0x16);
    uVar2 = param_1[0x17];
    uVar4 = param_1[0x18];
    uVar9 = *puVar7;
    param_1[1] = puVar7[1];
    *param_1 = uVar9;
    uVar12 = puVar7[5];
    uVar11 = puVar7[4];
    uVar10 = puVar7[7];
    uVar9 = puVar7[6];
    uVar14 = puVar7[3];
    uVar13 = puVar7[2];
    param_1[8] = puVar7[8];
    param_1[5] = uVar12;
    param_1[4] = uVar11;
    param_1[7] = uVar10;
    param_1[6] = uVar9;
    param_1[3] = uVar14;
    param_1[2] = uVar13;
    _swift_bridgeObjectRetain(uVar3);
    FUN_100008184(uVar2,uVar4);
    FUN_100040bb4(param_1,&DAT_100a9eea8,&DAT_100825d80);
    *puVar7 = uVar1;
    puVar7[1] = uVar3;
    puVar7[2] = (ulong)uVar5;
    puVar7[3] = uVar8;
    *(undefined1 *)(puVar7 + 4) = uVar6;
    *(undefined1 *)((long)puVar7 + 0x27) = 0;
    *(undefined2 *)((long)puVar7 + 0x25) = 0;
    *(undefined4 *)((long)puVar7 + 0x21) = 0;
    puVar7[5] = uVar2;
    puVar7[6] = uVar4 & 0xcfffffffffffffff;
    puVar7[8] = 0x1000000000000000;
    uVar1 = param_1[0x17];
    uVar2 = param_1[0x18];
    _swift_bridgeObjectRelease(param_1[0x13]);
    FUN_100006cdc(uVar1,uVar2);
  }
  _free(param_1);
  return;
}

