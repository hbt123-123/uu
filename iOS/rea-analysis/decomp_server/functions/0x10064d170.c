// rea decompile_all
// name: FUN_10064d170
// address: 0x10064d170
// body: available
// range: 0x10064d170-0x10064d923 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10064d3b0 to 0x100646fb0 FUN_100646fb0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10064d834 to 0x1006599cc FUN_1006599cc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10064d860 to 0x1006508b0 FUN_1006508b0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10064d880 to 0x100646f0c FUN_100646f0c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10064d170(ulong param_1,long param_2,ulong param_3,undefined *param_4,ulong param_5)

{
  char cVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  ulong *unaff_x20;
  ulong uVar24;
  ulong *puVar25;
  byte bVar26;
  undefined *local_98;
  ulong local_88;
  ulong local_80;
  long lStack_78;
  byte local_70;
  undefined *local_68;
  
  uVar15 = (uint)param_3;
  if ((param_3 & 0xff) == 0) {
    if (param_1 == 0 && param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d8f4);
      (*pcVar6)();
    }
    if ((param_1 == 0) || (param_2 != 0)) goto LAB_10064d1ec;
LAB_10064d290:
    if (0xffffffffffffff7e < param_5 - 0x41) {
      if ((long)param_5 < 0) {
        if (0xffffffffffffffc0 < param_5) {
LAB_10064d910:
          uVar8 = param_1 << (-param_5 & 0x3f);
          goto LAB_10064d380;
        }
      }
      else if (param_5 < 0x40) {
LAB_10064d37c:
        uVar8 = param_1 >> (param_5 & 0x3f);
        goto LAB_10064d380;
      }
    }
  }
  else {
    if ((uVar15 & 0xff) != 1) {
      if (*(long *)(param_4 + 0x10) != 1) {
        if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d8d0);
          (*pcVar6)();
        }
        goto LAB_10064d1ec;
      }
      if ((uVar15 & 0xff) != 2) goto LAB_10064d264;
LAB_10064d28c:
      param_1 = *(ulong *)(param_4 + 0x20);
      goto LAB_10064d290;
    }
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d8d4);
      (*pcVar6)();
    }
    if (param_2 - param_1 != 1) {
LAB_10064d1ec:
      FUN_1006508b0();
      uVar8 = *unaff_x20;
      uVar20 = unaff_x20[1];
      cVar1 = (char)unaff_x20[2];
      uVar24 = unaff_x20[3];
      uVar17 = uVar8;
      FUN_10064b1b4(uVar8,uVar20,cVar1,uVar24,param_1,param_2,param_3,param_4);
      if (uVar17 != 0xffffffffffffffff) {
        if ((param_3 & 0xff) == 0) {
          uVar17 = (ulong)(param_1 != 0);
          if (param_2 != 0) {
            uVar17 = 2;
          }
        }
        else if ((uVar15 & 0xff) == 1) {
          uVar17 = param_2 - param_1;
          if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d24c);
            (*pcVar6)();
          }
        }
        else {
          uVar17 = *(ulong *)(param_4 + 0x10);
        }
        uVar9 = uVar17 - 1;
        if (SBORROW8(uVar17,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d8d8);
          (*pcVar6)();
        }
        FUN_100644580(uVar9,param_1,param_2,param_3,param_4);
        uVar10 = uVar17 - 2;
        if (SBORROW8(uVar17,2)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d8dc);
          (*pcVar6)();
        }
        FUN_100644580(uVar10,param_1,param_2,param_3,param_4);
        local_80 = 0;
        lStack_78 = 0;
        local_70 = 0;
        local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
        if (cVar1 == '\0') {
          if (uVar20 == 0) {
            uVar24 = (ulong)(uVar8 != 0);
          }
          else {
            uVar24 = 2;
          }
        }
        else if (cVar1 == '\x01') {
          uVar24 = uVar20 - uVar8;
          if (SBORROW8(uVar20,uVar8)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d354);
            (*pcVar6)();
          }
        }
        else {
          uVar24 = *(ulong *)(uVar24 + 0x10);
        }
        if ((long)uVar24 < (long)uVar17) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d8e0);
          (*pcVar6)();
        }
        bVar26 = 0;
        local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
        bVar7 = true;
        uVar8 = 0;
        do {
          uVar20 = uVar24;
          if (!bVar7) {
            if ((long)uVar8 <= (long)uVar17) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d888);
              (*pcVar6)();
            }
            uVar20 = uVar8 - 1;
          }
          if ((long)uVar20 < 0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d7e0);
            (*pcVar6)();
          }
          uVar8 = *unaff_x20;
          uVar16 = unaff_x20[1];
          cVar1 = (char)unaff_x20[2];
          uVar21 = unaff_x20[3];
          if (cVar1 == '\0') {
            if ((long)uVar20 < 3) {
              if (uVar20 != 2) {
                if (uVar20 == 0) goto LAB_10064d920;
                if (uVar20 == 1) goto LAB_10064d91c;
LAB_10064d5bc:
                uVar14 = 0;
                uVar18 = 0;
                goto LAB_10064d5c4;
              }
              uVar14 = 0;
              uVar18 = uVar16;
              uVar19 = uVar8;
            }
            else {
              if (uVar20 != 3) goto LAB_10064d5bc;
              uVar14 = 0;
              uVar18 = 0;
              uVar19 = uVar16;
            }
          }
          else {
            if (cVar1 == '\x01') {
              if (SBORROW8(uVar16,uVar8)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d890);
                (*pcVar6)();
              }
              if ((long)(uVar16 - uVar8) <= (long)uVar20) goto LAB_10064d4e4;
              uVar18 = uVar8 + uVar20;
              if (SCARRY8(uVar8,uVar20)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d89c);
                (*pcVar6)();
              }
              if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d8a0);
                (*pcVar6)();
              }
              if (*(ulong *)(uVar21 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d8a8);
                (*pcVar6)();
              }
LAB_10064d4d8:
              uVar14 = *(ulong *)(uVar21 + uVar18 * 8 + 0x20);
            }
            else {
              uVar18 = uVar20;
              if (uVar20 < *(ulong *)(uVar21 + 0x10)) goto LAB_10064d4d8;
LAB_10064d4e4:
              uVar14 = 0;
            }
            if (uVar20 == 0) {
LAB_10064d920:
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d924);
              (*pcVar6)();
            }
            uVar18 = uVar20 - 1;
            if (cVar1 == '\x02') {
              if (*(ulong *)(uVar21 + 0x10) < uVar20) goto LAB_10064d518;
LAB_10064d550:
              uVar18 = *(ulong *)(uVar21 + uVar18 * 8 + 0x20);
            }
            else {
              if (SBORROW8(uVar16,uVar8)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d894);
                (*pcVar6)();
              }
              if ((long)uVar20 <= (long)(uVar16 - uVar8)) {
                bVar7 = SCARRY8(uVar8,uVar18);
                uVar18 = uVar8 + uVar18;
                if (bVar7) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d8a4);
                  (*pcVar6)();
                }
                if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d8ac);
                  (*pcVar6)();
                }
                if (*(ulong *)(uVar21 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d8b4);
                  (*pcVar6)();
                }
                goto LAB_10064d550;
              }
LAB_10064d518:
              uVar18 = 0;
            }
            if (uVar20 == 1) {
LAB_10064d91c:
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d920);
              (*pcVar6)();
            }
            uVar19 = uVar20 - 2;
            if (cVar1 == '\x02') {
              if (uVar19 < *(ulong *)(uVar21 + 0x10)) {
LAB_10064d5a4:
                uVar19 = *(ulong *)(uVar21 + uVar19 * 8 + 0x20);
                goto LAB_10064d5c8;
              }
            }
            else {
              if (SBORROW8(uVar16,uVar8)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d898);
                (*pcVar6)();
              }
              if ((long)uVar19 < (long)(uVar16 - uVar8)) {
                bVar7 = SCARRY8(uVar8,uVar19);
                uVar19 = uVar8 + uVar19;
                if (bVar7) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d8b0);
                  (*pcVar6)();
                }
                if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d8b8);
                  (*pcVar6)();
                }
                if (*(ulong *)(uVar21 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d8bc);
                  (*pcVar6)();
                }
                goto LAB_10064d5a4;
              }
            }
LAB_10064d5c4:
            uVar19 = 0;
          }
LAB_10064d5c8:
          if (uVar14 == uVar9) {
            puVar25 = (ulong *)0xffffffffffffffff;
            uVar14 = uVar9 + uVar18;
            if (!CARRY8(uVar9,uVar18)) goto LAB_10064d5f8;
          }
          else {
            puVar25 = &local_88;
            FUN_100654374();
            uVar14 = local_88;
LAB_10064d5f8:
            auVar3._8_8_ = 0;
            auVar3._0_8_ = puVar25;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar10;
            uVar18 = SUB168(auVar3 * auVar4,8);
            if ((uVar14 <= uVar18) &&
               (uVar22 = (long)puVar25 * uVar10, uVar14 != uVar18 || uVar19 < uVar22)) {
              if (CARRY8(uVar14,uVar9)) {
                bVar7 = puVar25 == (ulong *)0x0;
                puVar25 = (ulong *)((long)puVar25 + -1);
                if (bVar7) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d8c0);
                  (*pcVar6)();
                }
              }
              else {
                if ((uVar22 < uVar10) && (bVar7 = uVar18 == 0, uVar18 = uVar18 - 1, bVar7)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d8c8);
                  (*pcVar6)();
                }
                if ((uVar18 < uVar14 + uVar9) ||
                   ((uVar18 == uVar14 + uVar9 && (uVar22 - uVar10 <= uVar19)))) {
                  bVar7 = puVar25 == (ulong *)0x0;
                  puVar25 = (ulong *)((long)puVar25 + -1);
                  if (bVar7) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d8c4);
                    (*pcVar6)();
                  }
                }
                else {
                  bVar7 = puVar25 < (ulong *)0x2;
                  puVar25 = (ulong *)((long)puVar25 + -2);
                  if (bVar7) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d8cc);
                    (*pcVar6)();
                  }
                }
              }
            }
          }
          if (bVar26 < 2) {
            _swift_bridgeObjectRelease(local_98);
            local_70 = (byte)param_3;
            local_80 = param_1;
            lStack_78 = param_2;
            local_68 = param_4;
            _swift_bridgeObjectRetain(param_4);
          }
          else {
            puVar12 = local_98;
            _swift_isUniquelyReferenced_nonNull_native();
            if (((ulong)puVar12 & 1) == 0) {
              puVar12 = (undefined *)0x0;
              FUN_100629f38(0,*(ulong *)(local_98 + 0x18) >> 1);
              _swift_bridgeObjectRelease(local_98);
            }
            else {
              uVar23 = *(undefined8 *)(local_98 + 0x10);
              puVar11 = local_98;
              _swift_isUniquelyReferenced_nonNull_native();
              puVar12 = local_98;
              if (((ulong)puVar11 & 1) == 0) {
                puVar12 = (undefined *)0x0;
                FUN_10062958c(0,uVar23,1,local_98);
                local_68 = puVar12;
              }
              FUN_1003d2e64(&local_80,0,uVar23,0);
            }
            local_68 = puVar12;
            _swift_bridgeObjectRetain(param_4);
            FUN_100628ce8(param_1,param_2,uVar15,param_4);
          }
          FUN_100653350(puVar25);
          local_98 = local_68;
          bVar26 = local_70;
          lVar5 = lStack_78;
          uVar18 = local_80;
          lVar2 = uVar20 - uVar17;
          if (SBORROW8(uVar20,uVar17)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d7e4);
            (*pcVar6)();
          }
          if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d7e8);
            (*pcVar6)();
          }
          if ((long)(uVar20 + 1) < lVar2) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d7ec);
            (*pcVar6)();
          }
          lVar13 = lVar2;
          FUN_100647200(lVar2,uVar20 + 1,uVar8,uVar16,cVar1,uVar21);
          FUN_10064b1b4();
          _swift_bridgeObjectRelease(uVar16);
          if (lVar13 == -1) {
            FUN_100642874(param_1,param_2,uVar15,param_4,lVar2);
            FUN_10065eb84(uVar18,lVar5,bVar26,local_98,lVar2);
            if ((uVar18 & 1) != 0) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d88c);
              (*pcVar6)();
            }
          }
          else {
            FUN_10065eb84(uVar18,lVar5,bVar26,local_98,lVar2);
            if ((uVar18 & 1) != 0) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d7dc);
              (*pcVar6)();
            }
          }
          bVar7 = false;
          uVar8 = uVar20;
        } while (uVar20 != uVar17);
        _swift_bridgeObjectRelease(local_98);
      }
      if ((long)param_5 < 0) {
        if (SBORROW8(0,param_5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d900);
          (*pcVar6)();
        }
        FUN_1006508b0(unaff_x20,-param_5);
        return;
      }
      uVar8 = *unaff_x20;
      FUN_10065f798(uVar8,unaff_x20[1],(char)unaff_x20[2],unaff_x20[3]);
      if ((long)uVar8 <= (long)param_5) {
        FUN_100646f0c();
        return;
      }
      FUN_1006599cc(param_5);
      return;
    }
LAB_10064d264:
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d8e4);
      (*pcVar6)();
    }
    if (0 < (long)(param_2 - param_1)) {
      if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d8f8);
        (*pcVar6)();
      }
      if (*(ulong *)(param_4 + 0x10) <= param_1) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10064d8fc);
        (*pcVar6)();
      }
      param_4 = param_4 + param_1 * 8;
      goto LAB_10064d28c;
    }
    if (0xffffffffffffff7e < param_5 - 0x41) {
      if ((long)param_5 < 0) {
        param_1 = 0;
        uVar8 = 0;
        if (param_5 < 0xffffffffffffffc1) goto LAB_10064d380;
        goto LAB_10064d910;
      }
      uVar8 = 0;
      param_1 = 0;
      if (0x3f < param_5) goto LAB_10064d380;
      goto LAB_10064d37c;
    }
  }
  uVar8 = 0;
LAB_10064d380:
  FUN_10064d024(uVar8);
  FUN_100646fb0();
  return;
}

