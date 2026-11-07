// rea decompile_all
// name: FUN_100654b0c
// address: 0x100654b0c
// body: available
// range: 0x100654b0c-0x100655183 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_100654b0c(long param_1,ulong param_2,ulong param_3,uint param_4,long param_5)

{
  ulong uVar1;
  char cVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  char cVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long local_88;
  ulong local_80;
  ulong uStack_78;
  char local_70;
  long local_68;
  
  uVar12 = param_2;
  if ((param_4 & 0xff) == 0) {
    uVar15 = param_2;
    if (param_3 != 0) goto LAB_100654c98;
joined_r0x000100654b60:
    if (uVar15 < 2) {
      return 0;
    }
LAB_100654bc0:
    if ((param_4 & 0xff) == 0) {
      if (param_3 != 0) goto LAB_100654c98;
      uVar15 = param_2;
      if (param_2 == 0) {
        return 0;
      }
      goto joined_r0x000100654c20;
    }
    if ((param_4 & 0xff) == 1) goto LAB_100654bd0;
    if (*(long *)(param_5 + 0x10) == 1) {
      lVar13 = param_5;
      if ((param_4 & 0xff) != 2) goto LAB_100654be0;
      goto LAB_100654c44;
    }
LAB_100654c58:
    if ((param_4 & 0xff) == 0) goto LAB_100654c98;
    if ((param_4 & 0xff) == 1) goto LAB_100654c6c;
    lVar13 = param_5;
    if (*(long *)(param_5 + 0x10) == 0) {
      return 0;
    }
  }
  else {
    if ((param_4 & 0xff) != 1) {
      if (*(ulong *)(param_5 + 0x10) < 2) {
        if ((param_4 & 0xff) != 2) goto LAB_100654b8c;
        lVar13 = param_5;
        if (*(ulong *)(param_5 + 0x10) == 0) {
          return 0;
        }
        goto LAB_100654bb4;
      }
      goto LAB_100654bc0;
    }
    if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100655104);
      (*pcVar4)();
    }
    if ((long)(param_3 - param_2) < 2) {
LAB_100654b8c:
      if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100655110);
        (*pcVar4)();
      }
      if ((long)(param_3 - param_2) < 1) {
        return 0;
      }
      if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10065511c);
        (*pcVar4)();
      }
      if (*(ulong *)(param_5 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100655120);
        (*pcVar4)();
      }
      lVar13 = param_5 + param_2 * 8;
LAB_100654bb4:
      uVar15 = *(ulong *)(lVar13 + 0x20);
      goto joined_r0x000100654b60;
    }
LAB_100654bd0:
    if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100655108);
      (*pcVar4)();
    }
    if (param_3 - param_2 == 1) {
LAB_100654be0:
      if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100655118);
        (*pcVar4)();
      }
      if ((long)(param_3 - param_2) < 1) {
        return 1;
      }
      if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100655130);
        (*pcVar4)();
      }
      if (*(ulong *)(param_5 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100655134);
        (*pcVar4)();
      }
      lVar13 = param_5 + param_2 * 8;
LAB_100654c44:
      uVar15 = *(ulong *)(lVar13 + 0x20);
joined_r0x000100654c20:
      if (uVar15 < 4) {
        return 1;
      }
      goto LAB_100654c58;
    }
LAB_100654c6c:
    if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100655114);
      (*pcVar4)();
    }
    if ((long)(param_3 - param_2) < 1) {
      return 0;
    }
    if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100655128);
      (*pcVar4)();
    }
    if (*(ulong *)(param_5 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10065512c);
      (*pcVar4)();
    }
    lVar13 = param_5 + param_2 * 8;
  }
  uVar12 = *(ulong *)(lVar13 + 0x20);
LAB_100654c98:
  if ((uVar12 & 1) != 0) {
    bVar5 = SBORROW8(param_3,param_2);
    uVar12 = param_3 - param_2;
    lVar13 = 1;
    do {
      uVar15 = (&DAT_100ab75d0)[lVar13];
      if ((param_4 & 0xff) == 0) {
        uVar6 = param_2;
        if (param_2 != 0 && param_3 == 0) {
LAB_100654d50:
          if (uVar6 == uVar15) {
            return 1;
          }
        }
      }
      else {
        if ((param_4 & 0xff) == 1) {
          uVar6 = uVar12;
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100655138);
            (*pcVar4)();
          }
        }
        else {
          uVar6 = *(ulong *)(param_5 + 0x10);
        }
        if (uVar6 == 1) {
          if ((param_4 & 0xff) == 2) {
            puVar10 = (ulong *)(param_5 + 0x20);
            if (*(long *)(param_5 + 0x10) != 0) {
LAB_100654d4c:
              uVar6 = *puVar10;
              goto LAB_100654d50;
            }
          }
          else {
            if (bVar5) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10065513c);
              (*pcVar4)();
            }
            if (0 < (long)uVar12) {
              if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100655144);
                (*pcVar4)();
              }
              puVar10 = (ulong *)(param_5 + 0x20) + param_2;
              if (*(ulong *)(param_5 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100655148);
                (*pcVar4)();
              }
              goto LAB_100654d4c;
            }
          }
          if (uVar15 == 0) {
            return 1;
          }
        }
      }
      cVar2 = (char)param_4;
      local_80 = param_2;
      uStack_78 = param_3;
      local_70 = cVar2;
      local_68 = param_5;
      if (uVar15 == 1) goto LAB_100655010;
      if (uVar15 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10065510c);
        (*pcVar4)();
      }
      if ((param_4 & 0xff) == 0) {
        uVar6 = (ulong)(param_2 != 0);
        if (param_3 == 0) goto LAB_100654dac;
        uVar6 = 2;
      }
      else {
        if ((param_4 & 0xff) == 1) {
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100655140);
            (*pcVar4)();
          }
          uVar6 = uVar12;
          if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100655124);
            (*pcVar4)();
          }
        }
        else {
          uVar6 = *(ulong *)(param_5 + 0x10);
        }
LAB_100654dac:
        if (uVar6 == 0) {
LAB_100655010:
          _swift_bridgeObjectRetain(param_5);
          _swift_bridgeObjectRelease(param_5);
          return 0;
        }
      }
      lVar13 = lVar13 + 1;
      _swift_bridgeObjectRetain(param_5);
      lVar16 = 0;
      uVar11 = uVar6;
      do {
        if ((long)uVar6 < (long)uVar11) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10065504c);
          (*pcVar4)();
        }
        uVar17 = uVar11 - 1;
        if (local_70 == '\0') {
          uVar1 = uStack_78;
          if (uVar11 != 2) {
            uVar1 = 0;
          }
          uVar8 = local_80;
          if (uVar11 != 1) {
            uVar8 = uVar1;
          }
        }
        else if (local_70 == '\x01') {
          if (SBORROW8(uStack_78,local_80)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100655060);
            (*pcVar4)();
          }
          if ((long)uVar17 < (long)(uStack_78 - local_80)) {
            uVar11 = local_80 + uVar17;
            if (SCARRY8(local_80,uVar17)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100655064);
              (*pcVar4)();
            }
            if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100655068);
              (*pcVar4)();
            }
            if (*(ulong *)(local_68 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10065506c);
              (*pcVar4)();
            }
            uVar8 = *(ulong *)(local_68 + uVar11 * 8 + 0x20);
          }
          else {
LAB_100654e8c:
            uVar8 = 0;
          }
        }
        else {
          if (*(long *)(local_68 + 0x10) <= (long)uVar17) goto LAB_100654e8c;
          uVar8 = *(ulong *)(local_68 + uVar11 * 8 + 0x18);
        }
        FUN_100654374(&local_88,lVar16,uVar8,uVar15);
        lVar16 = local_88;
        FUN_100644614();
        uVar11 = uVar17;
      } while (uVar17 != 0);
      _swift_bridgeObjectRelease(local_68);
      if (lVar16 == 0) {
        return 0;
      }
    } while (lVar13 != 0xd);
    if (DAT_100ab0730 != -1) {
      _swift_once(&DAT_100ab0730,FUN_1006544c4);
    }
    lVar13 = DAT_100b3a7f8;
    uVar12 = *(ulong *)(DAT_100b3a7f8 + 0x10);
    if (uVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100655180);
      (*pcVar4)();
    }
    puVar14 = (undefined8 *)(DAT_100b3a7f8 + uVar12 * 0x20);
    uVar15 = param_2;
    FUN_10064b1b4(param_2,param_3,param_4,param_5,*puVar14,puVar14[1],*(undefined1 *)(puVar14 + 2),
                  puVar14[3]);
    puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (uVar15 != 0xffffffffffffffff) {
      if (param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100655184);
        (*pcVar4)();
      }
      lVar13 = 0;
      do {
        if (param_1 == lVar13) {
          return 1;
        }
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10065514c);
          (*pcVar4)();
        }
        local_80 = param_2;
        uStack_78 = param_3;
        local_70 = cVar2;
        local_68 = param_5;
        _swift_bridgeObjectRetain();
        uVar12 = 0;
        FUN_10065eb84(2,0,0,puVar3,0);
        lVar16 = local_68;
        if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100655150);
          (*pcVar4)();
        }
        uVar12 = local_80;
        uVar15 = uStack_78;
        lVar9 = local_68;
        cVar7 = local_70;
        FUN_1006551e0();
        _swift_bridgeObjectRelease(lVar16);
        local_80 = uVar12;
        uStack_78 = uVar15;
        local_70 = cVar7;
        local_68 = lVar9;
        FUN_100642874(2,0,0,puVar3,0);
        lVar16 = local_68;
        uVar12 = local_80;
        FUN_100654648(local_80,uStack_78,local_70,local_68,param_2,param_3,param_4,param_5);
        _swift_bridgeObjectRelease(lVar16);
        lVar13 = lVar13 + 1;
      } while ((uVar12 & 1) != 0);
      return 0;
    }
    uVar15 = 0;
    puVar14 = (undefined8 *)(lVar13 + 0x38);
    while (uVar12 != uVar15) {
      if (uVar15 == 0xd) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100655154);
        (*pcVar4)();
      }
      uVar6 = (&DAT_100ab75d0)[uVar15];
      FUN_100654648(uVar6,0,0,puVar3,param_2,param_3,param_4,param_5);
      if ((uVar6 & 1) == 0) {
        return 0;
      }
      if (*(ulong *)(lVar13 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100655158);
        (*pcVar4)();
      }
      uVar6 = param_2;
      FUN_10064b1b4(param_2,param_3,param_4,param_5,puVar14[-3],puVar14[-2],
                    *(undefined1 *)(puVar14 + -1),*puVar14);
      uVar15 = uVar15 + 1;
      puVar14 = puVar14 + 4;
      if (uVar6 == 0xffffffffffffffff) {
        return 1;
      }
    }
  }
  return 0;
}

