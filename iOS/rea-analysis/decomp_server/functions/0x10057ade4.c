// rea decompile_all
// name: FUN_10057ade4
// address: 0x10057ade4
// body: available
// range: 0x10057ade4-0x10057af53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10057ade4(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  
  pvVar1 = (void *)0x3b8;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x3b8);
  }
  else {
    _swift_coroFrameAlloc(0x3b8,0x65f4);
  }
  *param_1 = pvVar1;
  *(long *)((long)pvVar1 + 0x3b0) = unaff_x20;
  lVar9 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar9 + 0x28,(long)pvVar1 + 0x380,0,0);
  uVar10 = *(undefined8 *)(lVar9 + 0x30);
  uVar7 = *(undefined8 *)(lVar9 + 0x28);
  uVar12 = *(undefined8 *)(lVar9 + 0x40);
  uVar11 = *(undefined8 *)(lVar9 + 0x38);
  uVar13 = *(undefined8 *)(lVar9 + 0x48);
  uVar15 = *(undefined8 *)(lVar9 + 0x60);
  uVar14 = *(undefined8 *)(lVar9 + 0x58);
  *(undefined8 *)((long)pvVar1 + 0xa8) = *(undefined8 *)(lVar9 + 0x50);
  *(undefined8 *)((long)pvVar1 + 0xa0) = uVar13;
  *(undefined8 *)((long)pvVar1 + 0xb8) = uVar15;
  *(undefined8 *)((long)pvVar1 + 0xb0) = uVar14;
  *(undefined8 *)((long)pvVar1 + 0x88) = uVar10;
  *(undefined8 *)((long)pvVar1 + 0x80) = uVar7;
  *(undefined8 *)((long)pvVar1 + 0x98) = uVar12;
  *(undefined8 *)((long)pvVar1 + 0x90) = uVar11;
  uVar10 = *(undefined8 *)(lVar9 + 0x70);
  uVar7 = *(undefined8 *)(lVar9 + 0x68);
  uVar12 = *(undefined8 *)(lVar9 + 0x80);
  uVar11 = *(undefined8 *)(lVar9 + 0x78);
  uVar14 = *(undefined8 *)(lVar9 + 0x90);
  uVar13 = *(undefined8 *)(lVar9 + 0x88);
  uVar15 = *(undefined8 *)(lVar9 + 0x91);
  *(undefined8 *)((long)pvVar1 + 0xf1) = *(undefined8 *)(lVar9 + 0x99);
  *(undefined8 *)((long)pvVar1 + 0xe9) = uVar15;
  *(undefined8 *)((long)pvVar1 + 0xd8) = uVar12;
  *(undefined8 *)((long)pvVar1 + 0xd0) = uVar11;
  *(undefined8 *)((long)pvVar1 + 0xe8) = uVar14;
  *(undefined8 *)((long)pvVar1 + 0xe0) = uVar13;
  *(undefined8 *)((long)pvVar1 + 200) = uVar10;
  *(undefined8 *)((long)pvVar1 + 0xc0) = uVar7;
  _memmove(pvVar1,(void *)(lVar9 + 0x28),0x79);
  pvVar2 = pvVar1;
  FUN_100276094();
  if ((int)pvVar2 == 1) {
    uVar3 = 0;
    uVar11 = 0xc000000000000000;
    uVar10 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uVar6 = 2;
    uVar7 = 1;
    uVar8 = 2;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    puVar4 = PTR___swiftEmptyDictionarySingleton_100995ea8;
    puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    puVar5 = *(undefined **)((long)pvVar1 + 0x80);
    uVar11 = *(undefined8 *)((long)pvVar1 + 0x90);
    uVar10 = *(undefined8 *)((long)pvVar1 + 0x88);
    puVar4 = *(undefined **)((long)pvVar1 + 0x98);
    uVar6 = *(undefined1 *)((long)pvVar1 + 0xa0);
    uVar17 = *(undefined8 *)((long)pvVar1 + 0xb0);
    uVar16 = *(undefined8 *)((long)pvVar1 + 0xa8);
    uVar19 = *(undefined8 *)((long)pvVar1 + 0xc0);
    uVar18 = *(undefined8 *)((long)pvVar1 + 0xb8);
    uVar8 = *(undefined1 *)((long)pvVar1 + 200);
    uVar13 = *(undefined8 *)((long)pvVar1 + 0xd8);
    uVar12 = *(undefined8 *)((long)pvVar1 + 0xd0);
    uVar15 = *(undefined8 *)((long)pvVar1 + 0xe8);
    uVar14 = *(undefined8 *)((long)pvVar1 + 0xe0);
    uVar7 = *(undefined8 *)((long)pvVar1 + 0xf0);
    uVar3 = *(undefined1 *)((long)pvVar1 + 0xf8);
  }
  *(undefined **)((long)pvVar1 + 0x100) = puVar5;
  *(undefined8 *)((long)pvVar1 + 0x110) = uVar11;
  *(undefined8 *)((long)pvVar1 + 0x108) = uVar10;
  *(undefined **)((long)pvVar1 + 0x118) = puVar4;
  *(undefined1 *)((long)pvVar1 + 0x120) = uVar6;
  *(undefined8 *)((long)pvVar1 + 0x130) = uVar17;
  *(undefined8 *)((long)pvVar1 + 0x128) = uVar16;
  *(undefined8 *)((long)pvVar1 + 0x140) = uVar19;
  *(undefined8 *)((long)pvVar1 + 0x138) = uVar18;
  *(undefined1 *)((long)pvVar1 + 0x148) = uVar8;
  *(undefined8 *)((long)pvVar1 + 0x158) = uVar13;
  *(undefined8 *)((long)pvVar1 + 0x150) = uVar12;
  *(undefined8 *)((long)pvVar1 + 0x168) = uVar15;
  *(undefined8 *)((long)pvVar1 + 0x160) = uVar14;
  *(undefined8 *)((long)pvVar1 + 0x170) = uVar7;
  *(undefined1 *)((long)pvVar1 + 0x178) = uVar3;
  FUN_10007f314((long)pvVar1 + 0x80,(long)pvVar1 + 0x180,&DAT_100aab4b0,&DAT_100837c20);
  auVar20._8_8_ = (long)pvVar1 + 0x100;
  auVar20._0_8_ = FUN_10057af54;
  return auVar20;
}

