// rea decompile_all
// name: FUN_1006b0040
// address: 0x1006b0040
// body: available
// range: 0x1006b0040-0x1006b0843 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1006b0040(undefined1 *param_1,long param_2,byte *param_3,ulong param_4,ushort *param_5)

{
  undefined1 *puVar1;
  int iVar2;
  ushort *puVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  ulong uVar8;
  bool bVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  
  if (param_5[1] == 0) {
    if (param_4 == 0) {
      return 0xffffffffffffffb8;
    }
    lVar17 = param_4 - 8;
    if (param_4 < 8) {
      uVar15 = (ulong)*param_3;
      if ((long)param_4 < 5) {
        if (param_4 == 2) goto LAB_1006b0210;
        if (param_4 == 3) goto LAB_1006b0208;
        if (param_4 == 4) goto LAB_1006b0200;
      }
      else {
        if (param_4 != 5) {
          if (param_4 != 6) {
            if (param_4 != 7) goto LAB_1006b0218;
            uVar15 = uVar15 | (ulong)param_3[6] << 0x30;
          }
          uVar15 = uVar15 + ((ulong)param_3[5] << 0x28);
        }
        uVar15 = uVar15 + ((ulong)param_3[4] << 0x20);
LAB_1006b0200:
        uVar15 = uVar15 + (ulong)param_3[3] * 0x1000000;
LAB_1006b0208:
        uVar15 = uVar15 + (ulong)param_3[2] * 0x10000;
LAB_1006b0210:
        uVar15 = uVar15 + (ulong)param_3[1] * 0x100;
      }
LAB_1006b0218:
      if (param_3[param_4 - 1] == 0) {
        return 0xffffffffffffffec;
      }
      lVar17 = 0;
      iVar18 = (int)LZCOUNT((uint)param_3[param_4 - 1]) + (int)param_4 * -8 + 0x29;
    }
    else {
      uVar15 = *(ulong *)(param_3 + lVar17);
      if (uVar15 >> 0x38 == 0) {
        return 0xffffffffffffffff;
      }
      if (0xffffffffffffff88 < param_4) {
        return param_4;
      }
      iVar18 = 8 - ((uint)LZCOUNT((uint)(byte)(uVar15 >> 0x38)) ^ 0x1f);
    }
    uVar6 = *param_5;
    uVar19 = iVar18 + (uint)uVar6;
    uVar21 = uVar15 >> ((ulong)-uVar19 & 0x3f);
    uVar22 = (ulong)*(uint *)((long)&PTR___mh_execute_header_10084e7c8 + (ulong)uVar6 * 4);
    if (uVar19 < 0x41) {
      if (lVar17 < 8) {
        if (lVar17 == 0) goto LAB_1006b0548;
        uVar13 = (uint)lVar17;
        if (param_3 <= param_3 + (lVar17 - (ulong)(uVar19 >> 3))) {
          uVar13 = uVar19 >> 3;
        }
        uVar19 = uVar19 + uVar13 * -8;
      }
      else {
        uVar13 = uVar19 >> 3;
        uVar19 = uVar19 & 7;
      }
      lVar17 = lVar17 - (ulong)uVar13;
      uVar15 = *(ulong *)(param_3 + lVar17);
    }
LAB_1006b0548:
    uVar21 = uVar21 & uVar22;
    uVar19 = uVar19 + uVar6;
    uVar22 = uVar15 >> ((ulong)-uVar19 & 0x3f) & uVar22;
    if (uVar19 < 0x41) {
      if (lVar17 < 8) {
        if (lVar17 == 0) goto LAB_1006b059c;
        uVar13 = (uint)lVar17;
        if (param_3 <= param_3 + (lVar17 - (ulong)(uVar19 >> 3))) {
          uVar13 = uVar19 >> 3;
        }
        uVar19 = uVar19 + uVar13 * -8;
      }
      else {
        uVar13 = uVar19 >> 3;
        uVar19 = uVar19 & 7;
      }
      lVar17 = lVar17 - (ulong)uVar13;
      uVar15 = *(ulong *)(param_3 + lVar17);
    }
LAB_1006b059c:
    puVar12 = param_1;
    if (uVar19 < 0x41) {
      do {
        if (lVar17 < 8) {
          if (lVar17 == 0) break;
          uVar13 = uVar19 >> 3;
          bVar9 = param_3 <= param_3 + (lVar17 - (ulong)uVar13);
          if (!bVar9) {
            uVar13 = (uint)lVar17;
          }
          uVar19 = uVar19 + uVar13 * -8;
        }
        else {
          uVar13 = uVar19 >> 3;
          uVar19 = uVar19 & 7;
          bVar9 = true;
        }
        lVar17 = lVar17 - (ulong)uVar13;
        uVar15 = *(ulong *)(param_3 + lVar17);
        if ((param_1 + param_2 + -3 <= puVar12) || (!bVar9)) break;
        puVar3 = param_5 + uVar21 * 2 + 2;
        uVar6 = *puVar3;
        iVar18 = uVar19 + *(byte *)((long)puVar3 + 3);
        uVar19 = *(uint *)((long)&PTR___mh_execute_header_10084e7c8 +
                          (ulong)*(byte *)((long)puVar3 + 3) * 4);
        *puVar12 = (char)puVar3[1];
        puVar3 = param_5 + uVar22 * 2 + 2;
        uVar7 = *puVar3;
        iVar2 = iVar18 + (uint)*(byte *)((long)puVar3 + 3);
        uVar13 = *(uint *)((long)&PTR___mh_execute_header_10084e7c8 +
                          (ulong)*(byte *)((long)puVar3 + 3) * 4);
        puVar12[1] = (char)puVar3[1];
        puVar3 = param_5 + (uVar15 >> ((ulong)(uint)-iVar18 & 0x3f) & (ulong)uVar19) * 2 +
                           (ulong)uVar6 * 2 + 2;
        iVar18 = iVar2 + (uint)*(byte *)((long)puVar3 + 3);
        uVar21 = (uVar15 >> ((ulong)(uint)-iVar18 & 0x3f) &
                 (ulong)*(uint *)((long)&PTR___mh_execute_header_10084e7c8 +
                                 (ulong)*(byte *)((long)puVar3 + 3) * 4)) + (ulong)*puVar3;
        puVar12[2] = (char)puVar3[1];
        puVar3 = param_5 + (uVar15 >> ((ulong)(uint)-iVar2 & 0x3f) & (ulong)uVar13) * 2 +
                           (ulong)uVar7 * 2 + 2;
        uVar19 = iVar18 + (uint)*(byte *)((long)puVar3 + 3);
        uVar22 = (uVar15 >> ((ulong)-uVar19 & 0x3f) &
                 (ulong)*(uint *)((long)&PTR___mh_execute_header_10084e7c8 +
                                 (ulong)*(byte *)((long)puVar3 + 3) * 4)) + (ulong)*puVar3;
        puVar12[3] = (char)puVar3[1];
        puVar12 = puVar12 + 4;
        if (0x40 < uVar19) break;
      } while( true );
    }
    puVar10 = param_1 + param_2 + -2;
    if (puVar10 < puVar12) {
      return 0xffffffffffffffba;
    }
    lVar11 = (long)puVar12 - (long)param_1;
    puVar12 = puVar12 + 1;
    lVar23 = 2;
    do {
      puVar3 = param_5 + uVar21 * 2 + 2;
      uVar6 = *puVar3;
      uVar19 = uVar19 + *(byte *)((long)puVar3 + 3);
      uVar13 = *(uint *)((long)&PTR___mh_execute_header_10084e7c8 +
                        (ulong)*(byte *)((long)puVar3 + 3) * 4);
      puVar12[-1] = (char)puVar3[1];
      uVar21 = uVar22;
      if (0x40 < uVar19) {
LAB_1006b082c:
        *puVar12 = (char)param_5[uVar21 * 2 + 3];
        return lVar23 + lVar11;
      }
      if (lVar17 < 8) {
        uVar14 = uVar19;
        uVar20 = uVar15;
        if (lVar17 != 0) {
          uVar14 = (uint)lVar17;
          if (param_3 <= param_3 + (lVar17 - (ulong)(uVar19 >> 3))) {
            uVar14 = uVar19 >> 3;
          }
          lVar17 = lVar17 - (ulong)uVar14;
          uVar14 = uVar19 + uVar14 * -8;
          uVar20 = *(ulong *)(param_3 + lVar17);
        }
      }
      else {
        lVar17 = lVar17 - (ulong)(uVar19 >> 3);
        uVar14 = uVar19 & 7;
        uVar20 = *(ulong *)(param_3 + lVar17);
      }
      if (puVar10 < puVar12) {
        return 0xffffffffffffffba;
      }
      uVar21 = (uVar15 >> ((ulong)-uVar19 & 0x3f) & (ulong)uVar13) + (ulong)uVar6;
      puVar3 = param_5 + uVar22 * 2 + 2;
      uVar6 = *puVar3;
      uVar14 = uVar14 + *(byte *)((long)puVar3 + 3);
      uVar13 = *(uint *)((long)&PTR___mh_execute_header_10084e7c8 +
                        (ulong)*(byte *)((long)puVar3 + 3) * 4);
      *puVar12 = (char)puVar3[1];
      if (0x40 < uVar14) {
        puVar12 = puVar12 + 1;
        lVar23 = 3;
        goto LAB_1006b082c;
      }
      if (lVar17 < 8) {
        uVar15 = uVar20;
        uVar19 = uVar14;
        if (lVar17 != 0) {
          uVar16 = (uint)lVar17;
          if (param_3 <= param_3 + (lVar17 - (ulong)(uVar14 >> 3))) {
            uVar16 = uVar14 >> 3;
          }
          uVar19 = uVar14 + uVar16 * -8;
          goto LAB_1006b07c0;
        }
      }
      else {
        uVar16 = uVar14 >> 3;
        uVar19 = uVar14 & 7;
LAB_1006b07c0:
        lVar17 = lVar17 - (ulong)uVar16;
        uVar15 = *(ulong *)(param_3 + lVar17);
      }
      uVar22 = (uVar20 >> ((ulong)-uVar14 & 0x3f) & (ulong)uVar13) + (ulong)uVar6;
      lVar11 = lVar11 + 2;
      puVar1 = puVar12 + 1;
      puVar12 = puVar12 + 2;
      if (puVar10 < puVar1) {
        return 0xffffffffffffffba;
      }
    } while( true );
  }
  if (param_4 == 0) {
    return 0xffffffffffffffb8;
  }
  lVar17 = param_4 - 8;
  if (param_4 < 8) {
    uVar15 = (ulong)*param_3;
    if ((long)param_4 < 5) {
      if (param_4 == 2) goto LAB_1006b0144;
      if (param_4 == 3) goto LAB_1006b013c;
      if (param_4 == 4) goto LAB_1006b0134;
    }
    else {
      if (param_4 != 5) {
        if (param_4 != 6) {
          if (param_4 != 7) goto LAB_1006b014c;
          uVar15 = uVar15 | (ulong)param_3[6] << 0x30;
        }
        uVar15 = uVar15 + ((ulong)param_3[5] << 0x28);
      }
      uVar15 = uVar15 + ((ulong)param_3[4] << 0x20);
LAB_1006b0134:
      uVar15 = uVar15 + (ulong)param_3[3] * 0x1000000;
LAB_1006b013c:
      uVar15 = uVar15 + (ulong)param_3[2] * 0x10000;
LAB_1006b0144:
      uVar15 = uVar15 + (ulong)param_3[1] * 0x100;
    }
LAB_1006b014c:
    if (param_3[param_4 - 1] == 0) {
      return 0xffffffffffffffec;
    }
    lVar17 = 0;
    iVar18 = (int)LZCOUNT((uint)param_3[param_4 - 1]) + (int)param_4 * -8 + 0x29;
  }
  else {
    uVar15 = *(ulong *)(param_3 + lVar17);
    if (uVar15 >> 0x38 == 0) {
      return 0xffffffffffffffff;
    }
    if (0xffffffffffffff88 < param_4) {
      return param_4;
    }
    iVar18 = 8 - ((uint)LZCOUNT((uint)(byte)(uVar15 >> 0x38)) ^ 0x1f);
  }
  uVar6 = *param_5;
  uVar19 = iVar18 + (uint)uVar6;
  uVar21 = uVar15 >> ((ulong)-uVar19 & 0x3f);
  uVar22 = (ulong)*(uint *)((long)&PTR___mh_execute_header_10084e7c8 + (ulong)uVar6 * 4);
  if (uVar19 < 0x41) {
    if (lVar17 < 8) {
      if (lVar17 == 0) goto LAB_1006b0298;
      uVar13 = (uint)lVar17;
      if (param_3 <= param_3 + (lVar17 - (ulong)(uVar19 >> 3))) {
        uVar13 = uVar19 >> 3;
      }
      uVar19 = uVar19 + uVar13 * -8;
    }
    else {
      uVar13 = uVar19 >> 3;
      uVar19 = uVar19 & 7;
    }
    lVar17 = lVar17 - (ulong)uVar13;
    uVar15 = *(ulong *)(param_3 + lVar17);
  }
LAB_1006b0298:
  uVar21 = uVar21 & uVar22;
  uVar19 = uVar19 + uVar6;
  uVar20 = (ulong)uVar19;
  uVar22 = uVar15 >> ((ulong)-uVar19 & 0x3f) & uVar22;
  if (uVar19 < 0x41) {
    if (lVar17 < 8) {
      if (lVar17 == 0) goto LAB_1006b02ec;
      uVar13 = (uint)lVar17;
      if (param_3 <= param_3 + (lVar17 - (ulong)(uVar19 >> 3))) {
        uVar13 = uVar19 >> 3;
      }
      uVar19 = uVar19 + uVar13 * -8;
    }
    else {
      uVar13 = uVar19 >> 3;
      uVar19 = uVar19 & 7;
    }
    uVar20 = (ulong)uVar19;
    lVar17 = lVar17 - (ulong)uVar13;
    uVar15 = *(ulong *)(param_3 + lVar17);
  }
LAB_1006b02ec:
  uVar19 = (uint)uVar20;
  puVar12 = param_1;
  while (uVar19 < 0x41) {
    uVar19 = (uint)uVar20;
    if (lVar17 < 8) {
      if (lVar17 == 0) break;
      bVar9 = param_3 <= param_3 + (lVar17 - (uVar20 >> 3));
      uVar13 = (uint)(uVar20 >> 3);
      if (!bVar9) {
        uVar13 = (uint)lVar17;
      }
      uVar19 = uVar19 + uVar13 * -8;
    }
    else {
      uVar13 = uVar19 >> 3;
      uVar19 = uVar19 & 7;
      bVar9 = true;
    }
    uVar20 = (ulong)uVar19;
    lVar17 = lVar17 - (ulong)uVar13;
    uVar15 = *(ulong *)(param_3 + lVar17);
    if ((param_1 + param_2 + -3 <= puVar12) || (!bVar9)) break;
    puVar3 = param_5 + uVar21 * 2 + 2;
    uVar6 = *puVar3;
    bVar4 = *(byte *)((long)puVar3 + 3);
    *puVar12 = (char)puVar3[1];
    puVar3 = param_5 + uVar22 * 2 + 2;
    uVar7 = *puVar3;
    bVar5 = *(byte *)((long)puVar3 + 3);
    uVar19 = uVar19 + bVar4;
    uVar13 = uVar19 + bVar5;
    puVar12[1] = (char)puVar3[1];
    puVar3 = param_5 + ((uVar15 << (uVar20 & 0x3f)) >> ((ulong)-(uint)bVar4 & 0x3f)) * 2 +
                       (ulong)uVar6 * 2 + 2;
    bVar4 = *(byte *)((long)puVar3 + 3);
    uVar21 = ((uVar15 << ((ulong)uVar13 & 0x3f)) >> ((ulong)-(uint)bVar4 & 0x3f)) + (ulong)*puVar3;
    puVar12[2] = (char)puVar3[1];
    puVar3 = param_5 + ((uVar15 << ((ulong)uVar19 & 0x3f)) >> ((ulong)-(uint)bVar5 & 0x3f)) * 2 +
                       (ulong)uVar7 * 2 + 2;
    uVar13 = uVar13 + bVar4;
    uVar19 = uVar13 + *(byte *)((long)puVar3 + 3);
    uVar20 = (ulong)uVar19;
    uVar22 = ((uVar15 << ((ulong)uVar13 & 0x3f)) >>
             ((ulong)-(uint)*(byte *)((long)puVar3 + 3) & 0x3f)) + (ulong)*puVar3;
    puVar12[3] = (char)puVar3[1];
    puVar12 = puVar12 + 4;
  }
  if (param_1 + param_2 + -2 < puVar12) {
    return 0xffffffffffffffba;
  }
  lVar11 = (long)puVar12 - (long)param_1;
  puVar12 = puVar12 + 1;
  lVar23 = 2;
  do {
    puVar3 = param_5 + uVar21 * 2 + 2;
    uVar6 = *puVar3;
    bVar4 = *(byte *)((long)puVar3 + 3);
    uVar19 = (int)uVar20 + (uint)bVar4;
    puVar12[-1] = (char)puVar3[1];
    uVar21 = uVar22;
    if (0x40 < uVar19) {
LAB_1006b080c:
      *puVar12 = (char)param_5[uVar21 * 2 + 3];
      return lVar23 + lVar11;
    }
    if (lVar17 < 8) {
      uVar8 = uVar15;
      if (lVar17 != 0) {
        uVar13 = (uint)lVar17;
        if (param_3 <= param_3 + (lVar17 - (ulong)(uVar19 >> 3))) {
          uVar13 = uVar19 >> 3;
        }
        uVar19 = uVar19 + uVar13 * -8;
        lVar17 = lVar17 - (ulong)uVar13;
        uVar8 = *(ulong *)(param_3 + lVar17);
      }
    }
    else {
      uVar13 = uVar19 >> 3;
      uVar19 = uVar19 & 7;
      lVar17 = lVar17 - (ulong)uVar13;
      uVar8 = *(ulong *)(param_3 + lVar17);
    }
    if (param_1 + param_2 + -2 < puVar12) {
      return 0xffffffffffffffba;
    }
    uVar21 = ((uVar15 << (uVar20 & 0x3f)) >> ((ulong)-(uint)bVar4 & 0x3f)) + (ulong)uVar6;
    puVar3 = param_5 + uVar22 * 2 + 2;
    uVar6 = *puVar3;
    bVar4 = *(byte *)((long)puVar3 + 3);
    uVar13 = uVar19 + bVar4;
    *puVar12 = (char)puVar3[1];
    if (0x40 < uVar13) {
      puVar12 = puVar12 + 1;
      lVar23 = 3;
      goto LAB_1006b080c;
    }
    if (lVar17 < 8) {
      uVar15 = uVar8;
      if (lVar17 != 0) {
        uVar14 = (uint)lVar17;
        if (param_3 <= param_3 + (lVar17 - (ulong)(uVar13 >> 3))) {
          uVar14 = uVar13 >> 3;
        }
        uVar13 = uVar13 + uVar14 * -8;
        goto LAB_1006b04ec;
      }
    }
    else {
      uVar14 = uVar13 >> 3;
      uVar13 = uVar13 & 7;
LAB_1006b04ec:
      lVar17 = lVar17 - (ulong)uVar14;
      uVar15 = *(ulong *)(param_3 + lVar17);
    }
    uVar20 = (ulong)uVar13;
    uVar22 = ((uVar8 << ((ulong)uVar19 & 0x3f)) >> ((ulong)-(uint)bVar4 & 0x3f)) + (ulong)uVar6;
    lVar11 = lVar11 + 2;
    puVar10 = puVar12 + 1;
    puVar12 = puVar12 + 2;
    if (param_1 + param_2 + -2 < puVar10) {
      return 0xffffffffffffffba;
    }
  } while( true );
}

