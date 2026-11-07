// rea decompile_all
// name: FUN_1004eff24
// address: 0x1004eff24
// body: available
// range: 0x1004eff24-0x1004f03a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004eff24(long param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long unaff_x20;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined1 auStack_3c8 [24];
  undefined1 auStack_3b0 [24];
  undefined1 auStack_398 [24];
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [24];
  undefined1 auStack_350 [24];
  undefined1 auStack_338 [24];
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar12 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar12 = 0;
  *(undefined1 *)(unaff_x20 + 0x18) = 1;
  puVar11 = (undefined8 *)(unaff_x20 + 0x20);
  *puVar11 = 0;
  *(undefined2 *)(unaff_x20 + 0x28) = 1;
  *(undefined4 *)(unaff_x20 + 0x3c) = 0;
  puVar9 = (undefined8 *)(unaff_x20 + 0x34);
  *puVar9 = 0;
  puVar10 = (undefined8 *)(unaff_x20 + 0x2c);
  *puVar10 = 0;
  *(undefined1 *)(unaff_x20 + 0x40) = 1;
  puVar14 = (undefined4 *)(unaff_x20 + 0x48);
  *puVar14 = 0;
  puVar15 = (undefined4 *)(unaff_x20 + 0x44);
  *puVar15 = 0;
  puVar6 = (undefined8 *)(unaff_x20 + 0x50);
  *puVar6 = 0;
  *(undefined2 *)(unaff_x20 + 0x58) = 1;
  puVar7 = (undefined8 *)(unaff_x20 + 0x60);
  *puVar7 = 0;
  *(undefined1 *)(unaff_x20 + 0x68) = 1;
  puVar8 = (undefined8 *)(unaff_x20 + 0x70);
  *puVar8 = 0;
  *(undefined1 *)(unaff_x20 + 0x78) = 1;
  puVar3 = (undefined4 *)(unaff_x20 + 0x8c);
  *puVar3 = 0;
  puVar4 = (undefined8 *)(unaff_x20 + 0x84);
  *puVar4 = 0;
  puVar5 = (undefined8 *)(unaff_x20 + 0x7c);
  *puVar5 = 0;
  _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined1 *)(param_1 + 0x18);
  _swift_beginAccess(puVar12,auStack_98,1,0);
  *puVar12 = uVar13;
  *(undefined1 *)(unaff_x20 + 0x18) = uVar2;
  _swift_beginAccess(param_1 + 0x20,auStack_b0,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined1 *)(param_1 + 0x28);
  _swift_beginAccess(puVar11,auStack_c8,1,0);
  *puVar11 = uVar13;
  *(undefined1 *)(unaff_x20 + 0x28) = uVar2;
  _swift_beginAccess(param_1 + 0x29,auStack_e0,0,0);
  uVar2 = *(undefined1 *)(param_1 + 0x29);
  _swift_beginAccess(unaff_x20 + 0x29,auStack_f8,1,0);
  *(undefined1 *)(unaff_x20 + 0x29) = uVar2;
  _swift_beginAccess(param_1 + 0x2c,auStack_110,0,0);
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  _swift_beginAccess(puVar10,auStack_128,1,0);
  *(undefined4 *)puVar10 = uVar1;
  _swift_beginAccess(param_1 + 0x30,auStack_140,0,0);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  _swift_beginAccess(unaff_x20 + 0x30,auStack_158,1,0);
  *(undefined4 *)(unaff_x20 + 0x30) = uVar1;
  _swift_beginAccess(param_1 + 0x34,auStack_170,0,0);
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  _swift_beginAccess(puVar9,auStack_188,1,0);
  *(undefined4 *)puVar9 = uVar1;
  _swift_beginAccess(param_1 + 0x38,auStack_1a0,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined1 *)(param_1 + 0x40);
  _swift_beginAccess(unaff_x20 + 0x38,auStack_1b8,1,0);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar13;
  *(undefined1 *)(unaff_x20 + 0x40) = uVar2;
  _swift_beginAccess(param_1 + 0x44,auStack_1d0,0,0);
  uVar1 = *(undefined4 *)(param_1 + 0x44);
  _swift_beginAccess(puVar15,auStack_1e8,1,0);
  *puVar15 = uVar1;
  _swift_beginAccess(param_1 + 0x48,auStack_200,0,0);
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  _swift_beginAccess(puVar14,auStack_218,1,0);
  *puVar14 = uVar1;
  _swift_beginAccess(param_1 + 0x50,auStack_230,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = *(undefined1 *)(param_1 + 0x58);
  _swift_beginAccess(puVar6,auStack_248,1,0);
  *puVar6 = uVar13;
  *(undefined1 *)(unaff_x20 + 0x58) = uVar2;
  _swift_beginAccess(param_1 + 0x59,auStack_260,0,0);
  uVar2 = *(undefined1 *)(param_1 + 0x59);
  _swift_beginAccess(unaff_x20 + 0x59,auStack_278,1,0);
  *(undefined1 *)(unaff_x20 + 0x59) = uVar2;
  _swift_beginAccess(param_1 + 0x60,auStack_290,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x60);
  uVar2 = *(undefined1 *)(param_1 + 0x68);
  _swift_beginAccess(puVar7,auStack_2a8,1,0);
  *puVar7 = uVar13;
  *(undefined1 *)(unaff_x20 + 0x68) = uVar2;
  _swift_beginAccess(param_1 + 0x70,auStack_2c0,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x70);
  uVar2 = *(undefined1 *)(param_1 + 0x78);
  _swift_beginAccess(puVar8,auStack_2d8,1,0);
  *puVar8 = uVar13;
  *(undefined1 *)(unaff_x20 + 0x78) = uVar2;
  _swift_beginAccess(param_1 + 0x7c,auStack_2f0,0,0);
  uVar1 = *(undefined4 *)(param_1 + 0x7c);
  _swift_beginAccess(puVar5,auStack_308,1,0);
  *(undefined4 *)puVar5 = uVar1;
  _swift_beginAccess(param_1 + 0x80,auStack_320,0,0);
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  _swift_beginAccess(unaff_x20 + 0x80,auStack_338,1,0);
  *(undefined4 *)(unaff_x20 + 0x80) = uVar1;
  _swift_beginAccess(param_1 + 0x84,auStack_350,0,0);
  uVar1 = *(undefined4 *)(param_1 + 0x84);
  _swift_beginAccess(puVar4,auStack_368,1,0);
  *(undefined4 *)puVar4 = uVar1;
  _swift_beginAccess(param_1 + 0x88,auStack_380,0,0);
  uVar1 = *(undefined4 *)(param_1 + 0x88);
  _swift_beginAccess(unaff_x20 + 0x88,auStack_398,1,0);
  *(undefined4 *)(unaff_x20 + 0x88) = uVar1;
  _swift_beginAccess(param_1 + 0x8c,auStack_3b0,0,0);
  uVar1 = *(undefined4 *)(param_1 + 0x8c);
  _swift_beginAccess(puVar3,auStack_3c8,1,0);
  *puVar3 = uVar1;
  return;
}

