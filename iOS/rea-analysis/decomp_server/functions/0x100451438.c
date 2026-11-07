// rea decompile_all
// name: FUN_100451438
// address: 0x100451438
// body: available
// range: 0x100451438-0x1004515a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004515a0 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100451438(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  long lVar2;
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
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  pvVar1 = (void *)*param_1;
  if ((param_2 & 1) == 0) {
    lVar2 = *(long *)((long)pvVar1 + 0x2a0);
    uVar8 = *(undefined8 *)((long)pvVar1 + 0xb8);
    uVar3 = *(undefined8 *)((long)pvVar1 + 0xb0);
    uVar17 = *(undefined8 *)((long)pvVar1 + 200);
    uVar13 = *(undefined8 *)((long)pvVar1 + 0xc0);
    uVar9 = *(undefined8 *)((long)pvVar1 + 0xd8);
    uVar4 = *(undefined8 *)((long)pvVar1 + 0xd0);
    uVar10 = *(undefined8 *)((long)pvVar1 + 0x78);
    uVar6 = *(undefined8 *)((long)pvVar1 + 0x70);
    uVar18 = *(undefined8 *)((long)pvVar1 + 0x88);
    uVar14 = *(undefined8 *)((long)pvVar1 + 0x80);
    uVar19 = *(undefined8 *)((long)pvVar1 + 0x98);
    uVar15 = *(undefined8 *)((long)pvVar1 + 0x90);
    uVar11 = *(undefined8 *)((long)pvVar1 + 0xa8);
    uVar7 = *(undefined8 *)((long)pvVar1 + 0xa0);
    uVar20 = *(undefined8 *)(lVar2 + 0x68);
    uVar16 = *(undefined8 *)(lVar2 + 0x60);
    uVar12 = *(undefined8 *)(lVar2 + 0x78);
    uVar5 = *(undefined8 *)(lVar2 + 0x70);
    uVar21 = *(undefined8 *)(lVar2 + 0x50);
    *(undefined8 *)((long)pvVar1 + 0xe8) = *(undefined8 *)(lVar2 + 0x58);
    *(undefined8 *)((long)pvVar1 + 0xe0) = uVar21;
    *(undefined8 *)((long)pvVar1 + 0xf8) = uVar20;
    *(undefined8 *)((long)pvVar1 + 0xf0) = uVar16;
    *(undefined8 *)((long)pvVar1 + 0x108) = uVar12;
    *(undefined8 *)((long)pvVar1 + 0x100) = uVar5;
    uVar5 = *(undefined8 *)(lVar2 + 0xa0);
    uVar16 = *(undefined8 *)(lVar2 + 0xb8);
    uVar12 = *(undefined8 *)(lVar2 + 0xb0);
    uVar23 = *(undefined8 *)(lVar2 + 0x88);
    uVar22 = *(undefined8 *)(lVar2 + 0x80);
    uVar21 = *(undefined8 *)(lVar2 + 0x98);
    uVar20 = *(undefined8 *)(lVar2 + 0x90);
    *(undefined8 *)((long)pvVar1 + 0x138) = *(undefined8 *)(lVar2 + 0xa8);
    *(undefined8 *)((long)pvVar1 + 0x130) = uVar5;
    *(undefined8 *)((long)pvVar1 + 0x148) = uVar16;
    *(undefined8 *)((long)pvVar1 + 0x140) = uVar12;
    *(undefined8 *)((long)pvVar1 + 0x118) = uVar23;
    *(undefined8 *)((long)pvVar1 + 0x110) = uVar22;
    *(undefined8 *)((long)pvVar1 + 0x128) = uVar21;
    *(undefined8 *)((long)pvVar1 + 0x120) = uVar20;
    FUN_100040bb4((long)pvVar1 + 0xe0,&DAT_100a9ffb0,&DAT_10082b118);
    *(undefined8 *)(lVar2 + 0x98) = uVar8;
    *(undefined8 *)(lVar2 + 0x90) = uVar3;
    *(undefined8 *)(lVar2 + 0xa8) = uVar17;
    *(undefined8 *)(lVar2 + 0xa0) = uVar13;
    *(undefined8 *)(lVar2 + 0xb8) = uVar9;
    *(undefined8 *)(lVar2 + 0xb0) = uVar4;
    *(undefined8 *)(lVar2 + 0x58) = uVar10;
    *(undefined8 *)(lVar2 + 0x50) = uVar6;
    *(undefined8 *)(lVar2 + 0x68) = uVar18;
    *(undefined8 *)(lVar2 + 0x60) = uVar14;
    *(undefined8 *)(lVar2 + 0x78) = uVar19;
    *(undefined8 *)(lVar2 + 0x70) = uVar15;
    *(undefined8 *)(lVar2 + 0x88) = uVar11;
    *(undefined8 *)(lVar2 + 0x80) = uVar7;
  }
  else {
    lVar2 = *(long *)((long)pvVar1 + 0x2a0);
    uVar9 = *(undefined8 *)((long)pvVar1 + 0x78);
    uVar5 = *(undefined8 *)((long)pvVar1 + 0x70);
    uVar6 = *(undefined8 *)((long)pvVar1 + 0x88);
    uVar3 = *(undefined8 *)((long)pvVar1 + 0x80);
    *(undefined8 *)((long)pvVar1 + 0x1c8) = uVar9;
    *(undefined8 *)((long)pvVar1 + 0x1c0) = uVar5;
    *(undefined8 *)((long)pvVar1 + 0x1d8) = uVar6;
    *(undefined8 *)((long)pvVar1 + 0x1d0) = uVar3;
    uVar16 = *(undefined8 *)((long)pvVar1 + 200);
    uVar14 = *(undefined8 *)((long)pvVar1 + 0xc0);
    uVar13 = *(undefined8 *)((long)pvVar1 + 0xd8);
    uVar11 = *(undefined8 *)((long)pvVar1 + 0xd0);
    *(undefined8 *)((long)pvVar1 + 0x218) = uVar16;
    *(undefined8 *)((long)pvVar1 + 0x210) = uVar14;
    *(undefined8 *)((long)pvVar1 + 0x228) = uVar13;
    *(undefined8 *)((long)pvVar1 + 0x220) = uVar11;
    uVar23 = *(undefined8 *)((long)pvVar1 + 0xa8);
    uVar22 = *(undefined8 *)((long)pvVar1 + 0xa0);
    uVar19 = *(undefined8 *)((long)pvVar1 + 0xb8);
    uVar18 = *(undefined8 *)((long)pvVar1 + 0xb0);
    *(undefined8 *)((long)pvVar1 + 0x1f8) = uVar23;
    *(undefined8 *)((long)pvVar1 + 0x1f0) = uVar22;
    *(undefined8 *)((long)pvVar1 + 0x208) = uVar19;
    *(undefined8 *)((long)pvVar1 + 0x200) = uVar18;
    uVar21 = *(undefined8 *)((long)pvVar1 + 0x98);
    uVar20 = *(undefined8 *)((long)pvVar1 + 0x90);
    *(undefined8 *)((long)pvVar1 + 0x1e8) = uVar21;
    *(undefined8 *)((long)pvVar1 + 0x1e0) = uVar20;
    uVar7 = *(undefined8 *)(lVar2 + 0x58);
    uVar4 = *(undefined8 *)(lVar2 + 0x50);
    uVar8 = *(undefined8 *)(lVar2 + 0x60);
    uVar12 = *(undefined8 *)(lVar2 + 0x78);
    uVar10 = *(undefined8 *)(lVar2 + 0x70);
    *(undefined8 *)((long)pvVar1 + 0x168) = *(undefined8 *)(lVar2 + 0x68);
    *(undefined8 *)((long)pvVar1 + 0x160) = uVar8;
    *(undefined8 *)((long)pvVar1 + 0x178) = uVar12;
    *(undefined8 *)((long)pvVar1 + 0x170) = uVar10;
    *(undefined8 *)((long)pvVar1 + 0x158) = uVar7;
    *(undefined8 *)((long)pvVar1 + 0x150) = uVar4;
    uVar7 = *(undefined8 *)(lVar2 + 0x88);
    uVar4 = *(undefined8 *)(lVar2 + 0x80);
    uVar10 = *(undefined8 *)(lVar2 + 0x98);
    uVar8 = *(undefined8 *)(lVar2 + 0x90);
    uVar12 = *(undefined8 *)(lVar2 + 0xa0);
    uVar17 = *(undefined8 *)(lVar2 + 0xb8);
    uVar15 = *(undefined8 *)(lVar2 + 0xb0);
    *(undefined8 *)((long)pvVar1 + 0x1a8) = *(undefined8 *)(lVar2 + 0xa8);
    *(undefined8 *)((long)pvVar1 + 0x1a0) = uVar12;
    *(undefined8 *)((long)pvVar1 + 0x1b8) = uVar17;
    *(undefined8 *)((long)pvVar1 + 0x1b0) = uVar15;
    *(undefined8 *)((long)pvVar1 + 0x188) = uVar7;
    *(undefined8 *)((long)pvVar1 + 0x180) = uVar4;
    *(undefined8 *)((long)pvVar1 + 0x198) = uVar10;
    *(undefined8 *)((long)pvVar1 + 400) = uVar8;
    FUN_10045ebd4((long)pvVar1 + 0x1c0,(long)pvVar1 + 0x230);
    FUN_100040bb4((long)pvVar1 + 0x150,&DAT_100a9ffb0,&DAT_10082b118);
    *(undefined8 *)(lVar2 + 0x98) = uVar19;
    *(undefined8 *)(lVar2 + 0x90) = uVar18;
    *(undefined8 *)(lVar2 + 0xa8) = uVar16;
    *(undefined8 *)(lVar2 + 0xa0) = uVar14;
    *(undefined8 *)(lVar2 + 0xb8) = uVar13;
    *(undefined8 *)(lVar2 + 0xb0) = uVar11;
    *(undefined8 *)(lVar2 + 0x58) = uVar9;
    *(undefined8 *)(lVar2 + 0x50) = uVar5;
    *(undefined8 *)(lVar2 + 0x68) = uVar6;
    *(undefined8 *)(lVar2 + 0x60) = uVar3;
    *(undefined8 *)(lVar2 + 0x78) = uVar21;
    *(undefined8 *)(lVar2 + 0x70) = uVar20;
    *(undefined8 *)(lVar2 + 0x88) = uVar23;
    *(undefined8 *)(lVar2 + 0x80) = uVar22;
    *(undefined8 *)((long)pvVar1 + 0xe8) = *(undefined8 *)((long)pvVar1 + 0x78);
    *(undefined8 *)((long)pvVar1 + 0xe0) = *(undefined8 *)((long)pvVar1 + 0x70);
    *(undefined8 *)((long)pvVar1 + 0xf8) = *(undefined8 *)((long)pvVar1 + 0x88);
    *(undefined8 *)((long)pvVar1 + 0xf0) = *(undefined8 *)((long)pvVar1 + 0x80);
    *(undefined8 *)((long)pvVar1 + 0x138) = *(undefined8 *)((long)pvVar1 + 200);
    *(undefined8 *)((long)pvVar1 + 0x130) = *(undefined8 *)((long)pvVar1 + 0xc0);
    *(undefined8 *)((long)pvVar1 + 0x148) = *(undefined8 *)((long)pvVar1 + 0xd8);
    *(undefined8 *)((long)pvVar1 + 0x140) = *(undefined8 *)((long)pvVar1 + 0xd0);
    *(undefined8 *)((long)pvVar1 + 0x118) = *(undefined8 *)((long)pvVar1 + 0xa8);
    *(undefined8 *)((long)pvVar1 + 0x110) = *(undefined8 *)((long)pvVar1 + 0xa0);
    *(undefined8 *)((long)pvVar1 + 0x128) = *(undefined8 *)((long)pvVar1 + 0xb8);
    *(undefined8 *)((long)pvVar1 + 0x120) = *(undefined8 *)((long)pvVar1 + 0xb0);
    *(undefined8 *)((long)pvVar1 + 0x108) = *(undefined8 *)((long)pvVar1 + 0x98);
    *(undefined8 *)((long)pvVar1 + 0x100) = *(undefined8 *)((long)pvVar1 + 0x90);
    FUN_10045ec08((long)pvVar1 + 0xe0);
  }
  _free(pvVar1);
  return;
}

