// rea decompile_all
// name: FUN_10064477c
// address: 0x10064477c
// body: available
// range: 0x10064477c-0x100644e63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100644b30) */
/* WARNING: Removing unreachable block (ram,0x000100644d58) */
/* WARNING: Removing unreachable block (ram,0x000100644d20) */
/* WARNING: Removing unreachable block (ram,0x000100644b4c) */

ulong FUN_10064477c(void)

{
  long lVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  long lVar16;
  undefined1 auStack_118 [40];
  undefined1 auStack_f0 [48];
  undefined1 auStack_c0 [40];
  long local_98;
  long lStack_90;
  char local_88;
  long local_80;
  byte local_78;
  
  if ((*(byte *)(unaff_x20 + 4) & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100644e64);
    (*pcVar5)();
  }
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  cVar3 = (char)unaff_x20[2];
  lVar15 = unaff_x20[3];
  lVar7 = 0;
  FUN_10064b1b4(0,0,0,PTR___swiftEmptyArrayStorage_100995ea0,lVar1,lVar2,cVar3,lVar15);
  if (lVar7 != -1) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100644e4c);
    (*pcVar5)();
  }
  if (cVar3 == '\0') {
    if (lVar1 != 0 || lVar2 != 0) goto LAB_100644818;
    lVar7 = 0;
LAB_10064486c:
    if (lVar1 != 0 || lVar2 != 0) {
LAB_100644848:
      lVar16 = lVar1;
      FUN_10065f798(lVar1,lVar2,cVar3,lVar15);
      if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100644e5c);
        (*pcVar5)();
      }
    }
  }
  else {
    if ((cVar3 == '\x01') || (*(long *)(lVar15 + 0x10) != 0)) {
LAB_100644818:
      lVar16 = lVar1;
      FUN_10065f798(lVar1,lVar2,cVar3,lVar15);
      lVar7 = lVar16 + 1;
      if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100644e54);
        (*pcVar5)();
      }
      if (cVar3 == '\0') goto LAB_10064486c;
      if ((cVar3 != '\x01') && (*(long *)(lVar15 + 0x10) == 0)) goto LAB_100644880;
      goto LAB_100644848;
    }
    lVar7 = 0;
  }
LAB_100644880:
  lVar16 = lVar7 + 0x3e;
  if (-1 < lVar7 + -1) {
    lVar16 = lVar7 + -1;
  }
  lVar16 = lVar16 >> 6;
  FUN_10064538c(auStack_118);
  puVar8 = auStack_118;
  FUN_1006612a4(auStack_f0);
  FUN_100660be4();
  if (puVar8 == (undefined1 *)0x0) {
    FUN_100644548(auStack_f0);
  }
  else {
    lVar9 = 0;
    FUN_10065fa88();
    lVar7 = lVar9;
    FUN_100660be4();
    FUN_100644548(auStack_f0);
    if (lVar7 < 1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100644e58);
      (*pcVar5)();
    }
    if (lVar9 != 0) goto LAB_1006448f8;
  }
  uVar4 = lVar2 - lVar1;
  uVar11 = (ulong)(lVar1 != 0);
  lVar7 = uVar11 << 6;
  if (lVar2 != 0) {
    uVar11 = 2;
    lVar7 = 0x80;
  }
LAB_1006449b8:
  do {
    lVar16 = lVar16 + -1;
    if (cVar3 == '\0') {
      if (lVar2 != 0 || lVar1 != 0) {
        lVar9 = lVar7;
        uVar13 = uVar11;
        if (lVar2 != 0 || lVar1 != 0) goto LAB_100644a18;
LAB_100644a58:
        lVar10 = 0;
        goto LAB_100644aa0;
      }
    }
    else {
      if (cVar3 == '\x01') {
        if (SBORROW8(lVar2,lVar1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100644de0);
          (*pcVar5)();
        }
        if ((long)uVar4 < 1) goto LAB_100644a58;
        lVar9 = uVar4 * 0x40;
        uVar13 = uVar4;
        if (uVar4 + 0xfe00000000000000 >> 0x3a < 0x3f) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100644dec);
          (*pcVar5)();
        }
      }
      else {
        uVar13 = *(ulong *)(lVar15 + 0x10);
        if (uVar13 == 0) goto LAB_100644aa8;
        if (uVar13 >> 0x39 != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100644de8);
          (*pcVar5)();
        }
        lVar9 = uVar13 << 6;
      }
LAB_100644a18:
      uVar14 = uVar13 - 1;
      if (SBORROW8(uVar13,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100644dd0);
        (*pcVar5)();
      }
      if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100644dd4);
        (*pcVar5)();
      }
      if (cVar3 == '\0') {
        lVar10 = lVar2;
        if (uVar14 != 1) {
          lVar10 = 0;
        }
        lVar12 = lVar1;
        if (uVar14 != 0) {
          lVar12 = lVar10;
        }
      }
      else {
        if (cVar3 == '\x01') {
          if (SBORROW8(lVar2,lVar1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100644df4);
            (*pcVar5)();
          }
          if ((long)uVar4 <= (long)uVar14) {
LAB_100644a90:
            lVar12 = 0;
            goto LAB_100644a94;
          }
          bVar6 = SCARRY8(lVar1,uVar14);
          uVar14 = lVar1 + uVar14;
          if (bVar6) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100644e24);
            (*pcVar5)();
          }
          if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100644e28);
            (*pcVar5)();
          }
          if (*(ulong *)(lVar15 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100644e2c);
            (*pcVar5)();
          }
        }
        else if (*(ulong *)(lVar15 + 0x10) <= uVar14) goto LAB_100644a90;
        lVar12 = *(long *)(lVar15 + 0x20 + uVar14 * 8);
      }
LAB_100644a94:
      lVar10 = lVar9 - LZCOUNT(lVar12);
      if (SBORROW8(lVar9,LZCOUNT(lVar12))) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100644dd8);
        (*pcVar5)();
      }
LAB_100644aa0:
      if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100644dc8);
        (*pcVar5)();
      }
    }
LAB_100644aa8:
    FUN_10064538c(auStack_c0);
    FUN_1006612a4(&local_98,auStack_c0);
    if ((local_78 & 1) == 0) {
      if (local_88 != '\0') {
        if (local_88 == '\x01') {
          if (SBORROW8(lStack_90,local_98)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100644dfc);
            (*pcVar5)();
          }
          if (lStack_90 != local_98) {
LAB_100644c28:
            uVar13 = lStack_90 - local_98;
            if (SBORROW8(lStack_90,local_98)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100644e14);
              (*pcVar5)();
            }
            if (SBORROW8(uVar13,1)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100644e18);
              (*pcVar5)();
            }
            goto joined_r0x000100644bc0;
          }
LAB_100644cac:
          uVar13 = lStack_90 - local_98;
          if (SBORROW8(lStack_90,local_98)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100644df0);
            (*pcVar5)();
          }
          goto LAB_100644d68;
        }
        uVar13 = *(ulong *)(local_80 + 0x10);
        if (uVar13 != 0) {
          if (local_88 != '\x02') goto LAB_100644c28;
joined_r0x000100644bc0:
          uVar14 = uVar13 - 1;
          goto joined_r0x000100644bc0;
        }
LAB_100644ca0:
        if (local_88 == '\0') goto LAB_100644cb8;
        if (local_88 == '\x01') goto LAB_100644cac;
LAB_100644cc4:
        uVar13 = *(ulong *)(local_80 + 0x10);
        goto LAB_100644d68;
      }
      if (lStack_90 != 0 || local_98 != 0) {
        if (lStack_90 == 0) {
          uVar13 = (ulong)(local_98 != 0);
          uVar14 = -(ulong)(local_98 == 0);
joined_r0x000100644bc0:
          if ((long)uVar14 < 0) goto LAB_100644de0;
        }
        else {
          uVar13 = 2;
          uVar14 = 1;
        }
        if ((long)uVar13 <= (long)uVar14) {
LAB_100644de0:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100644de4);
          (*pcVar5)();
        }
        if (local_88 != '\0') {
          if (local_88 == '\x01') {
            uVar13 = lStack_90 - local_98;
            if (SBORROW8(lStack_90,local_98)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100644e20);
              (*pcVar5)();
            }
            if ((long)uVar14 < (long)uVar13) {
              uVar13 = local_98 + uVar14;
              if (SCARRY8(local_98,uVar14)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100644e40);
                (*pcVar5)();
              }
              if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100644e44);
                (*pcVar5)();
              }
              if (*(ulong *)(local_80 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100644e48);
                (*pcVar5)();
              }
              lVar9 = *(long *)(local_80 + uVar13 * 8 + 0x20);
joined_r0x000100644c80:
              if (-1 < lVar9) goto LAB_100644ca0;
              if (local_88 == '\0') {
                if (lStack_90 != 0) {
                  uVar13 = 3;
                  goto LAB_100644d68;
                }
                uVar14 = (ulong)(local_98 != 0);
              }
              else if (local_88 == '\x01') {
                uVar14 = lStack_90 - local_98;
                if (SBORROW8(lStack_90,local_98)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100644e60);
                  (*pcVar5)();
                }
              }
              else {
                uVar14 = *(ulong *)(local_80 + 0x10);
              }
              uVar13 = uVar14 + 1;
              if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100644dc4);
                (*pcVar5)();
              }
            }
          }
          else {
            uVar13 = *(ulong *)(local_80 + 0x10);
            if (uVar14 < uVar13) {
              lVar9 = *(long *)(local_80 + uVar14 * 8 + 0x20);
              goto joined_r0x000100644c80;
            }
          }
          goto LAB_100644d68;
        }
        lVar9 = local_98;
        if ((uVar14 == 0) || (lVar9 = lStack_90, uVar14 == 1)) goto joined_r0x000100644c80;
      }
LAB_100644cb8:
      if (lStack_90 == 0 && local_98 == 0) goto LAB_1006449a8;
    }
    else {
      if (local_88 == '\0') {
        if (lStack_90 == 0 && local_98 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100644e30);
          (*pcVar5)();
        }
        if (lStack_90 == 0) {
          uVar13 = (ulong)(local_98 != 0);
          uVar14 = -(ulong)(local_98 == 0);
          goto joined_r0x000100644d08;
        }
        uVar13 = 2;
        uVar14 = 1;
      }
      else {
        if (local_88 == '\x01') {
          uVar13 = lStack_90 - local_98;
          if (SBORROW8(lStack_90,local_98)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100644e00);
            (*pcVar5)();
          }
          if (uVar13 == 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100644e04);
            (*pcVar5)();
          }
          if (SBORROW8(uVar13,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100644e08);
            (*pcVar5)();
          }
        }
        else {
          uVar13 = *(ulong *)(local_80 + 0x10);
          if (uVar13 == 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100644df8);
            (*pcVar5)();
          }
        }
        uVar14 = uVar13 - 1;
joined_r0x000100644d08:
        if ((long)uVar14 < 0) goto LAB_100644dd8;
      }
      if ((long)uVar13 <= (long)uVar14) {
LAB_100644dd8:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100644ddc);
        (*pcVar5)();
      }
      if (local_88 == '\0') {
        lVar9 = local_98;
        if ((uVar14 != 0) && (lVar9 = lStack_90, uVar14 != 1)) goto LAB_100644cb8;
joined_r0x000100644ba4:
        if (lVar9 < 0) {
          if (local_88 == '\0') {
            if (lStack_90 != 0) {
              uVar13 = 3;
              goto LAB_100644d68;
            }
            uVar14 = (ulong)(local_98 != 0);
          }
          else if (local_88 == '\x01') {
            uVar14 = lStack_90 - local_98;
            if (SBORROW8(lStack_90,local_98)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100644e50);
              (*pcVar5)();
            }
          }
          else {
            uVar14 = *(ulong *)(local_80 + 0x10);
          }
          uVar13 = uVar14 + 1;
          if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100644e1c);
            (*pcVar5)();
          }
        }
        else {
          if (local_88 == '\0') goto LAB_100644cb8;
          if (local_88 != '\x01') goto LAB_100644cc4;
          uVar13 = lStack_90 - local_98;
          if (SBORROW8(lStack_90,local_98)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100644e10);
            (*pcVar5)();
          }
        }
      }
      else if (local_88 == '\x01') {
        uVar13 = lStack_90 - local_98;
        if (SBORROW8(lStack_90,local_98)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100644e0c);
          (*pcVar5)();
        }
        if ((long)uVar14 < (long)uVar13) {
          uVar13 = local_98 + uVar14;
          if (SCARRY8(local_98,uVar14)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100644e34);
            (*pcVar5)();
          }
          if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100644e38);
            (*pcVar5)();
          }
          if (*(ulong *)(local_80 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100644e3c);
            (*pcVar5)();
          }
          lVar9 = *(long *)(local_80 + uVar13 * 8 + 0x20);
          goto joined_r0x000100644ba4;
        }
      }
      else {
        uVar13 = *(ulong *)(local_80 + 0x10);
        if (uVar14 < uVar13) {
          lVar9 = *(long *)(local_80 + uVar14 * 8 + 0x20);
          goto joined_r0x000100644ba4;
        }
      }
LAB_100644d68:
      if (uVar13 == 0) {
LAB_1006449a8:
        FUN_100644548(&local_98);
        goto LAB_1006449b8;
      }
    }
    lVar9 = 0;
    FUN_10065fa88();
    lVar10 = lVar9;
    FUN_100660be4();
    FUN_100644548(&local_98);
    if (lVar10 < 1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100644dcc);
      (*pcVar5)();
    }
  } while (lVar9 == 0);
LAB_1006448f8:
  return (LZCOUNT(lVar9) | lVar16 << 6) ^ 0x3f;
}

