// rea decompile_all
// name: FUN_1006527dc
// address: 0x1006527dc
// body: available
// range: 0x1006527dc-0x1006532d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1006527dc(ulong param_1,long param_2,ulong param_3,long param_4,ulong param_5,long param_6
                   ,ulong param_7,long param_8)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  byte bVar17;
  uint uVar18;
  ulong uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  ulong local_c0;
  long lStack_b8;
  byte local_b0;
  undefined *local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  byte local_90;
  undefined8 local_88;
  undefined1 auStack_80 [32];
  
  uVar18 = (uint)param_3;
  uVar22 = (uint)param_7;
  if ((param_3 & 0xff) == 0) {
    uVar24 = (ulong)(param_1 != 0);
    if (param_2 != 0) {
      uVar24 = 2;
    }
joined_r0x0001006529c4:
    if ((param_7 & 0xff) == 0) goto LAB_100652874;
LAB_10065281c:
    if ((uVar22 & 0xff) == 1) {
      lVar26 = param_6 - param_5;
      if (SBORROW8(param_6,param_5)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1006532a8);
        (*pcVar7)();
      }
    }
    else {
      lVar26 = *(long *)(param_8 + 0x10);
    }
    if (uVar24 == 0) {
      return 0;
    }
    if (lVar26 == 0) {
      return 0;
    }
    if (lVar26 != 1) {
      if (uVar24 != 1) {
        if ((long)uVar24 <= lVar26) goto LAB_100652ab8;
        goto LAB_1006528b0;
      }
      goto LAB_1006529f4;
    }
    if ((uVar22 & 0xff) == 2) {
      if (*(long *)(param_8 + 0x10) == 0) goto LAB_100652bd4;
LAB_100652a88:
      param_5 = *(ulong *)(param_8 + 0x20);
    }
    else {
      if (SBORROW8(param_6,param_5)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1006532ac);
        (*pcVar7)();
      }
      if (0 < (long)(param_6 - param_5)) {
        if ((long)param_5 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1006532b4);
          (*pcVar7)();
        }
        if (*(ulong *)(param_8 + 0x10) <= param_5) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1006532b8);
          (*pcVar7)();
        }
        param_8 = param_8 + param_5 * 8;
        goto LAB_100652a88;
      }
LAB_100652bd4:
      param_5 = 0;
    }
  }
  else {
    if ((uVar18 & 0xff) != 1) {
      uVar24 = *(ulong *)(param_4 + 0x10);
      goto joined_r0x0001006529c4;
    }
    uVar24 = param_2 - param_1;
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1006532a4);
      (*pcVar7)();
    }
    if ((param_7 & 0xff) != 0) goto LAB_10065281c;
LAB_100652874:
    if (param_6 != 0) {
      if (uVar24 == 0) {
        return 0;
      }
      if (uVar24 == 1) {
LAB_1006529f4:
        if ((param_3 & 0xff) != 0) {
          if ((uVar18 & 0xff) == 1) {
            if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1006532b0);
              (*pcVar7)();
            }
            if ((long)(param_2 - param_1) < 1) {
LAB_100652c7c:
              param_1 = 0;
              goto LAB_100652c80;
            }
            if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1006532c0);
              (*pcVar7)();
            }
            if (*(ulong *)(param_4 + 0x10) <= param_1) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1006532c4);
              (*pcVar7)();
            }
            param_4 = param_4 + param_1 * 8;
          }
          else if (*(long *)(param_4 + 0x10) == 0) goto LAB_100652c7c;
          param_1 = *(ulong *)(param_4 + 0x20);
        }
LAB_100652c80:
        local_b0 = (byte)param_7;
        uVar24 = param_1;
        local_c0 = param_5;
        lStack_b8 = param_6;
        goto LAB_100652c90;
      }
      lVar26 = 2;
      if ((long)uVar24 < 3) {
LAB_100652ab8:
        _swift_beginAccess(&DAT_100ab9068,auStack_80,0,0);
        if (DAT_100ab9068 < (long)uVar24) {
          if ((long)uVar24 < lVar26) {
            FUN_1006476c4(&local_c0,param_5,param_6,param_7,param_8);
            uVar24 = uStack_a0;
            bVar17 = local_90;
            FUN_1006527dc();
            _swift_bridgeObjectRelease(local_88);
            uVar19 = (ulong)local_b0;
            uVar8 = local_c0;
            lVar26 = lStack_b8;
            puVar9 = local_a8;
            local_b0 = bVar17;
            FUN_1006527dc(local_c0,lStack_b8,uVar19,local_a8,param_1,param_2,param_3,param_4);
            local_c0 = uVar24;
            _swift_bridgeObjectRelease(local_a8);
            if ((param_7 & 0xff) == 0) {
              if (param_6 == 0) {
                uVar24 = (ulong)(param_5 != 0);
              }
              else {
                uVar24 = 2;
              }
            }
            else if ((uVar22 & 0xff) == 1) {
              uVar24 = param_6 - param_5;
              if (SBORROW8(param_6,param_5)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100652bd4);
                (*pcVar7)();
              }
            }
            else {
              uVar24 = *(ulong *)(param_8 + 0x10);
            }
            if (SCARRY8(uVar24,1)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1006532cc);
              (*pcVar7)();
            }
            FUN_100642874(uVar8,lVar26,uVar19,puVar9,(long)(uVar24 + 1) / 2);
            goto LAB_100652ec0;
          }
          if ((param_3 & 0xff) == 0) {
            if (param_2 == 0) {
              uVar24 = (ulong)(param_1 != 0);
            }
            else {
              uVar24 = 2;
            }
          }
          else if ((uVar18 & 0xff) == 1) {
            uVar24 = param_2 - param_1;
            if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100652d20);
              (*pcVar7)();
            }
          }
          else {
            uVar24 = *(ulong *)(param_4 + 0x10);
          }
          if (SCARRY8(uVar24,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1006532d0);
            (*pcVar7)();
          }
          FUN_1006476c4(&local_c0,param_1,param_2,param_3,param_4);
          uVar6 = local_88;
          bVar5 = local_90;
          uVar4 = local_98;
          uVar14 = uStack_a0;
          puVar9 = local_a8;
          bVar17 = local_b0;
          lVar26 = lStack_b8;
          uVar8 = local_c0;
          uVar22 = (uint)local_b0;
          uVar23 = (uint)local_90;
          FUN_1006476c4(&local_c0,param_5,param_6,param_7,param_8);
          puVar2 = local_a8;
          bVar1 = local_b0;
          lVar25 = lStack_b8;
          uVar19 = local_c0;
          uVar10 = uVar8;
          lVar15 = lVar26;
          puVar20 = puVar9;
          FUN_1006527dc();
          uVar11 = uVar14;
          uVar16 = uVar4;
          uVar21 = uVar6;
          uVar18 = uVar23;
          FUN_1006527dc();
          uVar12 = uVar8;
          FUN_10064b1b4(uVar8,lVar26,bVar17,puVar9,uVar14,uVar4,uVar23,uVar6);
          uVar13 = local_c0;
          FUN_10064b1b4(local_c0,lStack_b8,local_b0,local_a8,uStack_a0,local_98,local_90,local_88);
          if (uVar12 == 0xffffffffffffffff) {
            local_c0 = uVar14;
            lStack_b8 = uVar4;
            local_b0 = bVar5;
            local_a8 = (undefined *)uVar6;
            FUN_10065eb84(uVar8,lVar26,bVar17,puVar9,0);
            _swift_bridgeObjectRelease(puVar9);
            if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1006532d4);
              (*pcVar7)();
            }
          }
          else {
            local_c0 = uVar8;
            lStack_b8 = lVar26;
            local_b0 = bVar17;
            local_a8 = puVar9;
            FUN_10065eb84(uVar14,uVar4,uVar23,uVar6,0);
            _swift_bridgeObjectRelease(uVar6);
            if ((uVar14 & 1) != 0) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100653068);
              (*pcVar7)();
            }
          }
          puVar3 = local_a8;
          bVar17 = local_b0;
          lVar26 = lStack_b8;
          uVar8 = local_c0;
          if (uVar13 == 0xffffffffffffffff) {
            local_c0 = uStack_a0;
            lStack_b8 = local_98;
            local_b0 = local_90;
            local_a8 = (undefined *)local_88;
            FUN_10065eb84(uVar19,lVar25,bVar1,puVar2,0);
            _swift_bridgeObjectRelease(puVar2);
            if ((uVar19 & 1) != 0) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1006532d8);
              (*pcVar7)();
            }
          }
          else {
            uVar14 = uStack_a0;
            local_c0 = uVar19;
            lStack_b8 = lVar25;
            local_b0 = bVar1;
            local_a8 = puVar2;
            FUN_10065eb84(uStack_a0,local_98,local_90,local_88,0);
            _swift_bridgeObjectRelease(local_88);
            if ((uVar14 & 1) != 0) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100653110);
              (*pcVar7)();
            }
          }
          puVar2 = local_a8;
          lVar25 = (long)(uVar24 + 1) / 2;
          uVar23 = (uint)bVar17;
          puVar9 = puVar3;
          FUN_1006527dc();
          _swift_bridgeObjectRelease(puVar2);
          _swift_bridgeObjectRelease(puVar3);
          local_b0 = (byte)uVar18;
          local_c0 = uVar11;
          _swift_bridgeObjectRetain(uVar21);
          FUN_100642874(uVar10,lVar15,uVar22,puVar20,lVar25 << 1);
          FUN_100642874(uVar11,uVar16,uVar18,uVar21,lVar25);
          _swift_bridgeObjectRelease(uVar21);
          FUN_100642874(uVar10,lVar15,uVar22,puVar20,lVar25);
          _swift_bridgeObjectRelease(puVar20);
          if ((uVar12 != 0xffffffffffffffff) == (uVar13 != 0xffffffffffffffff)) {
            FUN_10065eb84(uVar8,lVar26,uVar23,puVar9,lVar25);
            _swift_bridgeObjectRelease(puVar9);
            if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100653290);
              (*pcVar7)();
            }
            return local_c0;
          }
          uVar24 = (ulong)uVar23;
          goto LAB_100652e80;
        }
      }
      else {
LAB_1006528b0:
        _swift_beginAccess(&DAT_100ab9068,auStack_80,0,0);
        if (DAT_100ab9068 < lVar26) {
          FUN_1006476c4(&local_c0,param_1,param_2,param_3,param_4);
          uVar19 = uStack_a0;
          bVar17 = local_90;
          FUN_1006527dc();
          _swift_bridgeObjectRelease(local_88);
          uVar24 = (ulong)local_b0;
          uVar8 = local_c0;
          lVar26 = lStack_b8;
          puVar9 = local_a8;
          local_b0 = bVar17;
          FUN_1006527dc(local_c0,lStack_b8,uVar24,local_a8,param_5,param_6,param_7,param_8);
          local_c0 = uVar19;
          _swift_bridgeObjectRelease(local_a8);
          if ((param_3 & 0xff) == 0) {
            if (param_2 == 0) {
              uVar19 = (ulong)(param_1 != 0);
            }
            else {
              uVar19 = 2;
            }
          }
          else if ((uVar18 & 0xff) == 1) {
            uVar19 = param_2 - param_1;
            if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1006529bc);
              (*pcVar7)();
            }
          }
          else {
            uVar19 = *(ulong *)(param_4 + 0x10);
          }
          if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1006532bc);
            (*pcVar7)();
          }
          lVar25 = (long)(uVar19 + 1) / 2;
LAB_100652e80:
          FUN_100642874(uVar8,lVar26,uVar24,puVar9,lVar25);
LAB_100652ec0:
          _swift_bridgeObjectRelease(puVar9);
          return local_c0;
        }
      }
      lVar25 = param_8;
      uVar23 = uVar22;
      lVar15 = param_6;
      uVar8 = param_5;
      if (lVar26 <= (long)uVar24) {
        lVar25 = param_4;
        uVar23 = uVar18;
        lVar15 = param_2;
        uVar8 = param_1;
        param_4 = param_8;
        uVar18 = uVar22;
        param_2 = param_6;
        param_1 = param_5;
      }
      local_c0 = 0;
      lStack_b8 = 0;
      local_b0 = 0;
      local_a8 = PTR___swiftEmptyArrayStorage_100995ea0;
      if ((uVar18 & 0xff) == 0) {
        if (param_2 != 0) {
          uVar24 = 2;
          goto LAB_100652d4c;
        }
        uVar24 = (ulong)(param_1 != 0);
      }
      else if ((uVar18 & 0xff) == 1) {
        uVar24 = param_2 - param_1;
        if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1006532c8);
          (*pcVar7)();
        }
        if ((long)uVar24 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100652c7c);
          (*pcVar7)();
        }
      }
      else {
        uVar24 = *(ulong *)(param_4 + 0x10);
      }
      if (uVar24 == 0) {
        return 0;
      }
LAB_100652d4c:
      do {
        uVar19 = uVar24 - 1;
        if ((uVar18 & 0xff) == 0) {
          lVar26 = param_2;
          if (uVar24 != 2) {
            if (uVar24 == 1) {
              FUN_100653848(uVar8,lVar15,uVar23,lVar25,param_1,0);
              return local_c0;
            }
            goto LAB_100652d68;
          }
        }
        else if ((uVar18 & 0xff) == 1) {
          if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100653294);
            (*pcVar7)();
          }
          if ((long)(param_2 - param_1) < (long)uVar24) {
LAB_100652d68:
            lVar26 = 0;
          }
          else {
            uVar24 = param_1 + uVar19;
            if (SCARRY8(param_1,uVar19)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100653298);
              (*pcVar7)();
            }
            if ((long)uVar24 < 0) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10065329c);
              (*pcVar7)();
            }
            if (*(ulong *)(param_4 + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1006532a0);
              (*pcVar7)();
            }
            lVar26 = *(long *)(param_4 + 0x20 + uVar24 * 8);
          }
        }
        else {
          if (*(long *)(param_4 + 0x10) < (long)uVar24) goto LAB_100652d68;
          lVar26 = *(long *)(param_4 + 0x18 + uVar24 * 8);
        }
        FUN_100653848(uVar8,lVar15,uVar23,lVar25,lVar26,uVar19);
        uVar24 = uVar19;
        if (uVar19 == 0) {
          return local_c0;
        }
      } while( true );
    }
    if (param_5 == 0) {
      return 0;
    }
    if (uVar24 == 0) {
      return 0;
    }
  }
  local_b0 = (byte)param_3;
  param_8 = param_4;
  uVar24 = param_5;
  local_c0 = param_1;
  lStack_b8 = param_2;
LAB_100652c90:
  local_a8 = (undefined *)param_8;
  _swift_bridgeObjectRetain(param_8);
  FUN_100653350(uVar24);
  return local_c0;
}

