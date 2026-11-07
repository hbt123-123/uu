// rea decompile_all
// name: FUN_100303cb8
// address: 0x100303cb8
// body: available
// range: 0x100303cb8-0x1003047f3 inclusive
// range: 0x100304814-0x1003049d3 inclusive
// range: 0x100304a08-0x100304b0b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_100303cb8(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  byte bVar14;
  undefined1 uVar15;
  ulong uVar16;
  code *pcVar17;
  undefined8 *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 *puVar24;
  uint uVar25;
  uint uVar26;
  size_t sVar27;
  uint *puVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  uint *puVar32;
  long lVar33;
  uint uVar34;
  uint uVar35;
  long lVar36;
  uint *puVar37;
  ulong uVar38;
  uint uVar39;
  long lVar40;
  uint uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  
  _swift_weakTakeAssign();
  lVar7 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(param_3 + 0x18);
  lVar36 = *(long *)(lVar7 + -8);
  uVar20 = *(uint *)(lVar36 + 0x50);
  lVar31 = *(long *)(lVar8 + -8);
  uVar21 = *(uint *)(lVar31 + 0x50);
  lVar9 = 0;
  __s10Foundation10URLRequestVMa();
  lVar33 = *(long *)(lVar9 + -8);
  uVar41 = *(uint *)(lVar33 + 0x50);
  lVar10 = 0;
  __s10Foundation3URLVMa();
  lVar40 = *(long *)(lVar10 + -8);
  uVar25 = *(uint *)(lVar40 + 0x50);
  lVar11 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar30 = *(long *)(lVar11 + -8);
  uVar35 = *(uint *)(lVar30 + 0x50) | uVar25;
  uVar22 = (ulong)((uVar21 | uVar20 | uVar41 | uVar35) & 0xf8 | 7);
  puVar32 = (uint *)(uVar22 + 8 + (long)param_1 & (uVar22 ^ 0xffffffffffffffff));
  puVar37 = (uint *)(uVar22 + 8 + param_2 & (uVar22 ^ 0xffffffffffffffff));
  if (puVar32 == puVar37) {
    return param_1;
  }
  uVar16 = (ulong)(uVar35 & 0xf8 | 7);
  uVar23 = (ulong)uVar25 & 0xff;
  uVar22 = *(ulong *)(lVar36 + 0x40);
  if (*(ulong *)(lVar36 + 0x40) <= *(ulong *)(lVar31 + 0x40)) {
    uVar22 = *(ulong *)(lVar31 + 0x40);
  }
  sVar27 = *(size_t *)(lVar33 + 0x40);
  if (*(int *)(lVar33 + 0x54) == 0) {
    sVar27 = sVar27 + 1;
  }
  lVar1 = uVar16 + 8;
  uVar38 = uVar23 + 8;
  uVar29 = *(ulong *)(lVar40 + 0x40);
  lVar3 = uVar29 + uVar23;
  uVar4 = (lVar3 + (uVar38 & (uVar23 ^ 0xffffffffffffffff)) & (uVar23 ^ 0xffffffffffffffff)) +
          uVar29;
  uVar2 = (uVar29 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar2 <= uVar29) {
    uVar2 = uVar29;
  }
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  if (uVar4 <= uVar2 + 1) {
    uVar4 = uVar2 + 1;
  }
  uVar5 = uVar29;
  if (uVar29 < 0x19) {
    uVar5 = 0x18;
  }
  if (uVar4 <= uVar5 + 1) {
    uVar4 = uVar5 + 1;
  }
  uVar6 = *(ulong *)(lVar30 + 0x40);
  if (*(ulong *)(lVar30 + 0x40) <= uVar29) {
    uVar6 = uVar29;
  }
  if (uVar6 < 0x11) {
    uVar6 = 0x10;
  }
  if (uVar4 <= uVar6 + 1) {
    uVar4 = uVar6 + 1;
  }
  if (uVar4 < 0x2a) {
    uVar4 = 0x29;
  }
  uVar41 = (uint)uVar4;
  uVar21 = uVar41 << 3;
  uVar20 = 0x10;
  if (uVar41 < 4) {
    uVar20 = 1U >> (ulong)(uVar21 & 0x1f) | 0x10;
  }
  uVar29 = uVar4 + 1 +
           (lVar1 + (sVar27 + 7 & 0xfffffffffffffff8) + 8 & (uVar16 ^ 0xffffffffffffffff));
  if (uVar22 <= uVar29) {
    uVar22 = uVar29;
  }
  if (uVar22 < 0x19) {
    uVar22 = 0x18;
  }
  bVar14 = *(byte *)((long)puVar32 + uVar22);
  uVar25 = (uint)bVar14;
  uVar35 = (uint)uVar22;
  if (4 < bVar14) {
    uVar26 = 4;
    if (uVar35 < 4) {
      uVar26 = uVar35;
    }
    if ((int)uVar26 < 2) {
      if (uVar26 == 0) goto LAB_100303f10;
      uVar26 = (uint)(byte)*puVar32;
    }
    else if (uVar26 == 2) {
      uVar26 = (uint)(ushort)*puVar32;
    }
    else if (uVar26 == 3) {
      uVar26 = (uint)(uint3)*puVar32;
    }
    else {
      uVar26 = *puVar32;
    }
    uVar25 = uVar26 | bVar14 - 5 << (ulong)((uVar35 & 3) << 3);
    if (3 < uVar35) {
      uVar25 = uVar26;
    }
    uVar25 = uVar25 + 5;
  }
LAB_100303f10:
  uVar16 = ~uVar16;
  uVar23 = ~uVar23;
  uVar34 = (uint)uVar6;
  uVar39 = (uint)uVar2;
  uVar26 = (uint)uVar5;
  puVar28 = puVar32;
  if ((int)uVar25 < 2) {
    if (uVar25 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(puVar32 + 2));
      goto switchD_1003042e8_default;
    }
    pcVar17 = *(code **)(lVar36 + 8);
    lVar13 = lVar7;
LAB_100304050:
    (*pcVar17)(puVar28,lVar13);
  }
  else {
    if (uVar25 == 2) {
      pcVar17 = *(code **)(lVar31 + 8);
      lVar13 = lVar8;
      goto LAB_100304050;
    }
    if (uVar25 == 3) {
      uVar29 = *(ulong *)(puVar32 + 4);
      if (uVar29 >> 0x3c < 0xf) {
        uVar12 = *(undefined8 *)(puVar32 + 2);
LAB_100303f60:
        FUN_100006cdc(uVar12,uVar29);
      }
    }
    else {
      (**(code **)(lVar33 + 0x30))(puVar32,1,lVar9);
      if ((int)puVar28 == 0) {
        (**(code **)(lVar33 + 8))(puVar32,lVar9);
      }
      puVar18 = (undefined8 *)0x0;
      puVar28 = (uint *)(lVar1 + ((ulong)((long)puVar32 + sVar27 + 7) & 0xfffffffffffffff8) + 8 &
                        uVar16);
      bVar14 = *(byte *)((long)puVar28 + uVar4);
      uVar25 = (uint)bVar14;
      if (0x100 - uVar20 <= (bVar14 ^ 0xff)) {
        if (0xe < bVar14) {
          uVar19 = 4;
          if (uVar41 < 4) {
            uVar19 = uVar41;
          }
          if ((int)uVar19 < 2) {
            if (uVar19 == 0) goto LAB_1003042c8;
            uVar19 = (uint)(byte)*puVar28;
          }
          else if (uVar19 == 2) {
            uVar19 = (uint)(ushort)*puVar28;
          }
          else if (uVar19 == 3) {
            uVar19 = (uint)(uint3)*puVar28;
          }
          else {
            uVar19 = *puVar28;
          }
          uVar25 = uVar19 | bVar14 - 0xf << (ulong)(uVar21 & 0x1f);
          if (3 < uVar41) {
            uVar25 = uVar19;
          }
          uVar25 = uVar25 + 0xf;
        }
LAB_1003042c8:
        switch(uVar25) {
        case 0:
        case 1:
        case 7:
        case 0xc:
        case 0xd:
switchD_1003042e8_caseD_0:
          _swift_errorRelease(*(undefined8 *)puVar28);
          break;
        case 2:
          _swift_errorRelease(*(undefined8 *)puVar28);
          uVar29 = (ulong)(uVar38 + (long)puVar28) & uVar23;
          pcVar17 = *(code **)(lVar40 + 8);
          (*pcVar17)(uVar29,lVar10);
          (*pcVar17)(lVar3 + uVar29 & uVar23,lVar10);
          break;
        case 3:
          FUN_10003f094(puVar28);
          break;
        case 4:
          bVar14 = *(byte *)((long)puVar28 + uVar2);
          uVar20 = (uint)bVar14;
          if (0xc < bVar14) {
            uVar21 = 4;
            if (uVar39 < 4) {
              uVar21 = uVar39;
            }
            if ((int)uVar21 < 2) {
              if (uVar21 == 0) goto LAB_1003049a4;
              uVar21 = (uint)(byte)*puVar28;
            }
            else if (uVar21 == 2) {
              uVar21 = (uint)(ushort)*puVar28;
            }
            else if (uVar21 == 3) {
              uVar21 = (uint)(uint3)*puVar28;
            }
            else {
              uVar21 = *puVar28;
            }
            uVar20 = uVar21 | bVar14 - 0xd << (ulong)((uVar39 & 3) << 3);
            if (3 < uVar39) {
              uVar20 = uVar21;
            }
            uVar20 = uVar20 + 0xd;
          }
LAB_1003049a4:
                    /* WARNING: Could not recover jumptable at 0x0001003049bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)*(ushort *)(&DAT_1008192b2 + (ulong)uVar20 * 2) * 4 + 0x1003042ec))(0);
          return puVar18;
        case 5:
          FUN_10027ba4c(*(undefined8 *)puVar28);
          break;
        case 6:
          FUN_100278f18(*(undefined8 *)puVar28,*(undefined8 *)(puVar28 + 2),(byte)puVar28[4]);
          break;
        case 8:
          _swift_errorRelease(*(undefined8 *)puVar28);
          _swift_errorRelease(*(undefined8 *)(puVar28 + 2));
          break;
        case 9:
          bVar14 = *(byte *)((long)puVar28 + uVar5);
          uVar25 = (uint)bVar14;
          if (4 < bVar14) {
            uVar19 = 4;
            if (uVar26 < 4) {
              uVar19 = uVar26;
            }
            if ((int)uVar19 < 2) {
              if (uVar19 == 0) goto LAB_100304754;
              uVar25 = (uint)(byte)*puVar28;
            }
            else if (uVar19 == 2) {
              uVar25 = (uint)(ushort)*puVar28;
            }
            else if (uVar19 == 3) {
              uVar25 = (uint)(uint3)*puVar28;
            }
            else {
              uVar25 = *puVar28;
            }
            if (uVar26 < 4) {
              uVar25 = (uVar25 | bVar14 - 5 << (ulong)((uVar26 & 3) << 3)) + 5;
            }
            else {
              uVar25 = uVar25 + 5;
            }
          }
LAB_100304754:
          if ((int)uVar25 < 2) {
            if (uVar25 == 0) {
LAB_1003049c4:
              pcVar17 = *(code **)(lVar40 + 8);
              lVar13 = lVar10;
              goto LAB_100304050;
            }
            if (uVar25 == 1) {
              _swift_bridgeObjectRelease(*(undefined8 *)puVar28);
            }
          }
          else if (uVar25 == 2) {
            _swift_bridgeObjectRelease(*(undefined8 *)puVar28);
            _swift_bridgeObjectRelease(*(undefined8 *)(puVar28 + 4));
          }
          else if (uVar25 == 4) goto switchD_1003042e8_caseD_0;
          break;
        case 10:
          bVar14 = *(byte *)((long)puVar28 + uVar6);
          uVar25 = (uint)bVar14;
          if (5 < bVar14) {
            uVar19 = 4;
            if (uVar34 < 4) {
              uVar19 = uVar34;
            }
            if ((int)uVar19 < 2) {
              if (uVar19 == 0) goto LAB_100304838;
              uVar25 = (uint)(byte)*puVar28;
            }
            else if (uVar19 == 2) {
              uVar25 = (uint)(ushort)*puVar28;
            }
            else if (uVar19 == 3) {
              uVar25 = (uint)(uint3)*puVar28;
            }
            else {
              uVar25 = *puVar28;
            }
            if (uVar34 < 4) {
              uVar25 = (uVar25 | bVar14 - 6 << (ulong)(uVar34 << 3 & 0x1f)) + 6;
            }
            else {
              uVar25 = uVar25 + 6;
            }
          }
LAB_100304838:
          if ((int)uVar25 < 3) {
            if (uVar25 == 0) goto LAB_1003049c4;
            if (uVar25 == 1) {
              pcVar17 = *(code **)(lVar30 + 8);
              lVar13 = lVar11;
              goto LAB_100304050;
            }
            if (uVar25 == 2) goto switchD_1003042e8_caseD_0;
          }
          else {
            if ((uVar25 == 3) || (uVar25 == 4)) goto switchD_1003042e8_caseD_0;
            if (uVar25 == 5) {
              _swift_bridgeObjectRelease(*(undefined8 *)(puVar28 + 2));
            }
          }
          break;
        case 0xb:
          FUN_100278e14(*(undefined8 *)puVar28,*(undefined8 *)(puVar28 + 2),
                        *(undefined8 *)(puVar28 + 4),*(undefined8 *)(puVar28 + 6),
                        *(undefined8 *)(puVar28 + 8),(byte)puVar28[10]);
          break;
        case 0xe:
          uVar12 = *(undefined8 *)puVar28;
          uVar29 = *(ulong *)(puVar28 + 2);
          goto LAB_100303f60;
        }
      }
    }
  }
switchD_1003042e8_default:
  bVar14 = *(byte *)((long)puVar37 + uVar22);
  uVar25 = (uint)bVar14;
  if (4 < bVar14) {
    uVar19 = 4;
    if (uVar35 < 4) {
      uVar19 = uVar35;
    }
    if ((int)uVar19 < 2) {
      if (uVar19 == 0) goto LAB_1003040c8;
      uVar19 = (uint)(byte)*puVar37;
    }
    else if (uVar19 == 2) {
      uVar19 = (uint)(ushort)*puVar37;
    }
    else if (uVar19 == 3) {
      uVar19 = (uint)(uint3)*puVar37;
    }
    else {
      uVar19 = *puVar37;
    }
    uVar25 = uVar19 | bVar14 - 5 << (ulong)((uVar35 & 3) << 3);
    if (3 < uVar35) {
      uVar25 = uVar19;
    }
    uVar25 = uVar25 + 5;
  }
LAB_1003040c8:
  if ((int)uVar25 < 2) {
    if (uVar25 == 0) {
      bVar14 = 0;
      uVar12 = *(undefined8 *)puVar37;
      *(undefined8 *)(puVar32 + 2) = *(undefined8 *)(puVar37 + 2);
      *(undefined8 *)puVar32 = uVar12;
    }
    else {
      (**(code **)(lVar36 + 0x20))(puVar32,puVar37,lVar7);
      bVar14 = 1;
    }
    goto LAB_100304218;
  }
  if (uVar25 == 2) {
    (**(code **)(lVar31 + 0x20))(puVar32,puVar37,lVar8);
    bVar14 = 2;
    goto LAB_100304218;
  }
  if (uVar25 == 3) {
    uVar42 = *(undefined8 *)(puVar37 + 2);
    uVar12 = *(undefined8 *)puVar37;
    *(undefined8 *)(puVar32 + 4) = *(undefined8 *)(puVar37 + 4);
    *(undefined8 *)(puVar32 + 2) = uVar42;
    *(undefined8 *)puVar32 = uVar12;
    bVar14 = 3;
    goto LAB_100304218;
  }
  puVar28 = puVar37;
  (**(code **)(lVar33 + 0x30))(puVar37,1,lVar9);
  if ((int)puVar28 == 0) {
    (**(code **)(lVar33 + 0x20))(puVar32,puVar37,lVar9);
    (**(code **)(lVar33 + 0x38))(puVar32,0,1,lVar9);
  }
  else {
    _memcpy(puVar32,puVar37,sVar27);
  }
  puVar18 = (undefined8 *)((ulong)((long)puVar32 + sVar27 + 7) & 0xfffffffffffffff8);
  puVar24 = (undefined8 *)((ulong)((long)puVar37 + sVar27 + 7) & 0xfffffffffffffff8);
  *puVar18 = *puVar24;
  puVar18 = puVar18 + 1;
  puVar24 = puVar24 + 1;
  *puVar18 = *puVar24;
  puVar18 = (undefined8 *)(lVar1 + (long)puVar18 & uVar16);
  puVar37 = (uint *)(lVar1 + (long)puVar24 & uVar16);
  bVar14 = *(byte *)((long)puVar37 + uVar4);
  uVar25 = (uint)bVar14;
  if ((bVar14 ^ 0xff) < 0x100 - uVar20) {
switchD_10030433c_default:
    _memcpy(puVar18,puVar37,uVar4 + 1);
  }
  else {
    if (0xe < bVar14) {
      uVar20 = 4;
      if (uVar41 < 4) {
        uVar20 = uVar41;
      }
      if ((int)uVar20 < 2) {
        if (uVar20 == 0) goto LAB_10030431c;
        uVar20 = (uint)(byte)*puVar37;
      }
      else if (uVar20 == 2) {
        uVar20 = (uint)(ushort)*puVar37;
      }
      else if (uVar20 == 3) {
        uVar20 = (uint)(uint3)*puVar37;
      }
      else {
        uVar20 = *puVar37;
      }
      uVar25 = uVar20 | bVar14 - 0xf << (ulong)(uVar21 & 0x1f);
      if (3 < uVar41) {
        uVar25 = uVar20;
      }
      uVar25 = uVar25 + 0xf;
    }
LAB_10030431c:
    switch(uVar25) {
    case 0:
      *puVar18 = *(undefined8 *)puVar37;
      *(undefined1 *)((long)puVar18 + uVar4) = 0;
      break;
    case 1:
      *puVar18 = *(undefined8 *)puVar37;
      *(undefined1 *)((long)puVar18 + uVar4) = 1;
      break;
    case 2:
      *puVar18 = *(undefined8 *)puVar37;
      uVar16 = uVar38 + (long)puVar18 & uVar23;
      uVar38 = (ulong)(uVar38 + (long)puVar37) & uVar23;
      pcVar17 = *(code **)(lVar40 + 0x20);
      (*pcVar17)(uVar16,uVar38,lVar10);
      (*pcVar17)(lVar3 + uVar16 & uVar23,lVar3 + uVar38 & uVar23,lVar10);
      *(undefined1 *)((long)puVar18 + uVar4) = 2;
      break;
    case 3:
      uVar42 = *(undefined8 *)(puVar37 + 2);
      uVar12 = *(undefined8 *)puVar37;
      uVar44 = *(undefined8 *)(puVar37 + 6);
      uVar43 = *(undefined8 *)(puVar37 + 4);
      puVar18[4] = *(undefined8 *)(puVar37 + 8);
      puVar18[1] = uVar42;
      *puVar18 = uVar12;
      puVar18[3] = uVar44;
      puVar18[2] = uVar43;
      *(undefined1 *)((long)puVar18 + uVar4) = 3;
      break;
    case 4:
      bVar14 = *(byte *)((long)puVar37 + uVar2);
      uVar20 = (uint)bVar14;
      if (0xc < bVar14) {
        uVar21 = 4;
        if (uVar39 < 4) {
          uVar21 = uVar39;
        }
        if ((int)uVar21 < 2) {
          if (uVar21 == 0) goto LAB_1003047d8;
          uVar20 = (uint)(byte)*puVar37;
        }
        else if (uVar21 == 2) {
          uVar20 = (uint)(ushort)*puVar37;
        }
        else if (uVar21 == 3) {
          uVar20 = (uint)(uint3)*puVar37;
        }
        else {
          uVar20 = *puVar37;
        }
        if (uVar39 < 4) {
          uVar20 = (uVar20 | bVar14 - 0xd << (ulong)((uVar39 & 3) << 3)) + 0xd;
        }
        else {
          uVar20 = uVar20 + 0xd;
        }
      }
LAB_1003047d8:
                    /* WARNING: Could not recover jumptable at 0x0001003047f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1003047f4 + (ulong)*(ushort *)(&DAT_1008192dc + (ulong)uVar20 * 2) * 4))();
      return puVar18;
    case 5:
      *puVar18 = *(undefined8 *)puVar37;
      *(undefined1 *)((long)puVar18 + uVar4) = 5;
      break;
    case 6:
      uVar42 = *(undefined8 *)(puVar37 + 2);
      uVar12 = *(undefined8 *)puVar37;
      *(byte *)(puVar18 + 2) = (byte)puVar37[4];
      puVar18[1] = uVar42;
      *puVar18 = uVar12;
      *(undefined1 *)((long)puVar18 + uVar4) = 6;
      break;
    case 7:
      *puVar18 = *(undefined8 *)puVar37;
      *(undefined1 *)((long)puVar18 + uVar4) = 7;
      break;
    case 8:
      uVar12 = *(undefined8 *)puVar37;
      puVar18[1] = *(undefined8 *)(puVar37 + 2);
      *puVar18 = uVar12;
      *(undefined1 *)((long)puVar18 + uVar4) = 8;
      break;
    case 9:
      bVar14 = *(byte *)((long)puVar37 + uVar5);
      uVar20 = (uint)bVar14;
      if (4 < bVar14) {
        uVar21 = 4;
        if (uVar26 < 4) {
          uVar21 = uVar26;
        }
        if ((int)uVar21 < 2) {
          if (uVar21 == 0) goto LAB_1003048b8;
          uVar20 = (uint)(byte)*puVar37;
        }
        else if (uVar21 == 2) {
          uVar20 = (uint)(ushort)*puVar37;
        }
        else if (uVar21 == 3) {
          uVar20 = (uint)(uint3)*puVar37;
        }
        else {
          uVar20 = *puVar37;
        }
        if (uVar26 < 4) {
          uVar20 = (uVar20 | bVar14 - 5 << (ulong)((uVar26 & 3) << 3)) + 5;
        }
        else {
          uVar20 = uVar20 + 5;
        }
      }
LAB_1003048b8:
      if ((int)uVar20 < 2) {
        if (uVar20 == 0) {
          (**(code **)(lVar40 + 0x20))(puVar18,puVar37,lVar10);
          *(undefined1 *)((long)puVar18 + uVar5) = 0;
        }
        else if (uVar20 == 1) {
          *puVar18 = *(undefined8 *)puVar37;
          *(undefined1 *)((long)puVar18 + uVar5) = 1;
        }
        else {
LAB_100304960:
          _memcpy(puVar18,puVar37,uVar5 + 1);
        }
      }
      else if (uVar20 == 2) {
        uVar42 = *(undefined8 *)(puVar37 + 2);
        uVar12 = *(undefined8 *)puVar37;
        puVar18[2] = *(undefined8 *)(puVar37 + 4);
        puVar18[1] = uVar42;
        *puVar18 = uVar12;
        *(undefined1 *)((long)puVar18 + uVar5) = 2;
      }
      else if (uVar20 == 3) {
        *puVar18 = *(undefined8 *)puVar37;
        *(undefined1 *)((long)puVar18 + uVar5) = 3;
      }
      else {
        if (uVar20 != 4) goto LAB_100304960;
        *puVar18 = *(undefined8 *)puVar37;
        *(undefined1 *)((long)puVar18 + uVar5) = 4;
      }
      *(undefined1 *)((long)puVar18 + uVar4) = 9;
      break;
    case 10:
      bVar14 = *(byte *)((long)puVar37 + uVar6);
      uVar20 = (uint)bVar14;
      if (5 < bVar14) {
        uVar21 = 4;
        if (uVar34 < 4) {
          uVar21 = uVar34;
        }
        if ((int)uVar21 < 2) {
          if (uVar21 == 0) goto LAB_100304a34;
          uVar20 = (uint)(byte)*puVar37;
        }
        else if (uVar21 == 2) {
          uVar20 = (uint)(ushort)*puVar37;
        }
        else if (uVar21 == 3) {
          uVar20 = (uint)(uint3)*puVar37;
        }
        else {
          uVar20 = *puVar37;
        }
        if (uVar34 < 4) {
          uVar20 = (uVar20 | bVar14 - 6 << (ulong)(uVar34 << 3 & 0x1f)) + 6;
        }
        else {
          uVar20 = uVar20 + 6;
        }
      }
LAB_100304a34:
      if ((int)uVar20 < 3) {
        if (uVar20 == 0) {
          (**(code **)(lVar40 + 0x20))(puVar18,puVar37,lVar10);
          *(undefined1 *)((long)puVar18 + uVar6) = 0;
        }
        else if (uVar20 == 1) {
          (**(code **)(lVar30 + 0x20))(puVar18,puVar37,lVar11);
          *(undefined1 *)((long)puVar18 + uVar6) = 1;
        }
        else {
          if (uVar20 == 2) {
            *puVar18 = *(undefined8 *)puVar37;
            uVar15 = 2;
            goto LAB_100304afc;
          }
LAB_100304ab8:
          _memcpy(puVar18,puVar37,uVar6 + 1);
        }
      }
      else {
        if (uVar20 == 3) {
          *puVar18 = *(undefined8 *)puVar37;
          uVar15 = 3;
        }
        else if (uVar20 == 4) {
          *puVar18 = *(undefined8 *)puVar37;
          uVar15 = 4;
        }
        else {
          if (uVar20 != 5) goto LAB_100304ab8;
          uVar12 = *(undefined8 *)puVar37;
          puVar18[1] = *(undefined8 *)(puVar37 + 2);
          *puVar18 = uVar12;
          uVar15 = 5;
        }
LAB_100304afc:
        *(undefined1 *)((long)puVar18 + uVar6) = uVar15;
      }
      *(undefined1 *)((long)puVar18 + uVar4) = 10;
      break;
    case 0xb:
      uVar42 = *(undefined8 *)(puVar37 + 2);
      uVar12 = *(undefined8 *)puVar37;
      uVar44 = *(undefined8 *)(puVar37 + 6);
      uVar43 = *(undefined8 *)(puVar37 + 4);
      uVar45 = *(undefined8 *)((long)puVar37 + 0x19);
      *(undefined8 *)((long)puVar18 + 0x21) = *(undefined8 *)((long)puVar37 + 0x21);
      *(undefined8 *)((long)puVar18 + 0x19) = uVar45;
      puVar18[1] = uVar42;
      *puVar18 = uVar12;
      puVar18[3] = uVar44;
      puVar18[2] = uVar43;
      *(undefined1 *)((long)puVar18 + uVar4) = 0xb;
      break;
    case 0xc:
      *puVar18 = *(undefined8 *)puVar37;
      *(undefined1 *)((long)puVar18 + uVar4) = 0xc;
      break;
    case 0xd:
      *puVar18 = *(undefined8 *)puVar37;
      *(undefined1 *)((long)puVar18 + uVar4) = 0xd;
      break;
    case 0xe:
      uVar12 = *(undefined8 *)puVar37;
      puVar18[1] = *(undefined8 *)(puVar37 + 2);
      *puVar18 = uVar12;
      *(undefined1 *)((long)puVar18 + uVar4) = 0xe;
      break;
    default:
      goto switchD_10030433c_default;
    }
  }
  bVar14 = 4;
LAB_100304218:
  *(byte *)((long)puVar32 + uVar22) = bVar14;
  return param_1;
}

