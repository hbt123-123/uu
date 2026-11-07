// rea decompile_all
// name: FUN_100658ed8
// address: 0x100658ed8
// body: available
// range: 0x100658ed8-0x10065933b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006592f8 to 0x100647458 FUN_100647458 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100658ed8(ulong param_1)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *unaff_x20;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined *local_78;
  
  if (param_1 != 0) {
    uVar1 = param_1 & 0x3f;
    if (uVar1 != 0) {
      uVar13 = 0;
      lVar15 = 4;
      do {
        uVar12 = lVar15 - 4;
        uVar9 = *unaff_x20;
        uVar7 = unaff_x20[1];
        cVar2 = (char)unaff_x20[2];
        if (cVar2 == '\0') {
          if (uVar7 == 0) {
            if (uVar9 == 0 || lVar15 != 4) goto LAB_1006590b8;
LAB_100659154:
            *unaff_x20 = uVar9 << uVar1 | uVar13;
            *(undefined1 *)(unaff_x20 + 2) = 0;
            uVar14 = uVar9;
          }
          else {
            if (1 < uVar12) {
LAB_1006590b8:
              if (uVar13 == 0) break;
            }
            if (uVar12 == 0) goto LAB_100659154;
            if (uVar12 != 1) goto LAB_1006590e0;
            unaff_x20[1] = uVar7 << uVar1 | uVar13;
            *(undefined1 *)(unaff_x20 + 2) = 0;
            uVar14 = uVar7;
          }
        }
        else {
          puVar11 = (undefined *)unaff_x20[3];
          if (cVar2 == '\x01') {
            if (SBORROW8(uVar7,uVar9)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100659308);
              (*pcVar5)();
            }
            if ((long)(uVar7 - uVar9) <= (long)uVar12 && uVar13 == 0) break;
LAB_100658fe8:
            uVar4 = uVar7 - uVar9;
            if (SBORROW8(uVar7,uVar9)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100659304);
              (*pcVar5)();
            }
            if ((long)uVar12 < (long)uVar4) {
              uVar14 = uVar9 + uVar12;
              if (SCARRY8(uVar9,uVar12)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100659318);
                (*pcVar5)();
              }
              if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10065931c);
                (*pcVar5)();
              }
              if (*(ulong *)(puVar11 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100659320);
                (*pcVar5)();
              }
              uVar14 = *(ulong *)(puVar11 + uVar14 * 8 + 0x20);
              *unaff_x20 = 0;
              unaff_x20[1] = 0;
              *(undefined1 *)(unaff_x20 + 2) = 2;
              if ((long)uVar7 < (long)uVar9) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100659324);
                (*pcVar5)();
              }
              if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100659328);
                (*pcVar5)();
              }
              uVar10 = *(ulong *)(puVar11 + 0x10);
              if ((uVar10 < uVar9) || ((long)uVar10 < (long)uVar7)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10065932c);
                (*pcVar5)();
              }
              local_78 = puVar11;
              if (uVar10 != uVar4) {
                local_78 = PTR___swiftEmptyArrayStorage_100995ea0;
                if (uVar7 != uVar9) {
                  if (0 < (long)uVar4) {
                    local_78 = &DAT_100ab7e10;
                    FUN_100004bb4(&DAT_100ab7e10,&DAT_100848cb8);
                    _swift_allocObject();
                    puVar8 = local_78;
                    _malloc_size();
                    puVar6 = puVar8 + -0x19;
                    if (0x1f < (long)puVar8) {
                      puVar6 = puVar8 + -0x20;
                    }
                    *(ulong *)(local_78 + 0x10) = uVar4;
                    *(long *)(local_78 + 0x18) = ((long)puVar6 >> 3) << 1;
                  }
                  _memcpy(local_78 + 0x20,puVar11 + uVar9 * 8 + 0x20,uVar4 * 8);
                }
                _swift_bridgeObjectRelease(puVar11);
              }
              if (*(ulong *)(local_78 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100659330);
                (*pcVar5)();
              }
              puVar11 = local_78;
              _swift_isUniquelyReferenced_nonNull_native();
              if (((ulong)puVar11 & 1) == 0) {
                FUN_1006541a4();
              }
              uVar9 = *(ulong *)(local_78 + 0x10);
              if (uVar9 <= uVar12) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100659334);
                (*pcVar5)();
              }
              uVar13 = uVar14 << uVar1 | uVar13;
              *(ulong *)(local_78 + lVar15 * 8) = uVar13;
              unaff_x20[3] = (ulong)local_78;
              if ((uVar13 == 0) && (uVar12 == uVar9 - 1)) {
                FUN_100645d2c();
              }
              goto LAB_100658f2c;
            }
          }
          else {
            if ((long)*(ulong *)(puVar11 + 0x10) <= (long)uVar12 && uVar13 == 0) break;
            if (cVar2 != '\x02') goto LAB_100658fe8;
            if (uVar12 < *(ulong *)(puVar11 + 0x10)) {
              uVar14 = *(ulong *)(puVar11 + lVar15 * 8);
              puVar6 = puVar11;
              _swift_isUniquelyReferenced_nonNull_native();
              if (((ulong)puVar6 & 1) == 0) {
                FUN_1006541a4();
              }
              uVar9 = *(ulong *)(puVar11 + 0x10);
              if (uVar9 <= uVar12) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100659338);
                (*pcVar5)();
              }
              uVar13 = uVar14 << uVar1 | uVar13;
              *(ulong *)(puVar11 + lVar15 * 8) = uVar13;
              unaff_x20[3] = (ulong)puVar11;
              if (uVar13 == 0 && uVar12 == uVar9 - 1) {
                FUN_100645d2c();
              }
              goto LAB_100658f2c;
            }
          }
LAB_1006590e0:
          if (uVar13 == 0) {
            uVar14 = 0;
          }
          else {
            if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10065930c);
              (*pcVar5)();
            }
            FUN_100646ccc(lVar15 + -3);
            if (uVar12 < *(ulong *)(unaff_x20[3] + 0x10)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100659310);
              (*pcVar5)();
            }
            lVar3 = (lVar15 - *(ulong *)(unaff_x20[3] + 0x10)) + -4;
            if (lVar3 < 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100659314);
              (*pcVar5)();
            }
            FUN_10062872c(lVar3,0);
            uVar14 = unaff_x20[3];
            uVar9 = uVar14;
            _swift_isUniquelyReferenced_nonNull_native();
            uVar7 = uVar14;
            if ((uVar9 & 1) == 0) {
              uVar7 = 0;
              FUN_10062958c(0,*(long *)(uVar14 + 0x10) + 1,1,uVar14);
            }
            uVar9 = *(ulong *)(uVar7 + 0x10);
            uVar14 = uVar7;
            if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar9) {
              uVar14 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
              FUN_10062958c(uVar14,uVar9 + 1,1,uVar7);
            }
            *(ulong *)(uVar14 + 0x10) = uVar9 + 1;
            *(ulong *)(uVar14 + uVar9 * 8 + 0x20) = uVar13;
            unaff_x20[3] = uVar14;
            uVar14 = 0;
          }
        }
LAB_100658f2c:
        uVar13 = uVar14 >> ((ulong)(uint)-(int)param_1 & 0x3f);
        lVar15 = lVar15 + 1;
        if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100659300);
          (*pcVar5)();
        }
      } while( true );
    }
    if (0x3f < param_1) {
      uVar1 = *unaff_x20;
      uVar13 = unaff_x20[1];
      if ((char)unaff_x20[2] == '\0') {
        if (uVar13 != 0 || uVar1 != 0) goto LAB_1006592d8;
      }
      else {
        if ((char)unaff_x20[2] == '\x01') {
          lVar15 = uVar13 - uVar1;
          if (SBORROW8(uVar13,uVar1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10065933c);
            (*pcVar5)();
          }
        }
        else {
          lVar15 = *(long *)(unaff_x20[3] + 0x10);
        }
        if (0 < lVar15) {
LAB_1006592d8:
          FUN_100647458(param_1 >> 6);
          return;
        }
      }
    }
  }
  return;
}

