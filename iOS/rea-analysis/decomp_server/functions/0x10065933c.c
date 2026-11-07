// rea decompile_all
// name: FUN_10065933c
// address: 0x10065933c
// body: available
// range: 0x10065933c-0x1006599cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10065933c(ulong param_1,ulong param_2,ulong param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  undefined *local_c0;
  ulong local_80;
  ulong local_78;
  char local_70;
  undefined *local_68;
  
  if (param_1 == 0) {
    _swift_bridgeObjectRetain(param_5);
    local_80 = param_2;
  }
  else {
    uVar16 = param_2;
    FUN_10065f798(param_2,param_3,param_4,param_5);
    local_80 = 0;
    if ((0 < (long)uVar16) && (param_1 < uVar16)) {
      uVar16 = param_1 >> 6;
      local_80 = 0;
      local_78 = 0;
      local_70 = '\0';
      local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
      uVar11 = (uint)param_4;
      if ((param_1 & 0x3f) == 0) {
        if ((param_4 & 0xff) == 0) {
          uVar13 = (ulong)(param_2 != 0);
          if (param_3 != 0) {
            uVar13 = 2;
          }
        }
        else if ((uVar11 & 0xff) == 1) {
          uVar13 = param_3 - param_2;
          if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100659444);
            (*pcVar3)();
          }
        }
        else {
          uVar13 = *(ulong *)(param_5 + 0x10);
        }
        if ((long)uVar13 < (long)uVar16) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1006599cc);
          (*pcVar3)();
        }
        if (uVar13 != uVar16) {
          uVar7 = uVar13 - 1;
          puVar15 = (ulong *)(param_5 + uVar13 * 8 + 0x18);
          do {
            lVar10 = uVar7 + 1;
            if (lVar10 <= (long)uVar16) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100659968);
              (*pcVar3)();
            }
            if ((param_4 & 0xff) == 0) {
              uVar13 = param_2;
              if ((lVar10 != 1) && (uVar13 = param_3, lVar10 != 2)) goto LAB_1006598ec;
            }
            else if ((uVar11 & 0xff) == 1) {
              if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x100659990);
                (*pcVar3)();
              }
              if ((long)(param_3 - param_2) < lVar10) {
LAB_1006598ec:
                uVar13 = 0;
              }
              else {
                uVar13 = param_2 + uVar7;
                if (SCARRY8(param_2,uVar7)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006599bc);
                  (*pcVar3)();
                }
                if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006599c0);
                  (*pcVar3)();
                }
                if (*(ulong *)(param_5 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006599c4);
                  (*pcVar3)();
                }
                uVar13 = *(ulong *)(param_5 + 0x20 + uVar13 * 8);
              }
            }
            else {
              if (*(ulong *)(param_5 + 0x10) <= uVar7) goto LAB_1006598ec;
              uVar13 = *puVar15;
            }
            uVar9 = -uVar16 + uVar7;
            if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10065996c);
              (*pcVar3)();
            }
            if (local_70 == '\0') {
              uVar2 = uVar13;
              uVar14 = local_78;
              if ((uVar7 != uVar16) && (uVar2 = local_80, uVar14 = uVar13, uVar9 != 1))
              goto LAB_100659854;
              local_78 = uVar14;
              local_80 = uVar2;
              local_70 = '\0';
            }
            else {
              if (local_70 == '\x01') {
                if (SBORROW8(local_78,local_80)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x100659994);
                  (*pcVar3)();
                }
                if ((long)(local_78 - local_80) <= (long)uVar9) {
LAB_100659854:
                  FUN_100647128();
                  goto LAB_10065985c;
                }
              }
              else if (*(ulong *)(local_68 + 0x10) <= uVar9) goto LAB_100659854;
              FUN_100647088();
            }
LAB_10065985c:
            uVar7 = uVar7 - 1;
            puVar15 = puVar15 + -1;
          } while (-uVar16 + uVar7 != -1);
        }
      }
      else {
        if ((param_4 & 0xff) == 0) {
          uVar13 = (ulong)(param_2 != 0);
          if (param_3 != 0) {
            uVar13 = 2;
          }
        }
        else if ((uVar11 & 0xff) == 1) {
          uVar13 = param_3 - param_2;
          if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1006593ec);
            (*pcVar3)();
          }
        }
        else {
          uVar13 = *(ulong *)(param_5 + 0x10);
        }
        if ((long)uVar13 < (long)uVar16) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1006599c8);
          (*pcVar3)();
        }
        if (uVar13 != uVar16) {
          uVar7 = 0;
          puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
          do {
            uVar2 = local_78;
            uVar9 = local_80;
            if ((long)uVar13 <= (long)uVar16) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100659960);
              (*pcVar3)();
            }
            uVar14 = uVar13 - 1;
            if ((param_4 & 0xff) == 0) {
              uVar1 = param_3;
              if (uVar13 != 2) {
                uVar1 = 0;
              }
              uVar12 = param_2;
              if (uVar13 != 1) {
                uVar12 = uVar1;
              }
            }
            else if ((uVar11 & 0xff) == 1) {
              if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x100659980);
                (*pcVar3)();
              }
              if ((long)(param_3 - param_2) < (long)uVar13) {
LAB_100659560:
                uVar12 = 0;
              }
              else {
                uVar13 = param_2 + uVar14;
                if (SCARRY8(param_2,uVar14)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x100659998);
                  (*pcVar3)();
                }
                if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006599a0);
                  (*pcVar3)();
                }
                if (*(ulong *)(param_5 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006599a8);
                  (*pcVar3)();
                }
                uVar12 = *(ulong *)(param_5 + 0x20 + uVar13 * 8);
              }
            }
            else {
              if (*(ulong *)(param_5 + 0x10) <= uVar14) goto LAB_100659560;
              uVar12 = *(ulong *)(param_5 + 0x20 + uVar14 * 8);
            }
            uVar13 = uVar14 - uVar16;
            if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100659964);
              (*pcVar3)();
            }
            uVar7 = uVar12 >> (param_1 & 0x3f) | uVar7;
            if (local_70 == '\0') {
              uVar9 = uVar7;
              if ((uVar13 != 0) && (uVar9 = local_80, uVar2 = uVar7, uVar13 != 1))
              goto LAB_10065967c;
              local_78 = uVar2;
              local_80 = uVar9;
              local_70 = '\0';
            }
            else if (local_70 == '\x01') {
              uVar1 = local_78 - local_80;
              if (SBORROW8(local_78,local_80)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x100659984);
                (*pcVar3)();
              }
              if ((long)uVar13 < (long)uVar1) {
                local_80 = 0;
                local_78 = 0;
                local_70 = '\x02';
                if ((long)uVar2 < (long)uVar9) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006599a4);
                  (*pcVar3)();
                }
                if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006599ac);
                  (*pcVar3)();
                }
                uVar8 = *(ulong *)(puVar6 + 0x10);
                if ((uVar8 < uVar9) || ((long)uVar8 < (long)uVar2)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006599b0);
                  (*pcVar3)();
                }
                if (uVar8 != uVar1) {
                  local_c0 = PTR___swiftEmptyArrayStorage_100995ea0;
                  if (uVar2 != uVar9) {
                    local_c0 = &DAT_100ab7e10;
                    FUN_100004bb4(&DAT_100ab7e10,&DAT_100848cb8);
                    _swift_allocObject();
                    puVar5 = local_c0;
                    _malloc_size();
                    puVar4 = puVar5 + -0x19;
                    if (0x1f < (long)puVar5) {
                      puVar4 = puVar5 + -0x20;
                    }
                    *(ulong *)(local_c0 + 0x10) = uVar1;
                    *(long *)(local_c0 + 0x18) = ((long)puVar4 >> 3) << 1;
                    _memcpy(local_c0 + 0x20,puVar6 + uVar9 * 8 + 0x20,uVar1 * 8);
                  }
                  _swift_bridgeObjectRelease(puVar6);
                  puVar6 = local_c0;
                }
                if (*(ulong *)(puVar6 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006599b4);
                  (*pcVar3)();
                }
                puVar4 = puVar6;
                _swift_isUniquelyReferenced_nonNull_native();
                if (((ulong)puVar4 & 1) == 0) {
                  FUN_1006541a4();
                }
                uVar9 = *(ulong *)(puVar6 + 0x10);
                if (uVar9 <= uVar13) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006599b8);
                  (*pcVar3)();
                }
                *(ulong *)(puVar6 + uVar13 * 8 + 0x20) = uVar7;
                local_68 = puVar6;
                if (((uVar7 == 0) && (uVar13 == uVar9 - 1)) &&
                   (*(long *)(puVar6 + uVar13 * 8 + 0x20) == 0)) {
                  while ((*(long *)(puVar6 + 0x10) != 0 &&
                         (lVar10 = *(long *)(puVar6 + 0x10) + -1,
                         *(long *)(puVar6 + lVar10 * 8 + 0x20) == 0))) {
                    *(long *)(puVar6 + 0x10) = lVar10;
                  }
                }
              }
              else {
LAB_10065967c:
                if (uVar7 != 0) {
                  FUN_100646ccc(uVar13 + 1);
                  lVar10 = uVar13 - *(ulong *)(local_68 + 0x10);
                  if (uVar13 < *(ulong *)(local_68 + 0x10)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x100659988);
                    (*pcVar3)();
                  }
                  if (lVar10 < 0) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10065998c);
                    (*pcVar3)();
                  }
                  FUN_10062872c(&local_80,lVar10,0);
                  puVar6 = local_68;
                  puVar4 = local_68;
                  _swift_isUniquelyReferenced_nonNull_native();
                  puVar5 = puVar6;
                  if (((ulong)puVar4 & 1) == 0) {
                    puVar5 = (undefined *)0x0;
                    FUN_10062958c(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
                  }
                  uVar13 = *(ulong *)(puVar5 + 0x10);
                  puVar6 = puVar5;
                  if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar13) {
                    puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
                    FUN_10062958c(puVar6,uVar13 + 1,1,puVar5);
                  }
                  *(ulong *)(puVar6 + 0x10) = uVar13 + 1;
                  *(ulong *)(puVar6 + uVar13 * 8 + 0x20) = uVar7;
                  local_68 = puVar6;
                }
              }
            }
            else {
              if (*(ulong *)(puVar6 + 0x10) <= uVar13) goto LAB_10065967c;
              puVar4 = puVar6;
              _swift_isUniquelyReferenced_nonNull_native();
              if (((ulong)puVar4 & 1) == 0) {
                FUN_1006541a4();
              }
              uVar9 = *(ulong *)(puVar6 + 0x10);
              if (uVar9 <= uVar13) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10065999c);
                (*pcVar3)();
              }
              *(ulong *)(puVar6 + uVar13 * 8 + 0x20) = uVar7;
              local_68 = puVar6;
              if (((uVar7 == 0) && (uVar13 == uVar9 - 1)) &&
                 (*(long *)(puVar6 + uVar13 * 8 + 0x20) == 0)) {
                while ((*(long *)(puVar6 + 0x10) != 0 &&
                       (lVar10 = *(long *)(puVar6 + 0x10) + -1,
                       *(long *)(puVar6 + lVar10 * 8 + 0x20) == 0))) {
                  *(long *)(puVar6 + 0x10) = lVar10;
                }
              }
            }
            uVar7 = uVar12 << (-param_1 & 0x3f);
            uVar13 = uVar14;
          } while (uVar14 != uVar16);
        }
      }
    }
  }
  return local_80;
}

