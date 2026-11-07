// rea decompile_all
// name: FUN_1004a47c4
// address: 0x1004a47c4
// body: available
// range: 0x1004a47c4-0x1004a49a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004a49a0 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004a47c4(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  pvVar2 = (void *)*param_1;
  puVar1 = (undefined8 *)((long)pvVar2 + 0x198);
  puVar9 = *(undefined8 **)((long)pvVar2 + 0x2e0);
  uVar8 = *(undefined8 *)((long)pvVar2 + 0x2b0);
  uVar6 = *(undefined8 *)((long)pvVar2 + 0x2b8);
  uVar7 = *(undefined8 *)((long)pvVar2 + 0x2c0);
  uVar3 = *(undefined8 *)((long)pvVar2 + 0x2c8);
  uVar4 = *(undefined8 *)((long)pvVar2 + 0x2d0);
  uVar5 = *(undefined8 *)((long)pvVar2 + 0x2d8);
  *(undefined8 *)((long)pvVar2 + 0x220) = *(undefined8 *)((long)pvVar2 + 0x2a8);
  *(undefined8 *)((long)pvVar2 + 0x228) = uVar8;
  *(undefined8 *)((long)pvVar2 + 0x230) = uVar6;
  *(undefined8 *)((long)pvVar2 + 0x238) = uVar7;
  *(undefined8 *)((long)pvVar2 + 0x240) = uVar3;
  *(undefined8 *)((long)pvVar2 + 0x248) = uVar4;
  *(undefined8 *)((long)pvVar2 + 0x250) = uVar5;
  FUN_1004a45f8((long)pvVar2 + 0x220);
  *(undefined8 *)((long)pvVar2 + 0x200) = *(undefined8 *)((long)pvVar2 + 0x288);
  *(undefined8 *)((long)pvVar2 + 0x1f8) = *(undefined8 *)((long)pvVar2 + 0x280);
  *(undefined8 *)((long)pvVar2 + 0x210) = *(undefined8 *)((long)pvVar2 + 0x298);
  *(undefined8 *)((long)pvVar2 + 0x208) = *(undefined8 *)((long)pvVar2 + 0x290);
  *(undefined1 *)((long)pvVar2 + 0x218) = *(undefined1 *)((long)pvVar2 + 0x2a0);
  *(undefined8 *)((long)pvVar2 + 0x1c0) = *(undefined8 *)((long)pvVar2 + 0x248);
  *(undefined8 *)((long)pvVar2 + 0x1b8) = *(undefined8 *)((long)pvVar2 + 0x240);
  *(undefined8 *)((long)pvVar2 + 0x1d0) = *(undefined8 *)((long)pvVar2 + 600);
  *(undefined8 *)((long)pvVar2 + 0x1c8) = *(undefined8 *)((long)pvVar2 + 0x250);
  *(undefined8 *)((long)pvVar2 + 0x1e0) = *(undefined8 *)((long)pvVar2 + 0x268);
  *(undefined8 *)((long)pvVar2 + 0x1d8) = *(undefined8 *)((long)pvVar2 + 0x260);
  *(undefined8 *)((long)pvVar2 + 0x1f0) = *(undefined8 *)((long)pvVar2 + 0x278);
  *(undefined8 *)((long)pvVar2 + 0x1e8) = *(undefined8 *)((long)pvVar2 + 0x270);
  *(undefined8 *)((long)pvVar2 + 0x1a0) = *(undefined8 *)((long)pvVar2 + 0x228);
  *puVar1 = *(undefined8 *)((long)pvVar2 + 0x220);
  *(undefined8 *)((long)pvVar2 + 0x1b0) = *(undefined8 *)((long)pvVar2 + 0x238);
  *(undefined8 *)((long)pvVar2 + 0x1a8) = *(undefined8 *)((long)pvVar2 + 0x230);
  FUN_100008290(puVar1);
  uVar10 = *puVar9;
  *(undefined8 *)((long)pvVar2 + 0x118) = puVar9[1];
  *(undefined8 *)((long)pvVar2 + 0x110) = uVar10;
  uVar11 = puVar9[3];
  uVar10 = puVar9[2];
  uVar13 = puVar9[5];
  uVar12 = puVar9[4];
  uVar14 = puVar9[6];
  uVar16 = puVar9[9];
  uVar15 = puVar9[8];
  *(undefined8 *)((long)pvVar2 + 0x148) = puVar9[7];
  *(undefined8 *)((long)pvVar2 + 0x140) = uVar14;
  *(undefined8 *)((long)pvVar2 + 0x158) = uVar16;
  *(undefined8 *)((long)pvVar2 + 0x150) = uVar15;
  *(undefined8 *)((long)pvVar2 + 0x128) = uVar11;
  *(undefined8 *)((long)pvVar2 + 0x120) = uVar10;
  *(undefined8 *)((long)pvVar2 + 0x138) = uVar13;
  *(undefined8 *)((long)pvVar2 + 0x130) = uVar12;
  uVar11 = puVar9[0xb];
  uVar10 = puVar9[10];
  uVar13 = puVar9[0xd];
  uVar12 = puVar9[0xc];
  uVar15 = puVar9[0xf];
  uVar14 = puVar9[0xe];
  *(undefined1 *)((long)pvVar2 + 400) = *(undefined1 *)(puVar9 + 0x10);
  *(undefined8 *)((long)pvVar2 + 0x178) = uVar13;
  *(undefined8 *)((long)pvVar2 + 0x170) = uVar12;
  *(undefined8 *)((long)pvVar2 + 0x188) = uVar15;
  *(undefined8 *)((long)pvVar2 + 0x180) = uVar14;
  *(undefined8 *)((long)pvVar2 + 0x168) = uVar11;
  *(undefined8 *)((long)pvVar2 + 0x160) = uVar10;
  if ((param_2 & 1) == 0) {
    FUN_100040bb4((long)pvVar2 + 0x110,&DAT_100aa1378,&DAT_100830238);
    uVar3 = *puVar1;
    puVar9[1] = *(undefined8 *)((long)pvVar2 + 0x1a0);
    *puVar9 = uVar3;
    uVar3 = *(undefined8 *)((long)pvVar2 + 0x1c8);
    uVar5 = *(undefined8 *)((long)pvVar2 + 0x1e0);
    uVar4 = *(undefined8 *)((long)pvVar2 + 0x1d8);
    uVar10 = *(undefined8 *)((long)pvVar2 + 0x1b0);
    uVar8 = *(undefined8 *)((long)pvVar2 + 0x1a8);
    uVar7 = *(undefined8 *)((long)pvVar2 + 0x1c0);
    uVar6 = *(undefined8 *)((long)pvVar2 + 0x1b8);
    puVar9[7] = *(undefined8 *)((long)pvVar2 + 0x1d0);
    puVar9[6] = uVar3;
    puVar9[9] = uVar5;
    puVar9[8] = uVar4;
    puVar9[3] = uVar10;
    puVar9[2] = uVar8;
    puVar9[5] = uVar7;
    puVar9[4] = uVar6;
    uVar6 = *(undefined8 *)((long)pvVar2 + 0x200);
    uVar5 = *(undefined8 *)((long)pvVar2 + 0x1f8);
    uVar4 = *(undefined8 *)((long)pvVar2 + 0x210);
    uVar3 = *(undefined8 *)((long)pvVar2 + 0x208);
    uVar8 = *(undefined8 *)((long)pvVar2 + 0x1f0);
    uVar7 = *(undefined8 *)((long)pvVar2 + 0x1e8);
    *(undefined1 *)(puVar9 + 0x10) = *(undefined1 *)((long)pvVar2 + 0x218);
    puVar9[0xd] = uVar6;
    puVar9[0xc] = uVar5;
    puVar9[0xf] = uVar4;
    puVar9[0xe] = uVar3;
    puVar9[0xb] = uVar8;
    puVar9[10] = uVar7;
  }
  else {
    _swift_bridgeObjectRetain(uVar8);
    FUN_100008184(uVar6,uVar7);
    thunk_FUN_100040b80(uVar3,uVar4,uVar5);
    FUN_100040bb4((long)pvVar2 + 0x110,&DAT_100aa1378,&DAT_100830238);
    uVar3 = *puVar1;
    puVar9[1] = *(undefined8 *)((long)pvVar2 + 0x1a0);
    *puVar9 = uVar3;
    uVar3 = *(undefined8 *)((long)pvVar2 + 0x1c8);
    uVar5 = *(undefined8 *)((long)pvVar2 + 0x1e0);
    uVar4 = *(undefined8 *)((long)pvVar2 + 0x1d8);
    uVar10 = *(undefined8 *)((long)pvVar2 + 0x1b0);
    uVar8 = *(undefined8 *)((long)pvVar2 + 0x1a8);
    uVar7 = *(undefined8 *)((long)pvVar2 + 0x1c0);
    uVar6 = *(undefined8 *)((long)pvVar2 + 0x1b8);
    puVar9[7] = *(undefined8 *)((long)pvVar2 + 0x1d0);
    puVar9[6] = uVar3;
    puVar9[9] = uVar5;
    puVar9[8] = uVar4;
    puVar9[3] = uVar10;
    puVar9[2] = uVar8;
    puVar9[5] = uVar7;
    puVar9[4] = uVar6;
    uVar6 = *(undefined8 *)((long)pvVar2 + 0x200);
    uVar5 = *(undefined8 *)((long)pvVar2 + 0x1f8);
    uVar4 = *(undefined8 *)((long)pvVar2 + 0x210);
    uVar3 = *(undefined8 *)((long)pvVar2 + 0x208);
    uVar8 = *(undefined8 *)((long)pvVar2 + 0x1f0);
    uVar7 = *(undefined8 *)((long)pvVar2 + 0x1e8);
    *(undefined1 *)(puVar9 + 0x10) = *(undefined1 *)((long)pvVar2 + 0x218);
    puVar9[0xd] = uVar6;
    puVar9[0xc] = uVar5;
    puVar9[0xf] = uVar4;
    puVar9[0xe] = uVar3;
    puVar9[0xb] = uVar8;
    puVar9[10] = uVar7;
    uVar3 = *(undefined8 *)((long)pvVar2 + 0x2b8);
    uVar4 = *(undefined8 *)((long)pvVar2 + 0x2c0);
    uVar5 = *(undefined8 *)((long)pvVar2 + 0x2c8);
    uVar6 = *(undefined8 *)((long)pvVar2 + 0x2d0);
    uVar7 = *(undefined8 *)((long)pvVar2 + 0x2d8);
    _swift_bridgeObjectRelease(*(undefined8 *)((long)pvVar2 + 0x2b0));
    FUN_100006cdc(uVar3,uVar4);
    switchD_10004048c::caseD_6d(uVar5,uVar6,uVar7);
  }
  _free(pvVar2);
  return;
}

