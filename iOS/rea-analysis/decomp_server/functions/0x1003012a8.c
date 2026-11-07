// rea decompile_all
// name: FUN_1003012a8
// address: 0x1003012a8
// body: available
// range: 0x1003012a8-0x100301b27 inclusive
// range: 0x100301b48-0x100301da3 inclusive
// range: 0x100301f60-0x100301f6b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_1003012a8(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  byte bVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint *puVar17;
  undefined1 uVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long *plVar22;
  ulong uVar23;
  undefined8 *puVar24;
  long *plVar25;
  uint uVar26;
  size_t sVar27;
  ulong uVar28;
  long lVar29;
  uint uVar30;
  long lVar31;
  long lVar32;
  code *pcVar33;
  uint *puVar34;
  undefined8 uVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  ulong uVar40;
  undefined8 uVar41;
  undefined8 *puVar42;
  
  _swift_weakCopyInit();
  lVar37 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(param_3 + 0x18);
  lVar36 = *(long *)(lVar37 + -8);
  uVar26 = *(uint *)(lVar36 + 0x50);
  lVar38 = *(long *)(lVar8 + -8);
  uVar19 = *(uint *)(lVar38 + 0x50);
  lVar14 = 0;
  __s10Foundation10URLRequestVMa();
  lVar31 = *(long *)(lVar14 + -8);
  uVar30 = *(uint *)(lVar31 + 0x50);
  lVar15 = 0;
  __s10Foundation3URLVMa();
  lVar32 = *(long *)(lVar15 + -8);
  uVar12 = *(uint *)(lVar32 + 0x50);
  uVar40 = (ulong)uVar12 & 0xff;
  lVar16 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar29 = *(long *)(lVar16 + -8);
  uVar12 = *(uint *)(lVar29 + 0x50) | uVar12;
  uVar20 = (ulong)(uVar12 & 0xf8 | 7);
  uVar23 = (ulong)((uVar19 | uVar26 | uVar30 | uVar12) & 0xf8 | 7);
  puVar42 = (undefined8 *)(uVar23 + 8 + param_1 & (uVar23 ^ 0xffffffffffffffff));
  puVar34 = (uint *)(uVar23 + 8 + param_2 & (uVar23 ^ 0xffffffffffffffff));
  uVar23 = *(ulong *)(lVar36 + 0x40);
  if (*(ulong *)(lVar36 + 0x40) <= *(ulong *)(lVar38 + 0x40)) {
    uVar23 = *(ulong *)(lVar38 + 0x40);
  }
  sVar27 = *(size_t *)(lVar31 + 0x40);
  if (*(int *)(lVar31 + 0x54) == 0) {
    sVar27 = sVar27 + 1;
  }
  uVar39 = sVar27 + 7;
  lVar1 = uVar20 + 8;
  uVar2 = uVar40 + 8;
  uVar28 = *(ulong *)(lVar32 + 0x40);
  lVar4 = uVar28 + uVar40;
  uVar5 = (lVar4 + (uVar2 & (uVar40 ^ 0xffffffffffffffff)) & (uVar40 ^ 0xffffffffffffffff)) + uVar28
  ;
  uVar3 = (uVar28 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar3 <= uVar28) {
    uVar3 = uVar28;
  }
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  if (uVar5 <= uVar3 + 1) {
    uVar5 = uVar3 + 1;
  }
  uVar6 = uVar28;
  if (uVar28 < 0x19) {
    uVar6 = 0x18;
  }
  if (uVar5 <= uVar6 + 1) {
    uVar5 = uVar6 + 1;
  }
  uVar7 = *(ulong *)(lVar29 + 0x40);
  if (*(ulong *)(lVar29 + 0x40) <= uVar28) {
    uVar7 = uVar28;
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
  uVar28 = uVar5 + 1 + (lVar1 + (uVar39 & 0xfffffffffffffff8) + 8 & (uVar20 ^ 0xffffffffffffffff));
  if (uVar23 <= uVar28) {
    uVar23 = uVar28;
  }
  if (uVar23 < 0x19) {
    uVar23 = 0x18;
  }
  bVar13 = *(byte *)((long)puVar34 + uVar23);
  uVar26 = (uint)bVar13;
  if (4 < bVar13) {
    uVar30 = (uint)uVar23;
    uVar19 = 4;
    if (uVar30 < 4) {
      uVar19 = uVar30;
    }
    if ((int)uVar19 < 2) {
      if (uVar19 == 0) goto LAB_1003014d4;
      uVar19 = (uint)(byte)*puVar34;
    }
    else if (uVar19 == 2) {
      uVar19 = (uint)(ushort)*puVar34;
    }
    else if (uVar19 == 3) {
      uVar19 = (uint)(uint3)*puVar34;
    }
    else {
      uVar19 = *puVar34;
    }
    uVar26 = uVar19 | bVar13 - 5 << (ulong)((uVar30 & 3) << 3);
    if (3 < uVar30) {
      uVar26 = uVar19;
    }
    uVar26 = uVar26 + 5;
  }
LAB_1003014d4:
  if ((int)uVar26 < 2) {
    if (uVar26 == 0) {
      *puVar42 = *(undefined8 *)puVar34;
      puVar42[1] = *(undefined8 *)(puVar34 + 2);
      *(undefined1 *)((long)puVar42 + uVar23) = 0;
      _swift_bridgeObjectRetain();
      return param_1;
    }
    (**(code **)(lVar36 + 0x10))(puVar42,puVar34,lVar37);
    *(undefined1 *)((long)puVar42 + uVar23) = 1;
    return param_1;
  }
  if (uVar26 == 2) {
    (**(code **)(lVar38 + 0x10))(puVar42,puVar34,lVar8);
    *(undefined1 *)((long)puVar42 + uVar23) = 2;
    return param_1;
  }
  if (uVar26 == 3) {
    *puVar42 = *(undefined8 *)puVar34;
    uVar20 = *(ulong *)(puVar34 + 4);
    if (uVar20 >> 0x3c < 0xf) {
      uVar35 = *(undefined8 *)(puVar34 + 2);
      FUN_100008184(uVar35,uVar20);
      puVar42[1] = uVar35;
      puVar42[2] = uVar20;
    }
    else {
      uVar35 = *(undefined8 *)(puVar34 + 2);
      puVar42[2] = *(undefined8 *)(puVar34 + 4);
      puVar42[1] = uVar35;
    }
    *(undefined1 *)((long)puVar42 + uVar23) = 3;
    return param_1;
  }
  uVar26 = (uint)uVar5;
  puVar17 = puVar34;
  (**(code **)(lVar31 + 0x30))(puVar34,1,lVar14);
  if ((int)puVar17 == 0) {
    (**(code **)(lVar31 + 0x10))(puVar42,puVar34,lVar14);
    (**(code **)(lVar31 + 0x38))(puVar42,0,1,lVar14);
  }
  else {
    _memcpy(puVar42,puVar34,sVar27);
  }
  puVar21 = (undefined8 *)(uVar39 + (long)puVar42 & 0xfffffffffffffff8);
  puVar24 = (undefined8 *)((ulong)(uVar39 + (long)puVar34) & 0xfffffffffffffff8);
  *puVar21 = *puVar24;
  plVar22 = puVar21 + 1;
  plVar25 = puVar24 + 1;
  lVar37 = *plVar25;
  *plVar22 = lVar37;
  puVar21 = (undefined8 *)(lVar1 + (long)plVar22 & ~uVar20);
  puVar34 = (uint *)(lVar1 + (long)plVar25 & ~uVar20);
  bVar13 = *(byte *)((long)puVar34 + uVar5);
  uVar30 = (uint)bVar13;
  uVar19 = 0xf0;
  if (uVar26 < 4) {
    uVar19 = 0xf0 - (1U >> (ulong)(uVar26 << 3 & 0x1f));
  }
  if ((bVar13 ^ 0xff) < uVar19) {
switchD_1003017ac_default:
    _memcpy(puVar21,puVar34,uVar5 + 1);
    goto LAB_1003016c0;
  }
  if (0xe < bVar13) {
    uVar19 = 4;
    if (uVar26 < 4) {
      uVar19 = uVar26;
    }
    if ((int)uVar19 < 2) {
      if (uVar19 == 0) goto LAB_10030178c;
      uVar19 = (uint)(byte)*puVar34;
    }
    else if (uVar19 == 2) {
      uVar19 = (uint)(ushort)*puVar34;
    }
    else if (uVar19 == 3) {
      uVar19 = (uint)(uint3)*puVar34;
    }
    else {
      uVar19 = *puVar34;
    }
    uVar30 = uVar19 | bVar13 - 0xf << (ulong)(uVar26 << 3 & 0x1f);
    if (3 < uVar26) {
      uVar30 = uVar19;
    }
    uVar30 = uVar30 + 0xf;
  }
LAB_10030178c:
  switch(uVar30) {
  case 0:
    uVar35 = *(undefined8 *)puVar34;
    _swift_errorRetain(uVar35);
    *puVar21 = uVar35;
    *(undefined1 *)((long)puVar21 + uVar5) = 0;
    break;
  case 1:
    uVar35 = *(undefined8 *)puVar34;
    _swift_errorRetain(uVar35);
    *puVar21 = uVar35;
    *(undefined1 *)((long)puVar21 + uVar5) = 1;
    break;
  case 2:
    uVar40 = ~uVar40;
    uVar35 = *(undefined8 *)puVar34;
    _swift_errorRetain(uVar35);
    *puVar21 = uVar35;
    uVar20 = uVar2 + (long)puVar21 & uVar40;
    uVar39 = (ulong)(uVar2 + (long)puVar34) & uVar40;
    pcVar33 = *(code **)(lVar32 + 0x10);
    (*pcVar33)(uVar20,uVar39,lVar15);
    (*pcVar33)(lVar4 + uVar20 & uVar40,lVar4 + uVar39 & uVar40,lVar15);
    *(undefined1 *)((long)puVar21 + uVar5) = 2;
    break;
  case 3:
    lVar37 = *(long *)(puVar34 + 6);
    puVar21[3] = lVar37;
    puVar21[4] = *(undefined8 *)(puVar34 + 8);
    (*(code *)**(undefined8 **)(lVar37 + -8))(puVar21,puVar34);
    *(undefined1 *)((long)puVar21 + uVar5) = 3;
    break;
  case 4:
    bVar13 = *(byte *)((long)puVar34 + uVar3);
    uVar26 = (uint)bVar13;
    if (0xc < bVar13) {
      uVar30 = (uint)uVar3;
      uVar19 = 4;
      if (uVar30 < 4) {
        uVar19 = uVar30;
      }
      if ((int)uVar19 < 2) {
        if (uVar19 == 0) goto LAB_100301b08;
        uVar19 = (uint)(byte)*puVar34;
      }
      else if (uVar19 == 2) {
        uVar19 = (uint)(ushort)*puVar34;
      }
      else if (uVar19 == 3) {
        uVar19 = (uint)(uint3)*puVar34;
      }
      else {
        uVar19 = *puVar34;
      }
      uVar26 = uVar19 | bVar13 - 0xd << (ulong)((uVar30 & 3) << 3);
      if (3 < uVar30) {
        uVar26 = uVar19;
      }
      uVar26 = uVar26 + 0xd;
    }
LAB_100301b08:
                    /* WARNING: Could not recover jumptable at 0x000100301b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100301b28 + (ulong)*(ushort *)(&DAT_1008191fc + (ulong)uVar26 * 2) * 4))(lVar37)
    ;
    return lVar37;
  case 5:
    uVar35 = *(undefined8 *)puVar34;
    FUN_10027c0e0(uVar35);
    *puVar21 = uVar35;
    *(undefined1 *)((long)puVar21 + uVar5) = 5;
    break;
  case 6:
    uVar35 = *(undefined8 *)puVar34;
    uVar9 = *(undefined8 *)(puVar34 + 2);
    uVar26 = puVar34[4];
    FUN_10027c0fc(uVar35,uVar9,(byte)uVar26);
    *puVar21 = uVar35;
    puVar21[1] = uVar9;
    *(byte *)(puVar21 + 2) = (byte)uVar26;
    *(undefined1 *)((long)puVar21 + uVar5) = 6;
    break;
  case 7:
    uVar35 = *(undefined8 *)puVar34;
    _swift_errorRetain(uVar35);
    *puVar21 = uVar35;
    *(undefined1 *)((long)puVar21 + uVar5) = 7;
    break;
  case 8:
    uVar35 = *(undefined8 *)puVar34;
    _swift_errorRetain(uVar35);
    *puVar21 = uVar35;
    uVar35 = *(undefined8 *)(puVar34 + 2);
    _swift_errorRetain(uVar35);
    puVar21[1] = uVar35;
    *(undefined1 *)((long)puVar21 + uVar5) = 8;
    break;
  case 9:
    bVar13 = *(byte *)((long)puVar34 + uVar6);
    uVar26 = (uint)bVar13;
    if (4 < bVar13) {
      uVar30 = (uint)uVar6;
      uVar19 = 4;
      if (uVar30 < 4) {
        uVar19 = uVar30;
      }
      if ((int)uVar19 < 2) {
        if (uVar19 == 0) goto LAB_100301b6c;
        uVar26 = (uint)(byte)*puVar34;
      }
      else if (uVar19 == 2) {
        uVar26 = (uint)(ushort)*puVar34;
      }
      else if (uVar19 == 3) {
        uVar26 = (uint)(uint3)*puVar34;
      }
      else {
        uVar26 = *puVar34;
      }
      if (uVar30 < 4) {
        uVar26 = (uVar26 | bVar13 - 5 << (ulong)((uVar30 & 3) << 3)) + 5;
      }
      else {
        uVar26 = uVar26 + 5;
      }
    }
LAB_100301b6c:
    if ((int)uVar26 < 2) {
      if (uVar26 == 0) {
        (**(code **)(lVar32 + 0x10))(puVar21,puVar34,lVar15);
        *(undefined1 *)((long)puVar21 + uVar6) = 0;
      }
      else if (uVar26 == 1) {
        *puVar21 = *(undefined8 *)puVar34;
        *(undefined1 *)((long)puVar21 + uVar6) = 1;
        _swift_bridgeObjectRetain();
      }
      else {
LAB_100301c40:
        _memcpy(puVar21,puVar34,uVar6 + 1);
      }
    }
    else if (uVar26 == 2) {
      *puVar21 = *(undefined8 *)puVar34;
      puVar21[1] = *(undefined8 *)(puVar34 + 2);
      uVar35 = *(undefined8 *)(puVar34 + 4);
      puVar21[2] = uVar35;
      *(undefined1 *)((long)puVar21 + uVar6) = 2;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar35);
    }
    else if (uVar26 == 3) {
      *puVar21 = *(undefined8 *)puVar34;
      *(undefined1 *)((long)puVar21 + uVar6) = 3;
    }
    else {
      if (uVar26 != 4) goto LAB_100301c40;
      uVar35 = *(undefined8 *)puVar34;
      _swift_errorRetain(uVar35);
      *puVar21 = uVar35;
      *(undefined1 *)((long)puVar21 + uVar6) = 4;
    }
    uVar18 = 9;
    goto LAB_100301f60;
  case 10:
    bVar13 = *(byte *)((long)puVar34 + uVar7);
    uVar26 = (uint)bVar13;
    if (5 < bVar13) {
      uVar30 = (uint)uVar7;
      uVar19 = 4;
      if (uVar30 < 4) {
        uVar19 = uVar30;
      }
      if ((int)uVar19 < 2) {
        if (uVar19 == 0) goto LAB_100301c80;
        uVar26 = (uint)(byte)*puVar34;
      }
      else if (uVar19 == 2) {
        uVar26 = (uint)(ushort)*puVar34;
      }
      else if (uVar19 == 3) {
        uVar26 = (uint)(uint3)*puVar34;
      }
      else {
        uVar26 = *puVar34;
      }
      if (uVar30 < 4) {
        uVar26 = (uVar26 | bVar13 - 6 << (ulong)((uVar30 & 3) << 3)) + 6;
      }
      else {
        uVar26 = uVar26 + 6;
      }
    }
LAB_100301c80:
    if ((int)uVar26 < 3) {
      if (uVar26 == 0) {
        (**(code **)(lVar32 + 0x10))(puVar21,puVar34,lVar15);
        *(undefined1 *)((long)puVar21 + uVar7) = 0;
      }
      else {
        if (uVar26 != 1) {
          if (uVar26 != 2) {
LAB_100301d3c:
            _memcpy(puVar21,puVar34,uVar7 + 1);
            uVar18 = 10;
            goto LAB_100301f60;
          }
          uVar35 = *(undefined8 *)puVar34;
          _swift_errorRetain(uVar35);
          *puVar21 = uVar35;
          uVar18 = 2;
          goto LAB_100301d98;
        }
        (**(code **)(lVar29 + 0x10))(puVar21,puVar34,lVar16);
        *(undefined1 *)((long)puVar21 + uVar7) = 1;
      }
      uVar18 = 10;
    }
    else {
      if (uVar26 == 3) {
        uVar35 = *(undefined8 *)puVar34;
        _swift_errorRetain(uVar35);
        *puVar21 = uVar35;
        uVar18 = 3;
      }
      else {
        if (uVar26 != 4) {
          if (uVar26 != 5) goto LAB_100301d3c;
          *puVar21 = *(undefined8 *)puVar34;
          puVar21[1] = *(undefined8 *)(puVar34 + 2);
          *(undefined1 *)((long)puVar21 + uVar7) = 5;
          _swift_bridgeObjectRetain();
          uVar18 = 10;
          goto LAB_100301f60;
        }
        uVar35 = *(undefined8 *)puVar34;
        _swift_errorRetain(uVar35);
        *puVar21 = uVar35;
        uVar18 = 4;
      }
LAB_100301d98:
      *(undefined1 *)((long)puVar21 + uVar7) = uVar18;
      uVar18 = 10;
    }
LAB_100301f60:
    *(undefined1 *)((long)puVar21 + uVar5) = uVar18;
    break;
  case 0xb:
    uVar35 = *(undefined8 *)puVar34;
    uVar10 = *(undefined8 *)(puVar34 + 2);
    uVar9 = *(undefined8 *)(puVar34 + 4);
    uVar11 = *(undefined8 *)(puVar34 + 6);
    uVar41 = *(undefined8 *)(puVar34 + 8);
    uVar26 = puVar34[10];
    FUN_10027c10c(uVar35,uVar10,uVar9,uVar11,uVar41,(byte)uVar26);
    *puVar21 = uVar35;
    puVar21[1] = uVar10;
    puVar21[2] = uVar9;
    puVar21[3] = uVar11;
    puVar21[4] = uVar41;
    *(byte *)(puVar21 + 5) = (byte)uVar26;
    *(undefined1 *)((long)puVar21 + uVar5) = 0xb;
    break;
  case 0xc:
    uVar35 = *(undefined8 *)puVar34;
    _swift_errorRetain(uVar35);
    *puVar21 = uVar35;
    *(undefined1 *)((long)puVar21 + uVar5) = 0xc;
    break;
  case 0xd:
    uVar35 = *(undefined8 *)puVar34;
    _swift_errorRetain(uVar35);
    *puVar21 = uVar35;
    *(undefined1 *)((long)puVar21 + uVar5) = 0xd;
    break;
  case 0xe:
    uVar35 = *(undefined8 *)puVar34;
    uVar9 = *(undefined8 *)(puVar34 + 2);
    FUN_100008184(uVar35,uVar9);
    *puVar21 = uVar35;
    puVar21[1] = uVar9;
    *(undefined1 *)((long)puVar21 + uVar5) = 0xe;
    break;
  default:
    goto switchD_1003017ac_default;
  }
LAB_1003016c0:
  *(undefined1 *)((long)puVar42 + uVar23) = 4;
  return param_1;
}

