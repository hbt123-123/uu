// rea decompile_all
// name: FUN_100641490
// address: 0x100641490
// body: available
// range: 0x100641490-0x100641843 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001006417b0) */

undefined * FUN_100641490(undefined *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  long lVar14;
  long unaff_x20;
  long unaff_x21;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined *local_88 [3];
  undefined *local_70;
  undefined **local_68;
  
  uVar16 = *(ulong *)(param_1 + 0x10);
  puVar7 = param_1;
  _swift_bridgeObjectRetain();
  _swift_isUniquelyReferenced_nonNull_native();
  puVar6 = param_1;
  if (((ulong)puVar7 & 1) == 0) {
    puVar6 = (undefined *)0x0;
    FUN_1006295a0(0,uVar16 + 1,1,param_1);
  }
  uVar18 = *(ulong *)(puVar6 + 0x10);
  puVar7 = puVar6;
  if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar18) {
    puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
    FUN_1006295a0(puVar7,uVar18 + 1,1,puVar6);
  }
  *(ulong *)(puVar7 + 0x10) = uVar18 + 1;
  puVar7[uVar18 + 0x20] = 0x80;
  uVar16 = uVar16 & 0xf;
  puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (uVar16 != 0xf) {
    puVar19 = (undefined *)(uVar16 ^ 0xf);
    puVar6 = puVar19;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (puVar19,PTR___ss5UInt8VN_100995d40);
    *(undefined **)(puVar6 + 0x10) = puVar19;
    _bzero(puVar6 + 0x20,(size_t)puVar19);
  }
  FUN_100628ae0(puVar6);
  puVar6 = &DAT_100ab7e50;
  FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
  _swift_initStaticObject();
  uVar16 = *(ulong *)(puVar7 + 0x10);
  puVar19 = puVar6;
  if (uVar16 != 0) {
    uVar17 = 0;
    uVar18 = uVar16;
    if (0xf < uVar16) {
      uVar18 = 0x10;
    }
    do {
      if (((long)uVar16 < (long)uVar18) || ((long)uVar16 < (long)uVar17)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1006417f8);
        (*pcVar3)();
      }
      uVar20 = uVar16;
      if ((0xf < uVar16 - uVar18) && (uVar20 = uVar18 + 0x10, SCARRY8(uVar18,0x10))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100641808);
        (*pcVar3)();
      }
      if ((long)uVar20 < (long)uVar18) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1006417fc);
        (*pcVar3)();
      }
      lVar14 = *(long *)(unaff_x20 + 0x10);
      puVar19 = *(undefined **)(lVar14 + 0x18);
      if (puVar19 == (undefined *)0x0) {
        _swift_bridgeObjectRetain(puVar7);
        puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      else {
        puVar5 = puVar19;
        FUN_100630840(puVar19,0);
        if ((long)puVar19 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100641800);
          (*pcVar3)();
        }
        lVar14 = *(long *)(lVar14 + 0x10);
        puVar15 = *(undefined **)(lVar14 + 0x10);
        puVar13 = puVar15;
        if (puVar15 != (undefined *)0x0) {
          puVar9 = (undefined *)0x0;
          puVar8 = puVar5 + 0x20;
          puVar13 = puVar15 + -1;
          if (puVar19 + -1 <= puVar15 + -1) {
            puVar13 = puVar19 + -1;
          }
          puVar13 = puVar13 + 1;
          if ((puVar13 < (undefined *)0x21) || ((ulong)((long)puVar5 - lVar14) < 0x20)) {
            puVar10 = (undefined *)0x1;
          }
          else {
            uVar2 = 0x20;
            if (((ulong)puVar13 & 0x1f) != 0) {
              uVar2 = (ulong)puVar13 & 0x1f;
            }
            puVar9 = puVar13 + -uVar2;
            puVar10 = puVar9 + 1;
            puVar8 = puVar8 + (long)puVar9;
            puVar11 = (undefined8 *)(lVar14 + 0x30);
            puVar12 = (undefined8 *)(puVar5 + 0x30);
            puVar13 = puVar9;
            do {
              uVar21 = puVar11[-2];
              uVar23 = puVar11[1];
              uVar22 = *puVar11;
              puVar12[-1] = puVar11[-1];
              puVar12[-2] = uVar21;
              puVar12[1] = uVar23;
              *puVar12 = uVar22;
              puVar11 = puVar11 + 4;
              puVar12 = puVar12 + 4;
              puVar13 = puVar13 + -0x20;
            } while (puVar13 != (undefined *)0x0);
          }
          do {
            *puVar8 = puVar9[lVar14 + 0x20];
            puVar13 = puVar19;
            if (puVar19 == puVar10) break;
            puVar8 = puVar8 + 1;
            puVar1 = puVar10 + 1;
            puVar9 = puVar10;
            puVar10 = puVar1;
            puVar13 = puVar15;
          } while (puVar15 + 1 != puVar1);
        }
        _swift_bridgeObjectRetain(puVar7);
        if (puVar13 != puVar19) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100641804);
          (*pcVar3)();
        }
      }
      local_70 = &DAT_1009e1d88;
      local_68 = &PTR_PTR_1009e1d00;
      puVar19 = &DAT_1009e35e0;
      _swift_allocObject(&DAT_1009e35e0,0x29,7);
      *(undefined8 *)(puVar19 + 0x10) = 6;
      *(undefined **)(puVar19 + 0x18) = puVar6;
      *(undefined8 *)(puVar19 + 0x20) = 0;
      puVar19[0x28] = 1;
      local_88[0] = puVar19;
      FUN_10062e36c(0);
      _swift_allocObject();
      _swift_bridgeObjectRetain(puVar6);
      FUN_10062c4d8(puVar5,local_88,0);
      if (unaff_x21 != 0) {
        _swift_bridgeObjectRelease(puVar6);
        _swift_bridgeObjectRelease_n(puVar7,2);
        return puVar6;
      }
      puVar19 = puVar7;
      FUN_10062cfd4(puVar7,puVar7 + 0x20,uVar17,uVar18 << 1 | 1);
      _swift_bridgeObjectRelease(puVar7);
      _swift_release(puVar5);
      _swift_bridgeObjectRelease(puVar6);
      bVar4 = uVar16 != uVar18;
      puVar6 = puVar19;
      uVar17 = uVar18;
      uVar18 = uVar20;
    } while (bVar4);
  }
  _swift_bridgeObjectRelease(puVar7);
  return puVar19;
}

