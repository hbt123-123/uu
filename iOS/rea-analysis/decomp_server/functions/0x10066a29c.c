// rea decompile_all
// name: FUN_10066a29c
// address: 0x10066a29c
// body: available
// range: 0x10066a29c-0x10066a583 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10066a29c(void)

{
  long lVar1;
  size_t sVar2;
  char cVar3;
  uint uVar4;
  size_t sVar5;
  code *pcVar6;
  bool bVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  size_t sVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar18;
  long *unaff_x20;
  long unaff_x21;
  size_t sVar19;
  long lVar20;
  long *plVar17;
  
  puVar14 = (undefined *)unaff_x20[4];
  cVar3 = puVar14[0x18];
  uVar15 = (ulong)cVar3;
  uVar4 = (uint)(int)cVar3 >> 6 & 3;
  if (uVar4 == 0) {
    puVar8 = &DAT_10084c350;
LAB_10066a308:
    plVar17 = (long *)(puVar8 + uVar15 * 8);
  }
  else {
    if (uVar4 != 1) {
      uVar15 = uVar15 ^ 0x1fffffffffffff80;
      puVar8 = &DAT_10084c2f0;
      goto LAB_10066a308;
    }
    uVar4 = (int)cVar3 & 0x3f;
    if (6 < uVar4) {
      lVar16 = 0x40;
      goto LAB_10066a310;
    }
    plVar17 = (long *)(&DAT_10084c318 + (ulong)uVar4 * 8);
  }
  lVar16 = *plVar17;
LAB_10066a310:
  lVar20 = unaff_x20[2];
  uVar15 = lVar20 * lVar16 >> 0x3f;
  if (SUB168(SEXT816(lVar20) * SEXT816(lVar16),8) != uVar15) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10066a568);
    (*pcVar6)();
  }
  puVar8 = (undefined *)0x0;
  FUN_1006295a0(0,lVar20 * lVar16 & (uVar15 ^ 0xffffffffffffffff),0,
                PTR___swiftEmptyArrayStorage_100995ea0);
  if (0 < lVar20) {
    lVar1 = *unaff_x20;
    sVar2 = unaff_x20[1];
    lVar16 = 1;
    while( true ) {
      lVar9 = lVar1;
      sVar12 = sVar2;
      puVar13 = puVar14;
      FUN_10066a598(lVar1,lVar16);
      if (unaff_x21 != 0) {
        _swift_bridgeObjectRelease(puVar8);
        return puVar8;
      }
      if (lVar9 != 0) {
        sVar19 = *(size_t *)(lVar9 + 0x10);
        uVar18 = *(ulong *)(puVar8 + 0x10);
        uVar15 = uVar18 + sVar19;
        if (SCARRY8(uVar18,sVar19)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10066a558);
          (*pcVar6)();
        }
        puVar10 = puVar8;
        sVar5 = sVar19;
        if ((long)(*(ulong *)(puVar8 + 0x18) >> 1) < (long)uVar15) {
          if (uVar18 <= uVar15) {
            uVar18 = uVar15;
          }
          puVar10 = (undefined *)0x1;
          sVar12 = 1;
          FUN_1006295a0(1,uVar18);
          uVar18 = *(ulong *)(puVar10 + 0x10);
          puVar13 = puVar8;
          sVar5 = *(size_t *)(lVar9 + 0x10);
        }
        puVar8 = puVar10;
        if (sVar5 == 0) {
          _swift_bridgeObjectRelease();
          if (sVar19 != 0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10066a55c);
            (*pcVar6)();
          }
        }
        else {
          if ((long)((*(ulong *)(puVar8 + 0x18) >> 1) - uVar18) < (long)sVar19) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10066a560);
            (*pcVar6)();
          }
          sVar12 = sVar19;
          _memcpy(puVar8 + uVar18 + 0x20,(void *)(lVar9 + 0x20),sVar19);
          _swift_bridgeObjectRelease(lVar9);
          if (sVar19 != 0) {
            if (SCARRY8(*(long *)(puVar8 + 0x10),sVar19)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10066a564);
              (*pcVar6)();
            }
            *(size_t *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + sVar19;
          }
        }
      }
      if (lVar20 == lVar16) break;
      bVar7 = SCARRY8(lVar16,1);
      lVar16 = lVar16 + 1;
      if (bVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10066a45c);
        (*pcVar6)();
      }
    }
    puVar14 = (undefined *)unaff_x20[3];
    thunk_FUN_1006337a8(puVar14,puVar8);
    if (((ulong)puVar13 & 1) != 0) {
      uVar11 = 0;
      __ss28__ContiguousArrayStorageBaseCMa(0);
      puVar8 = puVar14;
      _swift_unknownObjectRetain_n(puVar14,2);
      _swift_dynamicCastClass();
      if (puVar8 == (undefined *)0x0) {
        _swift_unknownObjectRelease(puVar14);
        puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      lVar16 = *(long *)(puVar8 + 0x10);
      _swift_release();
      if (SBORROW8((ulong)puVar13 >> 1,sVar12)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10066a570);
        (*pcVar6)();
      }
      if (lVar16 == ((ulong)puVar13 >> 1) - sVar12) {
        puVar8 = puVar14;
        _swift_dynamicCastClass(puVar14,uVar11);
        _swift_unknownObjectRelease(puVar14);
        if (puVar8 != (undefined *)0x0) {
          return puVar8;
        }
        _swift_unknownObjectRelease(puVar14);
        return PTR___swiftEmptyArrayStorage_100995ea0;
      }
      _swift_unknownObjectRelease();
    }
    puVar8 = puVar14;
    thunk_FUN_100629d98(puVar14);
    _swift_unknownObjectRelease(puVar14);
    return puVar8;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10066a56c);
  (*pcVar6)();
}

