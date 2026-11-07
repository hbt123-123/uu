// rea decompile_all
// name: FUN_10029cabc
// address: 0x10029cabc
// body: available
// range: 0x10029cabc-0x10029d2ef inclusive
// range: 0x10029d30c-0x10029d54b inclusive
// range: 0x10029d6e4-0x10029d71f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long * FUN_10029cabc(long *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  uint uVar18;
  size_t sVar19;
  undefined8 *puVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  undefined8 uVar26;
  long lVar27;
  uint *puVar28;
  ulong uVar29;
  long lVar30;
  code *pcVar31;
  ulong uVar32;
  ulong uVar33;
  long lVar34;
  long *plVar35;
  undefined8 uVar36;
  
  lVar6 = *(long *)(param_3 + 0x10);
  lVar14 = *(long *)(param_3 + 0x18);
  lVar34 = *(long *)(lVar6 + -8);
  lVar24 = *(long *)(lVar14 + -8);
  uVar16 = *(ulong *)(lVar24 + 0x40);
  if (*(ulong *)(lVar24 + 0x40) <= *(ulong *)(lVar34 + 0x40)) {
    uVar16 = *(ulong *)(lVar34 + 0x40);
  }
  lVar11 = 0;
  __s10Foundation10URLRequestVMa();
  lVar30 = *(long *)(lVar11 + -8);
  sVar19 = *(size_t *)(lVar30 + 0x40);
  if (*(int *)(lVar30 + 0x54) == 0) {
    sVar19 = sVar19 + 1;
  }
  lVar12 = 0;
  __s10Foundation3URLVMa();
  lVar27 = *(long *)(lVar12 + -8);
  uVar18 = *(uint *)(lVar27 + 0x50);
  uVar32 = (ulong)uVar18 & 0xff;
  lVar13 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar23 = *(long *)(lVar13 + -8);
  uVar18 = *(uint *)(lVar23 + 0x50) | uVar18;
  uVar33 = (ulong)(uVar18 & 0xf8 | 7);
  uVar29 = uVar32 + 8;
  uVar22 = *(ulong *)(lVar27 + 0x40);
  lVar2 = uVar22 + uVar32;
  uVar3 = (lVar2 + (uVar29 & (uVar32 ^ 0xffffffffffffffff)) & (uVar32 ^ 0xffffffffffffffff)) +
          uVar22;
  uVar1 = (uVar22 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar22) {
    uVar1 = uVar22;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  if (uVar3 <= uVar1 + 1) {
    uVar3 = uVar1 + 1;
  }
  uVar4 = uVar22;
  if (uVar22 < 0x19) {
    uVar4 = 0x18;
  }
  if (uVar3 <= uVar4 + 1) {
    uVar3 = uVar4 + 1;
  }
  uVar5 = *(ulong *)(lVar23 + 0x40);
  if (*(ulong *)(lVar23 + 0x40) <= uVar22) {
    uVar5 = uVar22;
  }
  if (uVar5 < 0x11) {
    uVar5 = 0x10;
  }
  if (uVar3 <= uVar5 + 1) {
    uVar3 = uVar5 + 1;
  }
  if (uVar3 < 0x2a) {
    uVar3 = 0x29;
  }
  uVar22 = uVar3 + 1 +
           (uVar33 + (sVar19 + 7 & 0xfffffffffffffff8) + 0x10 & (uVar33 ^ 0xffffffffffffffff));
  if (uVar22 <= uVar16 + 1) {
    uVar22 = uVar16 + 1;
  }
  uVar18 = *(uint *)(lVar24 + 0x50) | *(uint *)(lVar34 + 0x50) | *(uint *)(lVar30 + 0x50) | uVar18;
  if (((uVar18 & 0x1000f8) != 0) || (0x18 < uVar22 + 1)) {
    uVar16 = (ulong)(uVar18 & 0xf8 | 7);
    lVar14 = *(long *)param_2;
    *param_1 = lVar14;
    _swift_retain();
    return (long *)(lVar14 + (uVar16 + 0x10 & (uVar16 ^ 0xffffffffffffffff)));
  }
  bVar10 = *(byte *)((long)param_2 + uVar22);
  uVar18 = (uint)bVar10;
  if (bVar10 < 2) {
    if (bVar10 == 1) goto LAB_10029cd58;
  }
  else {
    uVar21 = (uint)uVar22;
    uVar25 = 4;
    if (uVar21 < 4) {
      uVar25 = uVar21;
    }
    if ((int)uVar25 < 2) {
      if (uVar25 != 0) {
        uVar18 = (uint)(byte)*param_2;
        goto joined_r0x00010029cd38;
      }
    }
    else {
      if (uVar25 == 2) {
        uVar18 = (uint)(ushort)*param_2;
      }
      else if (uVar25 == 3) {
        uVar18 = (uint)(uint3)*param_2;
      }
      else {
        uVar18 = *param_2;
      }
joined_r0x00010029cd38:
      if (uVar21 < 4) {
        if ((uVar18 | bVar10 - 2 << (ulong)((uVar21 & 3) << 3)) == 0xffffffff) goto LAB_10029cd58;
        goto LAB_10029ccd8;
      }
      uVar18 = uVar18 + 2;
    }
    if (uVar18 == 1) {
LAB_10029cd58:
      uVar18 = (uint)uVar3;
      puVar28 = param_2;
      (**(code **)(lVar30 + 0x30))(param_2,1);
      if ((int)puVar28 == 0) {
        (**(code **)(lVar30 + 0x10))(param_1,param_2,lVar11);
        (**(code **)(lVar30 + 0x38))(param_1,0,1,lVar11);
      }
      else {
        _memcpy(param_1,param_2,sVar19);
      }
      puVar17 = (undefined8 *)((long)param_1 + sVar19 + 7 & 0xfffffffffffffff8);
      puVar20 = (undefined8 *)((ulong)((long)param_2 + sVar19 + 7) & 0xfffffffffffffff8);
      *puVar17 = *puVar20;
      puVar17 = puVar17 + 1;
      puVar20 = puVar20 + 1;
      plVar35 = (long *)*puVar20;
      *puVar17 = plVar35;
      puVar17 = (undefined8 *)((long)puVar17 + uVar33 + 8 & ~uVar33);
      puVar28 = (uint *)((long)puVar20 + uVar33 + 8 & ~uVar33);
      bVar10 = *(byte *)((long)puVar28 + uVar3);
      uVar25 = (uint)bVar10;
      uVar21 = 0xf0;
      if (uVar18 < 4) {
        uVar21 = 0xf0 - (1U >> (ulong)(uVar18 << 3 & 0x1f));
      }
      if ((bVar10 ^ 0xff) < uVar21) {
switchD_10029cfdc_default:
        _memcpy(puVar17,puVar28,uVar3 + 1);
      }
      else {
        if (0xe < bVar10) {
          uVar21 = 4;
          if (uVar18 < 4) {
            uVar21 = uVar18;
          }
          if ((int)uVar21 < 2) {
            if (uVar21 == 0) goto LAB_10029cfbc;
            uVar25 = (uint)(byte)*puVar28;
          }
          else if (uVar21 == 2) {
            uVar25 = (uint)(ushort)*puVar28;
          }
          else if (uVar21 == 3) {
            uVar25 = (uint)(uint3)*puVar28;
          }
          else {
            uVar25 = *puVar28;
          }
          if (uVar18 < 4) {
            uVar25 = uVar25 | bVar10 - 0xf << (ulong)(uVar18 << 3 & 0x1f);
          }
          uVar25 = uVar25 + 0xf;
        }
LAB_10029cfbc:
        switch(uVar25) {
        case 0:
          uVar26 = *(undefined8 *)puVar28;
          _swift_errorRetain(uVar26);
          *puVar17 = uVar26;
          *(undefined1 *)((long)puVar17 + uVar3) = 0;
          goto LAB_10029d6ec;
        case 1:
          uVar26 = *(undefined8 *)puVar28;
          _swift_errorRetain(uVar26);
          *puVar17 = uVar26;
          uVar15 = 1;
          break;
        case 2:
          uVar32 = ~uVar32;
          uVar26 = *(undefined8 *)puVar28;
          _swift_errorRetain(uVar26);
          *puVar17 = uVar26;
          uVar16 = uVar29 + (long)puVar17 & uVar32;
          uVar29 = (ulong)(uVar29 + (long)puVar28) & uVar32;
          pcVar31 = *(code **)(lVar27 + 0x10);
          (*pcVar31)(uVar16,uVar29,lVar12);
          (*pcVar31)(lVar2 + uVar16 & uVar32,lVar2 + uVar29 & uVar32,lVar12);
          uVar15 = 2;
          break;
        case 3:
          lVar14 = *(long *)(puVar28 + 6);
          puVar17[3] = lVar14;
          puVar17[4] = *(undefined8 *)(puVar28 + 8);
          (*(code *)**(undefined8 **)(lVar14 + -8))(puVar17,puVar28);
          uVar15 = 3;
          break;
        case 4:
          bVar10 = *(byte *)((long)puVar28 + uVar1);
          uVar18 = (uint)bVar10;
          if (0xc < bVar10) {
            uVar21 = (uint)uVar1;
            uVar25 = 4;
            if (uVar21 < 4) {
              uVar25 = uVar21;
            }
            if ((int)uVar25 < 2) {
              if (uVar25 == 0) goto LAB_10029d2d4;
              uVar18 = (uint)(byte)*puVar28;
            }
            else if (uVar25 == 2) {
              uVar18 = (uint)(ushort)*puVar28;
            }
            else if (uVar25 == 3) {
              uVar18 = (uint)(uint3)*puVar28;
            }
            else {
              uVar18 = *puVar28;
            }
            if (uVar21 < 4) {
              uVar18 = (uVar18 | bVar10 - 0xd << (ulong)((uVar21 & 3) << 3)) + 0xd;
            }
            else {
              uVar18 = uVar18 + 0xd;
            }
          }
LAB_10029d2d4:
                    /* WARNING: Could not recover jumptable at 0x00010029d2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_10029d2f0 + (ulong)(byte)(&DAT_100817385)[uVar18] * 4))(plVar35);
          return plVar35;
        case 5:
          uVar26 = *(undefined8 *)puVar28;
          FUN_10027c0e0(uVar26);
          *puVar17 = uVar26;
          uVar15 = 5;
          break;
        case 6:
          uVar26 = *(undefined8 *)puVar28;
          uVar7 = *(undefined8 *)(puVar28 + 2);
          uVar18 = puVar28[4];
          FUN_10027c0fc(uVar26,uVar7,(byte)uVar18);
          *puVar17 = uVar26;
          puVar17[1] = uVar7;
          *(byte *)(puVar17 + 2) = (byte)uVar18;
          uVar15 = 6;
          break;
        case 7:
          uVar26 = *(undefined8 *)puVar28;
          _swift_errorRetain(uVar26);
          *puVar17 = uVar26;
          uVar15 = 7;
          break;
        case 8:
          uVar26 = *(undefined8 *)puVar28;
          _swift_errorRetain(uVar26);
          *puVar17 = uVar26;
          uVar26 = *(undefined8 *)(puVar28 + 2);
          _swift_errorRetain(uVar26);
          puVar17[1] = uVar26;
          uVar15 = 8;
          break;
        case 9:
          bVar10 = *(byte *)((long)puVar28 + uVar4);
          uVar18 = (uint)bVar10;
          if (4 < bVar10) {
            uVar21 = (uint)uVar4;
            uVar25 = 4;
            if (uVar21 < 4) {
              uVar25 = uVar21;
            }
            if ((int)uVar25 < 2) {
              if (uVar25 == 0) goto LAB_10029d330;
              uVar18 = (uint)(byte)*puVar28;
            }
            else if (uVar25 == 2) {
              uVar18 = (uint)(ushort)*puVar28;
            }
            else if (uVar25 == 3) {
              uVar18 = (uint)(uint3)*puVar28;
            }
            else {
              uVar18 = *puVar28;
            }
            if (uVar21 < 4) {
              uVar18 = (uVar18 | bVar10 - 5 << (ulong)((uVar21 & 3) << 3)) + 5;
            }
            else {
              uVar18 = uVar18 + 5;
            }
          }
LAB_10029d330:
          if ((int)uVar18 < 2) {
            if (uVar18 == 0) {
              (**(code **)(lVar27 + 0x10))(puVar17,puVar28,lVar12);
              *(undefined1 *)((long)puVar17 + uVar4) = 0;
            }
            else if (uVar18 == 1) {
              *puVar17 = *(undefined8 *)puVar28;
              *(undefined1 *)((long)puVar17 + uVar4) = 1;
              _swift_bridgeObjectRetain();
            }
            else {
LAB_10029d3f8:
              _memcpy(puVar17,puVar28,uVar4 + 1);
            }
          }
          else if (uVar18 == 2) {
            *puVar17 = *(undefined8 *)puVar28;
            puVar17[1] = *(undefined8 *)(puVar28 + 2);
            uVar26 = *(undefined8 *)(puVar28 + 4);
            puVar17[2] = uVar26;
            *(undefined1 *)((long)puVar17 + uVar4) = 2;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar26);
          }
          else if (uVar18 == 3) {
            *puVar17 = *(undefined8 *)puVar28;
            *(undefined1 *)((long)puVar17 + uVar4) = 3;
          }
          else {
            if (uVar18 != 4) goto LAB_10029d3f8;
            uVar26 = *(undefined8 *)puVar28;
            _swift_errorRetain(uVar26);
            *puVar17 = uVar26;
            *(undefined1 *)((long)puVar17 + uVar4) = 4;
          }
          uVar15 = 9;
          break;
        case 10:
          bVar10 = *(byte *)((long)puVar28 + uVar5);
          uVar18 = (uint)bVar10;
          if (5 < bVar10) {
            uVar21 = (uint)uVar5;
            uVar25 = 4;
            if (uVar21 < 4) {
              uVar25 = uVar21;
            }
            if ((int)uVar25 < 2) {
              if (uVar25 == 0) goto LAB_10029d43c;
              uVar18 = (uint)(byte)*puVar28;
            }
            else if (uVar25 == 2) {
              uVar18 = (uint)(ushort)*puVar28;
            }
            else if (uVar25 == 3) {
              uVar18 = (uint)(uint3)*puVar28;
            }
            else {
              uVar18 = *puVar28;
            }
            if (uVar21 < 4) {
              uVar18 = (uVar18 | bVar10 - 6 << (ulong)((uVar21 & 3) << 3)) + 6;
            }
            else {
              uVar18 = uVar18 + 6;
            }
          }
LAB_10029d43c:
          if ((int)uVar18 < 3) {
            if (uVar18 == 0) {
              (**(code **)(lVar27 + 0x10))(puVar17,puVar28,lVar12);
              *(undefined1 *)((long)puVar17 + uVar5) = 0;
              uVar15 = 10;
              break;
            }
            if (uVar18 == 1) {
              (**(code **)(lVar23 + 0x10))(puVar17,puVar28,lVar13);
              uVar15 = 1;
            }
            else {
              if (uVar18 != 2) {
LAB_10029d4f0:
                _memcpy(puVar17,puVar28,uVar5 + 1);
                uVar15 = 10;
                break;
              }
              uVar26 = *(undefined8 *)puVar28;
              _swift_errorRetain(uVar26);
              *puVar17 = uVar26;
              uVar15 = 2;
            }
          }
          else if (uVar18 == 3) {
            uVar26 = *(undefined8 *)puVar28;
            _swift_errorRetain(uVar26);
            *puVar17 = uVar26;
            uVar15 = 3;
          }
          else {
            if (uVar18 != 4) {
              if (uVar18 != 5) goto LAB_10029d4f0;
              *puVar17 = *(undefined8 *)puVar28;
              puVar17[1] = *(undefined8 *)(puVar28 + 2);
              *(undefined1 *)((long)puVar17 + uVar5) = 5;
              _swift_bridgeObjectRetain();
              uVar15 = 10;
              break;
            }
            uVar26 = *(undefined8 *)puVar28;
            _swift_errorRetain(uVar26);
            *puVar17 = uVar26;
            uVar15 = 4;
          }
          *(undefined1 *)((long)puVar17 + uVar5) = uVar15;
          uVar15 = 10;
          break;
        case 0xb:
          uVar26 = *(undefined8 *)puVar28;
          uVar8 = *(undefined8 *)(puVar28 + 2);
          uVar7 = *(undefined8 *)(puVar28 + 4);
          uVar9 = *(undefined8 *)(puVar28 + 6);
          uVar36 = *(undefined8 *)(puVar28 + 8);
          uVar18 = puVar28[10];
          FUN_10027c10c(uVar26,uVar8,uVar7,uVar9,uVar36,(byte)uVar18);
          *puVar17 = uVar26;
          puVar17[1] = uVar8;
          puVar17[2] = uVar7;
          puVar17[3] = uVar9;
          puVar17[4] = uVar36;
          uVar15 = 0xb;
          *(byte *)(puVar17 + 5) = (byte)uVar18;
          break;
        case 0xc:
          uVar26 = *(undefined8 *)puVar28;
          _swift_errorRetain(uVar26);
          *puVar17 = uVar26;
          uVar15 = 0xc;
          break;
        case 0xd:
          uVar26 = *(undefined8 *)puVar28;
          _swift_errorRetain(uVar26);
          *puVar17 = uVar26;
          uVar15 = 0xd;
          break;
        case 0xe:
          uVar26 = *(undefined8 *)puVar28;
          uVar7 = *(undefined8 *)(puVar28 + 2);
          FUN_100008184(uVar26,uVar7);
          *puVar17 = uVar26;
          puVar17[1] = uVar7;
          uVar15 = 0xe;
          break;
        default:
          goto switchD_10029cfdc_default;
        }
        *(undefined1 *)((long)puVar17 + uVar3) = uVar15;
      }
LAB_10029d6ec:
      *(undefined1 *)((long)param_1 + uVar22) = 1;
      return param_1;
    }
  }
LAB_10029ccd8:
  bVar10 = *(byte *)((long)param_2 + uVar16);
  uVar18 = (uint)bVar10;
  if (1 < bVar10) {
    uVar21 = (uint)uVar16;
    uVar25 = 4;
    if (uVar21 < 4) {
      uVar25 = uVar21;
    }
    if ((int)uVar25 < 2) {
      if (uVar25 == 0) goto LAB_10029cf4c;
      uVar18 = (uint)(byte)*param_2;
    }
    else if (uVar25 == 2) {
      uVar18 = (uint)(ushort)*param_2;
    }
    else if (uVar25 == 3) {
      uVar18 = (uint)(uint3)*param_2;
    }
    else {
      uVar18 = *param_2;
    }
    if (uVar21 < 4) {
      uVar18 = (uVar18 | bVar10 - 2 << (ulong)((uVar21 & 3) << 3)) + 2;
    }
    else {
      uVar18 = uVar18 + 2;
    }
  }
LAB_10029cf4c:
  if (uVar18 != 1) {
    lVar14 = lVar6;
    lVar24 = lVar34;
  }
  (**(code **)(lVar24 + 0x10))(param_1,param_2,lVar14);
  *(bool *)((long)param_1 + uVar16) = uVar18 == 1;
  *(undefined1 *)((long)param_1 + uVar22) = 0;
  return param_1;
}

