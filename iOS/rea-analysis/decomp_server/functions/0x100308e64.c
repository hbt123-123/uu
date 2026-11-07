// rea decompile_all
// name: FUN_100308e64
// address: 0x100308e64
// body: available
// range: 0x100308e64-0x100309997 inclusive
// range: 0x1003099b4-0x100309b5b inclusive
// range: 0x100309b8c-0x100309c83 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint * FUN_100308e64(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  uint *puVar13;
  ulong uVar14;
  uint *puVar15;
  long lVar16;
  byte bVar17;
  undefined1 uVar18;
  uint uVar19;
  long lVar20;
  code *pcVar21;
  undefined8 *puVar22;
  long lVar23;
  uint uVar24;
  uint uVar25;
  long lVar26;
  size_t sVar27;
  undefined8 *puVar28;
  ulong uVar29;
  uint uVar30;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  long lVar38;
  ulong uVar39;
  ulong uVar40;
  long lVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  uint uVar31;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar6 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(param_3 + 0x18);
  lVar20 = *(long *)(lVar6 + -8);
  lVar26 = *(long *)(lVar7 + -8);
  uVar5 = *(ulong *)(lVar20 + 0x40);
  if (*(ulong *)(lVar20 + 0x40) <= *(ulong *)(lVar26 + 0x40)) {
    uVar5 = *(ulong *)(lVar26 + 0x40);
  }
  lVar9 = 0;
  __s10Foundation10URLRequestVMa();
  lVar41 = *(long *)(lVar9 + -8);
  sVar27 = *(size_t *)(lVar41 + 0x40);
  if (*(int *)(lVar41 + 0x54) == 0) {
    sVar27 = sVar27 + 1;
  }
  lVar10 = 0;
  __s10Foundation3URLVMa();
  lVar38 = *(long *)(lVar10 + -8);
  uVar25 = *(uint *)(lVar38 + 0x50);
  uVar40 = (ulong)uVar25 & 0xff;
  lVar11 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar32 = *(long *)(lVar11 + -8);
  uVar33 = (ulong)((*(uint *)(lVar32 + 0x50) | uVar25) & 0xf8 | 7);
  uVar39 = uVar40 + 8;
  uVar29 = *(ulong *)(lVar38 + 0x40);
  lVar1 = uVar29 + uVar40;
  uVar2 = (lVar1 + (uVar39 & (uVar40 ^ 0xffffffffffffffff)) & (uVar40 ^ 0xffffffffffffffff)) +
          uVar29;
  uVar34 = (uVar29 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar34 <= uVar29) {
    uVar34 = uVar29;
  }
  if (uVar34 < 9) {
    uVar34 = 8;
  }
  if (uVar2 <= uVar34 + 1) {
    uVar2 = uVar34 + 1;
  }
  uVar3 = uVar29;
  if (uVar29 < 0x19) {
    uVar3 = 0x18;
  }
  if (uVar2 <= uVar3 + 1) {
    uVar2 = uVar3 + 1;
  }
  uVar4 = *(ulong *)(lVar32 + 0x40);
  if (*(ulong *)(lVar32 + 0x40) <= uVar29) {
    uVar4 = uVar29;
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
  uVar36 = (uint)uVar2;
  uVar8 = uVar36 << 3;
  uVar25 = 0x10;
  if (uVar36 < 4) {
    uVar25 = 1U >> (ulong)(uVar8 & 0x1f) | 0x10;
  }
  uVar29 = uVar2 + 1 +
           (uVar33 + (sVar27 + 7 & 0xfffffffffffffff8) + 0x10 & (uVar33 ^ 0xffffffffffffffff));
  if (uVar5 <= uVar29) {
    uVar5 = uVar29;
  }
  if (uVar5 < 0x19) {
    uVar5 = 0x18;
  }
  bVar17 = *(byte *)((long)param_1 + uVar5);
  uVar19 = (uint)bVar17;
  uVar35 = (uint)uVar5;
  if (4 < bVar17) {
    uVar31 = 4;
    if (uVar35 < 4) {
      uVar31 = uVar35;
    }
    if ((int)uVar31 < 2) {
      if (uVar31 == 0) goto LAB_100309084;
      uVar19 = (uint)(byte)*param_1;
    }
    else if (uVar31 == 2) {
      uVar19 = (uint)(ushort)*param_1;
    }
    else if (uVar31 == 3) {
      uVar19 = (uint)(uint3)*param_1;
    }
    else {
      uVar19 = *param_1;
    }
    if (uVar35 < 4) {
      uVar19 = uVar19 | bVar17 - 5 << (ulong)((uVar35 & 3) << 3);
    }
    uVar19 = uVar19 + 5;
  }
LAB_100309084:
  uVar29 = ~uVar33;
  uVar40 = ~uVar40;
  uVar37 = (uint)uVar4;
  uVar30 = (uint)uVar3;
  uVar31 = (uint)uVar34;
  puVar13 = param_1;
  if ((int)uVar19 < 2) {
    if (uVar19 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
      goto switchD_100309484_default;
    }
    pcVar21 = *(code **)(lVar20 + 8);
    lVar16 = lVar6;
LAB_1003091bc:
    (*pcVar21)(puVar13,lVar16);
  }
  else {
    if (uVar19 == 2) {
      pcVar21 = *(code **)(lVar26 + 8);
      lVar16 = lVar7;
      goto LAB_1003091bc;
    }
    if (uVar19 == 3) {
      uVar14 = *(ulong *)(param_1 + 4);
      if (uVar14 >> 0x3c < 0xf) {
        uVar12 = *(undefined8 *)(param_1 + 2);
LAB_1003090c8:
        FUN_100006cdc(uVar12,uVar14);
      }
    }
    else {
      (**(code **)(lVar41 + 0x30))(param_1,1,lVar9);
      if ((int)puVar13 == 0) {
        (**(code **)(lVar41 + 8))(param_1,lVar9);
      }
      puVar15 = (uint *)0x0;
      puVar13 = (uint *)(((ulong)((long)param_1 + sVar27 + 7) & 0xfffffffffffffff8) + uVar33 + 0x10
                        & uVar29);
      bVar17 = *(byte *)((long)puVar13 + uVar2);
      uVar19 = (uint)bVar17;
      if (0x100 - uVar25 <= (bVar17 ^ 0xff)) {
        if (0xe < bVar17) {
          uVar24 = 4;
          if (uVar36 < 4) {
            uVar24 = uVar36;
          }
          if ((int)uVar24 < 2) {
            if (uVar24 == 0) goto LAB_100309464;
            uVar24 = (uint)(byte)*puVar13;
          }
          else if (uVar24 == 2) {
            uVar24 = (uint)(ushort)*puVar13;
          }
          else if (uVar24 == 3) {
            uVar24 = (uint)(uint3)*puVar13;
          }
          else {
            uVar24 = *puVar13;
          }
          if (uVar36 < 4) {
            uVar19 = (uVar24 | uVar19 - 0xf << (ulong)(uVar8 & 0x1f)) + 0xf;
          }
          else {
            uVar19 = uVar24 + 0xf;
          }
        }
LAB_100309464:
        lVar16 = lVar10;
        lVar23 = lVar38;
        switch(uVar19) {
        case 0:
        case 1:
        case 7:
        case 0xc:
        case 0xd:
switchD_100309484_caseD_0:
          _swift_errorRelease(*(undefined8 *)puVar13);
          break;
        case 2:
          _swift_errorRelease(*(undefined8 *)puVar13);
          uVar14 = (ulong)(uVar39 + (long)puVar13) & uVar40;
          pcVar21 = *(code **)(lVar38 + 8);
          (*pcVar21)(uVar14,lVar10);
          (*pcVar21)(lVar1 + uVar14 & uVar40,lVar10);
          break;
        case 3:
          FUN_10003f094(puVar13);
          break;
        case 4:
          bVar17 = *(byte *)((long)puVar13 + uVar34);
          uVar25 = (uint)bVar17;
          if (0xc < bVar17) {
            uVar8 = 4;
            if (uVar31 < 4) {
              uVar8 = uVar31;
            }
            if ((int)uVar8 < 2) {
              if (uVar8 == 0) goto LAB_100309b30;
              uVar25 = (uint)(byte)*puVar13;
            }
            else if (uVar8 == 2) {
              uVar25 = (uint)(ushort)*puVar13;
            }
            else if (uVar8 == 3) {
              uVar25 = (uint)(uint3)*puVar13;
            }
            else {
              uVar25 = *puVar13;
            }
            if (uVar31 < 4) {
              uVar25 = (uVar25 | bVar17 - 0xd << (ulong)((uVar31 & 3) << 3)) + 0xd;
            }
            else {
              uVar25 = uVar25 + 0xd;
            }
          }
LAB_100309b30:
                    /* WARNING: Could not recover jumptable at 0x000100309b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)*(ushort *)(&DAT_1008193e6 + (ulong)uVar25 * 2) * 4 + 0x100309488))(0);
          return puVar15;
        case 5:
          FUN_10027ba4c(*(undefined8 *)puVar13);
          break;
        case 6:
          FUN_100278f18(*(undefined8 *)puVar13,*(undefined8 *)(puVar13 + 2),(byte)puVar13[4]);
          break;
        case 8:
          _swift_errorRelease(*(undefined8 *)puVar13);
          _swift_errorRelease(*(undefined8 *)(puVar13 + 2));
          break;
        case 9:
          bVar17 = *(byte *)((long)puVar13 + uVar3);
          uVar19 = (uint)bVar17;
          if (4 < bVar17) {
            uVar24 = 4;
            if (uVar30 < 4) {
              uVar24 = uVar30;
            }
            if ((int)uVar24 < 2) {
              if (uVar24 == 0) goto LAB_1003098f8;
              uVar19 = (uint)(byte)*puVar13;
            }
            else if (uVar24 == 2) {
              uVar19 = (uint)(ushort)*puVar13;
            }
            else if (uVar24 == 3) {
              uVar19 = (uint)(uint3)*puVar13;
            }
            else {
              uVar19 = *puVar13;
            }
            if (uVar30 < 4) {
              uVar19 = (uVar19 | bVar17 - 5 << (ulong)((uVar30 & 3) << 3)) + 5;
            }
            else {
              uVar19 = uVar19 + 5;
            }
          }
LAB_1003098f8:
          if ((int)uVar19 < 2) {
            if (uVar19 == 0) {
LAB_100309b50:
              pcVar21 = *(code **)(lVar23 + 8);
              goto LAB_1003091bc;
            }
            if (uVar19 == 1) {
              _swift_bridgeObjectRelease(*(undefined8 *)puVar13);
            }
          }
          else if (uVar19 == 2) {
            _swift_bridgeObjectRelease(*(undefined8 *)puVar13);
            _swift_bridgeObjectRelease(*(undefined8 *)(puVar13 + 4));
          }
          else if (uVar19 == 4) goto switchD_100309484_caseD_0;
          break;
        case 10:
          bVar17 = *(byte *)((long)puVar13 + uVar4);
          uVar19 = (uint)bVar17;
          if (5 < bVar17) {
            uVar24 = 4;
            if (uVar37 < 4) {
              uVar24 = uVar37;
            }
            if ((int)uVar24 < 2) {
              if (uVar24 == 0) goto LAB_1003099d4;
              uVar19 = (uint)(byte)*puVar13;
            }
            else if (uVar24 == 2) {
              uVar19 = (uint)(ushort)*puVar13;
            }
            else if (uVar24 == 3) {
              uVar19 = (uint)(uint3)*puVar13;
            }
            else {
              uVar19 = *puVar13;
            }
            if (uVar37 < 4) {
              uVar19 = (uVar19 | bVar17 - 6 << (ulong)(uVar37 << 3 & 0x1f)) + 6;
            }
            else {
              uVar19 = uVar19 + 6;
            }
          }
LAB_1003099d4:
          if ((int)uVar19 < 3) {
            if ((uVar19 == 0) || (lVar16 = lVar11, lVar23 = lVar32, uVar19 == 1))
            goto LAB_100309b50;
            if (uVar19 == 2) goto switchD_100309484_caseD_0;
          }
          else {
            if ((uVar19 == 3) || (uVar19 == 4)) goto switchD_100309484_caseD_0;
            if (uVar19 == 5) {
              _swift_bridgeObjectRelease(*(undefined8 *)(puVar13 + 2));
            }
          }
          break;
        case 0xb:
          FUN_100278e14(*(undefined8 *)puVar13,*(undefined8 *)(puVar13 + 2),
                        *(undefined8 *)(puVar13 + 4),*(undefined8 *)(puVar13 + 6),
                        *(undefined8 *)(puVar13 + 8),(byte)puVar13[10]);
          break;
        case 0xe:
          uVar12 = *(undefined8 *)puVar13;
          uVar14 = *(ulong *)(puVar13 + 2);
          goto LAB_1003090c8;
        }
      }
    }
  }
switchD_100309484_default:
  bVar17 = *(byte *)((long)param_2 + uVar5);
  uVar19 = (uint)bVar17;
  if (4 < bVar17) {
    uVar24 = 4;
    if (uVar35 < 4) {
      uVar24 = uVar35;
    }
    if ((int)uVar24 < 2) {
      if (uVar24 == 0) goto joined_r0x000100309230;
      uVar19 = (uint)(byte)*param_2;
    }
    else if (uVar24 == 2) {
      uVar19 = (uint)(ushort)*param_2;
    }
    else if (uVar24 == 3) {
      uVar19 = (uint)(uint3)*param_2;
    }
    else {
      uVar19 = *param_2;
    }
    if (uVar35 < 4) {
      uVar19 = (uVar19 | bVar17 - 5 << (ulong)((uVar35 & 3) << 3)) + 5;
    }
    else {
      uVar19 = uVar19 + 5;
    }
  }
joined_r0x000100309230:
  if ((int)uVar19 < 2) {
    if (uVar19 == 0) {
      bVar17 = 0;
      uVar12 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar12;
    }
    else {
      (**(code **)(lVar20 + 0x20))(param_1,param_2,lVar6);
      bVar17 = 1;
    }
    goto LAB_1003093b0;
  }
  if (uVar19 == 2) {
    (**(code **)(lVar26 + 0x20))(param_1,param_2,lVar7);
    bVar17 = 2;
    goto LAB_1003093b0;
  }
  if (uVar19 == 3) {
    uVar12 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar12;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    bVar17 = 3;
    goto LAB_1003093b0;
  }
  puVar13 = param_2;
  (**(code **)(lVar41 + 0x30))(param_2,1,lVar9);
  if ((int)puVar13 == 0) {
    (**(code **)(lVar41 + 0x20))(param_1,param_2,lVar9);
    (**(code **)(lVar41 + 0x38))(param_1,0,1,lVar9);
  }
  else {
    _memcpy(param_1,param_2,sVar27);
  }
  puVar22 = (undefined8 *)((ulong)((long)param_1 + sVar27 + 7) & 0xfffffffffffffff8);
  puVar28 = (undefined8 *)((ulong)((long)param_2 + sVar27 + 7) & 0xfffffffffffffff8);
  *puVar22 = *puVar28;
  puVar22 = puVar22 + 1;
  puVar28 = puVar28 + 1;
  *puVar22 = *puVar28;
  puVar13 = (uint *)((long)puVar22 + uVar33 + 8 & uVar29);
  puVar15 = (uint *)((long)puVar28 + uVar33 + 8 & uVar29);
  bVar17 = *(byte *)((long)puVar15 + uVar2);
  uVar19 = (uint)bVar17;
  if ((bVar17 ^ 0xff) < 0x100 - uVar25) {
switchD_1003094dc_default:
    _memcpy(puVar13,puVar15,uVar2 + 1);
  }
  else {
    if (0xe < bVar17) {
      uVar25 = 4;
      if (uVar36 < 4) {
        uVar25 = uVar36;
      }
      if ((int)uVar25 < 2) {
        if (uVar25 == 0) goto LAB_1003094bc;
        uVar25 = (uint)(byte)*puVar15;
      }
      else if (uVar25 == 2) {
        uVar25 = (uint)(ushort)*puVar15;
      }
      else if (uVar25 == 3) {
        uVar25 = (uint)(uint3)*puVar15;
      }
      else {
        uVar25 = *puVar15;
      }
      if (uVar36 < 4) {
        uVar19 = (uVar25 | uVar19 - 0xf << (ulong)(uVar8 & 0x1f)) + 0xf;
      }
      else {
        uVar19 = uVar25 + 0xf;
      }
    }
LAB_1003094bc:
    switch(uVar19) {
    case 0:
      *(undefined8 *)puVar13 = *(undefined8 *)puVar15;
      *(undefined1 *)((long)puVar13 + uVar2) = 0;
      break;
    case 1:
      *(undefined8 *)puVar13 = *(undefined8 *)puVar15;
      *(undefined1 *)((long)puVar13 + uVar2) = 1;
      break;
    case 2:
      *(undefined8 *)puVar13 = *(undefined8 *)puVar15;
      uVar34 = uVar39 + (long)puVar13 & uVar40;
      uVar39 = (ulong)(uVar39 + (long)puVar15) & uVar40;
      pcVar21 = *(code **)(lVar38 + 0x20);
      (*pcVar21)(uVar34,uVar39,lVar10);
      (*pcVar21)(lVar1 + uVar34 & uVar40,lVar1 + uVar39 & uVar40,lVar10);
      *(undefined1 *)((long)puVar13 + uVar2) = 2;
      break;
    case 3:
      uVar42 = *(undefined8 *)(puVar15 + 2);
      uVar12 = *(undefined8 *)puVar15;
      uVar44 = *(undefined8 *)(puVar15 + 6);
      uVar43 = *(undefined8 *)(puVar15 + 4);
      *(undefined8 *)(puVar13 + 8) = *(undefined8 *)(puVar15 + 8);
      *(undefined8 *)(puVar13 + 2) = uVar42;
      *(undefined8 *)puVar13 = uVar12;
      *(undefined8 *)(puVar13 + 6) = uVar44;
      *(undefined8 *)(puVar13 + 4) = uVar43;
      *(undefined1 *)((long)puVar13 + uVar2) = 3;
      break;
    case 4:
      bVar17 = *(byte *)((long)puVar15 + uVar34);
      uVar25 = (uint)bVar17;
      if (0xc < bVar17) {
        uVar8 = 4;
        if (uVar31 < 4) {
          uVar8 = uVar31;
        }
        if ((int)uVar8 < 2) {
          if (uVar8 == 0) goto LAB_10030997c;
          uVar25 = (uint)(byte)*puVar15;
        }
        else if (uVar8 == 2) {
          uVar25 = (uint)(ushort)*puVar15;
        }
        else if (uVar8 == 3) {
          uVar25 = (uint)(uint3)*puVar15;
        }
        else {
          uVar25 = *puVar15;
        }
        if (uVar31 < 4) {
          uVar25 = (uVar25 | bVar17 - 0xd << (ulong)((uVar31 & 3) << 3)) + 0xd;
        }
        else {
          uVar25 = uVar25 + 0xd;
        }
      }
LAB_10030997c:
                    /* WARNING: Could not recover jumptable at 0x000100309994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_100309998 + (ulong)*(ushort *)(&DAT_100819410 + (ulong)uVar25 * 2) * 4))();
      return puVar13;
    case 5:
      *(undefined8 *)puVar13 = *(undefined8 *)puVar15;
      *(undefined1 *)((long)puVar13 + uVar2) = 5;
      break;
    case 6:
      uVar42 = *(undefined8 *)(puVar15 + 2);
      uVar12 = *(undefined8 *)puVar15;
      *(byte *)(puVar13 + 4) = (byte)puVar15[4];
      *(undefined8 *)(puVar13 + 2) = uVar42;
      *(undefined8 *)puVar13 = uVar12;
      *(undefined1 *)((long)puVar13 + uVar2) = 6;
      break;
    case 7:
      *(undefined8 *)puVar13 = *(undefined8 *)puVar15;
      *(undefined1 *)((long)puVar13 + uVar2) = 7;
      break;
    case 8:
      uVar12 = *(undefined8 *)puVar15;
      *(undefined8 *)(puVar13 + 2) = *(undefined8 *)(puVar15 + 2);
      *(undefined8 *)puVar13 = uVar12;
      *(undefined1 *)((long)puVar13 + uVar2) = 8;
      break;
    case 9:
      bVar17 = *(byte *)((long)puVar15 + uVar3);
      uVar25 = (uint)bVar17;
      if (4 < bVar17) {
        uVar8 = 4;
        if (uVar30 < 4) {
          uVar8 = uVar30;
        }
        if ((int)uVar8 < 2) {
          if (uVar8 == 0) goto LAB_100309a44;
          uVar25 = (uint)(byte)*puVar15;
        }
        else if (uVar8 == 2) {
          uVar25 = (uint)(ushort)*puVar15;
        }
        else if (uVar8 == 3) {
          uVar25 = (uint)(uint3)*puVar15;
        }
        else {
          uVar25 = *puVar15;
        }
        if (uVar30 < 4) {
          uVar25 = (uVar25 | bVar17 - 5 << (ulong)((uVar30 & 3) << 3)) + 5;
        }
        else {
          uVar25 = uVar25 + 5;
        }
      }
LAB_100309a44:
      if ((int)uVar25 < 2) {
        if (uVar25 == 0) {
          (**(code **)(lVar38 + 0x20))(puVar13,puVar15,lVar10);
          *(undefined1 *)((long)puVar13 + uVar3) = 0;
        }
        else if (uVar25 == 1) {
          *(undefined8 *)puVar13 = *(undefined8 *)puVar15;
          *(undefined1 *)((long)puVar13 + uVar3) = 1;
        }
        else {
LAB_100309ae8:
          _memcpy(puVar13,puVar15,uVar3 + 1);
        }
      }
      else if (uVar25 == 2) {
        uVar42 = *(undefined8 *)(puVar15 + 2);
        uVar12 = *(undefined8 *)puVar15;
        *(undefined8 *)(puVar13 + 4) = *(undefined8 *)(puVar15 + 4);
        *(undefined8 *)(puVar13 + 2) = uVar42;
        *(undefined8 *)puVar13 = uVar12;
        *(undefined1 *)((long)puVar13 + uVar3) = 2;
      }
      else if (uVar25 == 3) {
        *(undefined8 *)puVar13 = *(undefined8 *)puVar15;
        *(undefined1 *)((long)puVar13 + uVar3) = 3;
      }
      else {
        if (uVar25 != 4) goto LAB_100309ae8;
        *(undefined8 *)puVar13 = *(undefined8 *)puVar15;
        *(undefined1 *)((long)puVar13 + uVar3) = 4;
      }
      *(undefined1 *)((long)puVar13 + uVar2) = 9;
      break;
    case 10:
      bVar17 = *(byte *)((long)puVar15 + uVar4);
      uVar25 = (uint)bVar17;
      if (5 < bVar17) {
        uVar8 = 4;
        if (uVar37 < 4) {
          uVar8 = uVar37;
        }
        if ((int)uVar8 < 2) {
          if (uVar8 == 0) goto LAB_100309bb4;
          uVar25 = (uint)(byte)*puVar15;
        }
        else if (uVar8 == 2) {
          uVar25 = (uint)(ushort)*puVar15;
        }
        else if (uVar8 == 3) {
          uVar25 = (uint)(uint3)*puVar15;
        }
        else {
          uVar25 = *puVar15;
        }
        if (uVar37 < 4) {
          uVar25 = (uVar25 | bVar17 - 6 << (ulong)(uVar37 << 3 & 0x1f)) + 6;
        }
        else {
          uVar25 = uVar25 + 6;
        }
      }
LAB_100309bb4:
      if ((int)uVar25 < 3) {
        if (uVar25 == 0) {
          (**(code **)(lVar38 + 0x20))(puVar13,puVar15,lVar10);
          *(undefined1 *)((long)puVar13 + uVar4) = 0;
        }
        else if (uVar25 == 1) {
          (**(code **)(lVar32 + 0x20))(puVar13,puVar15,lVar11);
          *(undefined1 *)((long)puVar13 + uVar4) = 1;
        }
        else {
          if (uVar25 == 2) {
            *(undefined8 *)puVar13 = *(undefined8 *)puVar15;
            uVar18 = 2;
            goto LAB_100309c74;
          }
LAB_100309c34:
          _memcpy(puVar13,puVar15,uVar4 + 1);
        }
      }
      else {
        if (uVar25 == 3) {
          *(undefined8 *)puVar13 = *(undefined8 *)puVar15;
          uVar18 = 3;
        }
        else if (uVar25 == 4) {
          *(undefined8 *)puVar13 = *(undefined8 *)puVar15;
          uVar18 = 4;
        }
        else {
          if (uVar25 != 5) goto LAB_100309c34;
          uVar12 = *(undefined8 *)puVar15;
          *(undefined8 *)(puVar13 + 2) = *(undefined8 *)(puVar15 + 2);
          *(undefined8 *)puVar13 = uVar12;
          uVar18 = 5;
        }
LAB_100309c74:
        *(undefined1 *)((long)puVar13 + uVar4) = uVar18;
      }
      *(undefined1 *)((long)puVar13 + uVar2) = 10;
      break;
    case 0xb:
      uVar42 = *(undefined8 *)(puVar15 + 2);
      uVar12 = *(undefined8 *)puVar15;
      uVar44 = *(undefined8 *)(puVar15 + 6);
      uVar43 = *(undefined8 *)(puVar15 + 4);
      uVar45 = *(undefined8 *)((long)puVar15 + 0x19);
      *(undefined8 *)((long)puVar13 + 0x21) = *(undefined8 *)((long)puVar15 + 0x21);
      *(undefined8 *)((long)puVar13 + 0x19) = uVar45;
      *(undefined8 *)(puVar13 + 2) = uVar42;
      *(undefined8 *)puVar13 = uVar12;
      *(undefined8 *)(puVar13 + 6) = uVar44;
      *(undefined8 *)(puVar13 + 4) = uVar43;
      *(undefined1 *)((long)puVar13 + uVar2) = 0xb;
      break;
    case 0xc:
      *(undefined8 *)puVar13 = *(undefined8 *)puVar15;
      *(undefined1 *)((long)puVar13 + uVar2) = 0xc;
      break;
    case 0xd:
      *(undefined8 *)puVar13 = *(undefined8 *)puVar15;
      *(undefined1 *)((long)puVar13 + uVar2) = 0xd;
      break;
    case 0xe:
      uVar12 = *(undefined8 *)puVar15;
      *(undefined8 *)(puVar13 + 2) = *(undefined8 *)(puVar15 + 2);
      *(undefined8 *)puVar13 = uVar12;
      *(undefined1 *)((long)puVar13 + uVar2) = 0xe;
      break;
    default:
      goto switchD_1003094dc_default;
    }
  }
  bVar17 = 4;
LAB_1003093b0:
  *(byte *)((long)param_1 + uVar5) = bVar17;
  return param_1;
}

