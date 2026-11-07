// rea decompile_all
// name: FUN_1004c2b80
// address: 0x1004c2b80
// body: available
// range: 0x1004c2b80-0x1004c2d33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004c2d30 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004c2b80(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  pvVar2 = (void *)*param_1;
  puVar1 = (undefined8 *)((long)pvVar2 + 0x1c8);
  puVar6 = *(undefined8 **)((long)pvVar2 + 0x330);
  uVar5 = *(undefined8 *)((long)pvVar2 + 0x318);
  uVar3 = *(undefined8 *)((long)pvVar2 + 800);
  uVar4 = *(undefined8 *)((long)pvVar2 + 0x328);
  *(undefined1 *)((long)pvVar2 + 0x260) = *(undefined1 *)((long)pvVar2 + 0x2f8);
  *(undefined8 *)((long)pvVar2 + 0x268) = *(undefined8 *)((long)pvVar2 + 0x300);
  *(undefined1 *)((long)pvVar2 + 0x270) = *(undefined1 *)((long)pvVar2 + 0x308);
  *(undefined8 *)((long)pvVar2 + 0x278) = *(undefined8 *)((long)pvVar2 + 0x310);
  *(undefined8 *)((long)pvVar2 + 0x280) = uVar5;
  *(undefined8 *)((long)pvVar2 + 0x288) = uVar3;
  *(undefined8 *)((long)pvVar2 + 0x290) = uVar4;
  FUN_10017b6cc((long)pvVar2 + 0x260);
  *(undefined8 *)((long)pvVar2 + 0x230) = *(undefined8 *)((long)pvVar2 + 0x2c8);
  *(undefined8 *)((long)pvVar2 + 0x228) = *(undefined8 *)((long)pvVar2 + 0x2c0);
  *(undefined8 *)((long)pvVar2 + 0x240) = *(undefined8 *)((long)pvVar2 + 0x2d8);
  *(undefined8 *)((long)pvVar2 + 0x238) = *(undefined8 *)((long)pvVar2 + 0x2d0);
  *(undefined8 *)((long)pvVar2 + 0x250) = *(undefined8 *)((long)pvVar2 + 0x2e8);
  *(undefined8 *)((long)pvVar2 + 0x248) = *(undefined8 *)((long)pvVar2 + 0x2e0);
  *(undefined8 *)((long)pvVar2 + 600) = *(undefined8 *)((long)pvVar2 + 0x2f0);
  *(undefined8 *)((long)pvVar2 + 0x1f0) = *(undefined8 *)((long)pvVar2 + 0x288);
  *(undefined8 *)((long)pvVar2 + 0x1e8) = *(undefined8 *)((long)pvVar2 + 0x280);
  *(undefined8 *)((long)pvVar2 + 0x200) = *(undefined8 *)((long)pvVar2 + 0x298);
  *(undefined8 *)((long)pvVar2 + 0x1f8) = *(undefined8 *)((long)pvVar2 + 0x290);
  *(undefined8 *)((long)pvVar2 + 0x210) = *(undefined8 *)((long)pvVar2 + 0x2a8);
  *(undefined8 *)((long)pvVar2 + 0x208) = *(undefined8 *)((long)pvVar2 + 0x2a0);
  *(undefined8 *)((long)pvVar2 + 0x220) = *(undefined8 *)((long)pvVar2 + 0x2b8);
  *(undefined8 *)((long)pvVar2 + 0x218) = *(undefined8 *)((long)pvVar2 + 0x2b0);
  *(undefined8 *)((long)pvVar2 + 0x1d0) = *(undefined8 *)((long)pvVar2 + 0x268);
  *puVar1 = *(undefined8 *)((long)pvVar2 + 0x260);
  *(undefined8 *)((long)pvVar2 + 0x1e0) = *(undefined8 *)((long)pvVar2 + 0x278);
  *(undefined8 *)((long)pvVar2 + 0x1d8) = *(undefined8 *)((long)pvVar2 + 0x270);
  FUN_100008290(puVar1);
  uVar7 = *puVar6;
  uVar9 = puVar6[3];
  uVar8 = puVar6[2];
  *(undefined8 *)((long)pvVar2 + 0x138) = puVar6[1];
  *(undefined8 *)((long)pvVar2 + 0x130) = uVar7;
  *(undefined8 *)((long)pvVar2 + 0x148) = uVar9;
  *(undefined8 *)((long)pvVar2 + 0x140) = uVar8;
  uVar8 = puVar6[5];
  uVar7 = puVar6[4];
  uVar10 = puVar6[7];
  uVar9 = puVar6[6];
  uVar11 = puVar6[8];
  uVar13 = puVar6[0xb];
  uVar12 = puVar6[10];
  *(undefined8 *)((long)pvVar2 + 0x178) = puVar6[9];
  *(undefined8 *)((long)pvVar2 + 0x170) = uVar11;
  *(undefined8 *)((long)pvVar2 + 0x188) = uVar13;
  *(undefined8 *)((long)pvVar2 + 0x180) = uVar12;
  *(undefined8 *)((long)pvVar2 + 0x158) = uVar8;
  *(undefined8 *)((long)pvVar2 + 0x150) = uVar7;
  *(undefined8 *)((long)pvVar2 + 0x168) = uVar10;
  *(undefined8 *)((long)pvVar2 + 0x160) = uVar9;
  uVar8 = puVar6[0xd];
  uVar7 = puVar6[0xc];
  uVar10 = puVar6[0xf];
  uVar9 = puVar6[0xe];
  uVar12 = puVar6[0x11];
  uVar11 = puVar6[0x10];
  *(undefined8 *)((long)pvVar2 + 0x1c0) = puVar6[0x12];
  *(undefined8 *)((long)pvVar2 + 0x1a8) = uVar10;
  *(undefined8 *)((long)pvVar2 + 0x1a0) = uVar9;
  *(undefined8 *)((long)pvVar2 + 0x1b8) = uVar12;
  *(undefined8 *)((long)pvVar2 + 0x1b0) = uVar11;
  *(undefined8 *)((long)pvVar2 + 0x198) = uVar8;
  *(undefined8 *)((long)pvVar2 + 400) = uVar7;
  if ((param_2 & 1) == 0) {
    FUN_100040bb4((long)pvVar2 + 0x130,&DAT_100aa1980,&DAT_100832130);
    uVar5 = *puVar1;
    uVar4 = *(undefined8 *)((long)pvVar2 + 0x1e0);
    uVar3 = *(undefined8 *)((long)pvVar2 + 0x1d8);
    puVar6[1] = *(undefined8 *)((long)pvVar2 + 0x1d0);
    *puVar6 = uVar5;
    puVar6[3] = uVar4;
    puVar6[2] = uVar3;
    uVar3 = *(undefined8 *)((long)pvVar2 + 0x208);
    uVar5 = *(undefined8 *)((long)pvVar2 + 0x220);
    uVar4 = *(undefined8 *)((long)pvVar2 + 0x218);
    uVar10 = *(undefined8 *)((long)pvVar2 + 0x1f0);
    uVar9 = *(undefined8 *)((long)pvVar2 + 0x1e8);
    uVar8 = *(undefined8 *)((long)pvVar2 + 0x200);
    uVar7 = *(undefined8 *)((long)pvVar2 + 0x1f8);
    puVar6[9] = *(undefined8 *)((long)pvVar2 + 0x210);
    puVar6[8] = uVar3;
    puVar6[0xb] = uVar5;
    puVar6[10] = uVar4;
    puVar6[5] = uVar10;
    puVar6[4] = uVar9;
    puVar6[7] = uVar8;
    puVar6[6] = uVar7;
    uVar7 = *(undefined8 *)((long)pvVar2 + 0x240);
    uVar5 = *(undefined8 *)((long)pvVar2 + 0x238);
    uVar4 = *(undefined8 *)((long)pvVar2 + 0x250);
    uVar3 = *(undefined8 *)((long)pvVar2 + 0x248);
    uVar9 = *(undefined8 *)((long)pvVar2 + 0x230);
    uVar8 = *(undefined8 *)((long)pvVar2 + 0x228);
    puVar6[0x12] = *(undefined8 *)((long)pvVar2 + 600);
    puVar6[0xf] = uVar7;
    puVar6[0xe] = uVar5;
    puVar6[0x11] = uVar4;
    puVar6[0x10] = uVar3;
    puVar6[0xd] = uVar9;
    puVar6[0xc] = uVar8;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    FUN_100008184(uVar3,uVar4);
    FUN_100040bb4((long)pvVar2 + 0x130,&DAT_100aa1980,&DAT_100832130);
    uVar5 = *puVar1;
    uVar4 = *(undefined8 *)((long)pvVar2 + 0x1e0);
    uVar3 = *(undefined8 *)((long)pvVar2 + 0x1d8);
    puVar6[1] = *(undefined8 *)((long)pvVar2 + 0x1d0);
    *puVar6 = uVar5;
    puVar6[3] = uVar4;
    puVar6[2] = uVar3;
    uVar3 = *(undefined8 *)((long)pvVar2 + 0x208);
    uVar5 = *(undefined8 *)((long)pvVar2 + 0x220);
    uVar4 = *(undefined8 *)((long)pvVar2 + 0x218);
    uVar10 = *(undefined8 *)((long)pvVar2 + 0x1f0);
    uVar9 = *(undefined8 *)((long)pvVar2 + 0x1e8);
    uVar8 = *(undefined8 *)((long)pvVar2 + 0x200);
    uVar7 = *(undefined8 *)((long)pvVar2 + 0x1f8);
    puVar6[9] = *(undefined8 *)((long)pvVar2 + 0x210);
    puVar6[8] = uVar3;
    puVar6[0xb] = uVar5;
    puVar6[10] = uVar4;
    puVar6[5] = uVar10;
    puVar6[4] = uVar9;
    puVar6[7] = uVar8;
    puVar6[6] = uVar7;
    uVar7 = *(undefined8 *)((long)pvVar2 + 0x240);
    uVar5 = *(undefined8 *)((long)pvVar2 + 0x238);
    uVar4 = *(undefined8 *)((long)pvVar2 + 0x250);
    uVar3 = *(undefined8 *)((long)pvVar2 + 0x248);
    uVar9 = *(undefined8 *)((long)pvVar2 + 0x230);
    uVar8 = *(undefined8 *)((long)pvVar2 + 0x228);
    puVar6[0x12] = *(undefined8 *)((long)pvVar2 + 600);
    puVar6[0xf] = uVar7;
    puVar6[0xe] = uVar5;
    puVar6[0x11] = uVar4;
    puVar6[0x10] = uVar3;
    puVar6[0xd] = uVar9;
    puVar6[0xc] = uVar8;
    uVar3 = *(undefined8 *)((long)pvVar2 + 800);
    uVar4 = *(undefined8 *)((long)pvVar2 + 0x328);
    _swift_bridgeObjectRelease(*(undefined8 *)((long)pvVar2 + 0x318));
    FUN_100006cdc(uVar3,uVar4);
  }
  _free(pvVar2);
  return;
}

