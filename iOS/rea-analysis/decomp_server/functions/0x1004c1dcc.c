// rea decompile_all
// name: FUN_1004c1dcc
// address: 0x1004c1dcc
// body: available
// range: 0x1004c1dcc-0x1004c1f47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004c1f44 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004c1dcc(undefined8 *param_1,ulong param_2,code *param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  pvVar2 = (void *)*param_1;
  puVar1 = (undefined8 *)((long)pvVar2 + 0x1c8);
  puVar5 = *(undefined8 **)((long)pvVar2 + 0x318);
  uVar3 = *(undefined8 *)((long)pvVar2 + 0x308);
  uVar4 = *(undefined8 *)((long)pvVar2 + 0x310);
  *(undefined8 *)((long)pvVar2 + 0x260) = *(undefined8 *)((long)pvVar2 + 0x2f8);
  *(undefined1 *)((long)pvVar2 + 0x268) = *(undefined1 *)((long)pvVar2 + 0x300);
  *(undefined8 *)((long)pvVar2 + 0x270) = uVar3;
  *(undefined8 *)((long)pvVar2 + 0x278) = uVar4;
  (*param_3)((long)pvVar2 + 0x260);
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
  uVar6 = *puVar5;
  uVar8 = puVar5[3];
  uVar7 = puVar5[2];
  *(undefined8 *)((long)pvVar2 + 0x138) = puVar5[1];
  *(undefined8 *)((long)pvVar2 + 0x130) = uVar6;
  *(undefined8 *)((long)pvVar2 + 0x148) = uVar8;
  *(undefined8 *)((long)pvVar2 + 0x140) = uVar7;
  uVar7 = puVar5[5];
  uVar6 = puVar5[4];
  uVar9 = puVar5[7];
  uVar8 = puVar5[6];
  uVar10 = puVar5[8];
  uVar12 = puVar5[0xb];
  uVar11 = puVar5[10];
  *(undefined8 *)((long)pvVar2 + 0x178) = puVar5[9];
  *(undefined8 *)((long)pvVar2 + 0x170) = uVar10;
  *(undefined8 *)((long)pvVar2 + 0x188) = uVar12;
  *(undefined8 *)((long)pvVar2 + 0x180) = uVar11;
  *(undefined8 *)((long)pvVar2 + 0x158) = uVar7;
  *(undefined8 *)((long)pvVar2 + 0x150) = uVar6;
  *(undefined8 *)((long)pvVar2 + 0x168) = uVar9;
  *(undefined8 *)((long)pvVar2 + 0x160) = uVar8;
  uVar7 = puVar5[0xd];
  uVar6 = puVar5[0xc];
  uVar9 = puVar5[0xf];
  uVar8 = puVar5[0xe];
  uVar11 = puVar5[0x11];
  uVar10 = puVar5[0x10];
  *(undefined8 *)((long)pvVar2 + 0x1c0) = puVar5[0x12];
  *(undefined8 *)((long)pvVar2 + 0x1a8) = uVar9;
  *(undefined8 *)((long)pvVar2 + 0x1a0) = uVar8;
  *(undefined8 *)((long)pvVar2 + 0x1b8) = uVar11;
  *(undefined8 *)((long)pvVar2 + 0x1b0) = uVar10;
  *(undefined8 *)((long)pvVar2 + 0x198) = uVar7;
  *(undefined8 *)((long)pvVar2 + 400) = uVar6;
  if ((param_2 & 1) == 0) {
    FUN_100040bb4((long)pvVar2 + 0x130,&DAT_100aa1980,&DAT_100832130);
    uVar6 = *puVar1;
    uVar4 = *(undefined8 *)((long)pvVar2 + 0x1e0);
    uVar3 = *(undefined8 *)((long)pvVar2 + 0x1d8);
    puVar5[1] = *(undefined8 *)((long)pvVar2 + 0x1d0);
    *puVar5 = uVar6;
    puVar5[3] = uVar4;
    puVar5[2] = uVar3;
    uVar3 = *(undefined8 *)((long)pvVar2 + 0x208);
    uVar6 = *(undefined8 *)((long)pvVar2 + 0x220);
    uVar4 = *(undefined8 *)((long)pvVar2 + 0x218);
    uVar10 = *(undefined8 *)((long)pvVar2 + 0x1f0);
    uVar9 = *(undefined8 *)((long)pvVar2 + 0x1e8);
    uVar8 = *(undefined8 *)((long)pvVar2 + 0x200);
    uVar7 = *(undefined8 *)((long)pvVar2 + 0x1f8);
    puVar5[9] = *(undefined8 *)((long)pvVar2 + 0x210);
    puVar5[8] = uVar3;
    puVar5[0xb] = uVar6;
    puVar5[10] = uVar4;
    puVar5[5] = uVar10;
    puVar5[4] = uVar9;
    puVar5[7] = uVar8;
    puVar5[6] = uVar7;
    uVar7 = *(undefined8 *)((long)pvVar2 + 0x240);
    uVar6 = *(undefined8 *)((long)pvVar2 + 0x238);
    uVar4 = *(undefined8 *)((long)pvVar2 + 0x250);
    uVar3 = *(undefined8 *)((long)pvVar2 + 0x248);
    uVar9 = *(undefined8 *)((long)pvVar2 + 0x230);
    uVar8 = *(undefined8 *)((long)pvVar2 + 0x228);
    puVar5[0x12] = *(undefined8 *)((long)pvVar2 + 600);
    puVar5[0xf] = uVar7;
    puVar5[0xe] = uVar6;
    puVar5[0x11] = uVar4;
    puVar5[0x10] = uVar3;
    puVar5[0xd] = uVar9;
    puVar5[0xc] = uVar8;
  }
  else {
    FUN_100008184(uVar3,uVar4);
    FUN_100040bb4((long)pvVar2 + 0x130,&DAT_100aa1980,&DAT_100832130);
    uVar6 = *puVar1;
    uVar4 = *(undefined8 *)((long)pvVar2 + 0x1e0);
    uVar3 = *(undefined8 *)((long)pvVar2 + 0x1d8);
    puVar5[1] = *(undefined8 *)((long)pvVar2 + 0x1d0);
    *puVar5 = uVar6;
    puVar5[3] = uVar4;
    puVar5[2] = uVar3;
    uVar3 = *(undefined8 *)((long)pvVar2 + 0x208);
    uVar6 = *(undefined8 *)((long)pvVar2 + 0x220);
    uVar4 = *(undefined8 *)((long)pvVar2 + 0x218);
    uVar10 = *(undefined8 *)((long)pvVar2 + 0x1f0);
    uVar9 = *(undefined8 *)((long)pvVar2 + 0x1e8);
    uVar8 = *(undefined8 *)((long)pvVar2 + 0x200);
    uVar7 = *(undefined8 *)((long)pvVar2 + 0x1f8);
    puVar5[9] = *(undefined8 *)((long)pvVar2 + 0x210);
    puVar5[8] = uVar3;
    puVar5[0xb] = uVar6;
    puVar5[10] = uVar4;
    puVar5[5] = uVar10;
    puVar5[4] = uVar9;
    puVar5[7] = uVar8;
    puVar5[6] = uVar7;
    uVar7 = *(undefined8 *)((long)pvVar2 + 0x240);
    uVar6 = *(undefined8 *)((long)pvVar2 + 0x238);
    uVar4 = *(undefined8 *)((long)pvVar2 + 0x250);
    uVar3 = *(undefined8 *)((long)pvVar2 + 0x248);
    uVar9 = *(undefined8 *)((long)pvVar2 + 0x230);
    uVar8 = *(undefined8 *)((long)pvVar2 + 0x228);
    puVar5[0x12] = *(undefined8 *)((long)pvVar2 + 600);
    puVar5[0xf] = uVar7;
    puVar5[0xe] = uVar6;
    puVar5[0x11] = uVar4;
    puVar5[0x10] = uVar3;
    puVar5[0xd] = uVar9;
    puVar5[0xc] = uVar8;
    FUN_100006cdc(*(undefined8 *)((long)pvVar2 + 0x308),*(undefined8 *)((long)pvVar2 + 0x310));
  }
  _free(pvVar2);
  return;
}

