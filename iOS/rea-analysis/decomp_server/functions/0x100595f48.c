// rea decompile_all
// name: FUN_100595f48
// address: 0x100595f48
// body: available
// range: 0x100595f48-0x100596383 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100595f48(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined2 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined2 *puVar19;
  undefined4 *puVar20;
  undefined8 uVar21;
  undefined1 *puVar22;
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
  
  puVar11 = (undefined2 *)(unaff_x20 + 0x10);
  *puVar11 = 0x203;
  puVar22 = (undefined1 *)(unaff_x20 + 0x12);
  *puVar22 = 3;
  puVar19 = (undefined2 *)(unaff_x20 + 0x17);
  *puVar19 = 0x302;
  puVar20 = (undefined4 *)(unaff_x20 + 0x13);
  *puVar20 = 0x2020202;
  puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar16 = (undefined8 *)(unaff_x20 + 0x20);
  *puVar16 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar15 = (undefined8 *)(unaff_x20 + 0x28);
  *puVar15 = puVar7;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  puVar8 = (undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *puVar8 = 0;
  puVar13 = (undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *puVar13 = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 1;
  *(undefined1 *)(unaff_x20 + 0x78) = 0;
  puVar9 = (undefined8 *)(unaff_x20 + 0x80);
  *puVar9 = puVar7;
  _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
  uVar5 = *(undefined1 *)(param_1 + 0x10);
  _swift_beginAccess(puVar11,auStack_98,1,0);
  *(undefined1 *)puVar11 = uVar5;
  _swift_beginAccess(param_1 + 0x11,auStack_b0,0,0);
  uVar5 = *(undefined1 *)(param_1 + 0x11);
  _swift_beginAccess(unaff_x20 + 0x11,auStack_c8,1,0);
  *(undefined1 *)(unaff_x20 + 0x11) = uVar5;
  _swift_beginAccess(param_1 + 0x12,auStack_e0,0,0);
  uVar5 = *(undefined1 *)(param_1 + 0x12);
  _swift_beginAccess(puVar22,auStack_f8,1,0);
  *puVar22 = uVar5;
  _swift_beginAccess(param_1 + 0x13,auStack_110,0,0);
  uVar5 = *(undefined1 *)(param_1 + 0x13);
  _swift_beginAccess(puVar20,auStack_128,1,0);
  *(undefined1 *)puVar20 = uVar5;
  _swift_beginAccess(param_1 + 0x14,auStack_140,0,0);
  uVar5 = *(undefined1 *)(param_1 + 0x14);
  _swift_beginAccess(unaff_x20 + 0x14,auStack_158,1,0);
  *(undefined1 *)(unaff_x20 + 0x14) = uVar5;
  _swift_beginAccess(param_1 + 0x15,auStack_170,0,0);
  uVar5 = *(undefined1 *)(param_1 + 0x15);
  _swift_beginAccess(unaff_x20 + 0x15,auStack_188,1,0);
  *(undefined1 *)(unaff_x20 + 0x15) = uVar5;
  _swift_beginAccess(param_1 + 0x16,auStack_1a0,0,0);
  uVar5 = *(undefined1 *)(param_1 + 0x16);
  _swift_beginAccess(unaff_x20 + 0x16,auStack_1b8,1,0);
  *(undefined1 *)(unaff_x20 + 0x16) = uVar5;
  _swift_beginAccess(param_1 + 0x17,auStack_1d0,0,0);
  uVar5 = *(undefined1 *)(param_1 + 0x17);
  _swift_beginAccess(puVar19,auStack_1e8,1,0);
  *(undefined1 *)puVar19 = uVar5;
  _swift_beginAccess(param_1 + 0x18,auStack_200,0,0);
  uVar5 = *(undefined1 *)(param_1 + 0x18);
  _swift_beginAccess(unaff_x20 + 0x18,auStack_218,1,0);
  *(undefined1 *)(unaff_x20 + 0x18) = uVar5;
  _swift_beginAccess(param_1 + 0x20,auStack_230,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  _swift_beginAccess(puVar16,auStack_248,1,0);
  *puVar16 = uVar12;
  _swift_beginAccess(param_1 + 0x28,auStack_260,0,0);
  uVar17 = *(undefined8 *)(param_1 + 0x28);
  _swift_beginAccess(puVar15,auStack_278,1,0);
  *puVar15 = uVar17;
  _swift_bridgeObjectRetain(uVar12);
  _swift_bridgeObjectRetain(uVar17);
  _swift_beginAccess(param_1 + 0x30,auStack_290,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar17 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  _swift_beginAccess(puVar13,auStack_2a8,1,0);
  uVar21 = *puVar13;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x48);
  *puVar13 = uVar12;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar17;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar3;
  FUN_1005a7f54(uVar12,uVar2,uVar17,uVar3);
  FUN_100541944(uVar21,uVar1,uVar4,uVar14);
  _swift_beginAccess(param_1 + 0x50,auStack_2c0,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0x50);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uVar17 = *(undefined8 *)(param_1 + 0x60);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  uVar18 = *(undefined8 *)(param_1 + 0x70);
  uVar5 = *(undefined1 *)(param_1 + 0x78);
  _swift_beginAccess(puVar8,auStack_2d8,1,0);
  uVar10 = *puVar8;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x70);
  *puVar8 = uVar12;
  *(undefined8 *)(unaff_x20 + 0x58) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar17;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x70) = uVar18;
  uVar6 = *(undefined1 *)(unaff_x20 + 0x78);
  *(undefined1 *)(unaff_x20 + 0x78) = uVar5;
  FUN_1005a8504(uVar12,uVar3,uVar17,uVar4,uVar18,uVar5);
  FUN_1005419bc(uVar10,uVar1,uVar14,uVar2,uVar21,uVar6);
  _swift_beginAccess(param_1 + 0x80,auStack_2f0,0,0);
  uVar17 = *(undefined8 *)(param_1 + 0x80);
  _swift_bridgeObjectRetain(uVar17);
  _swift_release(param_1);
  _swift_beginAccess(puVar9,auStack_308,1,0);
  uVar12 = *puVar9;
  *puVar9 = uVar17;
  _swift_bridgeObjectRelease(uVar12);
  return;
}

