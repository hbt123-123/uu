// rea decompile_all
// name: FUN_1005d7564
// address: 0x1005d7564
// body: available
// range: 0x1005d7564-0x1005d7857 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1005d7564(long param_1,undefined *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long extraout_x8;
  ulong *puVar13;
  long unaff_x20;
  ulong uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined1 auStack_a0 [8];
  long local_98;
  
  lVar6 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar12 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar16 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar17 = *(long *)(param_1 + 0x10);
  if (lVar17 == 0) {
    _swift_bridgeObjectRelease(param_1);
    puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    FUN_1005d91b0(0,lVar17,0);
    puVar18 = (undefined8 *)(param_1 + 0x28);
    local_98 = param_1;
    do {
      uVar3 = *puVar18;
      uVar7 = uVar3;
      _swift_bridgeObjectRetain(uVar3);
      __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(puVar16);
      FUN_1005d91cc();
      puVar8 = puVar16;
      puVar11 = PTR___sSSN_1009957f8;
      __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
                (puVar16,PTR___sSSN_1009957f8,uVar7);
      (**(code **)(lVar12 + 8))(puVar16,lVar6);
      _swift_bridgeObjectRelease(uVar3);
      uVar14 = *(ulong *)(puVar10 + 0x10);
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar14) {
        FUN_1005d91b0(1 < *(ulong *)(puVar10 + 0x18),uVar14 + 1,1);
      }
      *(ulong *)(puVar10 + 0x10) = uVar14 + 1;
      *(undefined1 **)(puVar10 + uVar14 * 0x10 + 0x20) = puVar8;
      *(undefined **)(puVar10 + uVar14 * 0x10 + 0x28) = puVar11;
      puVar18 = puVar18 + 2;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    _swift_bridgeObjectRelease(local_98);
  }
  puVar11 = PTR___swiftEmptyArrayStorage_100995ea0;
  uVar14 = 0;
  uVar15 = *(ulong *)(puVar10 + 0x10);
  do {
    puVar13 = (ulong *)(puVar10 + uVar14 * 0x10 + 0x28);
    do {
      if (uVar15 == uVar14) {
        _swift_bridgeObjectRelease(puVar10);
        if (*(long *)(puVar11 + 0x10) != 0) {
          puVar10 = puVar11;
          FUN_1005d9604();
          _swift_release(puVar11);
          *(undefined **)(unaff_x20 + 0x10) = puVar10;
          puVar10 = &DAT_100aadf70;
          FUN_100004bb4(&DAT_100aadf70,&DAT_10083f470);
          _swift_initStaticObject();
          if (param_2 == (undefined *)0x0) {
            puVar11 = puVar10;
            FUN_1005d9604();
            _swift_arrayDestroy(puVar10 + 0x20,5,PTR___sSSN_1009957f8);
          }
          else {
            _swift_arrayDestroy(puVar10 + 0x20,5,PTR___sSSN_1009957f8);
            puVar11 = param_2;
            FUN_1005d9604();
            _swift_bridgeObjectRelease(param_2);
          }
          *(undefined **)(unaff_x20 + 0x18) = puVar11;
          return unaff_x20;
        }
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1005d7858);
        (*pcVar5)();
      }
      if (*(ulong *)(puVar10 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1005d7854);
        (*pcVar5)();
      }
      uVar14 = uVar14 + 1;
      uVar1 = puVar13[-1];
      uVar4 = *puVar13;
      puVar13 = puVar13 + 2;
      uVar2 = uVar1 & 0xffffffffffff;
      if ((uVar4 & 0x2000000000000000) != 0) {
        uVar2 = uVar4 >> 0x38 & 0xf;
      }
    } while (uVar2 == 0);
    _swift_bridgeObjectRetain(uVar4);
    puVar9 = puVar11;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar9 & 1) == 0) {
      FUN_1005d91b0(0,*(long *)(puVar11 + 0x10) + 1,1);
    }
    uVar2 = *(ulong *)(puVar11 + 0x10);
    if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar2) {
      FUN_1005d91b0(1 < *(ulong *)(puVar11 + 0x18),uVar2 + 1,1);
    }
    *(ulong *)(puVar11 + 0x10) = uVar2 + 1;
    *(ulong *)(puVar11 + uVar2 * 0x10 + 0x20) = uVar1;
    *(ulong *)(puVar11 + uVar2 * 0x10 + 0x28) = uVar4;
  } while( true );
}

