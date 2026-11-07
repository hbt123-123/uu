// rea decompile_all
// name: FUN_10030729c
// address: 0x10030729c
// body: available
// range: 0x10030729c-0x100307ecb inclusive
// range: 0x100307ee8-0x1003080b3 inclusive
// range: 0x1003080e4-0x1003081ff inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint * FUN_10030729c(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  byte bVar18;
  undefined1 uVar19;
  uint uVar20;
  long lVar21;
  code *pcVar22;
  undefined8 *puVar23;
  long lVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  size_t sVar28;
  undefined8 *puVar29;
  ulong uVar30;
  uint uVar31;
  long lVar33;
  ulong uVar34;
  ulong uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  long lVar39;
  uint *puVar40;
  ulong uVar41;
  ulong uVar42;
  uint *puVar43;
  undefined8 uVar44;
  long lVar45;
  uint uVar32;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar17 = *(long *)(param_3 + 0x10);
  lVar6 = *(long *)(param_3 + 0x18);
  lVar21 = *(long *)(lVar17 + -8);
  lVar27 = *(long *)(lVar6 + -8);
  uVar5 = *(ulong *)(lVar21 + 0x40);
  if (*(ulong *)(lVar21 + 0x40) <= *(ulong *)(lVar27 + 0x40)) {
    uVar5 = *(ulong *)(lVar27 + 0x40);
  }
  lVar11 = 0;
  __s10Foundation10URLRequestVMa();
  lVar45 = *(long *)(lVar11 + -8);
  sVar28 = *(size_t *)(lVar45 + 0x40);
  if (*(int *)(lVar45 + 0x54) == 0) {
    sVar28 = sVar28 + 1;
  }
  lVar12 = 0;
  __s10Foundation3URLVMa();
  lVar39 = *(long *)(lVar12 + -8);
  uVar26 = *(uint *)(lVar39 + 0x50);
  uVar41 = (ulong)uVar26 & 0xff;
  lVar13 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar33 = *(long *)(lVar13 + -8);
  uVar34 = (ulong)((*(uint *)(lVar33 + 0x50) | uVar26) & 0xf8 | 7);
  uVar35 = uVar41 + 8;
  uVar30 = *(ulong *)(lVar39 + 0x40);
  lVar1 = uVar30 + uVar41;
  uVar2 = (lVar1 + (uVar35 & (uVar41 ^ 0xffffffffffffffff)) & (uVar41 ^ 0xffffffffffffffff)) +
          uVar30;
  uVar42 = (uVar30 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar42 <= uVar30) {
    uVar42 = uVar30;
  }
  if (uVar42 < 9) {
    uVar42 = 8;
  }
  if (uVar2 <= uVar42 + 1) {
    uVar2 = uVar42 + 1;
  }
  uVar3 = uVar30;
  if (uVar30 < 0x19) {
    uVar3 = 0x18;
  }
  if (uVar2 <= uVar3 + 1) {
    uVar2 = uVar3 + 1;
  }
  uVar4 = *(ulong *)(lVar33 + 0x40);
  if (*(ulong *)(lVar33 + 0x40) <= uVar30) {
    uVar4 = uVar30;
  }
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  if (uVar2 <= uVar4 + 1) {
    uVar2 = uVar4 + 1;
  }
  if (uVar2 < 0x2a) {
    uVar2 = 0x29;
  }
  uVar38 = (uint)uVar2;
  uVar10 = uVar38 << 3;
  uVar26 = 0x10;
  if (uVar38 < 4) {
    uVar26 = 1U >> (ulong)(uVar10 & 0x1f) | 0x10;
  }
  uVar30 = uVar2 + 1 +
           (uVar34 + (sVar28 + 7 & 0xfffffffffffffff8) + 0x10 & (uVar34 ^ 0xffffffffffffffff));
  if (uVar5 <= uVar30) {
    uVar5 = uVar30;
  }
  if (uVar5 < 0x19) {
    uVar5 = 0x18;
  }
  bVar18 = *(byte *)((long)param_1 + uVar5);
  uVar20 = (uint)bVar18;
  uVar37 = (uint)uVar5;
  if (4 < bVar18) {
    uVar31 = 4;
    if (uVar37 < 4) {
      uVar31 = uVar37;
    }
    if ((int)uVar31 < 2) {
      if (uVar31 == 0) goto LAB_1003074bc;
      uVar20 = (uint)(byte)*param_1;
    }
    else if (uVar31 == 2) {
      uVar20 = (uint)(ushort)*param_1;
    }
    else if (uVar31 == 3) {
      uVar20 = (uint)(uint3)*param_1;
    }
    else {
      uVar20 = *param_1;
    }
    if (uVar37 < 4) {
      uVar20 = uVar20 | bVar18 - 5 << (ulong)((uVar37 & 3) << 3);
    }
    uVar20 = uVar20 + 5;
  }
LAB_1003074bc:
  uVar30 = ~uVar34;
  uVar41 = ~uVar41;
  uVar36 = (uint)uVar4;
  uVar31 = (uint)uVar3;
  uVar32 = (uint)uVar42;
  puVar43 = param_1;
  if ((int)uVar20 < 2) {
    if (uVar20 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
      goto switchD_100307910_default;
    }
    pcVar22 = *(code **)(lVar21 + 8);
    lVar16 = lVar17;
LAB_1003075f4:
    (*pcVar22)(puVar43,lVar16);
  }
  else {
    if (uVar20 == 2) {
      pcVar22 = *(code **)(lVar27 + 8);
      lVar16 = lVar6;
      goto LAB_1003075f4;
    }
    if (uVar20 == 3) {
      uVar15 = *(ulong *)(param_1 + 4);
      if (uVar15 >> 0x3c < 0xf) {
        uVar14 = *(undefined8 *)(param_1 + 2);
LAB_100307500:
        FUN_100006cdc(uVar14,uVar15);
      }
    }
    else {
      (**(code **)(lVar45 + 0x30))(param_1,1,lVar11);
      if ((int)puVar43 == 0) {
        (**(code **)(lVar45 + 8))(param_1,lVar11);
      }
      puVar40 = (uint *)0x0;
      puVar43 = (uint *)(((ulong)((long)param_1 + sVar28 + 7) & 0xfffffffffffffff8) + uVar34 + 0x10
                        & uVar30);
      bVar18 = *(byte *)((long)puVar43 + uVar2);
      uVar20 = (uint)bVar18;
      if (0x100 - uVar26 <= (bVar18 ^ 0xff)) {
        if (0xe < bVar18) {
          uVar25 = 4;
          if (uVar38 < 4) {
            uVar25 = uVar38;
          }
          if ((int)uVar25 < 2) {
            if (uVar25 == 0) goto LAB_1003078f0;
            uVar25 = (uint)(byte)*puVar43;
          }
          else if (uVar25 == 2) {
            uVar25 = (uint)(ushort)*puVar43;
          }
          else if (uVar25 == 3) {
            uVar25 = (uint)(uint3)*puVar43;
          }
          else {
            uVar25 = *puVar43;
          }
          if (uVar38 < 4) {
            uVar20 = (uVar25 | uVar20 - 0xf << (ulong)(uVar10 & 0x1f)) + 0xf;
          }
          else {
            uVar20 = uVar25 + 0xf;
          }
        }
LAB_1003078f0:
        lVar16 = lVar12;
        lVar24 = lVar39;
        switch(uVar20) {
        case 0:
        case 1:
        case 7:
        case 0xc:
        case 0xd:
switchD_100307910_caseD_0:
          _swift_errorRelease(*(undefined8 *)puVar43);
          break;
        case 2:
          _swift_errorRelease(*(undefined8 *)puVar43);
          uVar15 = (ulong)(uVar35 + (long)puVar43) & uVar41;
          pcVar22 = *(code **)(lVar39 + 8);
          (*pcVar22)(uVar15,lVar12);
          (*pcVar22)(lVar1 + uVar15 & uVar41,lVar12);
          break;
        case 3:
          FUN_10003f094(puVar43);
          break;
        case 4:
          bVar18 = *(byte *)((long)puVar43 + uVar42);
          uVar26 = (uint)bVar18;
          if (0xc < bVar18) {
            uVar10 = 4;
            if (uVar32 < 4) {
              uVar10 = uVar32;
            }
            if ((int)uVar10 < 2) {
              if (uVar10 == 0) goto LAB_100308088;
              uVar26 = (uint)(byte)*puVar43;
            }
            else if (uVar10 == 2) {
              uVar26 = (uint)(ushort)*puVar43;
            }
            else if (uVar10 == 3) {
              uVar26 = (uint)(uint3)*puVar43;
            }
            else {
              uVar26 = *puVar43;
            }
            if (uVar32 < 4) {
              uVar26 = (uVar26 | bVar18 - 0xd << (ulong)((uVar32 & 3) << 3)) + 0xd;
            }
            else {
              uVar26 = uVar26 + 0xd;
            }
          }
LAB_100308088:
                    /* WARNING: Could not recover jumptable at 0x0001003080a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)*(ushort *)(&DAT_100819368 + (ulong)uVar26 * 2) * 4 + 0x100307914))(0);
          return puVar40;
        case 5:
          FUN_10027ba4c(*(undefined8 *)puVar43);
          break;
        case 6:
          FUN_100278f18(*(undefined8 *)puVar43,*(undefined8 *)(puVar43 + 2),(byte)puVar43[4]);
          break;
        case 8:
          _swift_errorRelease(*(undefined8 *)puVar43);
          _swift_errorRelease(*(undefined8 *)(puVar43 + 2));
          break;
        case 9:
          bVar18 = *(byte *)((long)puVar43 + uVar3);
          uVar20 = (uint)bVar18;
          if (4 < bVar18) {
            uVar25 = 4;
            if (uVar31 < 4) {
              uVar25 = uVar31;
            }
            if ((int)uVar25 < 2) {
              if (uVar25 == 0) goto LAB_100307e2c;
              uVar20 = (uint)(byte)*puVar43;
            }
            else if (uVar25 == 2) {
              uVar20 = (uint)(ushort)*puVar43;
            }
            else if (uVar25 == 3) {
              uVar20 = (uint)(uint3)*puVar43;
            }
            else {
              uVar20 = *puVar43;
            }
            if (uVar31 < 4) {
              uVar20 = (uVar20 | bVar18 - 5 << (ulong)((uVar31 & 3) << 3)) + 5;
            }
            else {
              uVar20 = uVar20 + 5;
            }
          }
LAB_100307e2c:
          if ((int)uVar20 < 2) {
            if (uVar20 == 0) {
LAB_1003080a8:
              pcVar22 = *(code **)(lVar24 + 8);
              goto LAB_1003075f4;
            }
            if (uVar20 == 1) {
              _swift_bridgeObjectRelease(*(undefined8 *)puVar43);
            }
          }
          else if (uVar20 == 2) {
            _swift_bridgeObjectRelease(*(undefined8 *)puVar43);
            _swift_bridgeObjectRelease(*(undefined8 *)(puVar43 + 4));
          }
          else if (uVar20 == 4) goto switchD_100307910_caseD_0;
          break;
        case 10:
          bVar18 = *(byte *)((long)puVar43 + uVar4);
          uVar20 = (uint)bVar18;
          if (5 < bVar18) {
            uVar25 = 4;
            if (uVar36 < 4) {
              uVar25 = uVar36;
            }
            if ((int)uVar25 < 2) {
              if (uVar25 == 0) goto LAB_100307f08;
              uVar20 = (uint)(byte)*puVar43;
            }
            else if (uVar25 == 2) {
              uVar20 = (uint)(ushort)*puVar43;
            }
            else if (uVar25 == 3) {
              uVar20 = (uint)(uint3)*puVar43;
            }
            else {
              uVar20 = *puVar43;
            }
            if (uVar36 < 4) {
              uVar20 = (uVar20 | bVar18 - 6 << (ulong)(uVar36 << 3 & 0x1f)) + 6;
            }
            else {
              uVar20 = uVar20 + 6;
            }
          }
LAB_100307f08:
          if ((int)uVar20 < 3) {
            if ((uVar20 == 0) || (lVar16 = lVar13, lVar24 = lVar33, uVar20 == 1))
            goto LAB_1003080a8;
            if (uVar20 == 2) goto switchD_100307910_caseD_0;
          }
          else {
            if ((uVar20 == 3) || (uVar20 == 4)) goto switchD_100307910_caseD_0;
            if (uVar20 == 5) {
              _swift_bridgeObjectRelease(*(undefined8 *)(puVar43 + 2));
            }
          }
          break;
        case 0xb:
          FUN_100278e14(*(undefined8 *)puVar43,*(undefined8 *)(puVar43 + 2),
                        *(undefined8 *)(puVar43 + 4),*(undefined8 *)(puVar43 + 6),
                        *(undefined8 *)(puVar43 + 8),(byte)puVar43[10]);
          break;
        case 0xe:
          uVar14 = *(undefined8 *)puVar43;
          uVar15 = *(ulong *)(puVar43 + 2);
          goto LAB_100307500;
        }
      }
    }
  }
switchD_100307910_default:
  bVar18 = *(byte *)((long)param_2 + uVar5);
  uVar20 = (uint)bVar18;
  if (4 < bVar18) {
    uVar25 = 4;
    if (uVar37 < 4) {
      uVar25 = uVar37;
    }
    if ((int)uVar25 < 2) {
      if (uVar25 == 0) goto joined_r0x000100307668;
      uVar20 = (uint)(byte)*param_2;
    }
    else if (uVar25 == 2) {
      uVar20 = (uint)(ushort)*param_2;
    }
    else if (uVar25 == 3) {
      uVar20 = (uint)(uint3)*param_2;
    }
    else {
      uVar20 = *param_2;
    }
    if (uVar37 < 4) {
      uVar20 = (uVar20 | bVar18 - 5 << (ulong)((uVar37 & 3) << 3)) + 5;
    }
    else {
      uVar20 = uVar20 + 5;
    }
  }
joined_r0x000100307668:
  if ((int)uVar20 < 2) {
    if (uVar20 == 0) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(byte *)((long)param_1 + uVar5) = 0;
      _swift_bridgeObjectRetain();
      return param_1;
    }
    (**(code **)(lVar21 + 0x10))(param_1,param_2,lVar17);
    bVar18 = 1;
    goto LAB_10030783c;
  }
  if (uVar20 == 2) {
    (**(code **)(lVar27 + 0x10))(param_1,param_2,lVar6);
    bVar18 = 2;
    goto LAB_10030783c;
  }
  if (uVar20 == 3) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    uVar35 = *(ulong *)(param_2 + 4);
    if (uVar35 >> 0x3c < 0xf) {
      uVar14 = *(undefined8 *)(param_2 + 2);
      FUN_100008184(uVar14,uVar35);
      *(undefined8 *)(param_1 + 2) = uVar14;
      *(ulong *)(param_1 + 4) = uVar35;
      bVar18 = 3;
    }
    else {
      uVar14 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = uVar14;
      bVar18 = 3;
    }
    goto LAB_10030783c;
  }
  puVar43 = param_2;
  (**(code **)(lVar45 + 0x30))(param_2,1,lVar11);
  if ((int)puVar43 == 0) {
    (**(code **)(lVar45 + 0x10))(param_1,param_2,lVar11);
    (**(code **)(lVar45 + 0x38))(param_1,0,1,lVar11);
  }
  else {
    _memcpy(param_1,param_2,sVar28);
  }
  puVar29 = (undefined8 *)((ulong)((long)param_2 + sVar28 + 7) & 0xfffffffffffffff8);
  puVar23 = (undefined8 *)((ulong)((long)param_1 + sVar28 + 7) & 0xfffffffffffffff8);
  *puVar23 = *puVar29;
  puVar23 = puVar23 + 1;
  puVar29 = puVar29 + 1;
  puVar43 = (uint *)*puVar29;
  *puVar23 = puVar43;
  puVar23 = (undefined8 *)((long)puVar23 + uVar34 + 8 & uVar30);
  puVar40 = (uint *)((long)puVar29 + uVar34 + 8 & uVar30);
  bVar18 = *(byte *)((long)puVar40 + uVar2);
  uVar20 = (uint)bVar18;
  if ((bVar18 ^ 0xff) < 0x100 - uVar26) {
switchD_100307960_default:
    _memcpy(puVar23,puVar40,uVar2 + 1);
  }
  else {
    if (0xe < bVar18) {
      uVar26 = 4;
      if (uVar38 < 4) {
        uVar26 = uVar38;
      }
      if ((int)uVar26 < 2) {
        if (uVar26 == 0) goto LAB_100307940;
        uVar20 = (uint)(byte)*puVar40;
      }
      else if (uVar26 == 2) {
        uVar20 = (uint)(ushort)*puVar40;
      }
      else if (uVar26 == 3) {
        uVar20 = (uint)(uint3)*puVar40;
      }
      else {
        uVar20 = *puVar40;
      }
      if (uVar38 < 4) {
        uVar20 = uVar20 | bVar18 - 0xf << (ulong)(uVar10 & 0x1f);
      }
      uVar20 = uVar20 + 0xf;
    }
LAB_100307940:
    switch(uVar20) {
    case 0:
      uVar14 = *(undefined8 *)puVar40;
      _swift_errorRetain(uVar14);
      *puVar23 = uVar14;
      *(undefined1 *)((long)puVar23 + uVar2) = 0;
      break;
    case 1:
      uVar14 = *(undefined8 *)puVar40;
      _swift_errorRetain(uVar14);
      *puVar23 = uVar14;
      *(undefined1 *)((long)puVar23 + uVar2) = 1;
      break;
    case 2:
      uVar14 = *(undefined8 *)puVar40;
      _swift_errorRetain(uVar14);
      *puVar23 = uVar14;
      uVar42 = uVar35 + (long)puVar23 & uVar41;
      uVar35 = (ulong)(uVar35 + (long)puVar40) & uVar41;
      pcVar22 = *(code **)(lVar39 + 0x10);
      (*pcVar22)(uVar42,uVar35,lVar12);
      (*pcVar22)(lVar1 + uVar42 & uVar41,lVar1 + uVar35 & uVar41,lVar12);
      *(undefined1 *)((long)puVar23 + uVar2) = 2;
      break;
    case 3:
      lVar17 = *(long *)(puVar40 + 6);
      puVar23[3] = lVar17;
      puVar23[4] = *(undefined8 *)(puVar40 + 8);
      (*(code *)**(undefined8 **)(lVar17 + -8))(puVar23,puVar40);
      *(undefined1 *)((long)puVar23 + uVar2) = 3;
      break;
    case 4:
      bVar18 = *(byte *)((long)puVar40 + uVar42);
      uVar26 = (uint)bVar18;
      if (0xc < bVar18) {
        uVar10 = 4;
        if (uVar32 < 4) {
          uVar10 = uVar32;
        }
        if ((int)uVar10 < 2) {
          if (uVar10 == 0) goto LAB_100307eb0;
          uVar26 = (uint)(byte)*puVar40;
        }
        else if (uVar10 == 2) {
          uVar26 = (uint)(ushort)*puVar40;
        }
        else if (uVar10 == 3) {
          uVar26 = (uint)(uint3)*puVar40;
        }
        else {
          uVar26 = *puVar40;
        }
        if (uVar32 < 4) {
          uVar26 = (uVar26 | bVar18 - 0xd << (ulong)((uVar32 & 3) << 3)) + 0xd;
        }
        else {
          uVar26 = uVar26 + 0xd;
        }
      }
LAB_100307eb0:
                    /* WARNING: Could not recover jumptable at 0x000100307ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_100307ecc + (ulong)*(ushort *)(&DAT_1008193a0 + (ulong)uVar26 * 2) * 4))
                (puVar43);
      return puVar43;
    case 5:
      uVar14 = *(undefined8 *)puVar40;
      FUN_10027c0e0(uVar14);
      *puVar23 = uVar14;
      *(undefined1 *)((long)puVar23 + uVar2) = 5;
      break;
    case 6:
      uVar14 = *(undefined8 *)puVar40;
      uVar7 = *(undefined8 *)(puVar40 + 2);
      uVar26 = puVar40[4];
      FUN_10027c0fc(uVar14,uVar7,(byte)uVar26);
      *puVar23 = uVar14;
      puVar23[1] = uVar7;
      *(byte *)(puVar23 + 2) = (byte)uVar26;
      *(undefined1 *)((long)puVar23 + uVar2) = 6;
      break;
    case 7:
      uVar14 = *(undefined8 *)puVar40;
      _swift_errorRetain(uVar14);
      *puVar23 = uVar14;
      *(undefined1 *)((long)puVar23 + uVar2) = 7;
      break;
    case 8:
      uVar14 = *(undefined8 *)puVar40;
      _swift_errorRetain(uVar14);
      *puVar23 = uVar14;
      uVar14 = *(undefined8 *)(puVar40 + 2);
      _swift_errorRetain(uVar14);
      puVar23[1] = uVar14;
      *(undefined1 *)((long)puVar23 + uVar2) = 8;
      break;
    case 9:
      bVar18 = *(byte *)((long)puVar40 + uVar3);
      uVar26 = (uint)bVar18;
      if (4 < bVar18) {
        uVar10 = 4;
        if (uVar31 < 4) {
          uVar10 = uVar31;
        }
        if ((int)uVar10 < 2) {
          if (uVar10 == 0) goto LAB_100307f78;
          uVar26 = (uint)(byte)*puVar40;
        }
        else if (uVar10 == 2) {
          uVar26 = (uint)(ushort)*puVar40;
        }
        else if (uVar10 == 3) {
          uVar26 = (uint)(uint3)*puVar40;
        }
        else {
          uVar26 = *puVar40;
        }
        if (uVar31 < 4) {
          uVar26 = (uVar26 | bVar18 - 5 << (ulong)((uVar31 & 3) << 3)) + 5;
        }
        else {
          uVar26 = uVar26 + 5;
        }
      }
LAB_100307f78:
      if ((int)uVar26 < 2) {
        if (uVar26 == 0) {
          (**(code **)(lVar39 + 0x10))(puVar23,puVar40,lVar12);
          *(undefined1 *)((long)puVar23 + uVar3) = 0;
        }
        else if (uVar26 == 1) {
          *puVar23 = *(undefined8 *)puVar40;
          *(undefined1 *)((long)puVar23 + uVar3) = 1;
          _swift_bridgeObjectRetain();
        }
        else {
LAB_100308040:
          _memcpy(puVar23,puVar40,uVar3 + 1);
        }
      }
      else if (uVar26 == 2) {
        *puVar23 = *(undefined8 *)puVar40;
        puVar23[1] = *(undefined8 *)(puVar40 + 2);
        uVar14 = *(undefined8 *)(puVar40 + 4);
        puVar23[2] = uVar14;
        *(undefined1 *)((long)puVar23 + uVar3) = 2;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar14);
      }
      else if (uVar26 == 3) {
        *puVar23 = *(undefined8 *)puVar40;
        *(undefined1 *)((long)puVar23 + uVar3) = 3;
      }
      else {
        if (uVar26 != 4) goto LAB_100308040;
        uVar14 = *(undefined8 *)puVar40;
        _swift_errorRetain(uVar14);
        *puVar23 = uVar14;
        *(undefined1 *)((long)puVar23 + uVar3) = 4;
      }
      *(undefined1 *)((long)puVar23 + uVar2) = 9;
      break;
    case 10:
      bVar18 = *(byte *)((long)puVar40 + uVar4);
      uVar26 = (uint)bVar18;
      if (5 < bVar18) {
        uVar10 = 4;
        if (uVar36 < 4) {
          uVar10 = uVar36;
        }
        if ((int)uVar10 < 2) {
          if (uVar10 == 0) goto LAB_10030810c;
          uVar26 = (uint)(byte)*puVar40;
        }
        else if (uVar10 == 2) {
          uVar26 = (uint)(ushort)*puVar40;
        }
        else if (uVar10 == 3) {
          uVar26 = (uint)(uint3)*puVar40;
        }
        else {
          uVar26 = *puVar40;
        }
        if (uVar36 < 4) {
          uVar26 = (uVar26 | bVar18 - 6 << (ulong)(uVar36 << 3 & 0x1f)) + 6;
        }
        else {
          uVar26 = uVar26 + 6;
        }
      }
LAB_10030810c:
      if ((int)uVar26 < 3) {
        if (uVar26 != 0) {
          if (uVar26 == 1) {
            (**(code **)(lVar33 + 0x10))(puVar23,puVar40,lVar13);
            uVar19 = 1;
          }
          else {
            if (uVar26 != 2) {
LAB_1003081ac:
              _memcpy(puVar23,puVar40,uVar4 + 1);
              goto LAB_1003081f4;
            }
            uVar14 = *(undefined8 *)puVar40;
            _swift_errorRetain(uVar14);
            *puVar23 = uVar14;
            uVar19 = 2;
          }
          goto LAB_1003081f0;
        }
        (**(code **)(lVar39 + 0x10))(puVar23,puVar40,lVar12);
        *(undefined1 *)((long)puVar23 + uVar4) = 0;
      }
      else {
        if (uVar26 == 3) {
          uVar14 = *(undefined8 *)puVar40;
          _swift_errorRetain(uVar14);
          *puVar23 = uVar14;
          uVar19 = 3;
        }
        else {
          if (uVar26 != 4) {
            if (uVar26 != 5) goto LAB_1003081ac;
            *puVar23 = *(undefined8 *)puVar40;
            puVar23[1] = *(undefined8 *)(puVar40 + 2);
            *(undefined1 *)((long)puVar23 + uVar4) = 5;
            _swift_bridgeObjectRetain();
            goto LAB_1003081f4;
          }
          uVar14 = *(undefined8 *)puVar40;
          _swift_errorRetain(uVar14);
          *puVar23 = uVar14;
          uVar19 = 4;
        }
LAB_1003081f0:
        *(undefined1 *)((long)puVar23 + uVar4) = uVar19;
      }
LAB_1003081f4:
      *(undefined1 *)((long)puVar23 + uVar2) = 10;
      break;
    case 0xb:
      uVar14 = *(undefined8 *)puVar40;
      uVar8 = *(undefined8 *)(puVar40 + 2);
      uVar7 = *(undefined8 *)(puVar40 + 4);
      uVar9 = *(undefined8 *)(puVar40 + 6);
      uVar44 = *(undefined8 *)(puVar40 + 8);
      uVar26 = puVar40[10];
      FUN_10027c10c(uVar14,uVar8,uVar7,uVar9,uVar44,(byte)uVar26);
      *puVar23 = uVar14;
      puVar23[1] = uVar8;
      puVar23[2] = uVar7;
      puVar23[3] = uVar9;
      puVar23[4] = uVar44;
      *(byte *)(puVar23 + 5) = (byte)uVar26;
      *(undefined1 *)((long)puVar23 + uVar2) = 0xb;
      break;
    case 0xc:
      uVar14 = *(undefined8 *)puVar40;
      _swift_errorRetain(uVar14);
      *puVar23 = uVar14;
      *(undefined1 *)((long)puVar23 + uVar2) = 0xc;
      break;
    case 0xd:
      uVar14 = *(undefined8 *)puVar40;
      _swift_errorRetain(uVar14);
      *puVar23 = uVar14;
      *(undefined1 *)((long)puVar23 + uVar2) = 0xd;
      break;
    case 0xe:
      uVar14 = *(undefined8 *)puVar40;
      uVar7 = *(undefined8 *)(puVar40 + 2);
      FUN_100008184(uVar14,uVar7);
      *puVar23 = uVar14;
      puVar23[1] = uVar7;
      *(undefined1 *)((long)puVar23 + uVar2) = 0xe;
      break;
    default:
      goto switchD_100307960_default;
    }
  }
  bVar18 = 4;
LAB_10030783c:
  *(byte *)((long)param_1 + uVar5) = bVar18;
  return param_1;
}

