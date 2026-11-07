// rea decompile_all
// name: FUN_1002a07a0
// address: 0x1002a07a0
// body: available
// range: 0x1002a07a0-0x1002a1367 inclusive
// range: 0x1002a138c-0x1002a153b inclusive
// range: 0x1002a1560-0x1002a166b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint * FUN_1002a07a0(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  byte bVar15;
  undefined1 uVar16;
  undefined8 *puVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  size_t sVar23;
  undefined8 *puVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  uint uVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  uint *puVar33;
  ulong uVar34;
  code *pcVar35;
  uint uVar36;
  ulong uVar37;
  uint uVar38;
  long lVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  ulong local_80;
  uint local_74;
  long local_70;
  
  if (param_1 == param_2) {
    return param_1;
  }
  local_88 = *(long *)(param_3 + 0x10);
  local_90 = *(long *)(param_3 + 0x18);
  local_98 = *(long *)(local_88 + -8);
  local_a0 = *(long *)(local_90 + -8);
  uVar31 = *(ulong *)(local_a0 + 0x40);
  if (*(ulong *)(local_a0 + 0x40) <= *(ulong *)(local_98 + 0x40)) {
    uVar31 = *(ulong *)(local_98 + 0x40);
  }
  lVar8 = 0;
  __s10Foundation10URLRequestVMa();
  lVar39 = *(long *)(lVar8 + -8);
  sVar23 = *(size_t *)(lVar39 + 0x40);
  if (*(int *)(lVar39 + 0x54) == 0) {
    sVar23 = sVar23 + 1;
  }
  lVar9 = 0;
  local_70 = lVar8;
  __s10Foundation3URLVMa();
  lVar30 = *(long *)(lVar9 + -8);
  uVar21 = *(uint *)(lVar30 + 0x50);
  uVar32 = (ulong)uVar21 & 0xff;
  lVar10 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar28 = *(long *)(lVar10 + -8);
  uVar37 = (ulong)((*(uint *)(lVar28 + 0x50) | uVar21) & 0xf8 | 7);
  uVar34 = uVar32 + 8;
  uVar25 = *(ulong *)(lVar30 + 0x40);
  lVar8 = uVar25 + uVar32;
  uVar2 = (lVar8 + (uVar34 & (uVar32 ^ 0xffffffffffffffff)) & (uVar32 ^ 0xffffffffffffffff)) +
          uVar25;
  uVar1 = (uVar25 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar25) {
    uVar1 = uVar25;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  if (uVar2 <= uVar1 + 1) {
    uVar2 = uVar1 + 1;
  }
  uVar3 = uVar25;
  if (uVar25 < 0x19) {
    uVar3 = 0x18;
  }
  if (uVar2 <= uVar3 + 1) {
    uVar2 = uVar3 + 1;
  }
  uVar4 = *(ulong *)(lVar28 + 0x40);
  if (*(ulong *)(lVar28 + 0x40) <= uVar25) {
    uVar4 = uVar25;
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
  uVar21 = uVar36 << 3;
  local_74 = 0x10;
  if (uVar36 < 4) {
    local_74 = 1U >> (ulong)(uVar21 & 0x1f) | 0x10;
  }
  uVar25 = uVar2 + 1 +
           (uVar37 + (sVar23 + 7 & 0xfffffffffffffff8) + 0x10 & (uVar37 ^ 0xffffffffffffffff));
  if (uVar25 <= uVar31 + 1) {
    uVar25 = uVar31 + 1;
  }
  bVar15 = *(byte *)((long)param_1 + uVar25);
  uVar19 = (uint)bVar15;
  uVar22 = (uint)uVar25;
  if (1 < bVar15) {
    uVar26 = 4;
    if (uVar22 < 4) {
      uVar26 = uVar22;
    }
    if ((int)uVar26 < 2) {
      if (uVar26 == 0) goto LAB_1002a09dc;
      uVar19 = (uint)(byte)*param_1;
    }
    else if (uVar26 == 2) {
      uVar19 = (uint)(ushort)*param_1;
    }
    else if (uVar26 == 3) {
      uVar19 = (uint)(uint3)*param_1;
    }
    else {
      uVar19 = *param_1;
    }
    if (uVar22 < 4) {
      uVar19 = (uVar19 | bVar15 - 2 << (ulong)((uVar22 & 3) << 3)) + 2;
    }
    else {
      uVar19 = uVar19 + 2;
    }
  }
LAB_1002a09dc:
  local_80 = ~uVar37;
  uVar32 = ~uVar32;
  uVar27 = (uint)uVar4;
  uVar38 = (uint)uVar31;
  uVar29 = (uint)uVar1;
  uVar26 = (uint)uVar3;
  if (uVar19 != 1) {
    bVar15 = *(byte *)((long)param_1 + uVar31);
    uVar19 = (uint)bVar15;
    if (bVar15 < 2) {
LAB_1002a0b20:
      if (uVar19 == 1) {
LAB_1002a0b28:
        (**(code **)(local_a0 + 8))(param_1,local_90);
        goto switchD_1002a0bd8_default;
      }
    }
    else {
      uVar20 = 4;
      if (uVar38 < 4) {
        uVar20 = uVar38;
      }
      if ((int)uVar20 < 2) {
        if (uVar20 == 0) goto LAB_1002a0b20;
        uVar19 = (uint)(byte)*param_1;
      }
      else if (uVar20 == 2) {
        uVar19 = (uint)(ushort)*param_1;
      }
      else if (uVar20 == 3) {
        uVar19 = (uint)(uint3)*param_1;
      }
      else {
        uVar19 = *param_1;
      }
      if (3 < uVar38) {
        uVar19 = uVar19 + 2;
        goto LAB_1002a0b20;
      }
      if ((uVar19 | bVar15 - 2 << (ulong)((uVar38 & 3) << 3)) == 0xffffffff) goto LAB_1002a0b28;
    }
    (**(code **)(local_98 + 8))(param_1,local_88);
    goto switchD_1002a0bd8_default;
  }
  puVar12 = param_1;
  (**(code **)(lVar39 + 0x30))(param_1,1,local_70);
  if ((int)puVar12 == 0) {
    (**(code **)(lVar39 + 8))(param_1,local_70);
  }
  puVar12 = (uint *)0x0;
  puVar33 = (uint *)(((ulong)((long)param_1 + sVar23 + 7) & 0xfffffffffffffff8) + uVar37 + 0x10 &
                    local_80);
  bVar15 = *(byte *)((long)puVar33 + uVar2);
  uVar19 = (uint)bVar15;
  if ((bVar15 ^ 0xff) < 0x100 - local_74) goto switchD_1002a0bd8_default;
  if (0xe < bVar15) {
    uVar20 = 4;
    if (uVar36 < 4) {
      uVar20 = uVar36;
    }
    if ((int)uVar20 < 2) {
      if (uVar20 == 0) goto LAB_1002a0bb8;
      uVar20 = (uint)(byte)*puVar33;
    }
    else if (uVar20 == 2) {
      uVar20 = (uint)(ushort)*puVar33;
    }
    else if (uVar20 == 3) {
      uVar20 = (uint)(uint3)*puVar33;
    }
    else {
      uVar20 = *puVar33;
    }
    if (uVar36 < 4) {
      uVar19 = (uVar20 | uVar19 - 0xf << (ulong)(uVar21 & 0x1f)) + 0xf;
    }
    else {
      uVar19 = uVar20 + 0xf;
    }
  }
LAB_1002a0bb8:
  lVar14 = lVar9;
  lVar18 = lVar30;
  switch(uVar19) {
  case 0:
  case 1:
  case 7:
  case 0xc:
  case 0xd:
switchD_1002a0bd8_caseD_0:
    uVar11 = *(undefined8 *)puVar33;
    goto LAB_1002a0be0;
  case 2:
    _swift_errorRelease(*(undefined8 *)puVar33);
    uVar13 = (ulong)(uVar34 + (long)puVar33) & uVar32;
    pcVar35 = *(code **)(lVar30 + 8);
    (*pcVar35)(uVar13,lVar9);
    (*pcVar35)(lVar8 + uVar13 & uVar32,lVar9);
    break;
  case 3:
    FUN_10003f094(puVar33);
    break;
  case 4:
    bVar15 = *(byte *)((long)puVar33 + uVar1);
    uVar21 = (uint)bVar15;
    if (0xc < bVar15) {
      uVar36 = 4;
      if (uVar29 < 4) {
        uVar36 = uVar29;
      }
      if ((int)uVar36 < 2) {
        if (uVar36 == 0) goto LAB_1002a150c;
        uVar21 = (uint)(byte)*puVar33;
      }
      else if (uVar36 == 2) {
        uVar21 = (uint)(ushort)*puVar33;
      }
      else if (uVar36 == 3) {
        uVar21 = (uint)(uint3)*puVar33;
      }
      else {
        uVar21 = *puVar33;
      }
      if (uVar29 < 4) {
        uVar21 = (uVar21 | bVar15 - 0xd << (ulong)((uVar29 & 3) << 3)) + 0xd;
      }
      else {
        uVar21 = uVar21 + 0xd;
      }
    }
LAB_1002a150c:
                    /* WARNING: Could not recover jumptable at 0x0001002a1524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(ushort *)(&DAT_100817466 + (ulong)uVar21 * 2) * 4 + 0x1002a0bdc))(0);
    return puVar12;
  case 5:
    FUN_10027ba4c(*(undefined8 *)puVar33);
    break;
  case 6:
    FUN_100278f18(*(undefined8 *)puVar33,*(undefined8 *)(puVar33 + 2),(byte)puVar33[4]);
    break;
  case 8:
    _swift_errorRelease(*(undefined8 *)puVar33);
    uVar11 = *(undefined8 *)(puVar33 + 2);
LAB_1002a0be0:
    _swift_errorRelease(uVar11);
    break;
  case 9:
    bVar15 = *(byte *)((long)puVar33 + uVar3);
    uVar19 = (uint)bVar15;
    if (4 < bVar15) {
      uVar20 = 4;
      if (uVar26 < 4) {
        uVar20 = uVar26;
      }
      if ((int)uVar20 < 2) {
        if (uVar20 == 0) goto LAB_1002a12d0;
        uVar19 = (uint)(byte)*puVar33;
      }
      else if (uVar20 == 2) {
        uVar19 = (uint)(ushort)*puVar33;
      }
      else if (uVar20 == 3) {
        uVar19 = (uint)(uint3)*puVar33;
      }
      else {
        uVar19 = *puVar33;
      }
      if (uVar26 < 4) {
        uVar19 = (uVar19 | bVar15 - 5 << (ulong)((uVar26 & 3) << 3)) + 5;
      }
      else {
        uVar19 = uVar19 + 5;
      }
    }
LAB_1002a12d0:
    if ((int)uVar19 < 2) {
      if (uVar19 == 0) {
LAB_1002a152c:
        (**(code **)(lVar18 + 8))(puVar33,lVar14);
      }
      else if (uVar19 == 1) {
        _swift_bridgeObjectRelease(*(undefined8 *)puVar33);
      }
    }
    else if (uVar19 == 2) {
      _swift_bridgeObjectRelease(*(undefined8 *)puVar33);
      _swift_bridgeObjectRelease(*(undefined8 *)(puVar33 + 4));
    }
    else if (uVar19 == 4) goto switchD_1002a0bd8_caseD_0;
    break;
  case 10:
    bVar15 = *(byte *)((long)puVar33 + uVar4);
    uVar19 = (uint)bVar15;
    if (5 < bVar15) {
      uVar20 = 4;
      if (uVar27 < 4) {
        uVar20 = uVar27;
      }
      if ((int)uVar20 < 2) {
        if (uVar20 == 0) goto LAB_1002a13b0;
        uVar19 = (uint)(byte)*puVar33;
      }
      else if (uVar20 == 2) {
        uVar19 = (uint)(ushort)*puVar33;
      }
      else if (uVar20 == 3) {
        uVar19 = (uint)(uint3)*puVar33;
      }
      else {
        uVar19 = *puVar33;
      }
      if (uVar27 < 4) {
        uVar19 = (uVar19 | bVar15 - 6 << (ulong)(uVar27 << 3 & 0x1f)) + 6;
      }
      else {
        uVar19 = uVar19 + 6;
      }
    }
LAB_1002a13b0:
    if ((int)uVar19 < 3) {
      if ((uVar19 == 0) || (lVar14 = lVar10, lVar18 = lVar28, uVar19 == 1)) goto LAB_1002a152c;
      if (uVar19 == 2) goto switchD_1002a0bd8_caseD_0;
    }
    else {
      if ((uVar19 == 3) || (uVar19 == 4)) goto switchD_1002a0bd8_caseD_0;
      if (uVar19 == 5) {
        _swift_bridgeObjectRelease(*(undefined8 *)(puVar33 + 2));
      }
    }
    break;
  case 0xb:
    FUN_100278e14(*(undefined8 *)puVar33,*(undefined8 *)(puVar33 + 2),*(undefined8 *)(puVar33 + 4),
                  *(undefined8 *)(puVar33 + 6),*(undefined8 *)(puVar33 + 8),(byte)puVar33[10]);
    break;
  case 0xe:
    FUN_100006cdc(*(undefined8 *)puVar33,*(undefined8 *)(puVar33 + 2));
  }
switchD_1002a0bd8_default:
  lVar14 = local_70;
  bVar15 = *(byte *)((long)param_2 + uVar25);
  uVar19 = (uint)bVar15;
  if (bVar15 < 2) {
LAB_1002a0c50:
    if (uVar19 == 1) {
LAB_1002a0c58:
      puVar12 = param_2;
      (**(code **)(lVar39 + 0x30))(param_2,1,local_70);
      if ((int)puVar12 == 0) {
        (**(code **)(lVar39 + 0x20))(param_1,param_2,lVar14);
        (**(code **)(lVar39 + 0x38))(param_1,0,1,lVar14);
      }
      else {
        _memcpy(param_1,param_2,sVar23);
      }
      puVar17 = (undefined8 *)((ulong)((long)param_1 + sVar23 + 7) & 0xfffffffffffffff8);
      puVar24 = (undefined8 *)((ulong)((long)param_2 + sVar23 + 7) & 0xfffffffffffffff8);
      *puVar17 = *puVar24;
      puVar17 = puVar17 + 1;
      puVar24 = puVar24 + 1;
      *puVar17 = *puVar24;
      puVar12 = (uint *)((long)puVar17 + uVar37 + 8 & local_80);
      puVar33 = (uint *)((long)puVar24 + uVar37 + 8 & local_80);
      bVar15 = *(byte *)((long)puVar33 + uVar2);
      uVar19 = (uint)bVar15;
      if ((bVar15 ^ 0xff) < 0x100 - local_74) {
switchD_1002a0ecc_default:
        _memcpy(puVar12,puVar33,uVar2 + 1);
      }
      else {
        if (0xe < bVar15) {
          uVar22 = 4;
          if (uVar36 < 4) {
            uVar22 = uVar36;
          }
          if ((int)uVar22 < 2) {
            if (uVar22 == 0) goto LAB_1002a0eac;
            uVar22 = (uint)(byte)*puVar33;
          }
          else if (uVar22 == 2) {
            uVar22 = (uint)(ushort)*puVar33;
          }
          else if (uVar22 == 3) {
            uVar22 = (uint)(uint3)*puVar33;
          }
          else {
            uVar22 = *puVar33;
          }
          if (uVar36 < 4) {
            uVar19 = (uVar22 | uVar19 - 0xf << (ulong)(uVar21 & 0x1f)) + 0xf;
          }
          else {
            uVar19 = uVar22 + 0xf;
          }
        }
LAB_1002a0eac:
        switch(uVar19) {
        case 0:
          *(undefined8 *)puVar12 = *(undefined8 *)puVar33;
          *(undefined1 *)((long)puVar12 + uVar2) = 0;
          break;
        case 1:
          *(undefined8 *)puVar12 = *(undefined8 *)puVar33;
          bVar15 = 1;
          *(undefined1 *)((long)puVar12 + uVar2) = 1;
          goto LAB_1002a0e48;
        case 2:
          *(undefined8 *)puVar12 = *(undefined8 *)puVar33;
          uVar31 = uVar34 + (long)puVar12 & uVar32;
          uVar34 = (ulong)(uVar34 + (long)puVar33) & uVar32;
          pcVar35 = *(code **)(lVar30 + 0x20);
          (*pcVar35)(uVar31,uVar34,lVar9);
          (*pcVar35)(lVar8 + uVar31 & uVar32,lVar8 + uVar34 & uVar32,lVar9);
          *(undefined1 *)((long)puVar12 + uVar2) = 2;
          break;
        case 3:
          uVar40 = *(undefined8 *)(puVar33 + 2);
          uVar11 = *(undefined8 *)puVar33;
          uVar42 = *(undefined8 *)(puVar33 + 6);
          uVar41 = *(undefined8 *)(puVar33 + 4);
          *(undefined8 *)(puVar12 + 8) = *(undefined8 *)(puVar33 + 8);
          *(undefined8 *)(puVar12 + 2) = uVar40;
          *(undefined8 *)puVar12 = uVar11;
          *(undefined8 *)(puVar12 + 6) = uVar42;
          *(undefined8 *)(puVar12 + 4) = uVar41;
          *(undefined1 *)((long)puVar12 + uVar2) = 3;
          break;
        case 4:
          bVar15 = *(byte *)((long)puVar33 + uVar1);
          uVar21 = (uint)bVar15;
          if (0xc < bVar15) {
            uVar36 = 4;
            if (uVar29 < 4) {
              uVar36 = uVar29;
            }
            if ((int)uVar36 < 2) {
              if (uVar36 == 0) goto LAB_1002a134c;
              uVar21 = (uint)(byte)*puVar33;
            }
            else if (uVar36 == 2) {
              uVar21 = (uint)(ushort)*puVar33;
            }
            else if (uVar36 == 3) {
              uVar21 = (uint)(uint3)*puVar33;
            }
            else {
              uVar21 = *puVar33;
            }
            if (uVar29 < 4) {
              uVar21 = (uVar21 | bVar15 - 0xd << (ulong)((uVar29 & 3) << 3)) + 0xd;
            }
            else {
              uVar21 = uVar21 + 0xd;
            }
          }
LAB_1002a134c:
                    /* WARNING: Could not recover jumptable at 0x0001002a1364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_1002a1368 + (ulong)*(ushort *)(&DAT_100817490 + (ulong)uVar21 * 2) * 4))()
          ;
          return puVar12;
        case 5:
          *(undefined8 *)puVar12 = *(undefined8 *)puVar33;
          *(undefined1 *)((long)puVar12 + uVar2) = 5;
          break;
        case 6:
          uVar40 = *(undefined8 *)(puVar33 + 2);
          uVar11 = *(undefined8 *)puVar33;
          *(byte *)(puVar12 + 4) = (byte)puVar33[4];
          *(undefined8 *)(puVar12 + 2) = uVar40;
          *(undefined8 *)puVar12 = uVar11;
          *(undefined1 *)((long)puVar12 + uVar2) = 6;
          break;
        case 7:
          *(undefined8 *)puVar12 = *(undefined8 *)puVar33;
          *(undefined1 *)((long)puVar12 + uVar2) = 7;
          break;
        case 8:
          uVar11 = *(undefined8 *)puVar33;
          *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar33 + 2);
          *(undefined8 *)puVar12 = uVar11;
          *(undefined1 *)((long)puVar12 + uVar2) = 8;
          break;
        case 9:
          bVar15 = *(byte *)((long)puVar33 + uVar3);
          uVar21 = (uint)bVar15;
          if (4 < bVar15) {
            uVar36 = 4;
            if (uVar26 < 4) {
              uVar36 = uVar26;
            }
            if ((int)uVar36 < 2) {
              if (uVar36 == 0) goto LAB_1002a1420;
              uVar21 = (uint)(byte)*puVar33;
            }
            else if (uVar36 == 2) {
              uVar21 = (uint)(ushort)*puVar33;
            }
            else if (uVar36 == 3) {
              uVar21 = (uint)(uint3)*puVar33;
            }
            else {
              uVar21 = *puVar33;
            }
            if (uVar26 < 4) {
              uVar21 = (uVar21 | bVar15 - 5 << (ulong)((uVar26 & 3) << 3)) + 5;
            }
            else {
              uVar21 = uVar21 + 5;
            }
          }
LAB_1002a1420:
          if ((int)uVar21 < 2) {
            if (uVar21 == 0) {
              (**(code **)(lVar30 + 0x20))(puVar12,puVar33,lVar9);
              *(undefined1 *)((long)puVar12 + uVar3) = 0;
            }
            else if (uVar21 == 1) {
              *(undefined8 *)puVar12 = *(undefined8 *)puVar33;
              *(undefined1 *)((long)puVar12 + uVar3) = 1;
            }
            else {
LAB_1002a14c4:
              _memcpy(puVar12,puVar33,uVar3 + 1);
            }
          }
          else if (uVar21 == 2) {
            uVar40 = *(undefined8 *)(puVar33 + 2);
            uVar11 = *(undefined8 *)puVar33;
            *(undefined8 *)(puVar12 + 4) = *(undefined8 *)(puVar33 + 4);
            *(undefined8 *)(puVar12 + 2) = uVar40;
            *(undefined8 *)puVar12 = uVar11;
            *(undefined1 *)((long)puVar12 + uVar3) = 2;
          }
          else if (uVar21 == 3) {
            *(undefined8 *)puVar12 = *(undefined8 *)puVar33;
            *(undefined1 *)((long)puVar12 + uVar3) = 3;
          }
          else {
            if (uVar21 != 4) goto LAB_1002a14c4;
            *(undefined8 *)puVar12 = *(undefined8 *)puVar33;
            *(undefined1 *)((long)puVar12 + uVar3) = 4;
          }
          *(undefined1 *)((long)puVar12 + uVar2) = 9;
          break;
        case 10:
          bVar15 = *(byte *)((long)puVar33 + uVar4);
          uVar21 = (uint)bVar15;
          if (5 < bVar15) {
            uVar36 = 4;
            if (uVar27 < 4) {
              uVar36 = uVar27;
            }
            if ((int)uVar36 < 2) {
              if (uVar36 == 0) goto LAB_1002a1590;
              uVar21 = (uint)(byte)*puVar33;
            }
            else if (uVar36 == 2) {
              uVar21 = (uint)(ushort)*puVar33;
            }
            else if (uVar36 == 3) {
              uVar21 = (uint)(uint3)*puVar33;
            }
            else {
              uVar21 = *puVar33;
            }
            if (uVar27 < 4) {
              uVar21 = (uVar21 | bVar15 - 6 << (ulong)(uVar27 << 3 & 0x1f)) + 6;
            }
            else {
              uVar21 = uVar21 + 6;
            }
          }
LAB_1002a1590:
          if ((int)uVar21 < 3) {
            if (uVar21 == 0) {
              (**(code **)(lVar30 + 0x20))(puVar12,puVar33,lVar9);
              *(undefined1 *)((long)puVar12 + uVar4) = 0;
            }
            else if (uVar21 == 1) {
              (**(code **)(lVar28 + 0x20))(puVar12,puVar33,lVar10);
              *(undefined1 *)((long)puVar12 + uVar4) = 1;
            }
            else {
              if (uVar21 == 2) {
                *(undefined8 *)puVar12 = *(undefined8 *)puVar33;
                uVar16 = 2;
                goto LAB_1002a1658;
              }
LAB_1002a1614:
              _memcpy(puVar12,puVar33,uVar4 + 1);
            }
          }
          else {
            if (uVar21 == 3) {
              *(undefined8 *)puVar12 = *(undefined8 *)puVar33;
              uVar16 = 3;
            }
            else if (uVar21 == 4) {
              *(undefined8 *)puVar12 = *(undefined8 *)puVar33;
              uVar16 = 4;
            }
            else {
              if (uVar21 != 5) goto LAB_1002a1614;
              uVar11 = *(undefined8 *)puVar33;
              *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar33 + 2);
              *(undefined8 *)puVar12 = uVar11;
              uVar16 = 5;
            }
LAB_1002a1658:
            *(undefined1 *)((long)puVar12 + uVar4) = uVar16;
          }
          *(undefined1 *)((long)puVar12 + uVar2) = 10;
          break;
        case 0xb:
          uVar40 = *(undefined8 *)(puVar33 + 2);
          uVar11 = *(undefined8 *)puVar33;
          uVar42 = *(undefined8 *)(puVar33 + 6);
          uVar41 = *(undefined8 *)(puVar33 + 4);
          uVar43 = *(undefined8 *)((long)puVar33 + 0x19);
          *(undefined8 *)((long)puVar12 + 0x21) = *(undefined8 *)((long)puVar33 + 0x21);
          *(undefined8 *)((long)puVar12 + 0x19) = uVar43;
          *(undefined8 *)(puVar12 + 2) = uVar40;
          *(undefined8 *)puVar12 = uVar11;
          *(undefined8 *)(puVar12 + 6) = uVar42;
          *(undefined8 *)(puVar12 + 4) = uVar41;
          *(undefined1 *)((long)puVar12 + uVar2) = 0xb;
          break;
        case 0xc:
          *(undefined8 *)puVar12 = *(undefined8 *)puVar33;
          *(undefined1 *)((long)puVar12 + uVar2) = 0xc;
          break;
        case 0xd:
          *(undefined8 *)puVar12 = *(undefined8 *)puVar33;
          *(undefined1 *)((long)puVar12 + uVar2) = 0xd;
          break;
        case 0xe:
          uVar11 = *(undefined8 *)puVar33;
          *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar33 + 2);
          *(undefined8 *)puVar12 = uVar11;
          *(undefined1 *)((long)puVar12 + uVar2) = 0xe;
          break;
        default:
          goto switchD_1002a0ecc_default;
        }
      }
      bVar15 = 1;
      goto LAB_1002a0e48;
    }
  }
  else {
    uVar20 = 4;
    if (uVar22 < 4) {
      uVar20 = uVar22;
    }
    if ((int)uVar20 < 2) {
      if (uVar20 == 0) goto LAB_1002a0c50;
      uVar19 = (uint)(byte)*param_2;
    }
    else if (uVar20 == 2) {
      uVar19 = (uint)(ushort)*param_2;
    }
    else if (uVar20 == 3) {
      uVar19 = (uint)(uint3)*param_2;
    }
    else {
      uVar19 = *param_2;
    }
    if (3 < uVar22) {
      uVar19 = uVar19 + 2;
      goto LAB_1002a0c50;
    }
    if ((uVar19 | bVar15 - 2 << (ulong)((uVar22 & 3) << 3)) == 0xffffffff) goto LAB_1002a0c58;
  }
  bVar15 = *(byte *)((long)param_2 + uVar31);
  uVar21 = (uint)bVar15;
  if (1 < bVar15) {
    uVar36 = 4;
    if (uVar38 < 4) {
      uVar36 = uVar38;
    }
    if ((int)uVar36 < 2) {
      if (uVar36 == 0) goto LAB_1002a0e18;
      uVar21 = (uint)(byte)*param_2;
    }
    else if (uVar36 == 2) {
      uVar21 = (uint)(ushort)*param_2;
    }
    else if (uVar36 == 3) {
      uVar21 = (uint)(uint3)*param_2;
    }
    else {
      uVar21 = *param_2;
    }
    if (uVar38 < 4) {
      uVar21 = (uVar21 | bVar15 - 2 << (ulong)((uVar38 & 3) << 3)) + 2;
    }
    else {
      uVar21 = uVar21 + 2;
    }
  }
LAB_1002a0e18:
  bVar7 = uVar21 == 1;
  plVar5 = &local_a0;
  if (!bVar7) {
    plVar5 = &local_98;
  }
  plVar6 = &local_90;
  if (!bVar7) {
    plVar6 = &local_88;
  }
  (**(code **)(*plVar5 + 0x20))(param_1,param_2,*plVar6);
  bVar15 = 0;
  *(bool *)((long)param_1 + uVar31) = bVar7;
LAB_1002a0e48:
  *(byte *)((long)param_1 + uVar25) = bVar15;
  return param_1;
}

