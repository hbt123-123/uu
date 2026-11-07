// rea decompile_all
// name: FUN_10064dab4
// address: 0x10064dab4
// body: available
// range: 0x10064dab4-0x10064e2c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10064dab4(ulong *param_1,ulong *param_2)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte bVar6;
  code *pcVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  ulong uVar25;
  ulong *puVar26;
  undefined *puVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong local_b8;
  ulong local_b0;
  ulong uStack_a8;
  byte local_a0;
  undefined *local_98;
  ulong local_90;
  ulong uStack_88;
  undefined1 local_80;
  undefined *local_78;
  
  uVar25 = *param_2;
  uVar20 = param_2[1];
  cVar1 = (char)param_2[2];
  uVar22 = param_2[3];
  if (cVar1 == '\0') {
    if (uVar25 == 0 && uVar20 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e2b0);
      (*pcVar7)();
    }
  }
  else if ((cVar1 != '\x01') && (*(long *)(uVar22 + 0x10) == 0)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10064dafc);
    (*pcVar7)();
  }
  uVar28 = *param_1;
  uVar10 = param_1[1];
  uVar11 = param_1[2];
  uVar29 = param_1[3];
  uVar9 = uVar28;
  FUN_10064b1b4(uVar28,uVar10,(char)uVar11,uVar29,uVar25,uVar20,cVar1,uVar22);
  if (uVar9 == 0xffffffffffffffff) {
    _swift_bridgeObjectRelease(uVar22);
    *param_1 = 0;
    param_1[1] = 0;
    puVar23 = PTR___swiftEmptyArrayStorage_100995ea0;
    *(undefined1 *)(param_1 + 2) = 0;
    param_1[3] = (ulong)puVar23;
    *param_2 = uVar28;
    param_2[1] = uVar10;
    *(char *)(param_2 + 2) = (char)uVar11;
    param_2[3] = uVar29;
    return;
  }
  if (cVar1 == '\0') {
    if ((uVar20 != 0) || (uVar25 == 0)) goto LAB_10064dbc0;
LAB_10064dd00:
    FUN_10064d024();
    _swift_bridgeObjectRelease(uVar22);
    *param_2 = uVar25;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    param_2[3] = (ulong)PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    if (cVar1 == '\x01') {
      if (SBORROW8(uVar20,uVar25)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e2ac);
        (*pcVar7)();
      }
      if (uVar20 - uVar25 == 1) {
LAB_10064dc28:
        if (SBORROW8(uVar20,uVar25)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e2b4);
          (*pcVar7)();
        }
        if ((long)(uVar20 - uVar25) < 1) {
          uVar25 = 0;
          goto LAB_10064dd00;
        }
        if ((long)uVar25 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e2b8);
          (*pcVar7)();
        }
        if (*(ulong *)(uVar22 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e2bc);
          (*pcVar7)();
        }
        uVar28 = uVar22 + uVar25 * 8;
LAB_10064dc50:
        uVar25 = *(ulong *)(uVar28 + 0x20);
        goto LAB_10064dd00;
      }
    }
    else if (*(long *)(uVar22 + 0x10) == 1) {
      uVar28 = uVar22;
      if (cVar1 != '\x02') goto LAB_10064dc28;
      goto LAB_10064dc50;
    }
LAB_10064dbc0:
    FUN_10065fef8(uVar25,uVar20,cVar1,uVar22);
    FUN_1006508b0(param_2,uVar25);
    FUN_1006508b0(param_1,uVar25);
    puVar23 = PTR___swiftEmptyArrayStorage_100995ea0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    local_78 = PTR___swiftEmptyArrayStorage_100995ea0;
    uVar20 = *param_2;
    uVar22 = param_2[1];
    bVar2 = (byte)param_2[2];
    puVar27 = (undefined *)param_2[3];
    if (bVar2 == 0) {
      uVar28 = (ulong)(uVar20 != 0);
      if (uVar22 != 0) {
        uVar28 = 2;
      }
    }
    else if (bVar2 == 1) {
      uVar28 = uVar22 - uVar20;
      if (SBORROW8(uVar22,uVar20)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10064dc28);
        (*pcVar7)();
      }
    }
    else {
      uVar28 = *(ulong *)(puVar27 + 0x10);
    }
    uVar10 = uVar28 - 1;
    if (SBORROW8(uVar28,1)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e2a0);
      (*pcVar7)();
    }
    FUN_100644580(uVar10,uVar20,uVar22,bVar2,puVar27);
    uVar11 = uVar28 - 2;
    if (SBORROW8(uVar28,2)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e2a4);
      (*pcVar7)();
    }
    FUN_100644580(uVar11,uVar20,uVar22,bVar2,puVar27);
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    local_98 = puVar23;
    uVar9 = *param_1;
    uVar29 = param_1[1];
    if ((char)param_1[2] == '\0') {
      if (uVar29 == 0) {
        uVar19 = (ulong)(uVar9 != 0);
      }
      else {
        uVar19 = 2;
      }
    }
    else if ((char)param_1[2] == '\x01') {
      uVar19 = uVar29 - uVar9;
      if (SBORROW8(uVar29,uVar9)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10064dce4);
        (*pcVar7)();
      }
    }
    else {
      uVar19 = *(ulong *)(param_1[3] + 0x10);
    }
    if ((long)uVar19 < (long)uVar28) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e2a8);
      (*pcVar7)();
    }
    bVar6 = 0;
    bVar8 = true;
    uVar9 = 0;
    do {
      uVar29 = uVar19;
      if (!bVar8) {
        if ((long)uVar9 <= (long)uVar28) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e1fc);
          (*pcVar7)();
        }
        uVar29 = uVar9 - 1;
      }
      if ((long)uVar29 < 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e1ac);
        (*pcVar7)();
      }
      uVar9 = *param_1;
      uVar16 = param_1[1];
      cVar1 = (char)param_1[2];
      uVar30 = param_1[3];
      if (cVar1 == '\0') {
        if ((long)uVar29 < 3) {
          if (uVar29 != 2) {
            if (uVar29 == 0) goto LAB_10064e2bc;
            if (uVar29 == 1) goto LAB_10064e2c0;
LAB_10064df50:
            uVar15 = 0;
            uVar17 = 0;
            goto LAB_10064df58;
          }
          uVar15 = 0;
          uVar17 = uVar16;
          uVar18 = uVar9;
        }
        else {
          if (uVar29 != 3) goto LAB_10064df50;
          uVar15 = 0;
          uVar17 = 0;
          uVar18 = uVar16;
        }
      }
      else {
        if (cVar1 == '\x01') {
          if (SBORROW8(uVar16,uVar9)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e21c);
            (*pcVar7)();
          }
          if ((long)(uVar16 - uVar9) <= (long)uVar29) goto LAB_10064de78;
          uVar17 = uVar9 + uVar29;
          if (SCARRY8(uVar9,uVar29)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e26c);
            (*pcVar7)();
          }
          if ((long)uVar17 < 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e270);
            (*pcVar7)();
          }
          if (*(ulong *)(uVar30 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e278);
            (*pcVar7)();
          }
LAB_10064de6c:
          uVar15 = *(ulong *)(uVar30 + uVar17 * 8 + 0x20);
        }
        else {
          uVar17 = uVar29;
          if (uVar29 < *(ulong *)(uVar30 + 0x10)) goto LAB_10064de6c;
LAB_10064de78:
          uVar15 = 0;
        }
        if (uVar29 == 0) {
LAB_10064e2bc:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e2c0);
          (*pcVar7)();
        }
        uVar17 = uVar29 - 1;
        if (cVar1 == '\x02') {
          if (*(ulong *)(uVar30 + 0x10) < uVar29) goto LAB_10064deac;
LAB_10064dee4:
          uVar17 = *(ulong *)(uVar30 + uVar17 * 8 + 0x20);
        }
        else {
          if (SBORROW8(uVar16,uVar9)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e220);
            (*pcVar7)();
          }
          if ((long)uVar29 <= (long)(uVar16 - uVar9)) {
            bVar8 = SCARRY8(uVar9,uVar17);
            uVar17 = uVar9 + uVar17;
            if (bVar8) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e274);
              (*pcVar7)();
            }
            if ((long)uVar17 < 0) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e27c);
              (*pcVar7)();
            }
            if (*(ulong *)(uVar30 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e284);
              (*pcVar7)();
            }
            goto LAB_10064dee4;
          }
LAB_10064deac:
          uVar17 = 0;
        }
        if (uVar29 == 1) {
LAB_10064e2c0:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e2c4);
          (*pcVar7)();
        }
        uVar18 = uVar29 - 2;
        if (cVar1 == '\x02') {
          if (uVar18 < *(ulong *)(uVar30 + 0x10)) {
LAB_10064df38:
            uVar18 = *(ulong *)(uVar30 + uVar18 * 8 + 0x20);
            goto LAB_10064df5c;
          }
        }
        else {
          if (SBORROW8(uVar16,uVar9)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e224);
            (*pcVar7)();
          }
          if ((long)uVar18 < (long)(uVar16 - uVar9)) {
            bVar8 = SCARRY8(uVar9,uVar18);
            uVar18 = uVar9 + uVar18;
            if (bVar8) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e280);
              (*pcVar7)();
            }
            if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e288);
              (*pcVar7)();
            }
            if (*(ulong *)(uVar30 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e28c);
              (*pcVar7)();
            }
            goto LAB_10064df38;
          }
        }
LAB_10064df58:
        uVar18 = 0;
      }
LAB_10064df5c:
      if (uVar15 == uVar10) {
        puVar26 = (ulong *)0xffffffffffffffff;
        uVar15 = uVar10 + uVar17;
        if (!CARRY8(uVar10,uVar17)) goto LAB_10064df88;
      }
      else {
        puVar26 = &local_b8;
        FUN_100654374();
        uVar15 = local_b8;
LAB_10064df88:
        auVar4._8_8_ = 0;
        auVar4._0_8_ = puVar26;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar11;
        uVar17 = SUB168(auVar4 * auVar5,8);
        if ((uVar15 <= uVar17) &&
           (uVar21 = (long)puVar26 * uVar11, uVar15 != uVar17 || uVar18 < uVar21)) {
          if (CARRY8(uVar15,uVar10)) {
            bVar8 = puVar26 == (ulong *)0x0;
            puVar26 = (ulong *)((long)puVar26 + -1);
            if (bVar8) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e290);
              (*pcVar7)();
            }
          }
          else {
            if ((uVar21 < uVar11) && (bVar8 = uVar17 == 0, uVar17 = uVar17 - 1, bVar8)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e298);
              (*pcVar7)();
            }
            if ((uVar17 < uVar15 + uVar10) ||
               ((uVar17 == uVar15 + uVar10 && (uVar21 - uVar11 <= uVar18)))) {
              bVar8 = puVar26 == (ulong *)0x0;
              puVar26 = (ulong *)((long)puVar26 + -1);
              if (bVar8) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e294);
                (*pcVar7)();
              }
            }
            else {
              bVar8 = puVar26 < (ulong *)0x2;
              puVar26 = (ulong *)((long)puVar26 + -2);
              if (bVar8) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e29c);
                (*pcVar7)();
              }
            }
          }
        }
      }
      if (bVar6 < 2) {
        _swift_bridgeObjectRelease(puVar23);
        local_b0 = uVar20;
        uStack_a8 = uVar22;
        local_a0 = bVar2;
        local_98 = puVar27;
        _swift_bridgeObjectRetain(puVar27);
      }
      else {
        puVar13 = puVar23;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar13 & 1) == 0) {
          puVar13 = (undefined *)0x0;
          FUN_100629f38(0,*(ulong *)(puVar23 + 0x18) >> 1);
          _swift_bridgeObjectRelease(puVar23);
        }
        else {
          uVar24 = *(undefined8 *)(puVar23 + 0x10);
          puVar12 = puVar23;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar13 = puVar23;
          if (((ulong)puVar12 & 1) == 0) {
            puVar13 = (undefined *)0x0;
            FUN_10062958c(0,uVar24,1,puVar23);
            local_98 = puVar13;
          }
          FUN_1003d2e64(&local_b0,0,uVar24,0);
        }
        local_98 = puVar13;
        _swift_bridgeObjectRetain(puVar27);
        FUN_100628ce8(uVar20,uVar22,bVar2,puVar27);
      }
      FUN_100653350(puVar26);
      puVar23 = local_98;
      bVar6 = local_a0;
      uVar18 = uStack_a8;
      uVar17 = local_b0;
      lVar3 = uVar29 - uVar28;
      if (SBORROW8(uVar29,uVar28)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e1b0);
        (*pcVar7)();
      }
      if (SCARRY8(uVar29,1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e1b4);
        (*pcVar7)();
      }
      if ((long)(uVar29 + 1) < lVar3) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e1b8);
        (*pcVar7)();
      }
      lVar14 = lVar3;
      FUN_100647200(lVar3,uVar29 + 1,uVar9,uVar16,cVar1,uVar30);
      FUN_10064b1b4();
      _swift_bridgeObjectRelease(uVar16);
      if (lVar14 == -1) {
        FUN_100642874(uVar20,uVar22,bVar2,puVar27,lVar3);
        FUN_10065eb84(uVar17,uVar18,bVar6,puVar23,lVar3);
        if ((uVar17 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e200);
          (*pcVar7)();
        }
        bVar8 = puVar26 == (ulong *)0x0;
        puVar26 = (ulong *)((long)puVar26 + -1);
        if (bVar8) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e1a8);
          (*pcVar7)();
        }
      }
      else {
        FUN_10065eb84(uVar17,uVar18,bVar6,puVar23,lVar3);
        if ((uVar17 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e1f8);
          (*pcVar7)();
        }
      }
      FUN_100644614(puVar26,lVar3);
      bVar8 = false;
      uVar9 = uVar29;
    } while (uVar29 != uVar28);
    _swift_bridgeObjectRelease(puVar23);
    if ((long)uVar25 < 0) {
      if (SBORROW8(0,uVar25)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10064e2c8);
        (*pcVar7)();
      }
      FUN_1006508b0(param_1,-uVar25);
    }
    else {
      uVar20 = *param_1;
      FUN_10065f798(uVar20,param_1[1],(char)param_1[2],param_1[3]);
      if ((long)uVar25 < (long)uVar20) {
        FUN_1006599cc(uVar25);
      }
      else {
        FUN_100646f0c();
      }
    }
    _swift_bridgeObjectRelease(puVar27);
    uVar25 = param_1[2];
    uVar20 = param_1[3];
    uVar22 = *param_1;
    param_2[1] = param_1[1];
    *param_2 = uVar22;
    *(char *)(param_2 + 2) = (char)uVar25;
    param_2[3] = uVar20;
    param_1[1] = uStack_88;
    *param_1 = local_90;
    *(undefined1 *)(param_1 + 2) = local_80;
    param_1[3] = (ulong)local_78;
  }
  return;
}

