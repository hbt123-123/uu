// rea decompile_all
// name: FUN_1006599cc
// address: 0x1006599cc
// body: available
// range: 0x1006599cc-0x100659e6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006599cc(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *unaff_x20;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined *local_78;
  
  if (param_1 != 0) {
    uVar3 = *unaff_x20;
    uVar11 = unaff_x20[2];
    puVar9 = unaff_x20 + 3;
    uVar10 = *puVar9;
    FUN_10065f798(uVar3,unaff_x20[1],(byte)uVar11,uVar10);
    if (((long)uVar3 >= 1 && param_1 <= uVar3) && ((long)uVar3 < 1 || uVar3 != param_1)) {
      uVar3 = param_1 & 0x3f;
      if (0x3f < param_1) {
        FUN_100647378(param_1 >> 6);
      }
      if (uVar3 != 0) {
        uVar11 = *unaff_x20;
        uVar10 = unaff_x20[1];
        if ((char)unaff_x20[2] == '\0') {
          uVar5 = (ulong)(uVar11 != 0);
          if (uVar10 != 0) {
            uVar5 = 2;
          }
        }
        else if ((char)unaff_x20[2] == '\x01') {
          uVar5 = uVar10 - uVar11;
          if (SBORROW8(uVar10,uVar11)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100659a84);
            (*pcVar2)();
          }
        }
        else {
          uVar5 = *(ulong *)(*puVar9 + 0x10);
        }
        if (SBORROW8(uVar5,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100659e6c);
          (*pcVar2)();
        }
        if (-1 < (long)(uVar5 - 1)) {
          uVar11 = 0;
          lVar15 = uVar5 + 3;
          do {
            uVar13 = lVar15 - 4;
            uVar10 = *unaff_x20;
            uVar5 = unaff_x20[1];
            if ((char)unaff_x20[2] == '\0') {
              if (uVar13 != 1) {
                if (uVar13 == 0) {
                  *unaff_x20 = uVar10 >> uVar3 | uVar11;
                  *(undefined1 *)(unaff_x20 + 2) = 0;
                  return;
                }
                goto LAB_100659c7c;
              }
              unaff_x20[1] = uVar5 >> uVar3 | uVar11;
              *(undefined1 *)(unaff_x20 + 2) = 0;
              uVar14 = uVar5;
            }
            else {
              puVar12 = (undefined *)unaff_x20[3];
              if ((char)unaff_x20[2] == '\x01') {
                uVar1 = uVar5 - uVar10;
                if (SBORROW8(uVar5,uVar10)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100659e38);
                  (*pcVar2)();
                }
                if ((long)uVar13 < (long)uVar1) {
                  uVar14 = uVar10 + uVar13;
                  if (SCARRY8(uVar10,uVar13)) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x100659e4c);
                    (*pcVar2)();
                  }
                  if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x100659e50);
                    (*pcVar2)();
                  }
                  if (*(ulong *)(puVar12 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x100659e54);
                    (*pcVar2)();
                  }
                  uVar14 = *(ulong *)(puVar12 + uVar14 * 8 + 0x20);
                  *unaff_x20 = 0;
                  unaff_x20[1] = 0;
                  *(undefined1 *)(unaff_x20 + 2) = 2;
                  if ((long)uVar5 < (long)uVar10) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x100659e58);
                    (*pcVar2)();
                  }
                  if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x100659e5c);
                    (*pcVar2)();
                  }
                  uVar8 = *(ulong *)(puVar12 + 0x10);
                  if ((uVar8 < uVar10) || ((long)uVar8 < (long)uVar5)) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x100659e60);
                    (*pcVar2)();
                  }
                  local_78 = puVar12;
                  if (uVar8 != uVar1) {
                    local_78 = PTR___swiftEmptyArrayStorage_100995ea0;
                    if (uVar5 != uVar10) {
                      if (0 < (long)uVar1) {
                        local_78 = &DAT_100ab7e10;
                        FUN_100004bb4(&DAT_100ab7e10,&DAT_100848cb8);
                        _swift_allocObject();
                        puVar6 = local_78;
                        _malloc_size();
                        puVar4 = puVar6 + -0x19;
                        if (0x1f < (long)puVar6) {
                          puVar4 = puVar6 + -0x20;
                        }
                        *(ulong *)(local_78 + 0x10) = uVar1;
                        *(long *)(local_78 + 0x18) = ((long)puVar4 >> 3) << 1;
                      }
                      _memcpy(local_78 + 0x20,puVar12 + uVar10 * 8 + 0x20,uVar1 * 8);
                    }
                    _swift_bridgeObjectRelease(puVar12);
                  }
                  if (*(long *)(local_78 + 0x10) <= (long)uVar13) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x100659e64);
                    (*pcVar2)();
                  }
                  puVar12 = local_78;
                  _swift_isUniquelyReferenced_nonNull_native();
                  if (((ulong)puVar12 & 1) == 0) {
                    FUN_1006541a4();
                  }
                  lVar7 = *(long *)(local_78 + 0x10);
                  if (lVar7 <= (long)uVar13) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x100659e68);
                    (*pcVar2)();
                  }
                  uVar11 = uVar14 >> uVar3 | uVar11;
                  *(ulong *)(local_78 + lVar15 * 8) = uVar11;
                  *puVar9 = (ulong)local_78;
                  if ((uVar11 == 0) && (uVar13 == lVar7 - 1U)) {
LAB_100659c70:
                    FUN_100645d2c();
                  }
                }
                else {
LAB_100659c7c:
                  if (uVar11 == 0) {
                    uVar14 = 0;
                  }
                  else {
                    if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x100659e3c);
                      (*pcVar2)();
                    }
                    FUN_100646ccc(lVar15 + -3);
                    if ((long)uVar13 < *(long *)(unaff_x20[3] + 0x10)) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x100659e40);
                      (*pcVar2)();
                    }
                    lVar7 = (lVar15 - *(long *)(unaff_x20[3] + 0x10)) + -4;
                    if (lVar7 < 0) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x100659e44);
                      (*pcVar2)();
                    }
                    FUN_10062872c(lVar7,0);
                    uVar14 = *puVar9;
                    uVar10 = uVar14;
                    _swift_isUniquelyReferenced_nonNull_native();
                    uVar5 = uVar14;
                    if ((uVar10 & 1) == 0) {
                      uVar5 = 0;
                      FUN_10062958c(0,*(long *)(uVar14 + 0x10) + 1,1,uVar14);
                    }
                    uVar10 = *(ulong *)(uVar5 + 0x10);
                    uVar14 = uVar5;
                    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar10) {
                      uVar14 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
                      FUN_10062958c(uVar14,uVar10 + 1,1,uVar5);
                    }
                    *(ulong *)(uVar14 + 0x10) = uVar10 + 1;
                    *(ulong *)(uVar14 + uVar10 * 8 + 0x20) = uVar11;
                    *puVar9 = uVar14;
                    uVar14 = 0;
                  }
                }
              }
              else {
                if (*(ulong *)(puVar12 + 0x10) <= uVar13) goto LAB_100659c7c;
                uVar14 = *(ulong *)(puVar12 + lVar15 * 8);
                puVar4 = puVar12;
                _swift_isUniquelyReferenced_nonNull_native();
                if (((ulong)puVar4 & 1) == 0) {
                  FUN_1006541a4();
                }
                uVar10 = *(ulong *)(puVar12 + 0x10);
                if (uVar10 <= uVar13) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100659e48);
                  (*pcVar2)();
                }
                uVar11 = uVar14 >> uVar3 | uVar11;
                *(ulong *)(puVar12 + lVar15 * 8) = uVar11;
                *puVar9 = (ulong)puVar12;
                if (uVar11 == 0 && uVar13 == uVar10 - 1) goto LAB_100659c70;
              }
            }
            uVar11 = uVar14 << (-param_1 & 0x3f);
            lVar15 = lVar15 + -1;
          } while (0 < (long)uVar13);
        }
      }
    }
    else if ((byte)uVar11 < 2) {
      _swift_bridgeObjectRelease(uVar10);
      *unaff_x20 = 0;
      unaff_x20[1] = 0;
      *(undefined1 *)(unaff_x20 + 2) = 0;
      unaff_x20[3] = (ulong)PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      uVar3 = *puVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar11 = *puVar9;
      if ((uVar3 & 1) == 0) {
        uVar3 = 0;
        FUN_100629f38(0,*(ulong *)(uVar11 + 0x18) >> 1);
        _swift_bridgeObjectRelease(uVar11);
        *puVar9 = uVar3;
      }
      else {
        FUN_100634e4c(0,*(undefined8 *)(uVar11 + 0x10));
      }
      FUN_100628ce8(0,0,0,PTR___swiftEmptyArrayStorage_100995ea0);
    }
  }
  return;
}

