// rea decompile_all
// name: FUN_100653848
// address: 0x100653848
// body: available
// range: 0x100653848-0x10065409f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100653908 to 0x100642874 FUN_100642874 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100653848(ulong param_1,ulong param_2,ulong param_3,long param_4,ulong param_5,long param_6
                  )

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *unaff_x20;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *local_b8;
  ulong local_68;
  
  if (param_6 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10065406c);
    (*pcVar4)();
  }
  if (param_5 != 0) {
    if ((param_3 & 0xff) == 0) {
      if (param_2 != 0 || param_1 != 0) goto LAB_1006538d4;
    }
    else {
      if (((uint)param_3 & 0xff) == 1) {
        lVar10 = param_2 - param_1;
        if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1006540a0);
          (*pcVar4)();
        }
      }
      else {
        lVar10 = *(long *)(param_4 + 0x10);
      }
      if (0 < lVar10) {
LAB_1006538d4:
        if (param_5 == 1) {
          FUN_100642874(param_1,param_2,param_3,param_4,param_6);
          return;
        }
        if ((param_3 & 0xff) == 0) {
          if (param_2 == 0) {
            local_68 = (ulong)(param_1 != 0);
          }
          else {
            local_68 = 2;
          }
        }
        else if (((uint)param_3 & 0xff) == 1) {
          local_68 = param_2 - param_1;
          if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100653934);
            (*pcVar4)();
          }
        }
        else {
          local_68 = *(ulong *)(param_4 + 0x10);
        }
        uVar18 = 0;
        bVar5 = false;
        uVar8 = 0;
        uVar19 = param_3;
        do {
          bVar6 = (bool)((long)local_68 <= (long)uVar18 | bVar5);
          if (((long)local_68 <= (long)uVar18) && (!bVar5)) {
            if (uVar8 == 0) {
              return;
            }
            bVar6 = false;
          }
          if ((uVar19 & 0xff) == 0) {
            uVar12 = param_1;
            if ((uVar18 != 0) && (uVar12 = param_2, uVar18 != 1)) goto LAB_100653a50;
          }
          else if (((uint)uVar19 & 0xff) == 1) {
            if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10065402c);
              (*pcVar4)();
            }
            if ((long)uVar18 < (long)(param_2 - param_1)) {
              uVar12 = param_1 + uVar18;
              if (SCARRY8(param_1,uVar18)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10065403c);
                (*pcVar4)();
              }
              if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100654040);
                (*pcVar4)();
              }
              if (*(ulong *)(param_4 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100654044);
                (*pcVar4)();
              }
              uVar12 = *(ulong *)(param_4 + 0x20 + uVar12 * 8);
            }
            else {
LAB_100653a50:
              uVar12 = 0;
            }
          }
          else {
            if (*(ulong *)(param_4 + 0x10) <= uVar18) goto LAB_100653a50;
            uVar12 = *(ulong *)(param_4 + 0x20 + uVar18 * 8);
          }
          auVar2._8_8_ = 0;
          auVar2._0_8_ = uVar12;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = param_5;
          uVar11 = SUB168(auVar2 * auVar3,8);
          uVar13 = uVar12 * param_5 + uVar8;
          if (CARRY8(uVar12 * param_5,uVar8)) {
            uVar11 = uVar11 + 1;
          }
          uVar8 = param_6 + uVar18;
          if (SCARRY8(param_6,uVar18)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100654020);
            (*pcVar4)();
          }
          if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100654024);
            (*pcVar4)();
          }
          uVar12 = *unaff_x20;
          uVar17 = unaff_x20[1];
          cVar1 = (char)unaff_x20[2];
          puVar16 = (undefined *)unaff_x20[3];
          local_b8 = puVar16;
          if (cVar1 == '\0') {
            uVar14 = uVar12;
            if ((uVar8 == 0) || (uVar14 = uVar17, uVar8 == 1)) goto LAB_100653afc;
            if (!bVar6) {
              bVar5 = false;
              if (uVar13 == 0) goto LAB_1006539a0;
LAB_100653da4:
              if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100654054);
                (*pcVar4)();
              }
              FUN_100646ccc(uVar8 + 1);
              lVar10 = uVar8 - *(ulong *)(unaff_x20[3] + 0x10);
              if (uVar8 < *(ulong *)(unaff_x20[3] + 0x10)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100654058);
                (*pcVar4)();
              }
              if (lVar10 < 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10065405c);
                (*pcVar4)();
              }
              FUN_10062872c(lVar10,0);
              uVar17 = unaff_x20[3];
              uVar8 = uVar17;
              _swift_isUniquelyReferenced_nonNull_native();
              uVar12 = uVar17;
              if ((uVar8 & 1) == 0) {
                uVar12 = 0;
                FUN_10062958c(0,*(long *)(uVar17 + 0x10) + 1,1,uVar17);
              }
              uVar8 = *(ulong *)(uVar12 + 0x10);
              uVar17 = uVar12;
              if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar8) {
                uVar17 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
                FUN_10062958c(uVar17,uVar8 + 1,1,uVar12);
              }
              *(ulong *)(uVar17 + 0x10) = uVar8 + 1;
              *(ulong *)(uVar17 + uVar8 * 8 + 0x20) = uVar13;
              unaff_x20[3] = uVar17;
              goto LAB_1006539a0;
            }
            uVar14 = uVar13 + 1;
            if (uVar13 == 0xffffffffffffffff) {
              bVar5 = true;
              goto LAB_1006539a0;
            }
            bVar5 = false;
            bVar6 = false;
joined_r0x000100653e2c:
            if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100654060);
              (*pcVar4)();
            }
            FUN_100646ccc(uVar8 + 1);
            lVar10 = uVar8 - *(ulong *)(unaff_x20[3] + 0x10);
            if (uVar8 < *(ulong *)(unaff_x20[3] + 0x10)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100654064);
              (*pcVar4)();
            }
            if (lVar10 < 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100654068);
              (*pcVar4)();
            }
            FUN_10062872c(lVar10,0);
            uVar13 = unaff_x20[3];
            uVar8 = uVar13;
            _swift_isUniquelyReferenced_nonNull_native();
            uVar12 = uVar13;
            if ((uVar8 & 1) == 0) {
              uVar12 = 0;
              FUN_10062958c(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
            }
            uVar8 = *(ulong *)(uVar12 + 0x10);
            uVar13 = uVar12;
            if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar8) {
              uVar13 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
              FUN_10062958c(uVar13,uVar8 + 1,1,uVar12);
            }
            *(ulong *)(uVar13 + 0x10) = uVar8 + 1;
            *(ulong *)(uVar13 + uVar8 * 8 + 0x20) = uVar14;
            unaff_x20[3] = uVar13;
LAB_100653e14:
            bVar5 = (bool)(bVar5 | bVar6);
          }
          else {
            if (cVar1 != '\x01') {
              uVar15 = *(ulong *)(puVar16 + 0x10);
              if (uVar8 < uVar15) {
                uVar14 = *(ulong *)(puVar16 + uVar8 * 8 + 0x20);
                goto LAB_100653afc;
              }
              bVar5 = false;
              if (!bVar6) {
LAB_100653d40:
                if (uVar8 < uVar15) {
                  puVar7 = puVar16;
                  _swift_isUniquelyReferenced_nonNull_native();
                  if (((ulong)puVar7 & 1) == 0) {
                    FUN_1006541a4();
                    local_b8 = puVar16;
                  }
                  uVar12 = *(ulong *)(local_b8 + 0x10);
                  if (uVar12 <= uVar8) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x100654074);
                    (*pcVar4)();
                  }
                  goto LAB_100653d64;
                }
LAB_100653d94:
                if (uVar13 != 0) goto LAB_100653da4;
                goto LAB_1006539a0;
              }
              bVar6 = 0xfffffffffffffffe < uVar13;
              uVar14 = uVar13 + 1;
              if (uVar15 <= uVar8) goto LAB_100653cd0;
LAB_100653c88:
              puVar7 = puVar16;
              _swift_isUniquelyReferenced_nonNull_native();
              if (((ulong)puVar7 & 1) == 0) {
                FUN_1006541a4();
                local_b8 = puVar16;
              }
              uVar12 = *(ulong *)(local_b8 + 0x10);
              if (uVar12 <= uVar8) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100654070);
                (*pcVar4)();
              }
LAB_100653ca4:
              *(ulong *)(local_b8 + uVar8 * 8 + 0x20) = uVar14;
              unaff_x20[3] = (ulong)local_b8;
              if ((uVar14 == 0) && (uVar8 == uVar12 - 1)) {
                FUN_100645d2c();
              }
              goto LAB_100653e14;
            }
            uVar19 = uVar17 - uVar12;
            if (SBORROW8(uVar17,uVar12)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100654030);
              (*pcVar4)();
            }
            if ((long)uVar8 < (long)uVar19) {
              uVar14 = uVar12 + uVar8;
              if (SCARRY8(uVar12,uVar8)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100654048);
                (*pcVar4)();
              }
              if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10065404c);
                (*pcVar4)();
              }
              if (*(ulong *)(puVar16 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100654050);
                (*pcVar4)();
              }
              uVar19 = param_3 & 0xffffffff;
              uVar14 = *(ulong *)(puVar16 + uVar14 * 8 + 0x20);
LAB_100653afc:
              bVar5 = CARRY8(uVar14,uVar13);
              uVar13 = uVar14 + uVar13;
              if (bVar6) {
                bVar6 = 0xfffffffffffffffe < uVar13;
                uVar14 = uVar13 + 1;
                if (cVar1 == '\0') {
                  if (uVar8 == 0) {
                    *unaff_x20 = uVar14;
                  }
                  else {
                    if (uVar8 != 1) goto LAB_100653cd0;
                    unaff_x20[1] = uVar14;
                  }
                  *(undefined1 *)(unaff_x20 + 2) = 0;
                }
                else {
                  if (cVar1 == '\x01') {
                    uVar19 = uVar17 - uVar12;
                    if (SBORROW8(uVar17,uVar12)) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x100654034);
                      (*pcVar4)();
                    }
                    if ((long)uVar19 <= (long)uVar8) goto LAB_100653bdc;
                    goto LAB_100653b2c;
                  }
                  if (uVar8 < *(ulong *)(puVar16 + 0x10)) goto LAB_100653c88;
LAB_100653cd0:
                  if (uVar14 != 0) goto joined_r0x000100653e2c;
                }
                goto LAB_100653e14;
              }
              if (cVar1 != '\0') {
                if (cVar1 != '\x01') {
                  uVar15 = *(ulong *)(puVar16 + 0x10);
                  goto LAB_100653d40;
                }
                uVar19 = uVar17 - uVar12;
                if (SBORROW8(uVar17,uVar12)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x100654038);
                  (*pcVar4)();
                }
                goto LAB_100653be4;
              }
              if (uVar8 == 0) {
                *unaff_x20 = uVar13;
                *(undefined1 *)(unaff_x20 + 2) = 0;
              }
              else {
                if (uVar8 != 1) goto LAB_100653d94;
                unaff_x20[1] = uVar13;
                *(undefined1 *)(unaff_x20 + 2) = 0;
              }
            }
            else {
              bVar5 = false;
              if (bVar6) {
                bVar6 = 0xfffffffffffffffe < uVar13;
                uVar14 = uVar13 + 1;
                if ((long)uVar8 < (long)uVar19) {
LAB_100653b2c:
                  *unaff_x20 = 0;
                  unaff_x20[1] = 0;
                  *(undefined1 *)(unaff_x20 + 2) = 2;
                  if ((long)uVar17 < (long)uVar12) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x100654078);
                    (*pcVar4)();
                  }
                  if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x100654084);
                    (*pcVar4)();
                  }
                  uVar13 = *(ulong *)(puVar16 + 0x10);
                  if ((uVar13 < uVar12) || ((long)uVar13 < (long)uVar17)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x10065408c);
                    (*pcVar4)();
                  }
                  if (uVar13 != uVar19) {
                    local_b8 = PTR___swiftEmptyArrayStorage_100995ea0;
                    if (uVar17 != uVar12) {
                      local_b8 = &DAT_100ab7e10;
                      FUN_100004bb4(&DAT_100ab7e10,&DAT_100848cb8);
                      _swift_allocObject();
                      puVar9 = local_b8;
                      _malloc_size();
                      puVar7 = puVar9 + -0x19;
                      if (0x1f < (long)puVar9) {
                        puVar7 = puVar9 + -0x20;
                      }
                      *(ulong *)(local_b8 + 0x10) = uVar19;
                      *(long *)(local_b8 + 0x18) = ((long)puVar7 >> 3) << 1;
                      _memcpy(local_b8 + 0x20,puVar16 + uVar12 * 8 + 0x20,uVar19 * 8);
                    }
                    _swift_bridgeObjectRelease(puVar16);
                  }
                  uVar19 = param_3 & 0xffffffff;
                  if (*(ulong *)(local_b8 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x100654090);
                    (*pcVar4)();
                  }
                  puVar16 = local_b8;
                  _swift_isUniquelyReferenced_nonNull_native();
                  if (((ulong)puVar16 & 1) == 0) {
                    FUN_1006541a4();
                  }
                  uVar12 = *(ulong *)(local_b8 + 0x10);
                  if (uVar12 <= uVar8) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x10065409c);
                    (*pcVar4)();
                  }
                  goto LAB_100653ca4;
                }
LAB_100653bdc:
                uVar19 = param_3 & 0xffffffff;
                goto LAB_100653cd0;
              }
LAB_100653be4:
              if ((long)uVar19 <= (long)uVar8) {
                uVar19 = param_3 & 0xffffffff;
                goto LAB_100653d94;
              }
              *unaff_x20 = 0;
              unaff_x20[1] = 0;
              *(undefined1 *)(unaff_x20 + 2) = 2;
              if ((long)uVar17 < (long)uVar12) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10065407c);
                (*pcVar4)();
              }
              if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100654080);
                (*pcVar4)();
              }
              uVar14 = *(ulong *)(puVar16 + 0x10);
              if ((uVar14 < uVar12) || ((long)uVar14 < (long)uVar17)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100654088);
                (*pcVar4)();
              }
              if (uVar14 != uVar19) {
                local_b8 = PTR___swiftEmptyArrayStorage_100995ea0;
                if (uVar17 != uVar12) {
                  local_b8 = &DAT_100ab7e10;
                  FUN_100004bb4(&DAT_100ab7e10,&DAT_100848cb8);
                  _swift_allocObject();
                  puVar9 = local_b8;
                  _malloc_size();
                  puVar7 = puVar9 + -0x19;
                  if (0x1f < (long)puVar9) {
                    puVar7 = puVar9 + -0x20;
                  }
                  *(ulong *)(local_b8 + 0x10) = uVar19;
                  *(long *)(local_b8 + 0x18) = ((long)puVar7 >> 3) << 1;
                  _memcpy(local_b8 + 0x20,puVar16 + uVar12 * 8 + 0x20,uVar19 * 8);
                }
                _swift_bridgeObjectRelease(puVar16);
              }
              uVar19 = param_3 & 0xffffffff;
              if (*(ulong *)(local_b8 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100654094);
                (*pcVar4)();
              }
              puVar16 = local_b8;
              _swift_isUniquelyReferenced_nonNull_native();
              if (((ulong)puVar16 & 1) == 0) {
                FUN_1006541a4();
              }
              uVar12 = *(ulong *)(local_b8 + 0x10);
              if (uVar12 <= uVar8) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100654098);
                (*pcVar4)();
              }
LAB_100653d64:
              *(ulong *)(local_b8 + uVar8 * 8 + 0x20) = uVar13;
              unaff_x20[3] = (ulong)local_b8;
              if ((uVar13 == 0) && (uVar8 == uVar12 - 1)) {
                FUN_100645d2c();
              }
            }
          }
LAB_1006539a0:
          bVar6 = SCARRY8(uVar18,1);
          uVar18 = uVar18 + 1;
          uVar8 = uVar11;
          if (bVar6) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100654028);
            (*pcVar4)();
          }
        } while( true );
      }
    }
  }
  return;
}

