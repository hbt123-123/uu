// rea decompile_all
// name: FUN_1004850b8
// address: 0x1004850b8
// body: available
// range: 0x1004850b8-0x100485237 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1004850b8(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x20;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  
  pvVar1 = (void *)0x3f0;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x3f0);
  }
  else {
    _swift_coroFrameAlloc(0x3f0,0x603e);
  }
  *param_1 = pvVar1;
  *(long *)((long)pvVar1 + 1000) = unaff_x20;
  lVar16 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar16 + 0x60,(long)pvVar1 + 0x3b8,0,0);
  uVar6 = *(undefined8 *)(lVar16 + 0x60);
  *(undefined8 *)((long)pvVar1 + 0x90) = *(undefined8 *)(lVar16 + 0x68);
  *(undefined8 *)((long)pvVar1 + 0x88) = uVar6;
  uVar7 = *(undefined8 *)(lVar16 + 0x78);
  uVar6 = *(undefined8 *)(lVar16 + 0x70);
  uVar9 = *(undefined8 *)(lVar16 + 0x88);
  uVar8 = *(undefined8 *)(lVar16 + 0x80);
  uVar12 = *(undefined8 *)(lVar16 + 0x98);
  uVar11 = *(undefined8 *)(lVar16 + 0x90);
  uVar10 = *(undefined8 *)(lVar16 + 0xa0);
  *(undefined8 *)((long)pvVar1 + 0xd0) = *(undefined8 *)(lVar16 + 0xa8);
  *(undefined8 *)((long)pvVar1 + 200) = uVar10;
  *(undefined8 *)((long)pvVar1 + 0xc0) = uVar12;
  *(undefined8 *)((long)pvVar1 + 0xb8) = uVar11;
  *(undefined8 *)((long)pvVar1 + 0xb0) = uVar9;
  *(undefined8 *)((long)pvVar1 + 0xa8) = uVar8;
  *(undefined8 *)((long)pvVar1 + 0xa0) = uVar7;
  *(undefined8 *)((long)pvVar1 + 0x98) = uVar6;
  uVar7 = *(undefined8 *)(lVar16 + 0xb8);
  uVar6 = *(undefined8 *)(lVar16 + 0xb0);
  uVar9 = *(undefined8 *)(lVar16 + 200);
  uVar8 = *(undefined8 *)(lVar16 + 0xc0);
  uVar12 = *(undefined8 *)(lVar16 + 0xd8);
  uVar11 = *(undefined8 *)(lVar16 + 0xd0);
  *(undefined8 *)((long)pvVar1 + 0x108) = *(undefined8 *)(lVar16 + 0xe0);
  *(undefined8 *)((long)pvVar1 + 0x100) = uVar12;
  *(undefined8 *)((long)pvVar1 + 0xf8) = uVar11;
  *(undefined8 *)((long)pvVar1 + 0xf0) = uVar9;
  *(undefined8 *)((long)pvVar1 + 0xe8) = uVar8;
  *(undefined8 *)((long)pvVar1 + 0xe0) = uVar7;
  *(undefined8 *)((long)pvVar1 + 0xd8) = uVar6;
  _memmove(pvVar1,(void *)(lVar16 + 0x60),0x88);
  pvVar2 = pvVar1;
  FUN_1000ab18c();
  if ((int)pvVar2 == 1) {
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar20 = 0xc000000000000000;
    uVar19 = 0;
    uVar10 = 0xe000000000000000;
    uVar14 = 0xe000000000000000;
    uVar15 = 0xe000000000000000;
    uVar3 = 0xe000000000000000;
    uVar4 = 0xe000000000000000;
    uVar5 = 0xe000000000000000;
    puVar13 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar17 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar18 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    uVar6 = *(undefined8 *)((long)pvVar1 + 0x88);
    uVar10 = *(undefined8 *)((long)pvVar1 + 0x90);
    uVar7 = *(undefined8 *)((long)pvVar1 + 0x98);
    uVar14 = *(undefined8 *)((long)pvVar1 + 0xa0);
    uVar8 = *(undefined8 *)((long)pvVar1 + 0xa8);
    uVar15 = *(undefined8 *)((long)pvVar1 + 0xb0);
    uVar9 = *(undefined8 *)((long)pvVar1 + 0xb8);
    uVar3 = *(undefined8 *)((long)pvVar1 + 0xc0);
    uVar11 = *(undefined8 *)((long)pvVar1 + 200);
    uVar4 = *(undefined8 *)((long)pvVar1 + 0xd0);
    uVar12 = *(undefined8 *)((long)pvVar1 + 0xd8);
    uVar5 = *(undefined8 *)((long)pvVar1 + 0xe0);
    puVar18 = *(undefined **)((long)pvVar1 + 0xf0);
    puVar17 = *(undefined **)((long)pvVar1 + 0xe8);
    puVar13 = *(undefined **)((long)pvVar1 + 0xf8);
    uVar20 = *(undefined8 *)((long)pvVar1 + 0x108);
    uVar19 = *(undefined8 *)((long)pvVar1 + 0x100);
  }
  *(undefined8 *)((long)pvVar1 + 0x110) = uVar6;
  *(undefined8 *)((long)pvVar1 + 0x118) = uVar10;
  *(undefined8 *)((long)pvVar1 + 0x120) = uVar7;
  *(undefined8 *)((long)pvVar1 + 0x128) = uVar14;
  *(undefined8 *)((long)pvVar1 + 0x130) = uVar8;
  *(undefined8 *)((long)pvVar1 + 0x138) = uVar15;
  *(undefined8 *)((long)pvVar1 + 0x140) = uVar9;
  *(undefined8 *)((long)pvVar1 + 0x148) = uVar3;
  *(undefined8 *)((long)pvVar1 + 0x150) = uVar11;
  *(undefined8 *)((long)pvVar1 + 0x158) = uVar4;
  *(undefined8 *)((long)pvVar1 + 0x160) = uVar12;
  *(undefined8 *)((long)pvVar1 + 0x168) = uVar5;
  *(undefined **)((long)pvVar1 + 0x178) = puVar18;
  *(undefined **)((long)pvVar1 + 0x170) = puVar17;
  *(undefined **)((long)pvVar1 + 0x180) = puVar13;
  *(undefined8 *)((long)pvVar1 + 400) = uVar20;
  *(undefined8 *)((long)pvVar1 + 0x188) = uVar19;
  FUN_10007f314((long)pvVar1 + 0x88,(long)pvVar1 + 0x198,&DAT_100aa0bc0,&DAT_10082de08);
  auVar21._8_8_ = (long)pvVar1 + 0x110;
  auVar21._0_8_ = FUN_100485238;
  return auVar21;
}

