// rea decompile_all
// name: FUN_10066790c
// address: 0x10066790c
// body: available
// range: 0x10066790c-0x100667c1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_10066790c(void)

{
  ulong uVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long *unaff_x20;
  long lVar13;
  long unaff_x21;
  long lVar14;
  long lVar15;
  undefined *local_88;
  
  lVar13 = unaff_x20[3];
  bVar2 = *(byte *)(unaff_x20 + 4);
  FUN_100668800(0);
  _swift_initStackObject();
  _swift_bridgeObjectRetain(lVar13);
  FUN_100668564();
  local_88 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (bVar2 >> 6 == 0) {
    plVar9 = (long *)(&DAT_10084bdd0 + (long)(char)bVar2 * 8);
LAB_1006679b8:
    lVar12 = *plVar9;
  }
  else {
    if (bVar2 >> 6 != 1) {
      plVar9 = (long *)(&DAT_10084bd70 + ((long)(char)bVar2 ^ 0x1fffffffffffff80U) * 8);
      goto LAB_1006679b8;
    }
    if (((int)(char)bVar2 & 0x3fU) < 7) {
      plVar9 = (long *)(&DAT_10084bd98 + (ulong)((int)(char)bVar2 & 0x3fU) * 8);
      goto LAB_1006679b8;
    }
    lVar12 = 0x40;
  }
  lVar15 = *unaff_x20;
  uVar1 = lVar15 * lVar12 >> 0x3f;
  if (SUB168(SEXT816(lVar15) * SEXT816(lVar12),8) != uVar1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100667c00);
    (*pcVar3)();
  }
  uVar4 = 0;
  lVar10 = 0;
  puVar11 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1006295a0(0,lVar15 * lVar12 & (uVar1 ^ 0xffffffffffffffff));
  if (lVar15 < 1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100667c04);
    (*pcVar3)();
  }
  lVar14 = unaff_x20[2];
  _swift_bridgeObjectRetain(lVar14);
  FUN_100628ae0();
  lVar12 = 1;
  while( true ) {
    puVar6 = local_88;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar5 = local_88;
    if (((ulong)puVar6 & 1) == 0) {
      puVar5 = (undefined *)0x0;
      lVar10 = 1;
      FUN_1006295a0(0,*(long *)(local_88 + 0x10) + 1);
      puVar11 = local_88;
    }
    uVar1 = *(ulong *)(puVar5 + 0x10);
    puVar6 = puVar5;
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
      lVar10 = 1;
      FUN_1006295a0(puVar6,uVar1 + 1);
      puVar11 = puVar5;
    }
    *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
    puVar6[uVar1 + 0x20] = (char)lVar12;
    local_88 = puVar6;
    FUN_100667eb0();
    if (unaff_x21 != 0) {
      _swift_release(lVar13);
      _swift_bridgeObjectRelease(puVar6);
      _swift_bridgeObjectRelease(uVar4);
      return unaff_x20;
    }
    _swift_bridgeObjectRelease(puVar6);
    _swift_bridgeObjectRetain(local_88);
    FUN_100628ae0();
    if (lVar15 == lVar12) break;
    lVar12 = lVar12 + 1;
    _swift_bridgeObjectRetain(lVar14);
    FUN_100628ae0();
    if (lVar12 == 0x100) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100667bfc);
      (*pcVar3)();
    }
  }
  _swift_bridgeObjectRelease(local_88);
  plVar7 = (long *)unaff_x20[1];
  thunk_FUN_1006337a8(plVar7,uVar4);
  plVar9 = plVar7;
  if (((ulong)puVar11 & 1) != 0) {
    uVar4 = 0;
    __ss28__ContiguousArrayStorageBaseCMa(0);
    plVar8 = plVar7;
    _swift_unknownObjectRetain_n(plVar7,2);
    _swift_dynamicCastClass();
    if (plVar8 == (long *)0x0) {
      _swift_unknownObjectRelease(plVar7);
      plVar8 = (long *)PTR___swiftEmptyArrayStorage_100995ea0;
    }
    lVar12 = plVar8[2];
    _swift_release();
    if (SBORROW8((ulong)puVar11 >> 1,lVar10)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100667c08);
      (*pcVar3)();
    }
    if (lVar12 == ((ulong)puVar11 >> 1) - lVar10) {
      _swift_dynamicCastClass(plVar7,uVar4);
      if (plVar9 == (long *)0x0) {
        _swift_release(lVar13);
        _swift_unknownObjectRelease_n(plVar7,2);
        return (long *)PTR___swiftEmptyArrayStorage_100995ea0;
      }
      goto LAB_100667b94;
    }
    _swift_unknownObjectRelease();
  }
  thunk_FUN_100629d98(plVar7);
LAB_100667b94:
  _swift_unknownObjectRelease(plVar7);
  _swift_release(lVar13);
  return plVar9;
}

