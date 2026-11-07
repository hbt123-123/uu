// rea decompile_all
// name: FUN_100301f6c
// address: 0x100301f6c
// body: available
// range: 0x100301f6c-0x100302c17 inclusive
// range: 0x100302c38-0x100302e23 inclusive
// range: 0x100302e58-0x100302f8f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100301f6c(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  size_t sVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  byte bVar17;
  undefined1 uVar18;
  uint uVar19;
  ulong uVar20;
  code *pcVar21;
  undefined8 *puVar22;
  long *plVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 *puVar28;
  long *plVar29;
  uint uVar30;
  uint uVar31;
  size_t sVar32;
  uint *puVar33;
  ulong uVar34;
  long lVar35;
  long lVar36;
  uint *puVar37;
  uint uVar38;
  uint uVar39;
  undefined8 uVar40;
  long lVar41;
  long lVar42;
  uint *puVar43;
  uint uVar44;
  long lVar45;
  ulong uVar46;
  uint uVar47;
  long lVar48;
  
  _swift_weakCopyAssign();
  lVar45 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(param_3 + 0x18);
  lVar36 = *(long *)(lVar45 + -8);
  uVar19 = *(uint *)(lVar36 + 0x50);
  lVar41 = *(long *)(lVar8 + -8);
  uVar25 = *(uint *)(lVar41 + 0x50);
  lVar12 = 0;
  __s10Foundation10URLRequestVMa();
  lVar42 = *(long *)(lVar12 + -8);
  uVar38 = *(uint *)(lVar42 + 0x50);
  lVar13 = 0;
  __s10Foundation3URLVMa();
  lVar48 = *(long *)(lVar13 + -8);
  uVar30 = *(uint *)(lVar48 + 0x50);
  lVar14 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar35 = *(long *)(lVar14 + -8);
  uVar44 = *(uint *)(lVar35 + 0x50) | uVar30;
  uVar26 = (ulong)((uVar25 | uVar19 | uVar38 | uVar44) & 0xf8 | 7);
  puVar37 = (uint *)(uVar26 + 8 + param_1 & (uVar26 ^ 0xffffffffffffffff));
  puVar43 = (uint *)(uVar26 + 8 + param_2 & (uVar26 ^ 0xffffffffffffffff));
  if (puVar37 == puVar43) {
    return param_1;
  }
  uVar20 = (ulong)(uVar44 & 0xf8 | 7);
  uVar27 = (ulong)uVar30 & 0xff;
  uVar26 = *(ulong *)(lVar36 + 0x40);
  if (*(ulong *)(lVar36 + 0x40) <= *(ulong *)(lVar41 + 0x40)) {
    uVar26 = *(ulong *)(lVar41 + 0x40);
  }
  sVar32 = *(size_t *)(lVar42 + 0x40);
  if (*(int *)(lVar42 + 0x54) == 0) {
    sVar32 = sVar32 + 1;
  }
  lVar1 = uVar20 + 8;
  uVar2 = uVar27 + 8;
  uVar34 = *(ulong *)(lVar48 + 0x40);
  lVar4 = uVar34 + uVar27;
  uVar5 = (lVar4 + (uVar2 & (uVar27 ^ 0xffffffffffffffff)) & (uVar27 ^ 0xffffffffffffffff)) + uVar34
  ;
  uVar46 = (uVar34 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar46 <= uVar34) {
    uVar46 = uVar34;
  }
  if (uVar46 < 9) {
    uVar46 = 8;
  }
  if (uVar5 <= uVar46 + 1) {
    uVar5 = uVar46 + 1;
  }
  uVar6 = uVar34;
  if (uVar34 < 0x19) {
    uVar6 = 0x18;
  }
  if (uVar5 <= uVar6 + 1) {
    uVar5 = uVar6 + 1;
  }
  uVar7 = *(ulong *)(lVar35 + 0x40);
  if (*(ulong *)(lVar35 + 0x40) <= uVar34) {
    uVar7 = uVar34;
  }
  if (uVar7 < 0x11) {
    uVar7 = 0x10;
  }
  if (uVar5 <= uVar7 + 1) {
    uVar5 = uVar7 + 1;
  }
  if (uVar5 < 0x2a) {
    uVar5 = 0x29;
  }
  uVar38 = (uint)uVar5;
  uVar25 = uVar38 << 3;
  uVar19 = 0x10;
  if (uVar38 < 4) {
    uVar19 = 1U >> (ulong)(uVar25 & 0x1f) | 0x10;
  }
  sVar3 = uVar5 + 1;
  uVar34 = sVar3 + (lVar1 + (sVar32 + 7 & 0xfffffffffffffff8) + 8 & (uVar20 ^ 0xffffffffffffffff));
  if (uVar26 <= uVar34) {
    uVar26 = uVar34;
  }
  if (uVar26 < 0x19) {
    uVar26 = 0x18;
  }
  bVar17 = *(byte *)((long)puVar37 + uVar26);
  uVar30 = (uint)bVar17;
  uVar44 = (uint)uVar26;
  if (4 < bVar17) {
    uVar31 = 4;
    if (uVar44 < 4) {
      uVar31 = uVar44;
    }
    if ((int)uVar31 < 2) {
      if (uVar31 == 0) goto LAB_1003021c4;
      uVar31 = (uint)(byte)*puVar37;
    }
    else if (uVar31 == 2) {
      uVar31 = (uint)(ushort)*puVar37;
    }
    else if (uVar31 == 3) {
      uVar31 = (uint)(uint3)*puVar37;
    }
    else {
      uVar31 = *puVar37;
    }
    uVar30 = uVar31 | bVar17 - 5 << (ulong)((uVar44 & 3) << 3);
    if (3 < uVar44) {
      uVar30 = uVar31;
    }
    uVar30 = uVar30 + 5;
  }
LAB_1003021c4:
  uVar20 = ~uVar20;
  uVar27 = ~uVar27;
  uVar39 = (uint)uVar7;
  uVar47 = (uint)uVar46;
  uVar31 = (uint)uVar6;
  puVar33 = puVar37;
  if ((int)uVar30 < 2) {
    if (uVar30 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(puVar37 + 2));
      goto switchD_10030260c_default;
    }
    pcVar21 = *(code **)(lVar36 + 8);
    lVar16 = lVar45;
LAB_100302304:
    (*pcVar21)(puVar33,lVar16);
  }
  else {
    if (uVar30 == 2) {
      pcVar21 = *(code **)(lVar41 + 8);
      lVar16 = lVar8;
      goto LAB_100302304;
    }
    if (uVar30 == 3) {
      uVar34 = *(ulong *)(puVar37 + 4);
      if (uVar34 >> 0x3c < 0xf) {
        uVar15 = *(undefined8 *)(puVar37 + 2);
LAB_100302214:
        FUN_100006cdc(uVar15,uVar34);
      }
    }
    else {
      (**(code **)(lVar42 + 0x30))(puVar37,1,lVar12);
      if ((int)puVar33 == 0) {
        (**(code **)(lVar42 + 8))(puVar37,lVar12);
      }
      lVar16 = 0;
      puVar33 = (uint *)(lVar1 + ((ulong)((long)puVar37 + sVar32 + 7) & 0xfffffffffffffff8) + 8 &
                        uVar20);
      bVar17 = *(byte *)((long)puVar33 + uVar5);
      uVar30 = (uint)bVar17;
      if (0x100 - uVar19 <= (bVar17 ^ 0xff)) {
        if (0xe < bVar17) {
          uVar24 = 4;
          if (uVar38 < 4) {
            uVar24 = uVar38;
          }
          if ((int)uVar24 < 2) {
            if (uVar24 == 0) goto LAB_1003025ec;
            uVar24 = (uint)(byte)*puVar33;
          }
          else if (uVar24 == 2) {
            uVar24 = (uint)(ushort)*puVar33;
          }
          else if (uVar24 == 3) {
            uVar24 = (uint)(uint3)*puVar33;
          }
          else {
            uVar24 = *puVar33;
          }
          uVar30 = uVar24 | bVar17 - 0xf << (ulong)(uVar25 & 0x1f);
          if (3 < uVar38) {
            uVar30 = uVar24;
          }
          uVar30 = uVar30 + 0xf;
        }
LAB_1003025ec:
        switch(uVar30) {
        case 0:
        case 1:
        case 7:
        case 0xc:
        case 0xd:
switchD_10030260c_caseD_0:
          _swift_errorRelease(*(undefined8 *)puVar33);
          break;
        case 2:
          _swift_errorRelease(*(undefined8 *)puVar33);
          uVar34 = (ulong)(uVar2 + (long)puVar33) & uVar27;
          pcVar21 = *(code **)(lVar48 + 8);
          (*pcVar21)(uVar34,lVar13);
          (*pcVar21)(lVar4 + uVar34 & uVar27,lVar13);
          break;
        case 3:
          FUN_10003f094(puVar33);
          break;
        case 4:
          bVar17 = *(byte *)((long)puVar33 + uVar46);
          uVar19 = (uint)bVar17;
          if (0xc < bVar17) {
            uVar25 = 4;
            if (uVar47 < 4) {
              uVar25 = uVar47;
            }
            if ((int)uVar25 < 2) {
              if (uVar25 == 0) goto LAB_100302df4;
              uVar25 = (uint)(byte)*puVar33;
            }
            else if (uVar25 == 2) {
              uVar25 = (uint)(ushort)*puVar33;
            }
            else if (uVar25 == 3) {
              uVar25 = (uint)(uint3)*puVar33;
            }
            else {
              uVar25 = *puVar33;
            }
            uVar19 = uVar25 | bVar17 - 0xd << (ulong)((uVar47 & 3) << 3);
            if (3 < uVar47) {
              uVar19 = uVar25;
            }
            uVar19 = uVar19 + 0xd;
          }
LAB_100302df4:
                    /* WARNING: Could not recover jumptable at 0x000100302e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)*(ushort *)(&DAT_100819234 + (ulong)uVar19 * 2) * 4 + 0x100302610))(0);
          return lVar16;
        case 5:
          FUN_10027ba4c(*(undefined8 *)puVar33);
          break;
        case 6:
          FUN_100278f18(*(undefined8 *)puVar33,*(undefined8 *)(puVar33 + 2),(byte)puVar33[4]);
          break;
        case 8:
          _swift_errorRelease(*(undefined8 *)puVar33);
          _swift_errorRelease(*(undefined8 *)(puVar33 + 2));
          break;
        case 9:
          bVar17 = *(byte *)((long)puVar33 + uVar6);
          uVar30 = (uint)bVar17;
          if (4 < bVar17) {
            uVar24 = 4;
            if (uVar31 < 4) {
              uVar24 = uVar31;
            }
            if ((int)uVar24 < 2) {
              if (uVar24 == 0) goto LAB_100302b74;
              uVar30 = (uint)(byte)*puVar33;
            }
            else if (uVar24 == 2) {
              uVar30 = (uint)(ushort)*puVar33;
            }
            else if (uVar24 == 3) {
              uVar30 = (uint)(uint3)*puVar33;
            }
            else {
              uVar30 = *puVar33;
            }
            if (uVar31 < 4) {
              uVar30 = (uVar30 | bVar17 - 5 << (ulong)((uVar31 & 3) << 3)) + 5;
            }
            else {
              uVar30 = uVar30 + 5;
            }
          }
LAB_100302b74:
          if ((int)uVar30 < 2) {
            if (uVar30 == 0) {
LAB_100302e14:
              pcVar21 = *(code **)(lVar48 + 8);
              lVar16 = lVar13;
              goto LAB_100302304;
            }
            if (uVar30 == 1) {
              _swift_bridgeObjectRelease(*(undefined8 *)puVar33);
            }
          }
          else if (uVar30 == 2) {
            _swift_bridgeObjectRelease(*(undefined8 *)puVar33);
            _swift_bridgeObjectRelease(*(undefined8 *)(puVar33 + 4));
          }
          else if (uVar30 == 4) goto switchD_10030260c_caseD_0;
          break;
        case 10:
          bVar17 = *(byte *)((long)puVar33 + uVar7);
          uVar30 = (uint)bVar17;
          if (5 < bVar17) {
            uVar24 = 4;
            if (uVar39 < 4) {
              uVar24 = uVar39;
            }
            if ((int)uVar24 < 2) {
              if (uVar24 == 0) goto LAB_100302c5c;
              uVar30 = (uint)(byte)*puVar33;
            }
            else if (uVar24 == 2) {
              uVar30 = (uint)(ushort)*puVar33;
            }
            else if (uVar24 == 3) {
              uVar30 = (uint)(uint3)*puVar33;
            }
            else {
              uVar30 = *puVar33;
            }
            if (uVar39 < 4) {
              uVar30 = (uVar30 | bVar17 - 6 << (ulong)(uVar39 << 3 & 0x1f)) + 6;
            }
            else {
              uVar30 = uVar30 + 6;
            }
          }
LAB_100302c5c:
          if ((int)uVar30 < 3) {
            if (uVar30 == 0) goto LAB_100302e14;
            if (uVar30 == 1) {
              pcVar21 = *(code **)(lVar35 + 8);
              lVar16 = lVar14;
              goto LAB_100302304;
            }
            if (uVar30 == 2) goto switchD_10030260c_caseD_0;
          }
          else {
            if ((uVar30 == 3) || (uVar30 == 4)) goto switchD_10030260c_caseD_0;
            if (uVar30 == 5) {
              _swift_bridgeObjectRelease(*(undefined8 *)(puVar33 + 2));
            }
          }
          break;
        case 0xb:
          FUN_100278e14(*(undefined8 *)puVar33,*(undefined8 *)(puVar33 + 2),
                        *(undefined8 *)(puVar33 + 4),*(undefined8 *)(puVar33 + 6),
                        *(undefined8 *)(puVar33 + 8),(byte)puVar33[10]);
          break;
        case 0xe:
          uVar15 = *(undefined8 *)puVar33;
          uVar34 = *(ulong *)(puVar33 + 2);
          goto LAB_100302214;
        }
      }
    }
  }
switchD_10030260c_default:
  bVar17 = *(byte *)((long)puVar43 + uVar26);
  uVar30 = (uint)bVar17;
  if (4 < bVar17) {
    uVar24 = 4;
    if (uVar44 < 4) {
      uVar24 = uVar44;
    }
    if ((int)uVar24 < 2) {
      if (uVar24 == 0) goto LAB_10030237c;
      uVar24 = (uint)(byte)*puVar43;
    }
    else if (uVar24 == 2) {
      uVar24 = (uint)(ushort)*puVar43;
    }
    else if (uVar24 == 3) {
      uVar24 = (uint)(uint3)*puVar43;
    }
    else {
      uVar24 = *puVar43;
    }
    uVar30 = uVar24 | bVar17 - 5 << (ulong)((uVar44 & 3) << 3);
    if (3 < uVar44) {
      uVar30 = uVar24;
    }
    uVar30 = uVar30 + 5;
  }
LAB_10030237c:
  if ((int)uVar30 < 2) {
    if (uVar30 == 0) {
      *(undefined8 *)puVar37 = *(undefined8 *)puVar43;
      *(undefined8 *)(puVar37 + 2) = *(undefined8 *)(puVar43 + 2);
      *(byte *)((long)puVar37 + uVar26) = 0;
      _swift_bridgeObjectRetain();
      return param_1;
    }
    (**(code **)(lVar36 + 0x10))(puVar37,puVar43,lVar45);
    bVar17 = 1;
LAB_100302464:
    *(byte *)((long)puVar37 + uVar26) = bVar17;
    return param_1;
  }
  if (uVar30 == 2) {
    (**(code **)(lVar41 + 0x10))(puVar37,puVar43,lVar8);
    bVar17 = 2;
    goto LAB_100302464;
  }
  if (uVar30 == 3) {
    *(undefined8 *)puVar37 = *(undefined8 *)puVar43;
    uVar20 = *(ulong *)(puVar43 + 4);
    if (uVar20 >> 0x3c < 0xf) {
      uVar15 = *(undefined8 *)(puVar43 + 2);
      FUN_100008184(uVar15,uVar20);
      *(undefined8 *)(puVar37 + 2) = uVar15;
      *(ulong *)(puVar37 + 4) = uVar20;
    }
    else {
      uVar15 = *(undefined8 *)(puVar43 + 2);
      *(undefined8 *)(puVar37 + 4) = *(undefined8 *)(puVar43 + 4);
      *(undefined8 *)(puVar37 + 2) = uVar15;
    }
    bVar17 = 3;
    goto LAB_100302464;
  }
  puVar33 = puVar43;
  (**(code **)(lVar42 + 0x30))(puVar43,1,lVar12);
  if ((int)puVar33 == 0) {
    (**(code **)(lVar42 + 0x10))(puVar37,puVar43,lVar12);
    (**(code **)(lVar42 + 0x38))(puVar37,0,1,lVar12);
  }
  else {
    _memcpy(puVar37,puVar43,sVar32);
  }
  puVar22 = (undefined8 *)((ulong)((long)puVar37 + sVar32 + 7) & 0xfffffffffffffff8);
  puVar28 = (undefined8 *)((ulong)((long)puVar43 + sVar32 + 7) & 0xfffffffffffffff8);
  *puVar22 = *puVar28;
  plVar23 = puVar22 + 1;
  plVar29 = puVar28 + 1;
  lVar45 = *plVar29;
  *plVar23 = lVar45;
  puVar22 = (undefined8 *)(lVar1 + (long)plVar23 & uVar20);
  puVar43 = (uint *)(lVar1 + (long)plVar29 & uVar20);
  bVar17 = *(byte *)((long)puVar43 + uVar5);
  uVar30 = (uint)bVar17;
  if ((bVar17 ^ 0xff) < 0x100 - uVar19) {
    _memcpy(puVar22,puVar43,sVar3);
    goto LAB_100302524;
  }
  if (0xe < bVar17) {
    uVar19 = 4;
    if (uVar38 < 4) {
      uVar19 = uVar38;
    }
    if ((int)uVar19 < 2) {
      if (uVar19 == 0) goto LAB_100302640;
      uVar19 = (uint)(byte)*puVar43;
    }
    else if (uVar19 == 2) {
      uVar19 = (uint)(ushort)*puVar43;
    }
    else if (uVar19 == 3) {
      uVar19 = (uint)(uint3)*puVar43;
    }
    else {
      uVar19 = *puVar43;
    }
    uVar30 = uVar19 | bVar17 - 0xf << (ulong)(uVar25 & 0x1f);
    if (3 < uVar38) {
      uVar30 = uVar19;
    }
    uVar30 = uVar30 + 0xf;
  }
LAB_100302640:
  switch(uVar30) {
  case 0:
    uVar15 = *(undefined8 *)puVar43;
    _swift_errorRetain(uVar15);
    *puVar22 = uVar15;
    *(undefined1 *)((long)puVar22 + uVar5) = 0;
    break;
  case 1:
    uVar15 = *(undefined8 *)puVar43;
    _swift_errorRetain(uVar15);
    *puVar22 = uVar15;
    *(undefined1 *)((long)puVar22 + uVar5) = 1;
    break;
  case 2:
    uVar15 = *(undefined8 *)puVar43;
    _swift_errorRetain(uVar15);
    *puVar22 = uVar15;
    uVar46 = uVar2 + (long)puVar22 & uVar27;
    uVar20 = (ulong)(uVar2 + (long)puVar43) & uVar27;
    pcVar21 = *(code **)(lVar48 + 0x10);
    (*pcVar21)(uVar46,uVar20,lVar13);
    (*pcVar21)(lVar4 + uVar46 & uVar27,lVar4 + uVar20 & uVar27,lVar13);
    *(undefined1 *)((long)puVar22 + uVar5) = 2;
    break;
  case 3:
    lVar45 = *(long *)(puVar43 + 6);
    puVar22[3] = lVar45;
    puVar22[4] = *(undefined8 *)(puVar43 + 8);
    (*(code *)**(undefined8 **)(lVar45 + -8))(puVar22,puVar43);
    *(undefined1 *)((long)puVar22 + uVar5) = 3;
    break;
  case 4:
    bVar17 = *(byte *)((long)puVar43 + uVar46);
    uVar19 = (uint)bVar17;
    if (0xc < bVar17) {
      uVar25 = 4;
      if (uVar47 < 4) {
        uVar25 = uVar47;
      }
      if ((int)uVar25 < 2) {
        if (uVar25 == 0) goto LAB_100302bfc;
        uVar19 = (uint)(byte)*puVar43;
      }
      else if (uVar25 == 2) {
        uVar19 = (uint)(ushort)*puVar43;
      }
      else if (uVar25 == 3) {
        uVar19 = (uint)(uint3)*puVar43;
      }
      else {
        uVar19 = *puVar43;
      }
      if (uVar47 < 4) {
        uVar19 = (uVar19 | bVar17 - 0xd << (ulong)((uVar47 & 3) << 3)) + 0xd;
      }
      else {
        uVar19 = uVar19 + 0xd;
      }
    }
LAB_100302bfc:
                    /* WARNING: Could not recover jumptable at 0x000100302c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100302c18 + (ulong)*(ushort *)(&DAT_10081926c + (ulong)uVar19 * 2) * 4))(lVar45)
    ;
    return lVar45;
  case 5:
    uVar15 = *(undefined8 *)puVar43;
    FUN_10027c0e0(uVar15);
    *puVar22 = uVar15;
    *(undefined1 *)((long)puVar22 + uVar5) = 5;
    break;
  case 6:
    uVar15 = *(undefined8 *)puVar43;
    uVar9 = *(undefined8 *)(puVar43 + 2);
    uVar19 = puVar43[4];
    FUN_10027c0fc(uVar15,uVar9,(byte)uVar19);
    *puVar22 = uVar15;
    puVar22[1] = uVar9;
    *(byte *)(puVar22 + 2) = (byte)uVar19;
    *(undefined1 *)((long)puVar22 + uVar5) = 6;
    break;
  case 7:
    uVar15 = *(undefined8 *)puVar43;
    _swift_errorRetain(uVar15);
    *puVar22 = uVar15;
    *(undefined1 *)((long)puVar22 + uVar5) = 7;
    break;
  case 8:
    uVar15 = *(undefined8 *)puVar43;
    _swift_errorRetain(uVar15);
    *puVar22 = uVar15;
    uVar15 = *(undefined8 *)(puVar43 + 2);
    _swift_errorRetain(uVar15);
    puVar22[1] = uVar15;
    *(undefined1 *)((long)puVar22 + uVar5) = 8;
    break;
  case 9:
    bVar17 = *(byte *)((long)puVar43 + uVar6);
    uVar19 = (uint)bVar17;
    if (4 < bVar17) {
      uVar25 = 4;
      if (uVar31 < 4) {
        uVar25 = uVar31;
      }
      if ((int)uVar25 < 2) {
        if (uVar25 == 0) goto LAB_100302cdc;
        uVar19 = (uint)(byte)*puVar43;
      }
      else if (uVar25 == 2) {
        uVar19 = (uint)(ushort)*puVar43;
      }
      else if (uVar25 == 3) {
        uVar19 = (uint)(uint3)*puVar43;
      }
      else {
        uVar19 = *puVar43;
      }
      if (uVar31 < 4) {
        uVar19 = (uVar19 | bVar17 - 5 << (ulong)((uVar31 & 3) << 3)) + 5;
      }
      else {
        uVar19 = uVar19 + 5;
      }
    }
LAB_100302cdc:
    if ((int)uVar19 < 2) {
      if (uVar19 == 0) {
        (**(code **)(lVar48 + 0x10))(puVar22,puVar43,lVar13);
        *(undefined1 *)((long)puVar22 + uVar6) = 0;
      }
      else if (uVar19 == 1) {
        *puVar22 = *(undefined8 *)puVar43;
        *(undefined1 *)((long)puVar22 + uVar6) = 1;
        _swift_bridgeObjectRetain();
      }
      else {
LAB_100302db0:
        _memcpy(puVar22,puVar43,uVar6 + 1);
      }
    }
    else if (uVar19 == 2) {
      *puVar22 = *(undefined8 *)puVar43;
      puVar22[1] = *(undefined8 *)(puVar43 + 2);
      uVar15 = *(undefined8 *)(puVar43 + 4);
      puVar22[2] = uVar15;
      *(undefined1 *)((long)puVar22 + uVar6) = 2;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar15);
    }
    else if (uVar19 == 3) {
      *puVar22 = *(undefined8 *)puVar43;
      *(undefined1 *)((long)puVar22 + uVar6) = 3;
    }
    else {
      if (uVar19 != 4) goto LAB_100302db0;
      uVar15 = *(undefined8 *)puVar43;
      _swift_errorRetain(uVar15);
      *puVar22 = uVar15;
      *(undefined1 *)((long)puVar22 + uVar6) = 4;
    }
    *(undefined1 *)((long)puVar22 + uVar5) = 9;
    break;
  case 10:
    bVar17 = *(byte *)((long)puVar43 + uVar7);
    uVar19 = (uint)bVar17;
    if (5 < bVar17) {
      uVar25 = 4;
      if (uVar39 < 4) {
        uVar25 = uVar39;
      }
      if ((int)uVar25 < 2) {
        if (uVar25 == 0) goto LAB_100302e84;
        uVar19 = (uint)(byte)*puVar43;
      }
      else if (uVar25 == 2) {
        uVar19 = (uint)(ushort)*puVar43;
      }
      else if (uVar25 == 3) {
        uVar19 = (uint)(uint3)*puVar43;
      }
      else {
        uVar19 = *puVar43;
      }
      if (uVar39 < 4) {
        uVar19 = (uVar19 | bVar17 - 6 << (ulong)(uVar39 << 3 & 0x1f)) + 6;
      }
      else {
        uVar19 = uVar19 + 6;
      }
    }
LAB_100302e84:
    if ((int)uVar19 < 3) {
      if (uVar19 == 0) {
        (**(code **)(lVar48 + 0x10))(puVar22,puVar43,lVar13);
        *(undefined1 *)((long)puVar22 + uVar7) = 0;
      }
      else if (uVar19 == 1) {
        (**(code **)(lVar35 + 0x10))(puVar22,puVar43,lVar14);
        *(undefined1 *)((long)puVar22 + uVar7) = 1;
      }
      else if (uVar19 == 2) {
        uVar15 = *(undefined8 *)puVar43;
        _swift_errorRetain(uVar15);
        *puVar22 = uVar15;
        *(undefined1 *)((long)puVar22 + uVar7) = 2;
      }
      else {
LAB_100302f34:
        _memcpy(puVar22,puVar43,uVar7 + 1);
      }
    }
    else {
      if (uVar19 == 3) {
        uVar15 = *(undefined8 *)puVar43;
        _swift_errorRetain(uVar15);
        *puVar22 = uVar15;
        uVar18 = 3;
      }
      else {
        if (uVar19 != 4) {
          if (uVar19 != 5) goto LAB_100302f34;
          *puVar22 = *(undefined8 *)puVar43;
          puVar22[1] = *(undefined8 *)(puVar43 + 2);
          *(undefined1 *)((long)puVar22 + uVar7) = 5;
          _swift_bridgeObjectRetain();
          goto LAB_100302f84;
        }
        uVar15 = *(undefined8 *)puVar43;
        _swift_errorRetain(uVar15);
        *puVar22 = uVar15;
        uVar18 = 4;
      }
      *(undefined1 *)((long)puVar22 + uVar7) = uVar18;
    }
LAB_100302f84:
    *(undefined1 *)((long)puVar22 + uVar5) = 10;
    break;
  case 0xb:
    uVar15 = *(undefined8 *)puVar43;
    uVar10 = *(undefined8 *)(puVar43 + 2);
    uVar9 = *(undefined8 *)(puVar43 + 4);
    uVar11 = *(undefined8 *)(puVar43 + 6);
    uVar40 = *(undefined8 *)(puVar43 + 8);
    uVar19 = puVar43[10];
    FUN_10027c10c(uVar15,uVar10,uVar9,uVar11,uVar40,(byte)uVar19);
    *puVar22 = uVar15;
    puVar22[1] = uVar10;
    puVar22[2] = uVar9;
    puVar22[3] = uVar11;
    puVar22[4] = uVar40;
    *(byte *)(puVar22 + 5) = (byte)uVar19;
    *(undefined1 *)((long)puVar22 + uVar5) = 0xb;
    break;
  case 0xc:
    uVar15 = *(undefined8 *)puVar43;
    _swift_errorRetain(uVar15);
    *puVar22 = uVar15;
    *(undefined1 *)((long)puVar22 + uVar5) = 0xc;
    break;
  case 0xd:
    uVar15 = *(undefined8 *)puVar43;
    _swift_errorRetain(uVar15);
    *puVar22 = uVar15;
    *(undefined1 *)((long)puVar22 + uVar5) = 0xd;
    break;
  case 0xe:
    uVar15 = *(undefined8 *)puVar43;
    uVar9 = *(undefined8 *)(puVar43 + 2);
    FUN_100008184(uVar15,uVar9);
    *puVar22 = uVar15;
    puVar22[1] = uVar9;
    *(undefined1 *)((long)puVar22 + uVar5) = 0xe;
    break;
  default:
    _memcpy(puVar22,puVar43,sVar3);
  }
LAB_100302524:
  *(byte *)((long)puVar37 + uVar26) = 4;
  return param_1;
}

