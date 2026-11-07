// rea decompile_all
// name: FUN_100418d50
// address: 0x100418d50
// body: available
// range: 0x100418d50-0x100418e63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100418e60 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100418d50(undefined8 *param_1,ulong param_2,byte param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  puVar4 = (ulong *)*param_1;
  puVar5 = (ulong *)puVar4[0x17];
  if ((param_2 & 1) == 0) {
    uVar3 = puVar4[0x14];
    uVar1 = puVar4[0x15];
    uVar2 = puVar4[0x16];
    uVar6 = *puVar5;
    puVar4[1] = puVar5[1];
    *puVar4 = uVar6;
    uVar10 = puVar5[5];
    uVar9 = puVar5[4];
    uVar7 = puVar5[7];
    uVar6 = puVar5[6];
    uVar8 = *(undefined8 *)((long)puVar5 + 0x39);
    uVar12 = puVar5[3];
    uVar11 = puVar5[2];
    *(undefined8 *)((long)puVar4 + 0x41) = *(undefined8 *)((long)puVar5 + 0x41);
    *(undefined8 *)((long)puVar4 + 0x39) = uVar8;
    puVar4[5] = uVar10;
    puVar4[4] = uVar9;
    puVar4[7] = uVar7;
    puVar4[6] = uVar6;
    puVar4[3] = uVar12;
    puVar4[2] = uVar11;
    FUN_100040bb4(puVar4,&DAT_100a9eea0,&DAT_100825d78);
    *puVar5 = (ulong)(uint)uVar3;
    puVar5[1] = uVar1;
    puVar5[2] = uVar2;
    puVar5[8] = param_4;
    *(byte *)(puVar5 + 9) = param_3 & 1;
  }
  else {
    uVar3 = puVar4[0x14];
    uVar1 = puVar4[0x15];
    uVar2 = puVar4[0x16];
    uVar6 = *puVar5;
    puVar4[1] = puVar5[1];
    *puVar4 = uVar6;
    uVar10 = puVar5[5];
    uVar9 = puVar5[4];
    uVar7 = puVar5[7];
    uVar6 = puVar5[6];
    uVar8 = *(undefined8 *)((long)puVar5 + 0x39);
    uVar12 = puVar5[3];
    uVar11 = puVar5[2];
    *(undefined8 *)((long)puVar4 + 0x41) = *(undefined8 *)((long)puVar5 + 0x41);
    *(undefined8 *)((long)puVar4 + 0x39) = uVar8;
    puVar4[5] = uVar10;
    puVar4[4] = uVar9;
    puVar4[7] = uVar7;
    puVar4[6] = uVar6;
    puVar4[3] = uVar12;
    puVar4[2] = uVar11;
    FUN_100008184(uVar1,uVar2);
    FUN_100040bb4(puVar4,&DAT_100a9eea0,&DAT_100825d78);
    *puVar5 = (ulong)(uint)uVar3;
    puVar5[1] = uVar1;
    puVar5[2] = uVar2;
    puVar5[8] = param_4;
    *(byte *)(puVar5 + 9) = param_3 & 1;
    FUN_100006cdc(puVar4[0x15],puVar4[0x16]);
  }
  _free(puVar4);
  return;
}

