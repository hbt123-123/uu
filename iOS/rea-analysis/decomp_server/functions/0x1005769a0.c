// rea decompile_all
// name: FUN_1005769a0
// address: 0x1005769a0
// body: available
// range: 0x1005769a0-0x100576bcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100576bc8 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005769a0(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
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
  undefined8 uVar21;
  
  pvVar4 = (void *)*param_1;
  puVar1 = (undefined8 *)((long)pvVar4 + 0xd8);
  lVar5 = *(long *)((long)pvVar4 + 0x198);
  if ((param_2 & 1) == 0) {
    uVar9 = *(undefined8 *)((long)pvVar4 + 0x60);
    uVar8 = *(undefined8 *)((long)pvVar4 + 0x58);
    uVar13 = *(undefined8 *)((long)pvVar4 + 0x70);
    uVar10 = *(undefined8 *)((long)pvVar4 + 0x68);
    uVar17 = *(undefined8 *)((long)pvVar4 + 0x80);
    uVar16 = *(undefined8 *)((long)pvVar4 + 0x78);
    uVar3 = *(undefined8 *)((long)pvVar4 + 0x88);
    uVar14 = *(undefined8 *)((long)pvVar4 + 0x50);
    uVar12 = *(undefined8 *)((long)pvVar4 + 0x48);
    uVar2 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar5 = lVar6;
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)((long)pvVar4 + 0x198);
      FUN_1005a7a70(0);
      _swift_allocObject();
      FUN_1005a7a90();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x50,puVar1,1,0);
    uVar11 = *(undefined8 *)(lVar5 + 0x50);
    *(undefined8 *)((long)pvVar4 + 0x98) = *(undefined8 *)(lVar5 + 0x58);
    *(undefined8 *)((long)pvVar4 + 0x90) = uVar11;
    uVar15 = *(undefined8 *)(lVar5 + 0x68);
    uVar11 = *(undefined8 *)(lVar5 + 0x60);
    uVar19 = *(undefined8 *)(lVar5 + 0x78);
    uVar18 = *(undefined8 *)(lVar5 + 0x70);
    uVar21 = *(undefined8 *)(lVar5 + 0x88);
    uVar20 = *(undefined8 *)(lVar5 + 0x80);
    *(undefined8 *)((long)pvVar4 + 0xd0) = *(undefined8 *)(lVar5 + 0x90);
    *(undefined8 *)((long)pvVar4 + 0xb8) = uVar19;
    *(undefined8 *)((long)pvVar4 + 0xb0) = uVar18;
    *(undefined8 *)((long)pvVar4 + 200) = uVar21;
    *(undefined8 *)((long)pvVar4 + 0xc0) = uVar20;
    *(undefined8 *)((long)pvVar4 + 0xa8) = uVar15;
    *(undefined8 *)((long)pvVar4 + 0xa0) = uVar11;
    *(undefined8 *)(lVar5 + 0x78) = uVar13;
    *(undefined8 *)(lVar5 + 0x70) = uVar10;
    *(undefined8 *)(lVar5 + 0x88) = uVar17;
    *(undefined8 *)(lVar5 + 0x80) = uVar16;
    *(undefined8 *)(lVar5 + 0x90) = uVar3;
    *(undefined8 *)(lVar5 + 0x58) = uVar14;
    *(undefined8 *)(lVar5 + 0x50) = uVar12;
    *(undefined8 *)(lVar5 + 0x68) = uVar9;
    *(undefined8 *)(lVar5 + 0x60) = uVar8;
    FUN_100040bb4((long)pvVar4 + 0x90,&DAT_100aab4c8,&DAT_100837c38);
  }
  else {
    *(undefined8 *)((long)pvVar4 + 0xb8) = *(undefined8 *)((long)pvVar4 + 0x70);
    *(undefined8 *)((long)pvVar4 + 0xb0) = *(undefined8 *)((long)pvVar4 + 0x68);
    *(undefined8 *)((long)pvVar4 + 200) = *(undefined8 *)((long)pvVar4 + 0x80);
    *(undefined8 *)((long)pvVar4 + 0xc0) = *(undefined8 *)((long)pvVar4 + 0x78);
    *(undefined8 *)((long)pvVar4 + 0xd0) = *(undefined8 *)((long)pvVar4 + 0x88);
    *(undefined8 *)((long)pvVar4 + 0x98) = *(undefined8 *)((long)pvVar4 + 0x50);
    *(undefined8 *)((long)pvVar4 + 0x90) = *(undefined8 *)((long)pvVar4 + 0x48);
    *(undefined8 *)((long)pvVar4 + 0xa8) = *(undefined8 *)((long)pvVar4 + 0x60);
    *(undefined8 *)((long)pvVar4 + 0xa0) = *(undefined8 *)((long)pvVar4 + 0x58);
    FUN_1005a7e94((long)pvVar4 + 0x90,puVar1);
    uVar2 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar5 = lVar6;
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)((long)pvVar4 + 0x198);
      FUN_1005a7a70(0);
      _swift_allocObject();
      FUN_1005a7a90();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    uVar12 = *(undefined8 *)((long)pvVar4 + 0xb8);
    uVar8 = *(undefined8 *)((long)pvVar4 + 0xb0);
    uVar15 = *(undefined8 *)((long)pvVar4 + 200);
    uVar16 = *(undefined8 *)((long)pvVar4 + 0xc0);
    uVar3 = *(undefined8 *)((long)pvVar4 + 0xd0);
    uVar18 = *(undefined8 *)((long)pvVar4 + 0x98);
    uVar17 = *(undefined8 *)((long)pvVar4 + 0x90);
    uVar13 = *(undefined8 *)((long)pvVar4 + 0xa8);
    uVar9 = *(undefined8 *)((long)pvVar4 + 0xa0);
    _swift_beginAccess(lVar5 + 0x50,(long)pvVar4 + 0x180,1,0);
    uVar10 = *(undefined8 *)(lVar5 + 0x50);
    *(undefined8 *)((long)pvVar4 + 0x128) = *(undefined8 *)(lVar5 + 0x58);
    *(undefined8 *)((long)pvVar4 + 0x120) = uVar10;
    uVar14 = *(undefined8 *)(lVar5 + 0x68);
    uVar10 = *(undefined8 *)(lVar5 + 0x60);
    uVar19 = *(undefined8 *)(lVar5 + 0x78);
    uVar11 = *(undefined8 *)(lVar5 + 0x70);
    uVar21 = *(undefined8 *)(lVar5 + 0x88);
    uVar20 = *(undefined8 *)(lVar5 + 0x80);
    *(undefined8 *)((long)pvVar4 + 0x160) = *(undefined8 *)(lVar5 + 0x90);
    *(undefined8 *)((long)pvVar4 + 0x148) = uVar19;
    *(undefined8 *)((long)pvVar4 + 0x140) = uVar11;
    *(undefined8 *)((long)pvVar4 + 0x158) = uVar21;
    *(undefined8 *)((long)pvVar4 + 0x150) = uVar20;
    *(undefined8 *)((long)pvVar4 + 0x138) = uVar14;
    *(undefined8 *)((long)pvVar4 + 0x130) = uVar10;
    *(undefined8 *)(lVar5 + 0x78) = uVar12;
    *(undefined8 *)(lVar5 + 0x70) = uVar8;
    *(undefined8 *)(lVar5 + 0x88) = uVar15;
    *(undefined8 *)(lVar5 + 0x80) = uVar16;
    *(undefined8 *)(lVar5 + 0x90) = uVar3;
    *(undefined8 *)(lVar5 + 0x58) = uVar18;
    *(undefined8 *)(lVar5 + 0x50) = uVar17;
    *(undefined8 *)(lVar5 + 0x68) = uVar13;
    *(undefined8 *)(lVar5 + 0x60) = uVar9;
    FUN_100040bb4((long)pvVar4 + 0x120,&DAT_100aab4c8,&DAT_100837c38);
    *(undefined8 *)((long)pvVar4 + 0x100) = *(undefined8 *)((long)pvVar4 + 0x70);
    *(undefined8 *)((long)pvVar4 + 0xf8) = *(undefined8 *)((long)pvVar4 + 0x68);
    *(undefined8 *)((long)pvVar4 + 0x110) = *(undefined8 *)((long)pvVar4 + 0x80);
    *(undefined8 *)((long)pvVar4 + 0x108) = *(undefined8 *)((long)pvVar4 + 0x78);
    *(undefined8 *)((long)pvVar4 + 0x118) = *(undefined8 *)((long)pvVar4 + 0x88);
    *(undefined8 *)((long)pvVar4 + 0xe0) = *(undefined8 *)((long)pvVar4 + 0x50);
    *puVar1 = *(undefined8 *)((long)pvVar4 + 0x48);
    *(undefined8 *)((long)pvVar4 + 0xf0) = *(undefined8 *)((long)pvVar4 + 0x60);
    *(undefined8 *)((long)pvVar4 + 0xe8) = *(undefined8 *)((long)pvVar4 + 0x58);
    FUN_1005a7ec8(puVar1);
  }
  _free(pvVar4);
  return;
}

