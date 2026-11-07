// rea decompile_all
// name: FUN_100436298
// address: 0x100436298
// body: available
// range: 0x100436298-0x100436447 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100436444 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100436298(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
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
  
  pvVar5 = (void *)*param_1;
  lVar6 = *(long *)((long)pvVar5 + 0x170);
  if ((param_2 & 1) == 0) {
    uVar9 = *(undefined8 *)((long)pvVar5 + 0x48);
    uVar3 = *(undefined8 *)((long)pvVar5 + 0x40);
    uVar14 = *(undefined8 *)((long)pvVar5 + 0x58);
    uVar11 = *(undefined8 *)((long)pvVar5 + 0x50);
    uVar10 = *(undefined8 *)((long)pvVar5 + 0x68);
    uVar8 = *(undefined8 *)((long)pvVar5 + 0x60);
    uVar15 = *(undefined8 *)((long)pvVar5 + 0x78);
    uVar12 = *(undefined8 *)((long)pvVar5 + 0x70);
    uVar2 = *(ulong *)(lVar6 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)((long)pvVar5 + 0x170);
      uVar4 = 0;
      FUN_1004341f8(0);
      _swift_allocObject();
      FUN_10043886c(lVar6,uVar4);
      *(long *)(lVar7 + 0x10) = lVar6;
    }
    puVar1 = (undefined8 *)(lVar6 + 0x118);
    _swift_beginAccess(puVar1,(long)pvVar5 + 0xc0,1,0);
    uVar13 = *(undefined8 *)(lVar6 + 0x120);
    uVar4 = *puVar1;
    uVar17 = *(undefined8 *)(lVar6 + 0x130);
    uVar16 = *(undefined8 *)(lVar6 + 0x128);
    uVar18 = *(undefined8 *)(lVar6 + 0x138);
    uVar20 = *(undefined8 *)(lVar6 + 0x150);
    uVar19 = *(undefined8 *)(lVar6 + 0x148);
    *(undefined8 *)((long)pvVar5 + 0xa8) = *(undefined8 *)(lVar6 + 0x140);
    *(undefined8 *)((long)pvVar5 + 0xa0) = uVar18;
    *(undefined8 *)((long)pvVar5 + 0xb8) = uVar20;
    *(undefined8 *)((long)pvVar5 + 0xb0) = uVar19;
    *(undefined8 *)((long)pvVar5 + 0x88) = uVar13;
    *(undefined8 *)((long)pvVar5 + 0x80) = uVar4;
    *(undefined8 *)((long)pvVar5 + 0x98) = uVar17;
    *(undefined8 *)((long)pvVar5 + 0x90) = uVar16;
    *(undefined8 *)(lVar6 + 0x120) = uVar9;
    *puVar1 = uVar3;
    *(undefined8 *)(lVar6 + 0x130) = uVar14;
    *(undefined8 *)(lVar6 + 0x128) = uVar11;
    *(undefined8 *)(lVar6 + 0x140) = uVar10;
    *(undefined8 *)(lVar6 + 0x138) = uVar8;
    *(undefined8 *)(lVar6 + 0x150) = uVar15;
    *(undefined8 *)(lVar6 + 0x148) = uVar12;
    FUN_100040bb4((long)pvVar5 + 0x80,&DAT_100a9f380,&DAT_10082d5a0);
  }
  else {
    *(undefined8 *)((long)pvVar5 + 0x88) = *(undefined8 *)((long)pvVar5 + 0x48);
    *(undefined8 *)((long)pvVar5 + 0x80) = *(undefined8 *)((long)pvVar5 + 0x40);
    *(undefined8 *)((long)pvVar5 + 0x98) = *(undefined8 *)((long)pvVar5 + 0x58);
    *(undefined8 *)((long)pvVar5 + 0x90) = *(undefined8 *)((long)pvVar5 + 0x50);
    *(undefined8 *)((long)pvVar5 + 0xa8) = *(undefined8 *)((long)pvVar5 + 0x68);
    *(undefined8 *)((long)pvVar5 + 0xa0) = *(undefined8 *)((long)pvVar5 + 0x60);
    *(undefined8 *)((long)pvVar5 + 0xb8) = *(undefined8 *)((long)pvVar5 + 0x78);
    *(undefined8 *)((long)pvVar5 + 0xb0) = *(undefined8 *)((long)pvVar5 + 0x70);
    FUN_100438e60((long)pvVar5 + 0x80,(long)pvVar5 + 0xc0);
    uVar2 = *(ulong *)(lVar6 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)((long)pvVar5 + 0x170);
      uVar3 = 0;
      FUN_1004341f8(0);
      _swift_allocObject();
      FUN_10043886c(lVar6,uVar3);
      *(long *)(lVar7 + 0x10) = lVar6;
    }
    uVar10 = *(undefined8 *)((long)pvVar5 + 0x88);
    uVar3 = *(undefined8 *)((long)pvVar5 + 0x80);
    uVar13 = *(undefined8 *)((long)pvVar5 + 0x98);
    uVar14 = *(undefined8 *)((long)pvVar5 + 0x90);
    uVar11 = *(undefined8 *)((long)pvVar5 + 0xa8);
    uVar8 = *(undefined8 *)((long)pvVar5 + 0xa0);
    uVar16 = *(undefined8 *)((long)pvVar5 + 0xb8);
    uVar15 = *(undefined8 *)((long)pvVar5 + 0xb0);
    puVar1 = (undefined8 *)(lVar6 + 0x118);
    _swift_beginAccess(puVar1,(long)pvVar5 + 0x158,1,0);
    uVar12 = *(undefined8 *)(lVar6 + 0x120);
    uVar9 = *puVar1;
    uVar17 = *(undefined8 *)(lVar6 + 0x130);
    uVar4 = *(undefined8 *)(lVar6 + 0x128);
    uVar18 = *(undefined8 *)(lVar6 + 0x138);
    uVar20 = *(undefined8 *)(lVar6 + 0x150);
    uVar19 = *(undefined8 *)(lVar6 + 0x148);
    *(undefined8 *)((long)pvVar5 + 0x128) = *(undefined8 *)(lVar6 + 0x140);
    *(undefined8 *)((long)pvVar5 + 0x120) = uVar18;
    *(undefined8 *)((long)pvVar5 + 0x138) = uVar20;
    *(undefined8 *)((long)pvVar5 + 0x130) = uVar19;
    *(undefined8 *)((long)pvVar5 + 0x108) = uVar12;
    *(undefined8 *)((long)pvVar5 + 0x100) = uVar9;
    *(undefined8 *)((long)pvVar5 + 0x118) = uVar17;
    *(undefined8 *)((long)pvVar5 + 0x110) = uVar4;
    *(undefined8 *)(lVar6 + 0x120) = uVar10;
    *puVar1 = uVar3;
    *(undefined8 *)(lVar6 + 0x130) = uVar13;
    *(undefined8 *)(lVar6 + 0x128) = uVar14;
    *(undefined8 *)(lVar6 + 0x140) = uVar11;
    *(undefined8 *)(lVar6 + 0x138) = uVar8;
    *(undefined8 *)(lVar6 + 0x150) = uVar16;
    *(undefined8 *)(lVar6 + 0x148) = uVar15;
    FUN_100040bb4((long)pvVar5 + 0x100,&DAT_100a9f380,&DAT_10082d5a0);
    *(undefined8 *)((long)pvVar5 + 200) = *(undefined8 *)((long)pvVar5 + 0x48);
    *(undefined8 *)((long)pvVar5 + 0xc0) = *(undefined8 *)((long)pvVar5 + 0x40);
    *(undefined8 *)((long)pvVar5 + 0xd8) = *(undefined8 *)((long)pvVar5 + 0x58);
    *(undefined8 *)((long)pvVar5 + 0xd0) = *(undefined8 *)((long)pvVar5 + 0x50);
    *(undefined8 *)((long)pvVar5 + 0xe8) = *(undefined8 *)((long)pvVar5 + 0x68);
    *(undefined8 *)((long)pvVar5 + 0xe0) = *(undefined8 *)((long)pvVar5 + 0x60);
    *(undefined8 *)((long)pvVar5 + 0xf8) = *(undefined8 *)((long)pvVar5 + 0x78);
    *(undefined8 *)((long)pvVar5 + 0xf0) = *(undefined8 *)((long)pvVar5 + 0x70);
    FUN_100438e9c((long)pvVar5 + 0xc0);
  }
  _free(pvVar5);
  return;
}

