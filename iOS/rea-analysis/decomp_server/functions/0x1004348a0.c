// rea decompile_all
// name: FUN_1004348a0
// address: 0x1004348a0
// body: available
// range: 0x1004348a0-0x100434aab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1004348a0(undefined8 *param_1)

{
  byte bVar1;
  void *pvVar2;
  void *pvVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  long unaff_x20;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  
  pvVar2 = (void *)0x488;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    pvVar2 = _malloc(0x488);
  }
  else {
    _swift_coroFrameAlloc(0x488,0x7713);
  }
  *param_1 = pvVar2;
  *(long *)((long)pvVar2 + 0x458) = unaff_x20;
  lVar17 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar17 + 0x20,(long)pvVar2 + 0x428,0,0);
  uVar8 = *(undefined8 *)(lVar17 + 0x28);
  uVar7 = *(undefined8 *)(lVar17 + 0x20);
  uVar9 = *(undefined8 *)(lVar17 + 0x30);
  *(undefined8 *)((long)pvVar2 + 0xb0) = *(undefined8 *)(lVar17 + 0x38);
  *(undefined8 *)((long)pvVar2 + 0xa8) = uVar9;
  *(undefined8 *)((long)pvVar2 + 0xa0) = uVar8;
  *(undefined8 *)((long)pvVar2 + 0x98) = uVar7;
  uVar8 = *(undefined8 *)(lVar17 + 0x48);
  uVar7 = *(undefined8 *)(lVar17 + 0x40);
  uVar10 = *(undefined8 *)(lVar17 + 0x58);
  uVar9 = *(undefined8 *)(lVar17 + 0x50);
  uVar18 = *(undefined8 *)(lVar17 + 0x68);
  uVar12 = *(undefined8 *)(lVar17 + 0x60);
  uVar19 = *(undefined8 *)(lVar17 + 0x70);
  *(undefined8 *)((long)pvVar2 + 0xf0) = *(undefined8 *)(lVar17 + 0x78);
  *(undefined8 *)((long)pvVar2 + 0xe8) = uVar19;
  *(undefined8 *)((long)pvVar2 + 0xe0) = uVar18;
  *(undefined8 *)((long)pvVar2 + 0xd8) = uVar12;
  *(undefined8 *)((long)pvVar2 + 0xd0) = uVar10;
  *(undefined8 *)((long)pvVar2 + 200) = uVar9;
  *(undefined8 *)((long)pvVar2 + 0xc0) = uVar8;
  *(undefined8 *)((long)pvVar2 + 0xb8) = uVar7;
  uVar8 = *(undefined8 *)(lVar17 + 0x88);
  uVar7 = *(undefined8 *)(lVar17 + 0x80);
  uVar10 = *(undefined8 *)(lVar17 + 0x98);
  uVar9 = *(undefined8 *)(lVar17 + 0x90);
  uVar18 = *(undefined8 *)(lVar17 + 0xa8);
  uVar12 = *(undefined8 *)(lVar17 + 0xa0);
  *(undefined8 *)((long)pvVar2 + 0x128) = *(undefined8 *)(lVar17 + 0xb0);
  *(undefined8 *)((long)pvVar2 + 0x110) = uVar10;
  *(undefined8 *)((long)pvVar2 + 0x108) = uVar9;
  *(undefined8 *)((long)pvVar2 + 0x120) = uVar18;
  *(undefined8 *)((long)pvVar2 + 0x118) = uVar12;
  *(undefined8 *)((long)pvVar2 + 0x100) = uVar8;
  *(undefined8 *)((long)pvVar2 + 0xf8) = uVar7;
  _memmove(pvVar2,(void *)(lVar17 + 0x20),0x98);
  pvVar3 = pvVar2;
  FUN_100438dbc();
  if ((int)pvVar3 == 1) {
    uVar7 = 0;
    uVar8 = 0;
    bVar15 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
    bVar14 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uVar19 = 0xf000000000000000;
    uVar18 = 0;
    uVar21 = 0;
    uVar20 = 0xf000000000000000;
    uVar23 = 0xc000000000000000;
    uVar22 = 0;
    uVar24 = 0;
    uVar25 = 0;
    bVar5 = 1;
    bVar6 = 1;
    bVar4 = 1;
    bVar16 = 1;
    bVar1 = 1;
  }
  else {
    uVar7 = *(undefined8 *)((long)pvVar2 + 0x98);
    uVar8 = *(undefined8 *)((long)pvVar2 + 0xa8);
    uVar9 = *(undefined8 *)((long)pvVar2 + 0xb8);
    uVar10 = *(undefined8 *)((long)pvVar2 + 200);
    uVar11 = *(undefined4 *)((long)pvVar2 + 0xd4);
    uVar12 = *(undefined8 *)((long)pvVar2 + 0xe0);
    uVar13 = *(undefined4 *)((long)pvVar2 + 0xec);
    uVar23 = *(undefined8 *)((long)pvVar2 + 0xf8);
    uVar22 = *(undefined8 *)((long)pvVar2 + 0xf0);
    uVar25 = *(undefined8 *)((long)pvVar2 + 0x108);
    uVar24 = *(undefined8 *)((long)pvVar2 + 0x100);
    uVar21 = *(undefined8 *)((long)pvVar2 + 0x118);
    uVar20 = *(undefined8 *)((long)pvVar2 + 0x110);
    uVar19 = *(undefined8 *)((long)pvVar2 + 0x128);
    uVar18 = *(undefined8 *)((long)pvVar2 + 0x120);
    bVar16 = *(byte *)((long)pvVar2 + 0xe8);
    bVar14 = *(byte *)((long)pvVar2 + 0xd8);
    bVar1 = *(byte *)((long)pvVar2 + 0xd0);
    bVar4 = *(byte *)((long)pvVar2 + 0xc0);
    bVar15 = *(byte *)((long)pvVar2 + 0xb1);
    bVar6 = *(byte *)((long)pvVar2 + 0xb0);
    bVar5 = *(byte *)((long)pvVar2 + 0xa0);
  }
  *(byte *)((long)pvVar2 + 0x460) = bVar5 & 1;
  *(byte *)((long)pvVar2 + 0x468) = bVar6 & 1;
  *(byte *)((long)pvVar2 + 0x470) = bVar4 & 1;
  *(byte *)((long)pvVar2 + 0x478) = bVar1 & 1;
  *(byte *)((long)pvVar2 + 0x480) = bVar16 & 1;
  *(undefined8 *)((long)pvVar2 + 0x130) = uVar7;
  *(undefined1 *)((long)pvVar2 + 0x138) = *(undefined1 *)((long)pvVar2 + 0x460);
  *(undefined8 *)((long)pvVar2 + 0x140) = uVar8;
  *(undefined1 *)((long)pvVar2 + 0x148) = *(undefined1 *)((long)pvVar2 + 0x468);
  *(byte *)((long)pvVar2 + 0x149) = bVar15 & 1;
  *(undefined8 *)((long)pvVar2 + 0x150) = uVar9;
  *(undefined1 *)((long)pvVar2 + 0x158) = *(undefined1 *)((long)pvVar2 + 0x470);
  *(undefined8 *)((long)pvVar2 + 0x160) = uVar10;
  *(undefined1 *)((long)pvVar2 + 0x168) = *(undefined1 *)((long)pvVar2 + 0x478);
  *(undefined4 *)((long)pvVar2 + 0x16c) = uVar11;
  *(byte *)((long)pvVar2 + 0x170) = bVar14 & 1;
  *(undefined8 *)((long)pvVar2 + 0x178) = uVar12;
  *(undefined1 *)((long)pvVar2 + 0x180) = *(undefined1 *)((long)pvVar2 + 0x480);
  *(undefined4 *)((long)pvVar2 + 0x184) = uVar13;
  *(undefined8 *)((long)pvVar2 + 400) = uVar23;
  *(undefined8 *)((long)pvVar2 + 0x188) = uVar22;
  *(undefined8 *)((long)pvVar2 + 0x1a0) = uVar25;
  *(undefined8 *)((long)pvVar2 + 0x198) = uVar24;
  *(undefined8 *)((long)pvVar2 + 0x1b0) = uVar21;
  *(undefined8 *)((long)pvVar2 + 0x1a8) = uVar20;
  *(undefined8 *)((long)pvVar2 + 0x1c0) = uVar19;
  *(undefined8 *)((long)pvVar2 + 0x1b8) = uVar18;
  FUN_10007f314((long)pvVar2 + 0x98,(long)pvVar2 + 0x1c8,&DAT_100a9f378,&DAT_100827760);
  auVar26._8_8_ = (long)pvVar2 + 0x130;
  auVar26._0_8_ = FUN_100434aac;
  return auVar26;
}

