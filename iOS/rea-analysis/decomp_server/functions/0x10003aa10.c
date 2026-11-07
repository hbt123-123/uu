// rea decompile_all
// name: FUN_10003aa10
// address: 0x10003aa10
// body: available
// range: 0x10003aa10-0x10003b16b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10003aa10(long *param_1,undefined8 param_2,long *param_3,long param_4,long param_5)

{
  long lVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  ulong *puVar24;
  long unaff_x21;
  long lVar25;
  ulong uVar26;
  long lVar27;
  uint uVar28;
  long lVar29;
  undefined8 uVar30;
  undefined *local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined *local_58;
  
  lVar27 = param_3[1];
  local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (lVar27 < 1) {
    _swift_retain_n(param_5,2);
  }
  else {
    lVar25 = *param_3;
    _swift_retain_n(param_5,2);
    lVar29 = 0;
    do {
      lVar10 = lVar29 + 1;
      if (lVar10 < lVar27) {
        puVar12 = (undefined8 *)(lVar25 + lVar10 * 0x10);
        local_78 = *puVar12;
        uStack_70 = puVar12[1];
        puVar12 = (undefined8 *)(lVar25 + lVar29 * 0x10);
        local_88 = *puVar12;
        uStack_80 = puVar12[1];
        puVar7 = &local_78;
        FUN_100026c28(puVar7,&local_88,param_5);
        if (unaff_x21 != 0) goto LAB_10003b0b0;
        lVar25 = lVar29 + 2;
        lVar10 = lVar25;
        if (lVar25 < lVar27) {
          puVar12 = puVar12 + 3;
          do {
            lVar21 = puVar12[1];
            lVar10 = puVar12[-1];
            uVar8 = *puVar12;
            FUN_1003d541c(uVar8);
            puVar9 = &local_78;
            _swift_beginAccess(param_5 + 0x80,puVar9,0x20,0);
            uVar28 = (uint)puVar9;
            if (*(long *)(*(long *)(param_5 + 0x80) + 0x10) == 0) {
              uVar28 = 1;
            }
            else {
              thunk_FUN_1001a2c34(uVar8);
              uVar28 = uVar28 ^ 1;
            }
            puVar9 = &local_78;
            _swift_endAccess(puVar9);
            uVar17 = uVar28 ^ 1;
            FUN_1003d541c();
            puVar16 = &local_78;
            _swift_beginAccess(param_5 + 0x80,puVar16,0x20,0);
            if (*(long *)(*(long *)(param_5 + 0x80) + 0x10) == 0) {
              _swift_endAccess(&local_78);
LAB_10003ac2c:
              if ((uVar28 & 1) != 0) {
LAB_10003ab08:
                uVar17 = (uint)(lVar21 < lVar10);
              }
            }
            else {
              thunk_FUN_1001a2c34(puVar9);
              _swift_endAccess(&local_78);
              if (((ulong)puVar16 & 1) == 0) goto LAB_10003ac2c;
              if ((uVar28 & 1) == 0) goto LAB_10003ab08;
            }
            lVar10 = lVar25;
          } while (((((uint)puVar7 ^ uVar17) & 1) == 0) &&
                  (lVar25 = lVar25 + 1, lVar10 = lVar27, puVar12 = puVar12 + 2, lVar27 != lVar25));
        }
        if (((ulong)puVar7 & 1) != 0) {
          if (lVar10 < lVar29) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10003b10c);
            (*pcVar5)();
          }
          if (lVar29 < lVar10) {
            lVar18 = *param_3;
            lVar20 = lVar10 << 4;
            lVar25 = lVar29 << 4;
            lVar21 = lVar10;
            lVar27 = lVar29;
            do {
              lVar21 = lVar21 + -1;
              if (lVar27 != lVar21) {
                if (lVar18 == 0) {
                  _swift_release_n(param_5,2);
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x10003b13c);
                  (*pcVar5)();
                }
                puVar12 = (undefined8 *)(lVar18 + lVar25);
                lVar1 = lVar18 + lVar20;
                uVar8 = *puVar12;
                uVar3 = puVar12[1];
                uVar30 = *(undefined8 *)(lVar1 + -0x10);
                puVar12[1] = *(undefined8 *)(lVar1 + -8);
                *puVar12 = uVar30;
                *(undefined8 *)(lVar1 + -0x10) = uVar8;
                *(undefined8 *)(lVar1 + -8) = uVar3;
              }
              lVar27 = lVar27 + 1;
              lVar20 = lVar20 + -0x10;
              lVar25 = lVar25 + 0x10;
            } while (lVar27 < lVar21);
          }
        }
      }
      lVar27 = param_3[1];
      lVar21 = lVar10;
      if (lVar10 < lVar27) {
        if (SBORROW8(lVar10,lVar29)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10003b100);
          (*pcVar5)();
        }
        if (lVar10 - lVar29 < param_4) {
          if (SCARRY8(lVar29,param_4)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10003b104);
            (*pcVar5)();
          }
          lVar25 = lVar29 + param_4;
          if (lVar27 <= lVar29 + param_4) {
            lVar25 = lVar27;
          }
          if (lVar25 < lVar29) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10003b108);
            (*pcVar5)();
          }
          if (lVar10 != lVar25) {
            lVar27 = *param_3;
            plVar22 = (long *)(lVar27 + lVar10 * 0x10);
            lVar18 = lVar29 - lVar10;
            do {
              lVar20 = *(long *)(lVar27 + lVar10 * 0x10);
              plVar23 = plVar22;
              lVar21 = lVar18;
              do {
                lVar1 = plVar23[-2];
                lVar11 = plVar23[-1];
                FUN_1003d541c(lVar11);
                puVar12 = &local_78;
                _swift_beginAccess(param_5 + 0x80,puVar12,0x20,0);
                uVar28 = (uint)puVar12;
                if (*(long *)(*(long *)(param_5 + 0x80) + 0x10) == 0) {
                  uVar28 = 0;
                }
                else {
                  thunk_FUN_1001a2c34(lVar11);
                }
                puVar12 = &local_78;
                _swift_endAccess(puVar12);
                FUN_1003d541c();
                puVar7 = &local_78;
                _swift_beginAccess(param_5 + 0x80,puVar7,0x20,0);
                if (*(long *)(*(long *)(param_5 + 0x80) + 0x10) == 0) {
                  _swift_endAccess(&local_78);
LAB_10003ae58:
                  if ((uVar28 & 1) == 0 && lVar1 <= lVar20) break;
                }
                else {
                  thunk_FUN_1001a2c34(puVar12);
                  _swift_endAccess(&local_78);
                  if (((ulong)puVar7 & 1) == 0) goto LAB_10003ae58;
                  if ((uVar28 & lVar20 < lVar1) == 0) break;
                }
                if (lVar27 == 0) {
                  _swift_release_n(param_5,2);
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x10003b11c);
                  (*pcVar5)();
                }
                lVar20 = *plVar23;
                lVar1 = plVar23[1];
                plVar23[1] = plVar23[-1];
                *plVar23 = plVar23[-2];
                plVar23[-1] = lVar1;
                plVar23 = plVar23 + -2;
                *plVar23 = lVar20;
                bVar6 = lVar21 != -1;
                lVar21 = lVar21 + 1;
              } while (bVar6);
              lVar10 = lVar10 + 1;
              plVar22 = plVar22 + 2;
              lVar18 = lVar18 + -1;
              lVar21 = lVar25;
            } while (lVar10 != lVar25);
          }
        }
      }
      puVar15 = local_58;
      if (lVar21 < lVar29) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10003b0f0);
        (*pcVar5)();
      }
      puVar13 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar14 = puVar15;
      if (((ulong)puVar13 & 1) == 0) {
        puVar14 = (undefined *)0x0;
        FUN_10003491c(0,*(long *)(puVar15 + 0x10) + 1,1,puVar15,&DAT_100a75930,&DAT_100809a00);
      }
      uVar26 = *(ulong *)(puVar14 + 0x10);
      puVar15 = puVar14;
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar26) {
        puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
        FUN_10003491c(puVar15,uVar26 + 1,1,puVar14,&DAT_100a75930,&DAT_100809a00);
      }
      *(ulong *)(puVar15 + 0x10) = uVar26 + 1;
      *(long *)(puVar15 + uVar26 * 0x10 + 0x20) = lVar29;
      *(long *)(puVar15 + uVar26 * 0x10 + 0x28) = lVar21;
      lVar27 = *param_1;
      local_58 = puVar15;
      if (lVar27 == 0) {
        _swift_release_n(param_5,2);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10003b14c);
        (*pcVar5)();
      }
      _swift_retain(param_5);
      FUN_10003a720(&local_58,lVar27,param_3,param_5);
      _swift_release(param_5);
      if (unaff_x21 != 0) goto LAB_10003b0b0;
      lVar25 = *param_3;
      lVar27 = param_3[1];
      lVar29 = lVar21;
    } while (lVar21 < lVar27);
  }
  local_98 = local_58;
  lVar27 = *param_1;
  if (lVar27 == 0) {
    _swift_release_n(param_5,2);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10003b16c);
    (*pcVar5)();
  }
  puVar15 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar15 & 1) == 0) {
    FUN_10006f924();
  }
  puVar24 = (ulong *)(local_98 + 0x10);
  uVar26 = *puVar24;
  while( true ) {
    if (uVar26 < 2) {
      _swift_release_n(param_5,2);
      _swift_bridgeObjectRelease(local_98);
      return;
    }
    lVar25 = *param_3;
    if (lVar25 == 0) {
      _swift_release_n(param_5,2);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10003b15c);
      (*pcVar5)();
    }
    plVar22 = (long *)(local_98 + uVar26 * 0x10);
    lVar29 = *plVar22;
    puVar2 = puVar24 + uVar26 * 2;
    uVar19 = *puVar2;
    uVar4 = puVar2[1];
    _swift_retain(param_5);
    FUN_10003a2fc(lVar25 + lVar29 * 0x10,lVar25 + uVar19 * 0x10,lVar25 + uVar4 * 0x10,lVar27,param_5
                 );
    _swift_release(param_5);
    if (unaff_x21 != 0) break;
    if ((long)uVar4 < lVar29) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10003b0f4);
      (*pcVar5)();
    }
    uVar19 = *puVar24;
    if (uVar19 <= uVar26 - 2) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10003b0f8);
      (*pcVar5)();
    }
    *plVar22 = lVar29;
    plVar22[1] = uVar4;
    lVar25 = uVar19 - uVar26;
    if (uVar19 < uVar26) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10003b0fc);
      (*pcVar5)();
    }
    uVar26 = uVar19 - 1;
    _memmove(puVar2,puVar2 + 2,lVar25 * 0x10);
    *puVar24 = uVar26;
  }
  local_58 = local_98;
LAB_10003b0b0:
  puVar15 = local_58;
  _swift_release_n(param_5,2);
  _swift_bridgeObjectRelease(puVar15);
  return;
}

