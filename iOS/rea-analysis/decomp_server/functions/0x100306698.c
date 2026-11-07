// rea decompile_all
// name: FUN_100306698
// address: 0x100306698
// body: available
// range: 0x100306698-0x100306e8f inclusive
// range: 0x100306eac-0x1003070cf inclusive
// range: 0x100307264-0x10030729b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_100306698(undefined8 *param_1,uint *param_2,long param_3)

{
  size_t sVar1;
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
  ulong uVar19;
  size_t sVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long lVar23;
  uint uVar24;
  ulong uVar25;
  undefined8 uVar26;
  uint uVar27;
  ulong uVar28;
  code *pcVar29;
  uint *puVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  undefined8 uVar36;
  undefined8 *puVar37;
  
  lVar14 = *(long *)(param_3 + 0x10);
  lVar6 = *(long *)(param_3 + 0x18);
  lVar33 = *(long *)(lVar14 + -8);
  uVar16 = *(ulong *)(lVar33 + 0x40);
  lVar35 = *(long *)(lVar6 + -8);
  uVar19 = *(ulong *)(lVar35 + 0x40);
  if (uVar16 <= uVar19) {
    uVar16 = uVar19;
  }
  lVar11 = 0;
  __s10Foundation10URLRequestVMa();
  lVar31 = *(long *)(lVar11 + -8);
  sVar20 = *(size_t *)(lVar31 + 0x40);
  if (*(int *)(lVar31 + 0x54) == 0) {
    sVar20 = sVar20 + 1;
  }
  lVar12 = 0;
  __s10Foundation3URLVMa();
  lVar34 = *(long *)(lVar12 + -8);
  uVar18 = *(uint *)(lVar34 + 0x50);
  uVar25 = (ulong)uVar18 & 0xff;
  lVar13 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar23 = *(long *)(lVar13 + -8);
  uVar28 = (ulong)((*(uint *)(lVar23 + 0x50) | uVar18) & 0xf8 | 7);
  uVar19 = uVar25 + 8;
  uVar22 = *(ulong *)(lVar34 + 0x40);
  lVar2 = uVar22 + uVar25;
  uVar3 = (lVar2 + (uVar19 & (uVar25 ^ 0xffffffffffffffff)) & (uVar25 ^ 0xffffffffffffffff)) +
          uVar22;
  uVar32 = (uVar22 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar32 <= uVar22) {
    uVar32 = uVar22;
  }
  if (uVar32 < 9) {
    uVar32 = 8;
  }
  if (uVar3 <= uVar32 + 1) {
    uVar3 = uVar32 + 1;
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
  sVar1 = uVar3 + 1;
  uVar22 = sVar1 + (uVar28 + (sVar20 + 7 & 0xfffffffffffffff8) + 0x10 &
                   (uVar28 ^ 0xffffffffffffffff));
  if (uVar16 <= uVar22) {
    uVar16 = uVar22;
  }
  if (uVar16 < 0x19) {
    uVar16 = 0x18;
  }
  bVar10 = *(byte *)((long)param_2 + uVar16);
  uVar18 = (uint)bVar10;
  if (bVar10 < 5) {
    if (bVar10 < 2) goto LAB_100306854;
  }
  else {
    uVar24 = (uint)uVar16;
    uVar27 = 4;
    if (uVar24 < 4) {
      uVar27 = uVar24;
    }
    if ((int)uVar27 < 2) {
      if (uVar27 != 0) {
        uVar18 = (uint)(byte)*param_2;
        goto joined_r0x000100306880;
      }
    }
    else {
      if (uVar27 == 2) {
        uVar18 = (uint)(ushort)*param_2;
      }
      else if (uVar27 == 3) {
        uVar18 = (uint)(uint3)*param_2;
      }
      else {
        uVar18 = *param_2;
      }
joined_r0x000100306880:
      if (uVar24 < 4) {
        uVar18 = (uVar18 | bVar10 - 5 << (ulong)((uVar24 & 3) << 3)) + 5;
      }
      else {
        uVar18 = uVar18 + 5;
      }
    }
    if ((int)uVar18 < 2) {
LAB_100306854:
      if (uVar18 == 0) {
        uVar26 = *(undefined8 *)(param_2 + 2);
        *param_1 = *(undefined8 *)param_2;
        param_1[1] = uVar26;
        *(undefined1 *)((long)param_1 + uVar16) = 0;
        _swift_bridgeObjectRetain();
        return param_1;
      }
      (**(code **)(lVar33 + 0x10))(param_1,param_2,lVar14);
      uVar15 = 1;
      goto LAB_100307274;
    }
  }
  if (uVar18 == 2) {
    (**(code **)(lVar35 + 0x10))(param_1,param_2,lVar6);
    uVar15 = 2;
    goto LAB_100307274;
  }
  if (uVar18 == 3) {
    *param_1 = *(undefined8 *)param_2;
    uVar19 = *(ulong *)(param_2 + 4);
    if (uVar19 >> 0x3c < 0xf) {
      uVar26 = *(undefined8 *)(param_2 + 2);
      FUN_100008184(uVar26,uVar19);
      param_1[1] = uVar26;
      param_1[2] = uVar19;
      uVar15 = 3;
    }
    else {
      uVar26 = *(undefined8 *)(param_2 + 2);
      param_1[2] = *(undefined8 *)(param_2 + 4);
      param_1[1] = uVar26;
      uVar15 = 3;
    }
    goto LAB_100307274;
  }
  uVar18 = (uint)uVar3;
  puVar30 = param_2;
  (**(code **)(lVar31 + 0x30))(param_2,1,lVar11);
  if ((int)puVar30 == 0) {
    (**(code **)(lVar31 + 0x10))(param_1,param_2,lVar11);
    (**(code **)(lVar31 + 0x38))(param_1,0,1,lVar11);
  }
  else {
    _memcpy(param_1,param_2,sVar20);
  }
  puVar17 = (undefined8 *)((long)param_1 + sVar20 + 7 & 0xfffffffffffffff8);
  puVar21 = (undefined8 *)((ulong)((long)param_2 + sVar20 + 7) & 0xfffffffffffffff8);
  *puVar17 = *puVar21;
  puVar17 = puVar17 + 1;
  puVar21 = puVar21 + 1;
  puVar37 = (undefined8 *)*puVar21;
  *puVar17 = puVar37;
  puVar17 = (undefined8 *)((long)puVar17 + uVar28 + 8 & ~uVar28);
  puVar30 = (uint *)((long)puVar21 + uVar28 + 8 & ~uVar28);
  bVar10 = *(byte *)((long)puVar30 + uVar3);
  uVar27 = (uint)bVar10;
  uVar24 = 0xf0;
  if (uVar18 < 4) {
    uVar24 = 0xf0 - (1U >> (ulong)(uVar18 << 3 & 0x1f));
  }
  if ((bVar10 ^ 0xff) < uVar24) {
    _memcpy(puVar17,puVar30,sVar1);
    goto LAB_100307270;
  }
  if (0xe < bVar10) {
    uVar24 = 4;
    if (uVar18 < 4) {
      uVar24 = uVar18;
    }
    if ((int)uVar24 < 2) {
      if (uVar24 == 0) goto LAB_100306b18;
      uVar27 = (uint)(byte)*puVar30;
    }
    else if (uVar24 == 2) {
      uVar27 = (uint)(ushort)*puVar30;
    }
    else if (uVar24 == 3) {
      uVar27 = (uint)(uint3)*puVar30;
    }
    else {
      uVar27 = *puVar30;
    }
    if (uVar18 < 4) {
      uVar27 = uVar27 | bVar10 - 0xf << (ulong)(uVar18 << 3 & 0x1f);
    }
    uVar27 = uVar27 + 0xf;
  }
LAB_100306b18:
  switch(uVar27) {
  case 0:
    uVar26 = *(undefined8 *)puVar30;
    _swift_errorRetain(uVar26);
    *puVar17 = uVar26;
    *(undefined1 *)((long)puVar17 + uVar3) = 0;
    goto LAB_100307270;
  case 1:
    uVar26 = *(undefined8 *)puVar30;
    _swift_errorRetain(uVar26);
    *puVar17 = uVar26;
    uVar15 = 1;
    break;
  case 2:
    uVar25 = ~uVar25;
    uVar26 = *(undefined8 *)puVar30;
    _swift_errorRetain(uVar26);
    *puVar17 = uVar26;
    uVar32 = uVar19 + (long)puVar17 & uVar25;
    uVar19 = (ulong)(uVar19 + (long)puVar30) & uVar25;
    pcVar29 = *(code **)(lVar34 + 0x10);
    (*pcVar29)(uVar32,uVar19,lVar12);
    (*pcVar29)(lVar2 + uVar32 & uVar25,lVar2 + uVar19 & uVar25,lVar12);
    *(undefined1 *)((long)puVar17 + uVar3) = 2;
    goto LAB_100307270;
  case 3:
    lVar14 = *(long *)(puVar30 + 6);
    puVar17[3] = lVar14;
    puVar17[4] = *(undefined8 *)(puVar30 + 8);
    (*(code *)**(undefined8 **)(lVar14 + -8))(puVar17,puVar30);
    uVar15 = 3;
    break;
  case 4:
    bVar10 = *(byte *)((long)puVar30 + uVar32);
    uVar18 = (uint)bVar10;
    if (0xc < bVar10) {
      uVar24 = (uint)uVar32;
      uVar27 = 4;
      if (uVar24 < 4) {
        uVar27 = uVar24;
      }
      if ((int)uVar27 < 2) {
        if (uVar27 == 0) goto LAB_100306e74;
        uVar18 = (uint)(byte)*puVar30;
      }
      else if (uVar27 == 2) {
        uVar18 = (uint)(ushort)*puVar30;
      }
      else if (uVar27 == 3) {
        uVar18 = (uint)(uint3)*puVar30;
      }
      else {
        uVar18 = *puVar30;
      }
      if (uVar24 < 4) {
        uVar18 = (uVar18 | bVar10 - 0xd << (ulong)((uVar24 & 3) << 3)) + 0xd;
      }
      else {
        uVar18 = uVar18 + 0xd;
      }
    }
LAB_100306e74:
                    /* WARNING: Could not recover jumptable at 0x000100306e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100306e90 + (ulong)(byte)(&DAT_10081933d)[uVar18] * 4))(puVar37);
    return puVar37;
  case 5:
    uVar26 = *(undefined8 *)puVar30;
    FUN_10027c0e0(uVar26);
    *puVar17 = uVar26;
    uVar15 = 5;
    break;
  case 6:
    uVar26 = *(undefined8 *)puVar30;
    uVar7 = *(undefined8 *)(puVar30 + 2);
    uVar18 = puVar30[4];
    FUN_10027c0fc(uVar26,uVar7,(byte)uVar18);
    *puVar17 = uVar26;
    puVar17[1] = uVar7;
    *(byte *)(puVar17 + 2) = (byte)uVar18;
    uVar15 = 6;
    break;
  case 7:
    uVar26 = *(undefined8 *)puVar30;
    _swift_errorRetain(uVar26);
    *puVar17 = uVar26;
    uVar15 = 7;
    break;
  case 8:
    uVar26 = *(undefined8 *)puVar30;
    _swift_errorRetain(uVar26);
    *puVar17 = uVar26;
    uVar26 = *(undefined8 *)(puVar30 + 2);
    _swift_errorRetain(uVar26);
    puVar17[1] = uVar26;
    uVar15 = 8;
    break;
  case 9:
    bVar10 = *(byte *)((long)puVar30 + uVar4);
    uVar18 = (uint)bVar10;
    if (4 < bVar10) {
      uVar24 = (uint)uVar4;
      uVar27 = 4;
      if (uVar24 < 4) {
        uVar27 = uVar24;
      }
      if ((int)uVar27 < 2) {
        if (uVar27 == 0) goto LAB_100306ed0;
        uVar18 = (uint)(byte)*puVar30;
      }
      else if (uVar27 == 2) {
        uVar18 = (uint)(ushort)*puVar30;
      }
      else if (uVar27 == 3) {
        uVar18 = (uint)(uint3)*puVar30;
      }
      else {
        uVar18 = *puVar30;
      }
      if (uVar24 < 4) {
        uVar18 = (uVar18 | bVar10 - 5 << (ulong)((uVar24 & 3) << 3)) + 5;
      }
      else {
        uVar18 = uVar18 + 5;
      }
    }
LAB_100306ed0:
    if ((int)uVar18 < 2) {
      if (uVar18 == 0) {
        (**(code **)(lVar34 + 0x10))(puVar17,puVar30,lVar12);
        *(undefined1 *)((long)puVar17 + uVar4) = 0;
      }
      else if (uVar18 == 1) {
        *puVar17 = *(undefined8 *)puVar30;
        *(undefined1 *)((long)puVar17 + uVar4) = 1;
        _swift_bridgeObjectRetain();
      }
      else {
LAB_100306f90:
        _memcpy(puVar17,puVar30,uVar4 + 1);
      }
    }
    else if (uVar18 == 2) {
      *puVar17 = *(undefined8 *)puVar30;
      puVar17[1] = *(undefined8 *)(puVar30 + 2);
      uVar26 = *(undefined8 *)(puVar30 + 4);
      puVar17[2] = uVar26;
      *(undefined1 *)((long)puVar17 + uVar4) = 2;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar26);
    }
    else if (uVar18 == 3) {
      *puVar17 = *(undefined8 *)puVar30;
      *(undefined1 *)((long)puVar17 + uVar4) = 3;
    }
    else {
      if (uVar18 != 4) goto LAB_100306f90;
      uVar26 = *(undefined8 *)puVar30;
      _swift_errorRetain(uVar26);
      *puVar17 = uVar26;
      *(undefined1 *)((long)puVar17 + uVar4) = 4;
    }
    uVar15 = 9;
    goto LAB_100307264;
  case 10:
    bVar10 = *(byte *)((long)puVar30 + uVar5);
    uVar18 = (uint)bVar10;
    if (5 < bVar10) {
      uVar24 = (uint)uVar5;
      uVar27 = 4;
      if (uVar24 < 4) {
        uVar27 = uVar24;
      }
      if ((int)uVar27 < 2) {
        if (uVar27 == 0) goto LAB_100306fd4;
        uVar18 = (uint)(byte)*puVar30;
      }
      else if (uVar27 == 2) {
        uVar18 = (uint)(ushort)*puVar30;
      }
      else if (uVar27 == 3) {
        uVar18 = (uint)(uint3)*puVar30;
      }
      else {
        uVar18 = *puVar30;
      }
      if (uVar24 < 4) {
        uVar18 = (uVar18 | bVar10 - 6 << (ulong)((uVar24 & 3) << 3)) + 6;
      }
      else {
        uVar18 = uVar18 + 6;
      }
    }
LAB_100306fd4:
    if ((int)uVar18 < 3) {
      if (uVar18 == 0) {
        (**(code **)(lVar34 + 0x10))(puVar17,puVar30,lVar12);
        *(undefined1 *)((long)puVar17 + uVar5) = 0;
        uVar15 = 10;
        goto LAB_100307264;
      }
      if (uVar18 == 1) {
        (**(code **)(lVar23 + 0x10))(puVar17,puVar30,lVar13);
        uVar15 = 1;
      }
      else {
        if (uVar18 != 2) {
LAB_10030707c:
          _memcpy(puVar17,puVar30,uVar5 + 1);
          uVar15 = 10;
          goto LAB_100307264;
        }
        uVar26 = *(undefined8 *)puVar30;
        _swift_errorRetain(uVar26);
        *puVar17 = uVar26;
        uVar15 = 2;
      }
    }
    else if (uVar18 == 3) {
      uVar26 = *(undefined8 *)puVar30;
      _swift_errorRetain(uVar26);
      *puVar17 = uVar26;
      uVar15 = 3;
    }
    else {
      if (uVar18 != 4) {
        if (uVar18 != 5) goto LAB_10030707c;
        *puVar17 = *(undefined8 *)puVar30;
        puVar17[1] = *(undefined8 *)(puVar30 + 2);
        *(undefined1 *)((long)puVar17 + uVar5) = 5;
        _swift_bridgeObjectRetain();
        uVar15 = 10;
        goto LAB_100307264;
      }
      uVar26 = *(undefined8 *)puVar30;
      _swift_errorRetain(uVar26);
      *puVar17 = uVar26;
      uVar15 = 4;
    }
    *(undefined1 *)((long)puVar17 + uVar5) = uVar15;
    uVar15 = 10;
LAB_100307264:
    *(undefined1 *)((long)puVar17 + uVar3) = uVar15;
    goto LAB_100307270;
  case 0xb:
    uVar26 = *(undefined8 *)puVar30;
    uVar8 = *(undefined8 *)(puVar30 + 2);
    uVar7 = *(undefined8 *)(puVar30 + 4);
    uVar9 = *(undefined8 *)(puVar30 + 6);
    uVar36 = *(undefined8 *)(puVar30 + 8);
    uVar18 = puVar30[10];
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
    uVar26 = *(undefined8 *)puVar30;
    _swift_errorRetain(uVar26);
    *puVar17 = uVar26;
    uVar15 = 0xc;
    break;
  case 0xd:
    uVar26 = *(undefined8 *)puVar30;
    _swift_errorRetain(uVar26);
    *puVar17 = uVar26;
    uVar15 = 0xd;
    break;
  case 0xe:
    uVar26 = *(undefined8 *)puVar30;
    uVar7 = *(undefined8 *)(puVar30 + 2);
    FUN_100008184(uVar26,uVar7);
    *puVar17 = uVar26;
    puVar17[1] = uVar7;
    uVar15 = 0xe;
    break;
  default:
    _memcpy(puVar17,puVar30,sVar1);
    goto LAB_100307270;
  }
  *(undefined1 *)((long)puVar17 + uVar3) = uVar15;
LAB_100307270:
  uVar15 = 4;
LAB_100307274:
  *(undefined1 *)((long)param_1 + uVar16) = uVar15;
  return param_1;
}

