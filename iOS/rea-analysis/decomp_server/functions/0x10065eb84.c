// rea decompile_all
// name: FUN_10065eb84
// address: 0x10065eb84
// body: available
// range: 0x10065eb84-0x10065f31f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10065eb84(ulong param_1,ulong param_2,char param_3,long param_4,long param_5)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *unaff_x20;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *local_b0;
  ulong local_88;
  ulong local_68;
  
  if (param_5 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f320);
    (*pcVar3)();
  }
  if (param_3 == '\0') {
    local_68 = (ulong)(param_1 != 0);
    if (param_2 != 0) {
      local_68 = 2;
    }
  }
  else if (param_3 == '\x01') {
    local_68 = param_2 - param_1;
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10065ebe4);
      (*pcVar3)();
    }
  }
  else {
    local_68 = *(ulong *)(param_4 + 0x10);
  }
  uVar15 = *unaff_x20;
  uVar7 = unaff_x20[1];
  if ((char)unaff_x20[2] == '\0') {
    if (uVar7 == 0) {
      local_88 = (ulong)(uVar15 != 0);
    }
    else {
      local_88 = 2;
    }
  }
  else if ((char)unaff_x20[2] == '\x01') {
    local_88 = uVar7 - uVar15;
    if (SBORROW8(uVar7,uVar15)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10065ec34);
      (*pcVar3)();
    }
  }
  else {
    local_88 = *(ulong *)(unaff_x20[3] + 0x10);
  }
  uVar15 = 0;
  bVar4 = false;
  do {
    uVar7 = param_5 + uVar15;
    if ((long)uVar15 < (long)local_68) {
      bVar5 = bVar4;
      if (SCARRY8(param_5,uVar15)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f2a0);
        (*pcVar3)();
      }
    }
    else {
      if (SCARRY8(param_5,uVar15)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f2ac);
        (*pcVar3)();
      }
      if (((long)uVar7 < (long)local_88 & bVar4) == 0) {
        return bVar4;
      }
      bVar5 = true;
    }
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f2a4);
      (*pcVar3)();
    }
    uVar9 = *unaff_x20;
    uVar14 = unaff_x20[1];
    cVar1 = (char)unaff_x20[2];
    puVar13 = (undefined *)unaff_x20[3];
    local_b0 = puVar13;
    if (cVar1 == '\0') {
      uVar16 = uVar9;
      if ((uVar7 != 0) && (uVar16 = uVar14, uVar7 != 1)) goto LAB_10065edbc;
joined_r0x00010065ed50:
      if (param_3 != '\0') goto LAB_10065ed54;
LAB_10065edc8:
      uVar12 = param_1;
      if ((uVar15 != 0) && (uVar12 = param_2, uVar15 != 1)) goto LAB_10065ee88;
LAB_10065edf8:
      bVar4 = uVar16 < uVar12;
      uVar16 = uVar16 - uVar12;
      if (bVar5 != false) goto LAB_10065ee04;
LAB_10065ee90:
      if (cVar1 == '\0') {
        if (uVar7 == 0) {
          *unaff_x20 = uVar16;
          *(undefined1 *)(unaff_x20 + 2) = 0;
        }
        else {
          if (uVar7 != 1) goto LAB_10065f038;
          unaff_x20[1] = uVar16;
          *(undefined1 *)(unaff_x20 + 2) = 0;
        }
      }
      else {
        if (cVar1 == '\x01') {
          uVar12 = uVar14 - uVar9;
          if (SBORROW8(uVar14,uVar9)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f2c0);
            (*pcVar3)();
          }
          if ((long)uVar12 <= (long)uVar7) {
LAB_10065f038:
            if (uVar16 != 0) {
              if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f2d8);
                (*pcVar3)();
              }
              FUN_100646ccc(uVar7 + 1);
              lVar2 = uVar7 - *(ulong *)(unaff_x20[3] + 0x10);
              if (uVar7 < *(ulong *)(unaff_x20[3] + 0x10)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f2e4);
                (*pcVar3)();
              }
              if (lVar2 < 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f2e8);
                (*pcVar3)();
              }
              FUN_10062872c(lVar2,0);
              uVar14 = unaff_x20[3];
              uVar7 = uVar14;
              _swift_isUniquelyReferenced_nonNull_native();
              uVar9 = uVar14;
              if ((uVar7 & 1) == 0) {
                uVar9 = 0;
                FUN_10062958c(0,*(long *)(uVar14 + 0x10) + 1,1,uVar14);
              }
              uVar7 = *(ulong *)(uVar9 + 0x10);
              uVar14 = uVar9;
              if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar7) {
                uVar14 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
                FUN_10062958c(uVar14,uVar7 + 1,1,uVar9);
              }
              *(ulong *)(uVar14 + 0x10) = uVar7 + 1;
              *(ulong *)(uVar14 + uVar7 * 8 + 0x20) = uVar16;
              unaff_x20[3] = uVar14;
            }
            goto LAB_10065ec94;
          }
          *unaff_x20 = 0;
          unaff_x20[1] = 0;
          *(undefined1 *)(unaff_x20 + 2) = 2;
          if ((long)uVar14 < (long)uVar9) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f2fc);
            (*pcVar3)();
          }
          if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f300);
            (*pcVar3)();
          }
          uVar11 = *(ulong *)(puVar13 + 0x10);
          if ((uVar11 < uVar9) || ((long)uVar11 < (long)uVar14)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f308);
            (*pcVar3)();
          }
          if (uVar11 != uVar12) {
            local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
            if (uVar14 != uVar9) {
              local_b0 = &DAT_100ab7e10;
              FUN_100004bb4(&DAT_100ab7e10,&DAT_100848cb8);
              _swift_allocObject();
              puVar8 = local_b0;
              _malloc_size();
              puVar6 = puVar8 + -0x19;
              if (0x1f < (long)puVar8) {
                puVar6 = puVar8 + -0x20;
              }
              *(ulong *)(local_b0 + 0x10) = uVar12;
              *(long *)(local_b0 + 0x18) = ((long)puVar6 >> 3) << 1;
              _memcpy(local_b0 + 0x20,puVar13 + uVar9 * 8 + 0x20,uVar12 * 8);
            }
            _swift_bridgeObjectRelease(puVar13);
          }
          if (*(ulong *)(local_b0 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f314);
            (*pcVar3)();
          }
          puVar13 = local_b0;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar13 & 1) == 0) {
            FUN_1006541a4();
          }
          uVar9 = *(ulong *)(local_b0 + 0x10);
          if (uVar9 <= uVar7) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f31c);
            (*pcVar3)();
          }
        }
        else {
          if (*(ulong *)(puVar13 + 0x10) <= uVar7) goto LAB_10065f038;
          puVar6 = puVar13;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar6 & 1) == 0) {
            FUN_1006541a4();
            local_b0 = puVar13;
          }
          uVar9 = *(ulong *)(local_b0 + 0x10);
          if (uVar9 <= uVar7) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f2f4);
            (*pcVar3)();
          }
        }
        *(ulong *)(local_b0 + uVar7 * 8 + 0x20) = uVar16;
        unaff_x20[3] = (ulong)local_b0;
        if ((uVar16 == 0) && (uVar7 == uVar9 - 1)) {
          FUN_100645d2c();
        }
      }
    }
    else {
      if (cVar1 == '\x01') {
        if (SBORROW8(uVar14,uVar9)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f2b0);
          (*pcVar3)();
        }
        if ((long)(uVar14 - uVar9) <= (long)uVar7) goto LAB_10065edbc;
        uVar16 = uVar9 + uVar7;
        if (SCARRY8(uVar9,uVar7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f2b8);
          (*pcVar3)();
        }
        if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f2c8);
          (*pcVar3)();
        }
        if (*(ulong *)(puVar13 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f2d0);
          (*pcVar3)();
        }
        uVar16 = *(ulong *)(puVar13 + uVar16 * 8 + 0x20);
      }
      else {
        if (uVar7 < *(ulong *)(puVar13 + 0x10)) {
          uVar16 = *(ulong *)(puVar13 + uVar7 * 8 + 0x20);
          goto joined_r0x00010065ed50;
        }
LAB_10065edbc:
        uVar16 = 0;
      }
      if (param_3 == '\0') goto LAB_10065edc8;
LAB_10065ed54:
      if (param_3 == '\x01') {
        if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f2b4);
          (*pcVar3)();
        }
        if ((long)(param_2 - param_1) <= (long)uVar15) goto LAB_10065ee88;
        uVar12 = param_1 + uVar15;
        if (SCARRY8(param_1,uVar15)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f2c4);
          (*pcVar3)();
        }
        if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f2cc);
          (*pcVar3)();
        }
        if (*(ulong *)(param_4 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f2d4);
          (*pcVar3)();
        }
        uVar12 = *(ulong *)(param_4 + 0x20 + uVar12 * 8);
        goto LAB_10065edf8;
      }
      if (uVar15 < *(ulong *)(param_4 + 0x10)) {
        uVar12 = *(ulong *)(param_4 + 0x20 + uVar15 * 8);
        goto LAB_10065edf8;
      }
LAB_10065ee88:
      bVar4 = false;
      if (bVar5 == false) goto LAB_10065ee90;
LAB_10065ee04:
      uVar12 = uVar16 - 1;
      if (cVar1 == '\0') {
        if (uVar7 == 0) {
          *unaff_x20 = uVar12;
          *(undefined1 *)(unaff_x20 + 2) = 0;
        }
        else {
          if (uVar7 != 1) goto LAB_10065ef80;
          unaff_x20[1] = uVar12;
          *(undefined1 *)(unaff_x20 + 2) = 0;
        }
      }
      else {
        if (cVar1 == '\x01') {
          uVar11 = uVar14 - uVar9;
          if (SBORROW8(uVar14,uVar9)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f2bc);
            (*pcVar3)();
          }
          if ((long)uVar11 <= (long)uVar7) {
LAB_10065ef80:
            if (uVar12 != 0) {
              if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f2dc);
                (*pcVar3)();
              }
              FUN_100646ccc(uVar7 + 1);
              lVar2 = uVar7 - *(ulong *)(unaff_x20[3] + 0x10);
              if (uVar7 < *(ulong *)(unaff_x20[3] + 0x10)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f2e0);
                (*pcVar3)();
              }
              if (lVar2 < 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f2ec);
                (*pcVar3)();
              }
              FUN_10062872c(lVar2,0);
              uVar14 = unaff_x20[3];
              uVar7 = uVar14;
              _swift_isUniquelyReferenced_nonNull_native();
              uVar9 = uVar14;
              if ((uVar7 & 1) == 0) {
                uVar9 = 0;
                FUN_10062958c(0,*(long *)(uVar14 + 0x10) + 1,1,uVar14);
              }
              uVar7 = *(ulong *)(uVar9 + 0x10);
              uVar14 = uVar9;
              if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar7) {
                uVar14 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
                FUN_10062958c(uVar14,uVar7 + 1,1,uVar9);
              }
              *(ulong *)(uVar14 + 0x10) = uVar7 + 1;
              *(ulong *)(uVar14 + uVar7 * 8 + 0x20) = uVar12;
              unaff_x20[3] = uVar14;
            }
            goto LAB_10065ec90;
          }
          *unaff_x20 = 0;
          unaff_x20[1] = 0;
          *(undefined1 *)(unaff_x20 + 2) = 2;
          if ((long)uVar14 < (long)uVar9) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f2f8);
            (*pcVar3)();
          }
          if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f304);
            (*pcVar3)();
          }
          uVar10 = *(ulong *)(puVar13 + 0x10);
          if ((uVar10 < uVar9) || ((long)uVar10 < (long)uVar14)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f30c);
            (*pcVar3)();
          }
          if (uVar10 != uVar11) {
            local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
            if (uVar14 != uVar9) {
              local_b0 = &DAT_100ab7e10;
              FUN_100004bb4(&DAT_100ab7e10,&DAT_100848cb8);
              _swift_allocObject();
              puVar8 = local_b0;
              _malloc_size();
              puVar6 = puVar8 + -0x19;
              if (0x1f < (long)puVar8) {
                puVar6 = puVar8 + -0x20;
              }
              *(ulong *)(local_b0 + 0x10) = uVar11;
              *(long *)(local_b0 + 0x18) = ((long)puVar6 >> 3) << 1;
              _memcpy(local_b0 + 0x20,puVar13 + uVar9 * 8 + 0x20,uVar11 * 8);
            }
            _swift_bridgeObjectRelease(puVar13);
          }
          if (*(ulong *)(local_b0 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f310);
            (*pcVar3)();
          }
          puVar13 = local_b0;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar13 & 1) == 0) {
            FUN_1006541a4();
          }
          uVar9 = *(ulong *)(local_b0 + 0x10);
          if (uVar9 <= uVar7) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f318);
            (*pcVar3)();
          }
        }
        else {
          if (*(ulong *)(puVar13 + 0x10) <= uVar7) goto LAB_10065ef80;
          puVar6 = puVar13;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar6 & 1) == 0) {
            FUN_1006541a4();
            local_b0 = puVar13;
          }
          uVar9 = *(ulong *)(local_b0 + 0x10);
          if (uVar9 <= uVar7) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f2f0);
            (*pcVar3)();
          }
        }
        *(ulong *)(local_b0 + uVar7 * 8 + 0x20) = uVar12;
        unaff_x20[3] = (ulong)local_b0;
        if ((uVar12 == 0) && (uVar7 == uVar9 - 1)) {
          FUN_100645d2c();
        }
      }
LAB_10065ec90:
      bVar4 = (bool)(bVar4 | uVar16 == 0);
    }
LAB_10065ec94:
    bVar5 = SCARRY8(uVar15,1);
    uVar15 = uVar15 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10065f2a8);
      (*pcVar3)();
    }
  } while( true );
}

