// rea decompile_all
// name: FUN_100418008
// address: 0x100418008
// body: available
// range: 0x100418008-0x100418173 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100418170 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100418008(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  puVar3 = (ulong *)*param_1;
  puVar5 = (ulong *)puVar3[0x1b];
  if ((param_2 & 1) == 0) {
    uVar4 = puVar3[0x14];
    uVar9 = puVar3[0x16];
    uVar6 = puVar3[0x15];
    uVar10 = puVar3[0x18];
    uVar7 = puVar3[0x17];
    uVar1 = puVar3[0x19];
    uVar2 = puVar3[0x1a];
    uVar8 = *puVar5;
    puVar3[1] = puVar5[1];
    *puVar3 = uVar8;
    uVar14 = puVar5[5];
    uVar13 = puVar5[4];
    uVar11 = puVar5[7];
    uVar8 = puVar5[6];
    uVar12 = *(undefined8 *)((long)puVar5 + 0x39);
    uVar16 = puVar5[3];
    uVar15 = puVar5[2];
    *(undefined8 *)((long)puVar3 + 0x41) = *(undefined8 *)((long)puVar5 + 0x41);
    *(undefined8 *)((long)puVar3 + 0x39) = uVar12;
    puVar3[5] = uVar14;
    puVar3[4] = uVar13;
    puVar3[7] = uVar11;
    puVar3[6] = uVar8;
    puVar3[3] = uVar16;
    puVar3[2] = uVar15;
    FUN_100040bb4(puVar3,&DAT_100a9eea0,&DAT_100825d78);
    *puVar5 = (ulong)(uint)uVar4;
    puVar5[2] = uVar9;
    puVar5[1] = uVar6;
    puVar5[4] = uVar10;
    puVar5[3] = uVar7;
    puVar5[5] = uVar1;
    puVar5[6] = uVar2;
    puVar5[8] = 0x1000000000000000;
    *(undefined1 *)(puVar5 + 9) = 0;
  }
  else {
    uVar11 = puVar3[0x14];
    uVar1 = puVar3[0x15];
    uVar7 = puVar3[0x16];
    uVar2 = puVar3[0x17];
    uVar8 = puVar3[0x18];
    uVar4 = puVar3[0x19];
    uVar10 = puVar3[0x1a];
    uVar6 = *puVar5;
    puVar3[1] = puVar5[1];
    *puVar3 = uVar6;
    uVar14 = puVar5[5];
    uVar13 = puVar5[4];
    uVar9 = puVar5[7];
    uVar6 = puVar5[6];
    uVar12 = *(undefined8 *)((long)puVar5 + 0x39);
    uVar16 = puVar5[3];
    uVar15 = puVar5[2];
    *(undefined8 *)((long)puVar3 + 0x41) = *(undefined8 *)((long)puVar5 + 0x41);
    *(undefined8 *)((long)puVar3 + 0x39) = uVar12;
    puVar3[5] = uVar14;
    puVar3[4] = uVar13;
    puVar3[7] = uVar9;
    puVar3[6] = uVar6;
    puVar3[3] = uVar16;
    puVar3[2] = uVar15;
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar8);
    FUN_100008184(uVar4,uVar10);
    FUN_100040bb4(puVar3,&DAT_100a9eea0,&DAT_100825d78);
    *puVar5 = (ulong)(uint)uVar11;
    puVar5[1] = uVar1;
    puVar5[2] = uVar7;
    puVar5[3] = uVar2;
    puVar5[4] = uVar8;
    puVar5[5] = uVar4;
    puVar5[6] = uVar10;
    puVar5[8] = 0x1000000000000000;
    *(undefined1 *)(puVar5 + 9) = 0;
    uVar1 = puVar3[0x18];
    uVar2 = puVar3[0x19];
    uVar4 = puVar3[0x1a];
    _swift_bridgeObjectRelease(puVar3[0x16]);
    _swift_bridgeObjectRelease(uVar1);
    FUN_100006cdc(uVar2,uVar4);
  }
  _free(puVar3);
  return;
}

