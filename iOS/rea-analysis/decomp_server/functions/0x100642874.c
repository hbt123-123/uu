// rea decompile_all
// name: FUN_100642874
// address: 0x100642874
// body: available
// range: 0x100642874-0x100642f9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100642874(ulong param_1,ulong param_2,char param_3,long param_4,long param_5)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *unaff_x20;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *local_a8;
  
  if (param_5 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100642fa0);
    (*pcVar4)();
  }
  if (param_3 == '\0') {
    if (param_2 == 0) {
      uVar16 = (ulong)(param_1 != 0);
    }
    else {
      uVar16 = 2;
    }
  }
  else if (param_3 == '\x01') {
    uVar16 = param_2 - param_1;
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1006428d0);
      (*pcVar4)();
    }
  }
  else {
    uVar16 = *(ulong *)(param_4 + 0x10);
  }
  uVar17 = 0;
  bVar6 = false;
  do {
    if (((long)uVar16 <= (long)uVar17) && (!bVar6)) {
      return;
    }
    uVar8 = param_5 + uVar17;
    if (SCARRY8(param_5,uVar17)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100642f24);
      (*pcVar4)();
    }
    if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100642f28);
      (*pcVar4)();
    }
    uVar10 = *unaff_x20;
    uVar14 = unaff_x20[1];
    cVar1 = (char)unaff_x20[2];
    puVar13 = (undefined *)unaff_x20[3];
    if (cVar1 == '\0') {
      uVar15 = uVar10;
      if ((uVar8 != 0) && (uVar15 = uVar14, uVar8 != 1)) goto LAB_1006429d8;
    }
    else {
      if (cVar1 == '\x01') {
        if (SBORROW8(uVar14,uVar10)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100642f30);
          (*pcVar4)();
        }
        if ((long)(uVar14 - uVar10) <= (long)uVar8) {
LAB_1006429d8:
          uVar15 = 0;
          goto LAB_1006429dc;
        }
        uVar15 = uVar10 + uVar8;
        if (SCARRY8(uVar10,uVar8)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100642f38);
          (*pcVar4)();
        }
        if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100642f48);
          (*pcVar4)();
        }
        if (*(ulong *)(puVar13 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100642f50);
          (*pcVar4)();
        }
      }
      else {
        uVar15 = uVar8;
        if (*(ulong *)(puVar13 + 0x10) <= uVar8) goto LAB_1006429d8;
      }
      uVar15 = *(ulong *)(puVar13 + uVar15 * 8 + 0x20);
    }
LAB_1006429dc:
    local_a8 = puVar13;
    if (param_3 == '\0') {
      uVar12 = param_1;
      if ((uVar17 != 0) && (uVar12 = param_2, uVar17 != 1)) goto LAB_100642b0c;
LAB_100642a60:
      bVar5 = CARRY8(uVar15,uVar12);
      uVar15 = uVar15 + uVar12;
      bVar3 = (long)uVar16 <= (long)uVar17 || bVar6;
      bVar6 = bVar5;
      if (bVar3) goto LAB_100642a6c;
LAB_100642b14:
      if (cVar1 == '\0') {
        if (uVar8 == 0) {
          *unaff_x20 = uVar15;
          *(undefined1 *)(unaff_x20 + 2) = 0;
        }
        else {
          if (uVar8 != 1) goto LAB_100642cc0;
          unaff_x20[1] = uVar15;
          *(undefined1 *)(unaff_x20 + 2) = 0;
        }
      }
      else {
        if (cVar1 == '\x01') {
          uVar12 = uVar14 - uVar10;
          if (SBORROW8(uVar14,uVar10)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100642f40);
            (*pcVar4)();
          }
          if ((long)uVar12 <= (long)uVar8) {
LAB_100642cc0:
            if (uVar15 != 0) {
              if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100642f58);
                (*pcVar4)();
              }
              FUN_100646ccc(uVar8 + 1);
              lVar2 = uVar8 - *(ulong *)(unaff_x20[3] + 0x10);
              if (uVar8 < *(ulong *)(unaff_x20[3] + 0x10)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100642f5c);
                (*pcVar4)();
              }
              if (lVar2 < 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100642f60);
                (*pcVar4)();
              }
              FUN_10062872c(lVar2,0);
              uVar14 = unaff_x20[3];
              uVar8 = uVar14;
              _swift_isUniquelyReferenced_nonNull_native();
              uVar10 = uVar14;
              if ((uVar8 & 1) == 0) {
                uVar10 = 0;
                FUN_10062958c(0,*(long *)(uVar14 + 0x10) + 1,1,uVar14);
              }
              uVar8 = *(ulong *)(uVar10 + 0x10);
              uVar14 = uVar10;
              if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar8) {
                uVar14 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
                FUN_10062958c(uVar14,uVar8 + 1,1,uVar10);
              }
              *(ulong *)(uVar14 + 0x10) = uVar8 + 1;
              *(ulong *)(uVar14 + uVar8 * 8 + 0x20) = uVar15;
              unaff_x20[3] = uVar14;
            }
            goto LAB_100642934;
          }
          *unaff_x20 = 0;
          unaff_x20[1] = 0;
          *(undefined1 *)(unaff_x20 + 2) = 2;
          if ((long)uVar14 < (long)uVar10) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100642f78);
            (*pcVar4)();
          }
          if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100642f84);
            (*pcVar4)();
          }
          uVar11 = *(ulong *)(puVar13 + 0x10);
          if ((uVar11 < uVar10) || ((long)uVar11 < (long)uVar14)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100642f88);
            (*pcVar4)();
          }
          if (uVar11 != uVar12) {
            local_a8 = PTR___swiftEmptyArrayStorage_100995ea0;
            if (uVar14 != uVar10) {
              local_a8 = &DAT_100ab7e10;
              FUN_100004bb4(&DAT_100ab7e10,&DAT_100848cb8);
              _swift_allocObject();
              puVar9 = local_a8;
              _malloc_size();
              puVar7 = puVar9 + -0x19;
              if (0x1f < (long)puVar9) {
                puVar7 = puVar9 + -0x20;
              }
              *(ulong *)(local_a8 + 0x10) = uVar12;
              *(long *)(local_a8 + 0x18) = ((long)puVar7 >> 3) << 1;
              _memcpy(local_a8 + 0x20,puVar13 + uVar10 * 8 + 0x20,uVar12 * 8);
            }
            _swift_bridgeObjectRelease(puVar13);
          }
          if (*(ulong *)(local_a8 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100642f90);
            (*pcVar4)();
          }
          puVar13 = local_a8;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar13 & 1) == 0) {
            FUN_1006541a4();
          }
          uVar10 = *(ulong *)(local_a8 + 0x10);
          if (uVar10 <= uVar8) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100642f98);
            (*pcVar4)();
          }
        }
        else {
          if (*(ulong *)(puVar13 + 0x10) <= uVar8) goto LAB_100642cc0;
          puVar7 = puVar13;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar7 & 1) == 0) {
            FUN_1006541a4();
            local_a8 = puVar13;
          }
          uVar10 = *(ulong *)(local_a8 + 0x10);
          if (uVar10 <= uVar8) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100642f74);
            (*pcVar4)();
          }
        }
        *(ulong *)(local_a8 + uVar8 * 8 + 0x20) = uVar15;
        unaff_x20[3] = (ulong)local_a8;
        if ((uVar15 == 0) && (uVar8 == uVar10 - 1)) {
          FUN_100645d2c();
        }
      }
    }
    else {
      if (param_3 != '\x01') {
        if (*(ulong *)(param_4 + 0x10) <= uVar17) goto LAB_100642b0c;
        uVar12 = *(ulong *)(param_4 + 0x20 + uVar17 * 8);
        goto LAB_100642a60;
      }
      if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100642f34);
        (*pcVar4)();
      }
      if ((long)uVar17 < (long)(param_2 - param_1)) {
        uVar12 = param_1 + uVar17;
        if (SCARRY8(param_1,uVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100642f44);
          (*pcVar4)();
        }
        if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100642f4c);
          (*pcVar4)();
        }
        if (*(ulong *)(param_4 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100642f54);
          (*pcVar4)();
        }
        uVar12 = *(ulong *)(param_4 + 0x20 + uVar12 * 8);
        goto LAB_100642a60;
      }
LAB_100642b0c:
      bVar5 = false;
      bVar3 = !bVar6;
      bVar6 = bVar5;
      if ((long)uVar16 > (long)uVar17 && bVar3) goto LAB_100642b14;
LAB_100642a6c:
      bVar6 = 0xfffffffffffffffe < uVar15;
      uVar15 = uVar15 + 1;
      if (cVar1 == '\0') {
        if (uVar8 == 0) {
          *unaff_x20 = uVar15;
          *(undefined1 *)(unaff_x20 + 2) = 0;
        }
        else {
          if (uVar8 != 1) goto LAB_100642c08;
          unaff_x20[1] = uVar15;
          *(undefined1 *)(unaff_x20 + 2) = 0;
        }
      }
      else {
        if (cVar1 == '\x01') {
          uVar12 = uVar14 - uVar10;
          if (SBORROW8(uVar14,uVar10)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100642f3c);
            (*pcVar4)();
          }
          if ((long)uVar12 <= (long)uVar8) {
LAB_100642c08:
            if (!bVar6) {
              if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100642f64);
                (*pcVar4)();
              }
              FUN_100646ccc(uVar8 + 1);
              lVar2 = uVar8 - *(ulong *)(unaff_x20[3] + 0x10);
              if (uVar8 < *(ulong *)(unaff_x20[3] + 0x10)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100642f68);
                (*pcVar4)();
              }
              if (lVar2 < 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100642f6c);
                (*pcVar4)();
              }
              FUN_10062872c(lVar2,0);
              uVar14 = unaff_x20[3];
              uVar8 = uVar14;
              _swift_isUniquelyReferenced_nonNull_native();
              uVar10 = uVar14;
              if ((uVar8 & 1) == 0) {
                uVar10 = 0;
                FUN_10062958c(0,*(long *)(uVar14 + 0x10) + 1,1,uVar14);
              }
              uVar8 = *(ulong *)(uVar10 + 0x10);
              uVar14 = uVar10;
              if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar8) {
                uVar14 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
                FUN_10062958c(uVar14,uVar8 + 1,1,uVar10);
              }
              *(ulong *)(uVar14 + 0x10) = uVar8 + 1;
              *(ulong *)(uVar14 + uVar8 * 8 + 0x20) = uVar15;
              unaff_x20[3] = uVar14;
            }
            goto LAB_100642930;
          }
          *unaff_x20 = 0;
          unaff_x20[1] = 0;
          *(undefined1 *)(unaff_x20 + 2) = 2;
          if ((long)uVar14 < (long)uVar10) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100642f7c);
            (*pcVar4)();
          }
          if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100642f80);
            (*pcVar4)();
          }
          uVar11 = *(ulong *)(puVar13 + 0x10);
          if ((uVar11 < uVar10) || ((long)uVar11 < (long)uVar14)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100642f8c);
            (*pcVar4)();
          }
          if (uVar11 != uVar12) {
            local_a8 = PTR___swiftEmptyArrayStorage_100995ea0;
            if (uVar14 != uVar10) {
              local_a8 = &DAT_100ab7e10;
              FUN_100004bb4(&DAT_100ab7e10,&DAT_100848cb8);
              _swift_allocObject();
              puVar9 = local_a8;
              _malloc_size();
              puVar7 = puVar9 + -0x19;
              if (0x1f < (long)puVar9) {
                puVar7 = puVar9 + -0x20;
              }
              *(ulong *)(local_a8 + 0x10) = uVar12;
              *(long *)(local_a8 + 0x18) = ((long)puVar7 >> 3) << 1;
              _memcpy(local_a8 + 0x20,puVar13 + uVar10 * 8 + 0x20,uVar12 * 8);
            }
            _swift_bridgeObjectRelease(puVar13);
          }
          if (*(ulong *)(local_a8 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100642f94);
            (*pcVar4)();
          }
          puVar13 = local_a8;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar13 & 1) == 0) {
            FUN_1006541a4();
          }
          uVar10 = *(ulong *)(local_a8 + 0x10);
          if (uVar10 <= uVar8) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100642f9c);
            (*pcVar4)();
          }
          *(ulong *)(local_a8 + uVar8 * 8 + 0x20) = uVar15;
          unaff_x20[3] = (ulong)local_a8;
        }
        else {
          if (*(ulong *)(puVar13 + 0x10) <= uVar8) goto LAB_100642c08;
          puVar7 = puVar13;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar7 & 1) == 0) {
            FUN_1006541a4();
          }
          uVar10 = *(ulong *)(puVar13 + 0x10);
          if (uVar10 <= uVar8) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100642f70);
            (*pcVar4)();
          }
          *(ulong *)(puVar13 + uVar8 * 8 + 0x20) = uVar15;
          unaff_x20[3] = (ulong)puVar13;
        }
        if (uVar8 == uVar10 - 1 && bVar6) {
          FUN_100645d2c();
        }
      }
LAB_100642930:
      bVar6 = (bool)(bVar5 | bVar6);
    }
LAB_100642934:
    bVar5 = SCARRY8(uVar17,1);
    uVar17 = uVar17 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100642f2c);
      (*pcVar4)();
    }
  } while( true );
}

