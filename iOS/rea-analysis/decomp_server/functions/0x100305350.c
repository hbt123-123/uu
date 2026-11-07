// rea decompile_all
// name: FUN_100305350
// address: 0x100305350
// body: available
// range: 0x100305350-0x100305b3b inclusive
// range: 0x100305b58-0x100305d73 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long * FUN_100305350(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 uVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  size_t sVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  code *pcVar26;
  undefined8 uVar27;
  uint *puVar28;
  uint uVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  undefined8 uVar35;
  long *plVar36;
  
  lVar22 = *(long *)(param_3 + 0x10);
  lVar5 = *(long *)(param_3 + 0x18);
  lVar32 = *(long *)(lVar22 + -8);
  lVar34 = *(long *)(lVar5 + -8);
  uVar15 = *(ulong *)(lVar32 + 0x40);
  if (*(ulong *)(lVar32 + 0x40) <= *(ulong *)(lVar34 + 0x40)) {
    uVar15 = *(ulong *)(lVar34 + 0x40);
  }
  lVar10 = 0;
  __s10Foundation10URLRequestVMa();
  lVar30 = *(long *)(lVar10 + -8);
  sVar17 = *(size_t *)(lVar30 + 0x40);
  if (*(int *)(lVar30 + 0x54) == 0) {
    sVar17 = sVar17 + 1;
  }
  lVar11 = 0;
  __s10Foundation3URLVMa();
  lVar33 = *(long *)(lVar11 + -8);
  uVar14 = *(uint *)(lVar33 + 0x50);
  uVar21 = (ulong)uVar14 & 0xff;
  lVar12 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar20 = *(long *)(lVar12 + -8);
  uVar14 = *(uint *)(lVar20 + 0x50) | uVar14;
  uVar24 = (ulong)(uVar14 & 0xf8 | 7);
  uVar25 = uVar21 + 8;
  uVar19 = *(ulong *)(lVar33 + 0x40);
  lVar1 = uVar19 + uVar21;
  uVar2 = (lVar1 + (uVar25 & (uVar21 ^ 0xffffffffffffffff)) & (uVar21 ^ 0xffffffffffffffff)) +
          uVar19;
  uVar31 = (uVar19 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar31 <= uVar19) {
    uVar31 = uVar19;
  }
  if (uVar31 < 9) {
    uVar31 = 8;
  }
  if (uVar2 <= uVar31 + 1) {
    uVar2 = uVar31 + 1;
  }
  uVar3 = uVar19;
  if (uVar19 < 0x19) {
    uVar3 = 0x18;
  }
  if (uVar2 <= uVar3 + 1) {
    uVar2 = uVar3 + 1;
  }
  uVar4 = *(ulong *)(lVar20 + 0x40);
  if (*(ulong *)(lVar20 + 0x40) <= uVar19) {
    uVar4 = uVar19;
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
  uVar19 = uVar2 + 1 +
           (uVar24 + (sVar17 + 7 & 0xfffffffffffffff8) + 0x10 & (uVar24 ^ 0xffffffffffffffff));
  if (uVar15 <= uVar19) {
    uVar15 = uVar19;
  }
  if (uVar15 < 0x19) {
    uVar15 = 0x18;
  }
  uVar14 = *(uint *)(lVar32 + 0x50) | *(uint *)(lVar34 + 0x50) | *(uint *)(lVar30 + 0x50) | uVar14;
  if (((uVar14 & 0x1000f8) != 0) || (0x18 < uVar15 + 1)) {
    uVar15 = (ulong)(uVar14 & 0xf8 | 7);
    lVar22 = *param_2;
    *param_1 = lVar22;
    _swift_retain();
    return (long *)(lVar22 + (uVar15 + 0x10 & (uVar15 ^ 0xffffffffffffffff)));
  }
  uVar14 = (uint)*(byte *)((long)param_2 + uVar15);
  if (4 < *(byte *)((long)param_2 + uVar15)) {
    uVar14 = (int)*param_2 + 5;
  }
  if ((int)uVar14 < 2) {
    if (uVar14 == 0) {
      lVar22 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar22;
      *(undefined1 *)((long)param_1 + uVar15) = 0;
      _swift_bridgeObjectRetain();
      return param_1;
    }
    (**(code **)(lVar32 + 0x10))(param_1,param_2,lVar22);
    *(undefined1 *)((long)param_1 + uVar15) = 1;
    return param_1;
  }
  if (uVar14 == 2) {
    (**(code **)(lVar34 + 0x10))(param_1,param_2,lVar5);
    *(undefined1 *)((long)param_1 + uVar15) = 2;
    return param_1;
  }
  if (uVar14 == 3) {
    *param_1 = *param_2;
    uVar25 = param_2[2];
    if (uVar25 >> 0x3c < 0xf) {
      lVar22 = param_2[1];
      FUN_100008184(lVar22,uVar25);
      param_1[1] = lVar22;
      param_1[2] = uVar25;
    }
    else {
      lVar22 = param_2[1];
      param_1[2] = param_2[2];
      param_1[1] = lVar22;
    }
    *(undefined1 *)((long)param_1 + uVar15) = 3;
    return param_1;
  }
  uVar14 = (uint)uVar2;
  plVar36 = param_2;
  (**(code **)(lVar30 + 0x30))(param_2,1,lVar10);
  if ((int)plVar36 == 0) {
    (**(code **)(lVar30 + 0x10))(param_1,param_2,lVar10);
    (**(code **)(lVar30 + 0x38))(param_1,0,1,lVar10);
  }
  else {
    _memcpy(param_1,param_2,sVar17);
  }
  puVar16 = (undefined8 *)((long)param_1 + sVar17 + 7 & 0xfffffffffffffff8);
  puVar18 = (undefined8 *)((long)param_2 + sVar17 + 7 & 0xfffffffffffffff8);
  *puVar16 = *puVar18;
  puVar16 = puVar16 + 1;
  puVar18 = puVar18 + 1;
  plVar36 = (long *)*puVar18;
  *puVar16 = plVar36;
  puVar16 = (undefined8 *)((long)puVar16 + uVar24 + 8 & ~uVar24);
  puVar28 = (uint *)((long)puVar18 + uVar24 + 8 & ~uVar24);
  bVar9 = *(byte *)((long)puVar28 + uVar2);
  uVar23 = (uint)bVar9;
  uVar29 = 0xf0;
  if (uVar14 < 4) {
    uVar29 = 0xf0 - (1U >> (ulong)(uVar14 << 3 & 0x1f));
  }
  if ((bVar9 ^ 0xff) < uVar29) {
switchD_1003057f8_default:
    _memcpy(puVar16,puVar28,uVar2 + 1);
  }
  else {
    if (0xe < bVar9) {
      uVar29 = 4;
      if (uVar14 < 4) {
        uVar29 = uVar14;
      }
      if ((int)uVar29 < 2) {
        if (uVar29 == 0) goto LAB_1003057d8;
        uVar23 = (uint)(byte)*puVar28;
      }
      else if (uVar29 == 2) {
        uVar23 = (uint)(ushort)*puVar28;
      }
      else if (uVar29 == 3) {
        uVar23 = (uint)(uint3)*puVar28;
      }
      else {
        uVar23 = *puVar28;
      }
      if (uVar14 < 4) {
        uVar23 = uVar23 | bVar9 - 0xf << (ulong)(uVar14 << 3 & 0x1f);
      }
      uVar23 = uVar23 + 0xf;
    }
LAB_1003057d8:
    switch(uVar23) {
    case 0:
      uVar27 = *(undefined8 *)puVar28;
      _swift_errorRetain(uVar27);
      *puVar16 = uVar27;
      *(undefined1 *)((long)puVar16 + uVar2) = 0;
      break;
    case 1:
      uVar27 = *(undefined8 *)puVar28;
      _swift_errorRetain(uVar27);
      *puVar16 = uVar27;
      *(undefined1 *)((long)puVar16 + uVar2) = 1;
      break;
    case 2:
      uVar21 = ~uVar21;
      uVar27 = *(undefined8 *)puVar28;
      _swift_errorRetain(uVar27);
      *puVar16 = uVar27;
      uVar31 = uVar25 + (long)puVar16 & uVar21;
      uVar25 = (ulong)(uVar25 + (long)puVar28) & uVar21;
      pcVar26 = *(code **)(lVar33 + 0x10);
      (*pcVar26)(uVar31,uVar25,lVar11);
      (*pcVar26)(lVar1 + uVar31 & uVar21,lVar1 + uVar25 & uVar21,lVar11);
      *(undefined1 *)((long)puVar16 + uVar2) = 2;
      break;
    case 3:
      lVar22 = *(long *)(puVar28 + 6);
      puVar16[3] = lVar22;
      puVar16[4] = *(undefined8 *)(puVar28 + 8);
      (*(code *)**(undefined8 **)(lVar22 + -8))(puVar16,puVar28);
      *(undefined1 *)((long)puVar16 + uVar2) = 3;
      break;
    case 4:
      bVar9 = *(byte *)((long)puVar28 + uVar31);
      uVar14 = (uint)bVar9;
      if (0xc < bVar9) {
        uVar29 = (uint)uVar31;
        uVar23 = 4;
        if (uVar29 < 4) {
          uVar23 = uVar29;
        }
        if ((int)uVar23 < 2) {
          if (uVar23 == 0) goto LAB_100305b20;
          uVar14 = (uint)(byte)*puVar28;
        }
        else if (uVar23 == 2) {
          uVar14 = (uint)(ushort)*puVar28;
        }
        else if (uVar23 == 3) {
          uVar14 = (uint)(uint3)*puVar28;
        }
        else {
          uVar14 = *puVar28;
        }
        if (uVar29 < 4) {
          uVar14 = (uVar14 | bVar9 - 0xd << (ulong)((uVar29 & 3) << 3)) + 0xd;
        }
        else {
          uVar14 = uVar14 + 0xd;
        }
      }
LAB_100305b20:
                    /* WARNING: Could not recover jumptable at 0x000100305b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_100305b3c + (ulong)(byte)(&DAT_100819305)[uVar14] * 4))(plVar36);
      return plVar36;
    case 5:
      uVar27 = *(undefined8 *)puVar28;
      FUN_10027c0e0(uVar27);
      *puVar16 = uVar27;
      *(undefined1 *)((long)puVar16 + uVar2) = 5;
      break;
    case 6:
      uVar27 = *(undefined8 *)puVar28;
      uVar6 = *(undefined8 *)(puVar28 + 2);
      uVar14 = puVar28[4];
      FUN_10027c0fc(uVar27,uVar6,(byte)uVar14);
      *puVar16 = uVar27;
      puVar16[1] = uVar6;
      *(byte *)(puVar16 + 2) = (byte)uVar14;
      *(undefined1 *)((long)puVar16 + uVar2) = 6;
      break;
    case 7:
      uVar27 = *(undefined8 *)puVar28;
      _swift_errorRetain(uVar27);
      *puVar16 = uVar27;
      *(undefined1 *)((long)puVar16 + uVar2) = 7;
      break;
    case 8:
      uVar27 = *(undefined8 *)puVar28;
      _swift_errorRetain(uVar27);
      *puVar16 = uVar27;
      uVar27 = *(undefined8 *)(puVar28 + 2);
      _swift_errorRetain(uVar27);
      puVar16[1] = uVar27;
      *(undefined1 *)((long)puVar16 + uVar2) = 8;
      break;
    case 9:
      bVar9 = *(byte *)((long)puVar28 + uVar3);
      uVar14 = (uint)bVar9;
      if (4 < bVar9) {
        uVar29 = (uint)uVar3;
        uVar23 = 4;
        if (uVar29 < 4) {
          uVar23 = uVar29;
        }
        if ((int)uVar23 < 2) {
          if (uVar23 == 0) goto LAB_100305b7c;
          uVar14 = (uint)(byte)*puVar28;
        }
        else if (uVar23 == 2) {
          uVar14 = (uint)(ushort)*puVar28;
        }
        else if (uVar23 == 3) {
          uVar14 = (uint)(uint3)*puVar28;
        }
        else {
          uVar14 = *puVar28;
        }
        if (uVar29 < 4) {
          uVar14 = (uVar14 | bVar9 - 5 << (ulong)((uVar29 & 3) << 3)) + 5;
        }
        else {
          uVar14 = uVar14 + 5;
        }
      }
LAB_100305b7c:
      if ((int)uVar14 < 2) {
        if (uVar14 == 0) {
          (**(code **)(lVar33 + 0x10))(puVar16,puVar28,lVar11);
          *(undefined1 *)((long)puVar16 + uVar3) = 0;
        }
        else if (uVar14 == 1) {
          *puVar16 = *(undefined8 *)puVar28;
          *(undefined1 *)((long)puVar16 + uVar3) = 1;
          _swift_bridgeObjectRetain();
        }
        else {
LAB_100305c3c:
          _memcpy(puVar16,puVar28,uVar3 + 1);
        }
      }
      else if (uVar14 == 2) {
        *puVar16 = *(undefined8 *)puVar28;
        puVar16[1] = *(undefined8 *)(puVar28 + 2);
        uVar27 = *(undefined8 *)(puVar28 + 4);
        puVar16[2] = uVar27;
        *(undefined1 *)((long)puVar16 + uVar3) = 2;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar27);
      }
      else if (uVar14 == 3) {
        *puVar16 = *(undefined8 *)puVar28;
        *(undefined1 *)((long)puVar16 + uVar3) = 3;
      }
      else {
        if (uVar14 != 4) goto LAB_100305c3c;
        uVar27 = *(undefined8 *)puVar28;
        _swift_errorRetain(uVar27);
        *puVar16 = uVar27;
        *(undefined1 *)((long)puVar16 + uVar3) = 4;
      }
      *(undefined1 *)((long)puVar16 + uVar2) = 9;
      break;
    case 10:
      bVar9 = *(byte *)((long)puVar28 + uVar4);
      uVar14 = (uint)bVar9;
      if (5 < bVar9) {
        uVar29 = (uint)uVar4;
        uVar23 = 4;
        if (uVar29 < 4) {
          uVar23 = uVar29;
        }
        if ((int)uVar23 < 2) {
          if (uVar23 == 0) goto LAB_100305c84;
          uVar14 = (uint)(byte)*puVar28;
        }
        else if (uVar23 == 2) {
          uVar14 = (uint)(ushort)*puVar28;
        }
        else if (uVar23 == 3) {
          uVar14 = (uint)(uint3)*puVar28;
        }
        else {
          uVar14 = *puVar28;
        }
        if (uVar29 < 4) {
          uVar14 = (uVar14 | bVar9 - 6 << (ulong)((uVar29 & 3) << 3)) + 6;
        }
        else {
          uVar14 = uVar14 + 6;
        }
      }
LAB_100305c84:
      if ((int)uVar14 < 3) {
        if (uVar14 != 0) {
          if (uVar14 == 1) {
            (**(code **)(lVar20 + 0x10))(puVar16,puVar28,lVar12);
            uVar13 = 1;
          }
          else {
            if (uVar14 != 2) {
LAB_100305d24:
              _memcpy(puVar16,puVar28,uVar4 + 1);
              goto LAB_100305d68;
            }
            uVar27 = *(undefined8 *)puVar28;
            _swift_errorRetain(uVar27);
            *puVar16 = uVar27;
            uVar13 = 2;
          }
          goto LAB_100305d64;
        }
        (**(code **)(lVar33 + 0x10))(puVar16,puVar28,lVar11);
        *(undefined1 *)((long)puVar16 + uVar4) = 0;
      }
      else {
        if (uVar14 == 3) {
          uVar27 = *(undefined8 *)puVar28;
          _swift_errorRetain(uVar27);
          *puVar16 = uVar27;
          uVar13 = 3;
        }
        else {
          if (uVar14 != 4) {
            if (uVar14 != 5) goto LAB_100305d24;
            *puVar16 = *(undefined8 *)puVar28;
            puVar16[1] = *(undefined8 *)(puVar28 + 2);
            *(undefined1 *)((long)puVar16 + uVar4) = 5;
            _swift_bridgeObjectRetain();
            goto LAB_100305d68;
          }
          uVar27 = *(undefined8 *)puVar28;
          _swift_errorRetain(uVar27);
          *puVar16 = uVar27;
          uVar13 = 4;
        }
LAB_100305d64:
        *(undefined1 *)((long)puVar16 + uVar4) = uVar13;
      }
LAB_100305d68:
      *(undefined1 *)((long)puVar16 + uVar2) = 10;
      break;
    case 0xb:
      uVar27 = *(undefined8 *)puVar28;
      uVar7 = *(undefined8 *)(puVar28 + 2);
      uVar6 = *(undefined8 *)(puVar28 + 4);
      uVar8 = *(undefined8 *)(puVar28 + 6);
      uVar35 = *(undefined8 *)(puVar28 + 8);
      uVar14 = puVar28[10];
      FUN_10027c10c(uVar27,uVar7,uVar6,uVar8,uVar35,(byte)uVar14);
      *puVar16 = uVar27;
      puVar16[1] = uVar7;
      puVar16[2] = uVar6;
      puVar16[3] = uVar8;
      puVar16[4] = uVar35;
      *(byte *)(puVar16 + 5) = (byte)uVar14;
      *(undefined1 *)((long)puVar16 + uVar2) = 0xb;
      break;
    case 0xc:
      uVar27 = *(undefined8 *)puVar28;
      _swift_errorRetain(uVar27);
      *puVar16 = uVar27;
      *(undefined1 *)((long)puVar16 + uVar2) = 0xc;
      break;
    case 0xd:
      uVar27 = *(undefined8 *)puVar28;
      _swift_errorRetain(uVar27);
      *puVar16 = uVar27;
      *(undefined1 *)((long)puVar16 + uVar2) = 0xd;
      break;
    case 0xe:
      uVar27 = *(undefined8 *)puVar28;
      uVar6 = *(undefined8 *)(puVar28 + 2);
      FUN_100008184(uVar27,uVar6);
      *puVar16 = uVar27;
      puVar16[1] = uVar6;
      *(undefined1 *)((long)puVar16 + uVar2) = 0xe;
      break;
    default:
      goto switchD_1003057f8_default;
    }
  }
  *(undefined1 *)((long)param_1 + uVar15) = 4;
  return param_1;
}

