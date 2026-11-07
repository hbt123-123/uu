// rea decompile_all
// name: FUN_100653350
// address: 0x100653350
// body: available
// range: 0x100653350-0x1006537f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006537b4 to 0x100644614 FUN_100644614 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100653350(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  bool bVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong *unaff_x20;
  undefined *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  
  if (param_1 == 0) {
    _swift_bridgeObjectRelease(unaff_x20[3]);
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    *(undefined1 *)(unaff_x20 + 2) = 0;
    unaff_x20[3] = (ulong)PTR___swiftEmptyArrayStorage_100995ea0;
    return;
  }
  if (param_1 == 1) {
    return;
  }
  uVar23 = *unaff_x20;
  uVar20 = unaff_x20[1];
  if ((char)unaff_x20[2] == '\0') {
    if (uVar20 == 0) {
      uVar18 = (ulong)(uVar23 != 0);
      goto joined_r0x00010065378c;
    }
    uVar18 = 2;
  }
  else {
    if ((char)unaff_x20[2] == '\x01') {
      uVar18 = uVar20 - uVar23;
      if (SBORROW8(uVar20,uVar23)) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1006537f8);
        (*pcVar12)();
      }
      if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1006537f4);
        (*pcVar12)();
      }
    }
    else {
      uVar18 = *(ulong *)(unaff_x20[3] + 0x10);
    }
joined_r0x00010065378c:
    if (uVar18 == 0) {
      uVar23 = 0;
      goto LAB_100653794;
    }
  }
  uVar14 = 0;
  uVar20 = 0;
  do {
    uVar1 = uVar14 + 1;
    uVar16 = *unaff_x20;
    uVar22 = unaff_x20[1];
    if ((char)unaff_x20[2] == '\0') {
      if (uVar14 == 1) {
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar22;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = param_1;
        uVar23 = SUB168(auVar7 * auVar11,8);
        *(undefined1 *)(unaff_x20 + 2) = 0;
        bVar13 = CARRY8(uVar22 * param_1,uVar20);
        unaff_x20[1] = uVar22 * param_1 + uVar20;
joined_r0x000100653678:
        if (bVar13) goto LAB_100653410;
      }
      else {
        if (uVar14 != 0) goto LAB_100653560;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar16;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = param_1;
        uVar23 = SUB168(auVar5 * auVar9,8);
        *(undefined1 *)(unaff_x20 + 2) = 0;
        bVar13 = CARRY8(uVar16 * param_1,uVar20);
        *unaff_x20 = uVar16 * param_1 + uVar20;
joined_r0x00010065353c:
        if (bVar13) goto LAB_100653410;
      }
    }
    else {
      puVar21 = (undefined *)unaff_x20[3];
      if ((char)unaff_x20[2] == '\x01') {
        uVar23 = uVar22 - uVar16;
        if (SBORROW8(uVar22,uVar16)) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1006537bc);
          (*pcVar12)();
        }
        if ((long)uVar14 < (long)uVar23) {
          uVar19 = uVar16 + uVar14;
          if (SCARRY8(uVar16,uVar14)) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x1006537d0);
            (*pcVar12)();
          }
          if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x1006537d4);
            (*pcVar12)();
          }
          if (*(ulong *)(puVar21 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x1006537d8);
            (*pcVar12)();
          }
          uVar24 = *(ulong *)(puVar21 + uVar19 * 8 + 0x20);
          uVar19 = uVar24 * param_1;
          bVar13 = CARRY8(uVar19,uVar20);
          lVar2 = uVar19 + uVar20;
          *unaff_x20 = 0;
          unaff_x20[1] = 0;
          *(undefined1 *)(unaff_x20 + 2) = 2;
          if ((long)uVar22 < (long)uVar16) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x1006537dc);
            (*pcVar12)();
          }
          if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x1006537e0);
            (*pcVar12)();
          }
          uVar20 = *(ulong *)(puVar21 + 0x10);
          if ((uVar20 < uVar16) || ((long)uVar20 < (long)uVar22)) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x1006537e4);
            (*pcVar12)();
          }
          puVar15 = puVar21;
          if (uVar20 != uVar23) {
            puVar15 = PTR___swiftEmptyArrayStorage_100995ea0;
            if (uVar22 != uVar16) {
              if (0 < (long)uVar23) {
                puVar15 = &DAT_100ab7e10;
                FUN_100004bb4(&DAT_100ab7e10,&DAT_100848cb8);
                _swift_allocObject();
                puVar17 = puVar15;
                _malloc_size();
                puVar3 = puVar17 + -0x19;
                if (0x1f < (long)puVar17) {
                  puVar3 = puVar17 + -0x20;
                }
                *(ulong *)(puVar15 + 0x10) = uVar23;
                *(long *)(puVar15 + 0x18) = ((long)puVar3 >> 3) << 1;
              }
              _memcpy(puVar15 + 0x20,puVar21 + uVar16 * 8 + 0x20,uVar23 * 8);
            }
            _swift_bridgeObjectRelease(puVar21);
          }
          if (*(long *)(puVar15 + 0x10) <= (long)uVar14) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x1006537e8);
            (*pcVar12)();
          }
          puVar21 = puVar15;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar21 & 1) == 0) {
            FUN_1006541a4();
          }
          if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x1006537ec);
            (*pcVar12)();
          }
          uVar20 = *(ulong *)(puVar15 + 0x10);
          if (uVar20 <= uVar14) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x1006537f0);
            (*pcVar12)();
          }
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar24;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = param_1;
          uVar23 = SUB168(auVar4 * auVar8,8);
          *(long *)(puVar15 + uVar14 * 8 + 0x20) = lVar2;
          unaff_x20[3] = (ulong)puVar15;
          if ((lVar2 == 0) && (uVar14 == uVar20 - 1)) {
            FUN_100645d2c();
            goto joined_r0x000100653678;
          }
        }
        else {
LAB_100653560:
          bVar13 = false;
          uVar23 = 0;
joined_r0x00010065364c:
          if (uVar20 != 0) {
            FUN_100646ccc(uVar1);
            lVar2 = uVar14 - *(long *)(unaff_x20[3] + 0x10);
            if ((long)uVar14 < *(long *)(unaff_x20[3] + 0x10)) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x1006537c0);
              (*pcVar12)();
            }
            if (lVar2 < 0) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x1006537c4);
              (*pcVar12)();
            }
            FUN_10062872c(lVar2,0);
            uVar22 = unaff_x20[3];
            uVar14 = uVar22;
            _swift_isUniquelyReferenced_nonNull_native();
            uVar16 = uVar22;
            if ((uVar14 & 1) == 0) {
              uVar16 = 0;
              FUN_10062958c(0,*(long *)(uVar22 + 0x10) + 1,1,uVar22);
            }
            uVar14 = *(ulong *)(uVar16 + 0x10);
            uVar22 = uVar16;
            if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar14) {
              uVar22 = (ulong)(1 < *(ulong *)(uVar16 + 0x18));
              FUN_10062958c(uVar22,uVar14 + 1,1,uVar16);
            }
            *(ulong *)(uVar22 + 0x10) = uVar14 + 1;
            *(ulong *)(uVar22 + uVar14 * 8 + 0x20) = uVar20;
            unaff_x20[3] = uVar22;
            if (bVar13) goto LAB_100653410;
            goto LAB_100653414;
          }
        }
      }
      else {
        if ((long)uVar14 < (long)*(ulong *)(puVar21 + 0x10)) {
          if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x1006537c8);
            (*pcVar12)();
          }
          uVar16 = *(ulong *)(puVar21 + uVar14 * 8 + 0x20);
        }
        else {
          uVar16 = 0;
        }
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar16;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = param_1;
        uVar23 = SUB168(auVar6 * auVar10,8);
        bVar13 = CARRY8(uVar16 * param_1,uVar20);
        uVar20 = uVar16 * param_1 + uVar20;
        if (*(ulong *)(puVar21 + 0x10) <= uVar14) goto joined_r0x00010065364c;
        puVar15 = puVar21;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar15 & 1) == 0) {
          FUN_1006541a4();
        }
        uVar16 = *(ulong *)(puVar21 + 0x10);
        if (uVar16 <= uVar14) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1006537cc);
          (*pcVar12)();
        }
        *(ulong *)(puVar21 + uVar14 * 8 + 0x20) = uVar20;
        unaff_x20[3] = (ulong)puVar21;
        if ((uVar20 == 0) && (uVar14 == uVar16 - 1)) {
          FUN_100645d2c();
          goto joined_r0x00010065353c;
        }
      }
      if (bVar13) {
LAB_100653410:
        uVar23 = uVar23 + 1;
      }
    }
LAB_100653414:
    uVar14 = uVar1;
    uVar20 = uVar23;
  } while (uVar18 != uVar1);
LAB_100653794:
  FUN_100644614(uVar23);
  return;
}

