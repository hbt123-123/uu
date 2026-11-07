// rea decompile_all
// name: FUN_100299648
// address: 0x100299648
// body: available
// range: 0x100299648-0x10029a2cb inclusive
// range: 0x10029a2e8-0x10029a4b7 inclusive
// range: 0x10029a4dc-0x10029a613 inclusive
// range: 0x10029a7a8-0x10029a8fb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

uint * FUN_100299648(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  size_t sVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  byte bVar19;
  undefined1 uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  long lVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  size_t sVar28;
  undefined8 *puVar29;
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  uint uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  uint uVar37;
  ulong uVar38;
  uint *puVar39;
  code *pcVar40;
  long lVar41;
  uint *puVar42;
  ulong uVar43;
  undefined8 uVar44;
  uint uVar45;
  ulong uVar46;
  ulong uVar47;
  long lVar48;
  uint uVar49;
  uint uVar50;
  
  lVar17 = *(long *)(param_3 + 0x10);
  lVar16 = *(long *)(param_3 + 0x18);
  lVar34 = *(long *)(lVar17 + -8);
  lVar35 = *(long *)(lVar16 + -8);
  uVar47 = *(ulong *)(lVar35 + 0x40);
  if (*(ulong *)(lVar35 + 0x40) <= *(ulong *)(lVar34 + 0x40)) {
    uVar47 = *(ulong *)(lVar34 + 0x40);
  }
  uVar1 = uVar47 + 1;
  if (param_1 == param_2) goto LAB_10029a7b8;
  lVar11 = 0;
  __s10Foundation10URLRequestVMa();
  lVar41 = *(long *)(lVar11 + -8);
  sVar28 = *(size_t *)(lVar41 + 0x40);
  if (*(int *)(lVar41 + 0x54) == 0) {
    sVar28 = sVar28 + 1;
  }
  lVar12 = 0;
  __s10Foundation3URLVMa();
  lVar48 = *(long *)(lVar12 + -8);
  uVar26 = *(uint *)(lVar48 + 0x50);
  uVar38 = (ulong)uVar26 & 0xff;
  lVar13 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar36 = *(long *)(lVar13 + -8);
  uVar43 = (ulong)((*(uint *)(lVar36 + 0x50) | uVar26) & 0xf8 | 7);
  uVar46 = uVar38 + 8;
  uVar31 = *(ulong *)(lVar48 + 0x40);
  lVar3 = uVar31 + uVar38;
  uVar4 = (lVar3 + (uVar46 & (uVar38 ^ 0xffffffffffffffff)) & (uVar38 ^ 0xffffffffffffffff)) +
          uVar31;
  uVar32 = (uVar31 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar32 <= uVar31) {
    uVar32 = uVar31;
  }
  if (uVar32 < 9) {
    uVar32 = 8;
  }
  if (uVar4 <= uVar32 + 1) {
    uVar4 = uVar32 + 1;
  }
  uVar5 = uVar31;
  if (uVar31 < 0x19) {
    uVar5 = 0x18;
  }
  if (uVar4 <= uVar5 + 1) {
    uVar4 = uVar5 + 1;
  }
  uVar6 = *(ulong *)(lVar36 + 0x40);
  if (*(ulong *)(lVar36 + 0x40) <= uVar31) {
    uVar6 = uVar31;
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
  uVar30 = (uint)uVar4;
  uVar27 = uVar30 << 3;
  uVar26 = 0x10;
  if (uVar30 < 4) {
    uVar26 = 1U >> (ulong)(uVar27 & 0x1f) | 0x10;
  }
  sVar2 = uVar4 + 1;
  uVar31 = sVar2 + (uVar43 + (sVar28 + 7 & 0xfffffffffffffff8) + 0x10 &
                   (uVar43 ^ 0xffffffffffffffff));
  if (uVar31 <= uVar1) {
    uVar31 = uVar1;
  }
  bVar19 = *(byte *)((long)param_1 + uVar31);
  uVar24 = (uint)bVar19;
  uVar45 = (uint)uVar31;
  if (1 < bVar19) {
    uVar33 = 4;
    if (uVar45 < 4) {
      uVar33 = uVar45;
    }
    if ((int)uVar33 < 2) {
      if (uVar33 == 0) goto LAB_100299888;
      uVar24 = (uint)(byte)*param_1;
    }
    else if (uVar33 == 2) {
      uVar24 = (uint)(ushort)*param_1;
    }
    else if (uVar33 == 3) {
      uVar24 = (uint)(uint3)*param_1;
    }
    else {
      uVar24 = *param_1;
    }
    if (uVar45 < 4) {
      uVar24 = (uVar24 | bVar19 - 2 << (ulong)((uVar45 & 3) << 3)) + 2;
    }
    else {
      uVar24 = uVar24 + 2;
    }
  }
LAB_100299888:
  uVar21 = ~uVar43;
  uVar38 = ~uVar38;
  uVar50 = (uint)uVar6;
  uVar49 = (uint)uVar47;
  uVar37 = (uint)uVar32;
  uVar33 = (uint)uVar5;
  if (uVar24 != 1) {
    bVar19 = *(byte *)((long)param_1 + uVar47);
    uVar24 = (uint)bVar19;
    if (bVar19 < 2) {
LAB_1002999cc:
      if (uVar24 == 1) {
LAB_1002999d4:
        (**(code **)(lVar35 + 8))(param_1,lVar16);
        goto switchD_100299a88_default;
      }
    }
    else {
      uVar25 = 4;
      if (uVar49 < 4) {
        uVar25 = uVar49;
      }
      if ((int)uVar25 < 2) {
        if (uVar25 == 0) goto LAB_1002999cc;
        uVar24 = (uint)(byte)*param_1;
      }
      else if (uVar25 == 2) {
        uVar24 = (uint)(ushort)*param_1;
      }
      else if (uVar25 == 3) {
        uVar24 = (uint)(uint3)*param_1;
      }
      else {
        uVar24 = *param_1;
      }
      if (3 < uVar49) {
        uVar24 = uVar24 + 2;
        goto LAB_1002999cc;
      }
      if ((uVar24 | bVar19 - 2 << (ulong)((uVar49 & 3) << 3)) == 0xffffffff) goto LAB_1002999d4;
    }
    (**(code **)(lVar34 + 8))(param_1,lVar17);
    goto switchD_100299a88_default;
  }
  puVar42 = param_1;
  (**(code **)(lVar41 + 0x30))(param_1,1,lVar11);
  if ((int)puVar42 == 0) {
    (**(code **)(lVar41 + 8))(param_1,lVar11);
  }
  puVar42 = (uint *)0x0;
  puVar39 = (uint *)(((ulong)((long)param_1 + sVar28 + 7) & 0xfffffffffffffff8) + uVar43 + 0x10 &
                    uVar21);
  bVar19 = *(byte *)((long)puVar39 + uVar4);
  uVar24 = (uint)bVar19;
  if ((bVar19 ^ 0xff) < 0x100 - uVar26) goto switchD_100299a88_default;
  if (0xe < bVar19) {
    uVar25 = 4;
    if (uVar30 < 4) {
      uVar25 = uVar30;
    }
    if ((int)uVar25 < 2) {
      if (uVar25 == 0) goto LAB_100299a68;
      uVar25 = (uint)(byte)*puVar39;
    }
    else if (uVar25 == 2) {
      uVar25 = (uint)(ushort)*puVar39;
    }
    else if (uVar25 == 3) {
      uVar25 = (uint)(uint3)*puVar39;
    }
    else {
      uVar25 = *puVar39;
    }
    if (uVar30 < 4) {
      uVar24 = (uVar25 | uVar24 - 0xf << (ulong)(uVar27 & 0x1f)) + 0xf;
    }
    else {
      uVar24 = uVar25 + 0xf;
    }
  }
LAB_100299a68:
  lVar18 = lVar12;
  lVar23 = lVar48;
  switch(uVar24) {
  case 0:
  case 1:
  case 7:
  case 0xc:
  case 0xd:
switchD_100299a88_caseD_0:
    uVar14 = *(undefined8 *)puVar39;
    goto LAB_100299a90;
  case 2:
    _swift_errorRelease(*(undefined8 *)puVar39);
    uVar15 = (ulong)(uVar46 + (long)puVar39) & uVar38;
    pcVar40 = *(code **)(lVar48 + 8);
    (*pcVar40)(uVar15,lVar12);
    (*pcVar40)(lVar3 + uVar15 & uVar38,lVar12);
    break;
  case 3:
    FUN_10003f094(puVar39);
    break;
  case 4:
    bVar19 = *(byte *)((long)puVar39 + uVar32);
    uVar26 = (uint)bVar19;
    if (0xc < bVar19) {
      uVar27 = 4;
      if (uVar37 < 4) {
        uVar27 = uVar37;
      }
      if ((int)uVar27 < 2) {
        if (uVar27 == 0) goto LAB_10029a488;
        uVar26 = (uint)(byte)*puVar39;
      }
      else if (uVar27 == 2) {
        uVar26 = (uint)(ushort)*puVar39;
      }
      else if (uVar27 == 3) {
        uVar26 = (uint)(uint3)*puVar39;
      }
      else {
        uVar26 = *puVar39;
      }
      if (uVar37 < 4) {
        uVar26 = (uVar26 | bVar19 - 0xd << (ulong)((uVar37 & 3) << 3)) + 0xd;
      }
      else {
        uVar26 = uVar26 + 0xd;
      }
    }
LAB_10029a488:
                    /* WARNING: Could not recover jumptable at 0x00010029a4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(ushort *)(&DAT_1008172a6 + (ulong)uVar26 * 2) * 4 + 0x100299a8c))(0);
    return puVar42;
  case 5:
    FUN_10027ba4c(*(undefined8 *)puVar39);
    break;
  case 6:
    FUN_100278f18(*(undefined8 *)puVar39,*(undefined8 *)(puVar39 + 2),(byte)puVar39[4]);
    break;
  case 8:
    _swift_errorRelease(*(undefined8 *)puVar39);
    uVar14 = *(undefined8 *)(puVar39 + 2);
LAB_100299a90:
    _swift_errorRelease(uVar14);
    break;
  case 9:
    bVar19 = *(byte *)((long)puVar39 + uVar5);
    uVar24 = (uint)bVar19;
    if (4 < bVar19) {
      uVar25 = 4;
      if (uVar33 < 4) {
        uVar25 = uVar33;
      }
      if ((int)uVar25 < 2) {
        if (uVar25 == 0) goto LAB_10029a234;
        uVar24 = (uint)(byte)*puVar39;
      }
      else if (uVar25 == 2) {
        uVar24 = (uint)(ushort)*puVar39;
      }
      else if (uVar25 == 3) {
        uVar24 = (uint)(uint3)*puVar39;
      }
      else {
        uVar24 = *puVar39;
      }
      if (uVar33 < 4) {
        uVar24 = (uVar24 | bVar19 - 5 << (ulong)((uVar33 & 3) << 3)) + 5;
      }
      else {
        uVar24 = uVar24 + 5;
      }
    }
LAB_10029a234:
    if ((int)uVar24 < 2) {
      if (uVar24 == 0) {
LAB_10029a4a8:
        (**(code **)(lVar23 + 8))(puVar39,lVar18);
      }
      else if (uVar24 == 1) {
        _swift_bridgeObjectRelease(*(undefined8 *)puVar39);
      }
    }
    else if (uVar24 == 2) {
      _swift_bridgeObjectRelease(*(undefined8 *)puVar39);
      _swift_bridgeObjectRelease(*(undefined8 *)(puVar39 + 4));
    }
    else if (uVar24 == 4) goto switchD_100299a88_caseD_0;
    break;
  case 10:
    bVar19 = *(byte *)((long)puVar39 + uVar6);
    uVar24 = (uint)bVar19;
    if (5 < bVar19) {
      uVar25 = 4;
      if (uVar50 < 4) {
        uVar25 = uVar50;
      }
      if ((int)uVar25 < 2) {
        if (uVar25 == 0) goto LAB_10029a30c;
        uVar24 = (uint)(byte)*puVar39;
      }
      else if (uVar25 == 2) {
        uVar24 = (uint)(ushort)*puVar39;
      }
      else if (uVar25 == 3) {
        uVar24 = (uint)(uint3)*puVar39;
      }
      else {
        uVar24 = *puVar39;
      }
      if (uVar50 < 4) {
        uVar24 = (uVar24 | bVar19 - 6 << (ulong)(uVar50 << 3 & 0x1f)) + 6;
      }
      else {
        uVar24 = uVar24 + 6;
      }
    }
LAB_10029a30c:
    if ((int)uVar24 < 3) {
      if ((uVar24 == 0) || (lVar18 = lVar13, lVar23 = lVar36, uVar24 == 1)) goto LAB_10029a4a8;
      if (uVar24 == 2) goto switchD_100299a88_caseD_0;
    }
    else {
      if ((uVar24 == 3) || (uVar24 == 4)) goto switchD_100299a88_caseD_0;
      if (uVar24 == 5) {
        _swift_bridgeObjectRelease(*(undefined8 *)(puVar39 + 2));
      }
    }
    break;
  case 0xb:
    FUN_100278e14(*(undefined8 *)puVar39,*(undefined8 *)(puVar39 + 2),*(undefined8 *)(puVar39 + 4),
                  *(undefined8 *)(puVar39 + 6),*(undefined8 *)(puVar39 + 8),(byte)puVar39[10]);
    break;
  case 0xe:
    FUN_100006cdc(*(undefined8 *)puVar39,*(undefined8 *)(puVar39 + 2));
  }
switchD_100299a88_default:
  bVar19 = *(byte *)((long)param_2 + uVar31);
  uVar24 = (uint)bVar19;
  if (bVar19 < 2) {
LAB_100299b00:
    if (uVar24 == 1) goto LAB_100299b08;
LAB_100299c68:
    bVar19 = *(byte *)((long)param_2 + uVar47);
    uVar26 = (uint)bVar19;
    if (1 < bVar19) {
      uVar27 = 4;
      if (uVar49 < 4) {
        uVar27 = uVar49;
      }
      if ((int)uVar27 < 2) {
        if (uVar27 == 0) goto LAB_100299cf8;
        uVar27 = (uint)(byte)*param_2;
      }
      else if (uVar27 == 2) {
        uVar27 = (uint)(ushort)*param_2;
      }
      else if (uVar27 == 3) {
        uVar27 = (uint)(uint3)*param_2;
      }
      else {
        uVar27 = *param_2;
      }
      uVar26 = uVar27 | bVar19 - 2 << (ulong)((uVar49 & 3) << 3);
      if (3 < uVar49) {
        uVar26 = uVar27;
      }
      uVar26 = uVar26 + 2;
    }
LAB_100299cf8:
    if (uVar26 != 1) {
      lVar16 = lVar17;
      lVar35 = lVar34;
    }
    (**(code **)(lVar35 + 0x10))(param_1,param_2,lVar16);
    bVar19 = 0;
    *(bool *)((long)param_1 + uVar47) = uVar26 == 1;
    goto LAB_10029a7b4;
  }
  uVar25 = 4;
  if (uVar45 < 4) {
    uVar25 = uVar45;
  }
  if ((int)uVar25 < 2) {
    if (uVar25 == 0) goto LAB_100299b00;
    uVar24 = (uint)(byte)*param_2;
  }
  else if (uVar25 == 2) {
    uVar24 = (uint)(ushort)*param_2;
  }
  else if (uVar25 == 3) {
    uVar24 = (uint)(uint3)*param_2;
  }
  else {
    uVar24 = *param_2;
  }
  if (3 < uVar45) {
    uVar24 = uVar24 + 2;
    goto LAB_100299b00;
  }
  if ((uVar24 | bVar19 - 2 << (ulong)((uVar45 & 3) << 3)) != 0xffffffff) goto LAB_100299c68;
LAB_100299b08:
  puVar42 = param_2;
  (**(code **)(lVar41 + 0x30))(param_2,1,lVar11);
  if ((int)puVar42 == 0) {
    (**(code **)(lVar41 + 0x10))(param_1,param_2,lVar11);
    (**(code **)(lVar41 + 0x38))(param_1,0,1,lVar11);
  }
  else {
    _memcpy(param_1,param_2,sVar28);
  }
  puVar29 = (undefined8 *)((ulong)((long)param_2 + sVar28 + 7) & 0xfffffffffffffff8);
  puVar22 = (undefined8 *)((ulong)((long)param_1 + sVar28 + 7) & 0xfffffffffffffff8);
  *puVar22 = *puVar29;
  puVar22 = puVar22 + 1;
  puVar29 = puVar29 + 1;
  puVar42 = (uint *)*puVar29;
  *puVar22 = puVar42;
  puVar22 = (undefined8 *)((long)puVar22 + uVar43 + 8 & uVar21);
  puVar39 = (uint *)((long)puVar29 + uVar43 + 8 & uVar21);
  bVar19 = *(byte *)((long)puVar39 + uVar4);
  uVar24 = (uint)bVar19;
  if ((bVar19 ^ 0xff) < 0x100 - uVar26) {
    _memcpy(puVar22,puVar39,sVar2);
    bVar19 = 1;
    goto LAB_10029a7b4;
  }
  if (0xe < bVar19) {
    uVar26 = 4;
    if (uVar30 < 4) {
      uVar26 = uVar30;
    }
    if ((int)uVar26 < 2) {
      if (uVar26 == 0) goto LAB_100299d60;
      uVar24 = (uint)(byte)*puVar39;
    }
    else if (uVar26 == 2) {
      uVar24 = (uint)(ushort)*puVar39;
    }
    else if (uVar26 == 3) {
      uVar24 = (uint)(uint3)*puVar39;
    }
    else {
      uVar24 = *puVar39;
    }
    if (uVar30 < 4) {
      uVar24 = uVar24 | bVar19 - 0xf << (ulong)(uVar27 & 0x1f);
    }
    uVar24 = uVar24 + 0xf;
  }
LAB_100299d60:
  switch(uVar24) {
  case 0:
    uVar14 = *(undefined8 *)puVar39;
    _swift_errorRetain(uVar14);
    *puVar22 = uVar14;
    *(undefined1 *)((long)puVar22 + uVar4) = 0;
    goto LAB_10029a7b0;
  case 1:
    uVar14 = *(undefined8 *)puVar39;
    _swift_errorRetain(uVar14);
    *puVar22 = uVar14;
    bVar19 = 1;
    *(undefined1 *)((long)puVar22 + uVar4) = 1;
    goto LAB_10029a7b4;
  case 2:
    uVar14 = *(undefined8 *)puVar39;
    _swift_errorRetain(uVar14);
    *puVar22 = uVar14;
    uVar47 = uVar46 + (long)puVar22 & uVar38;
    uVar46 = (ulong)(uVar46 + (long)puVar39) & uVar38;
    pcVar40 = *(code **)(lVar48 + 0x10);
    (*pcVar40)(uVar47,uVar46,lVar12);
    (*pcVar40)(lVar3 + uVar47 & uVar38,lVar3 + uVar46 & uVar38,lVar12);
    uVar20 = 2;
    break;
  case 3:
    lVar16 = *(long *)(puVar39 + 6);
    puVar22[3] = lVar16;
    puVar22[4] = *(undefined8 *)(puVar39 + 8);
    (*(code *)**(undefined8 **)(lVar16 + -8))(puVar22,puVar39);
    uVar20 = 3;
    break;
  case 4:
    bVar19 = *(byte *)((long)puVar39 + uVar32);
    uVar26 = (uint)bVar19;
    if (0xc < bVar19) {
      uVar27 = 4;
      if (uVar37 < 4) {
        uVar27 = uVar37;
      }
      if ((int)uVar27 < 2) {
        if (uVar27 == 0) goto LAB_10029a2b0;
        uVar26 = (uint)(byte)*puVar39;
      }
      else if (uVar27 == 2) {
        uVar26 = (uint)(ushort)*puVar39;
      }
      else if (uVar27 == 3) {
        uVar26 = (uint)(uint3)*puVar39;
      }
      else {
        uVar26 = *puVar39;
      }
      if (uVar37 < 4) {
        uVar26 = (uVar26 | bVar19 - 0xd << (ulong)((uVar37 & 3) << 3)) + 0xd;
      }
      else {
        uVar26 = uVar26 + 0xd;
      }
    }
LAB_10029a2b0:
                    /* WARNING: Could not recover jumptable at 0x00010029a2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_10029a2cc + (ulong)*(ushort *)(&DAT_1008172de + (ulong)uVar26 * 2) * 4))
              (puVar42);
    return puVar42;
  case 5:
    uVar14 = *(undefined8 *)puVar39;
    FUN_10027c0e0(uVar14);
    *puVar22 = uVar14;
    uVar20 = 5;
    break;
  case 6:
    uVar14 = *(undefined8 *)puVar39;
    uVar7 = *(undefined8 *)(puVar39 + 2);
    uVar26 = puVar39[4];
    FUN_10027c0fc(uVar14,uVar7,(byte)uVar26);
    *puVar22 = uVar14;
    puVar22[1] = uVar7;
    *(byte *)(puVar22 + 2) = (byte)uVar26;
    uVar20 = 6;
    break;
  case 7:
    uVar14 = *(undefined8 *)puVar39;
    _swift_errorRetain(uVar14);
    *puVar22 = uVar14;
    uVar20 = 7;
    break;
  case 8:
    uVar14 = *(undefined8 *)puVar39;
    _swift_errorRetain(uVar14);
    *puVar22 = uVar14;
    uVar14 = *(undefined8 *)(puVar39 + 2);
    _swift_errorRetain(uVar14);
    puVar22[1] = uVar14;
    uVar20 = 8;
    break;
  case 9:
    bVar19 = *(byte *)((long)puVar39 + uVar5);
    uVar26 = (uint)bVar19;
    if (4 < bVar19) {
      uVar27 = 4;
      if (uVar33 < 4) {
        uVar27 = uVar33;
      }
      if ((int)uVar27 < 2) {
        if (uVar27 == 0) goto LAB_10029a37c;
        uVar26 = (uint)(byte)*puVar39;
      }
      else if (uVar27 == 2) {
        uVar26 = (uint)(ushort)*puVar39;
      }
      else if (uVar27 == 3) {
        uVar26 = (uint)(uint3)*puVar39;
      }
      else {
        uVar26 = *puVar39;
      }
      if (uVar33 < 4) {
        uVar26 = (uVar26 | bVar19 - 5 << (ulong)((uVar33 & 3) << 3)) + 5;
      }
      else {
        uVar26 = uVar26 + 5;
      }
    }
LAB_10029a37c:
    if ((int)uVar26 < 2) {
      if (uVar26 == 0) {
        (**(code **)(lVar48 + 0x10))(puVar22,puVar39,lVar12);
        *(undefined1 *)((long)puVar22 + uVar5) = 0;
      }
      else if (uVar26 == 1) {
        *puVar22 = *(undefined8 *)puVar39;
        *(undefined1 *)((long)puVar22 + uVar5) = 1;
        _swift_bridgeObjectRetain();
      }
      else {
LAB_10029a444:
        _memcpy(puVar22,puVar39,uVar5 + 1);
      }
    }
    else if (uVar26 == 2) {
      *puVar22 = *(undefined8 *)puVar39;
      puVar22[1] = *(undefined8 *)(puVar39 + 2);
      uVar14 = *(undefined8 *)(puVar39 + 4);
      puVar22[2] = uVar14;
      *(undefined1 *)((long)puVar22 + uVar5) = 2;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar14);
    }
    else if (uVar26 == 3) {
      *puVar22 = *(undefined8 *)puVar39;
      *(undefined1 *)((long)puVar22 + uVar5) = 3;
    }
    else {
      if (uVar26 != 4) goto LAB_10029a444;
      uVar14 = *(undefined8 *)puVar39;
      _swift_errorRetain(uVar14);
      *puVar22 = uVar14;
      *(undefined1 *)((long)puVar22 + uVar5) = 4;
    }
    uVar20 = 9;
    break;
  case 10:
    bVar19 = *(byte *)((long)puVar39 + uVar6);
    uVar26 = (uint)bVar19;
    if (5 < bVar19) {
      uVar27 = 4;
      if (uVar50 < 4) {
        uVar27 = uVar50;
      }
      if ((int)uVar27 < 2) {
        if (uVar27 == 0) goto LAB_10029a50c;
        uVar26 = (uint)(byte)*puVar39;
      }
      else if (uVar27 == 2) {
        uVar26 = (uint)(ushort)*puVar39;
      }
      else if (uVar27 == 3) {
        uVar26 = (uint)(uint3)*puVar39;
      }
      else {
        uVar26 = *puVar39;
      }
      if (uVar50 < 4) {
        uVar26 = (uVar26 | bVar19 - 6 << (ulong)(uVar50 << 3 & 0x1f)) + 6;
      }
      else {
        uVar26 = uVar26 + 6;
      }
    }
LAB_10029a50c:
    if ((int)uVar26 < 3) {
      if (uVar26 == 0) {
        (**(code **)(lVar48 + 0x10))(puVar22,puVar39,lVar12);
        *(undefined1 *)((long)puVar22 + uVar6) = 0;
        uVar20 = 10;
        break;
      }
      if (uVar26 == 1) {
        (**(code **)(lVar36 + 0x10))(puVar22,puVar39,lVar13);
        uVar20 = 1;
      }
      else {
        if (uVar26 != 2) {
LAB_10029a5bc:
          _memcpy(puVar22,puVar39,uVar6 + 1);
          uVar20 = 10;
          break;
        }
        uVar14 = *(undefined8 *)puVar39;
        _swift_errorRetain(uVar14);
        *puVar22 = uVar14;
        uVar20 = 2;
      }
    }
    else if (uVar26 == 3) {
      uVar14 = *(undefined8 *)puVar39;
      _swift_errorRetain(uVar14);
      *puVar22 = uVar14;
      uVar20 = 3;
    }
    else {
      if (uVar26 != 4) {
        if (uVar26 != 5) goto LAB_10029a5bc;
        *puVar22 = *(undefined8 *)puVar39;
        puVar22[1] = *(undefined8 *)(puVar39 + 2);
        *(undefined1 *)((long)puVar22 + uVar6) = 5;
        _swift_bridgeObjectRetain();
        uVar20 = 10;
        break;
      }
      uVar14 = *(undefined8 *)puVar39;
      _swift_errorRetain(uVar14);
      *puVar22 = uVar14;
      uVar20 = 4;
    }
    *(undefined1 *)((long)puVar22 + uVar6) = uVar20;
    uVar20 = 10;
    break;
  case 0xb:
    uVar14 = *(undefined8 *)puVar39;
    uVar8 = *(undefined8 *)(puVar39 + 2);
    uVar7 = *(undefined8 *)(puVar39 + 4);
    uVar9 = *(undefined8 *)(puVar39 + 6);
    uVar44 = *(undefined8 *)(puVar39 + 8);
    uVar26 = puVar39[10];
    FUN_10027c10c(uVar14,uVar8,uVar7,uVar9,uVar44,(byte)uVar26);
    *puVar22 = uVar14;
    puVar22[1] = uVar8;
    puVar22[2] = uVar7;
    puVar22[3] = uVar9;
    puVar22[4] = uVar44;
    bVar19 = 1;
    *(byte *)(puVar22 + 5) = (byte)uVar26;
    *(undefined1 *)((long)puVar22 + uVar4) = 0xb;
    goto LAB_10029a7b4;
  case 0xc:
    uVar14 = *(undefined8 *)puVar39;
    _swift_errorRetain(uVar14);
    *puVar22 = uVar14;
    uVar20 = 0xc;
    break;
  case 0xd:
    uVar14 = *(undefined8 *)puVar39;
    _swift_errorRetain(uVar14);
    *puVar22 = uVar14;
    uVar20 = 0xd;
    break;
  case 0xe:
    uVar14 = *(undefined8 *)puVar39;
    uVar7 = *(undefined8 *)(puVar39 + 2);
    FUN_100008184(uVar14,uVar7);
    *puVar22 = uVar14;
    puVar22[1] = uVar7;
    uVar20 = 0xe;
    break;
  default:
    _memcpy(puVar22,puVar39,sVar2);
    goto LAB_10029a7b0;
  }
  *(undefined1 *)((long)puVar22 + uVar4) = uVar20;
LAB_10029a7b0:
  bVar19 = 1;
LAB_10029a7b4:
  *(byte *)((long)param_1 + uVar31) = bVar19;
LAB_10029a7b8:
  lVar16 = 0;
  __s10Foundation10URLRequestVMa();
  iVar10 = *(int *)(*(long *)(lVar16 + -8) + 0x54);
  lVar16 = *(long *)(*(long *)(lVar16 + -8) + 0x40);
  lVar17 = 0;
  __s10Foundation3URLVMa();
  lVar35 = *(long *)(lVar17 + -8);
  uVar26 = *(uint *)(lVar35 + 0x50);
  uVar47 = (ulong)uVar26 & 0xff;
  lVar17 = 0;
  __sSS10FoundationE8EncodingVMa();
  uVar32 = *(ulong *)(lVar35 + 0x40);
  uVar46 = (uVar32 + uVar47 + (uVar47 + 8 & (uVar47 ^ 0xffffffffffffffff)) &
           (uVar47 ^ 0xffffffffffffffff)) + uVar32;
  uVar47 = (uVar32 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar47 <= uVar32) {
    uVar47 = uVar32;
  }
  if (uVar47 < 9) {
    uVar47 = 8;
  }
  if (uVar46 <= uVar47 + 1) {
    uVar46 = uVar47 + 1;
  }
  uVar47 = uVar32;
  if (uVar32 < 0x19) {
    uVar47 = 0x18;
  }
  if (uVar46 <= uVar47 + 1) {
    uVar46 = uVar47 + 1;
  }
  uVar47 = *(ulong *)(*(long *)(lVar17 + -8) + 0x40);
  if (uVar47 <= uVar32) {
    uVar47 = uVar32;
  }
  if (uVar47 < 0x11) {
    uVar47 = 0x10;
  }
  if (uVar46 <= uVar47 + 1) {
    uVar46 = uVar47 + 1;
  }
  if (uVar46 < 0x2a) {
    uVar46 = 0x29;
  }
  if (iVar10 == 0) {
    lVar16 = lVar16 + 1;
  }
  uVar47 = (ulong)((*(uint *)(*(long *)(lVar17 + -8) + 0x50) | uVar26) & 0xf8 | 7);
  lVar16 = uVar46 + ((lVar16 + 7U & 0xfffffffffffffff8) + uVar47 + 0x10 &
                    (uVar47 ^ 0xffffffffffffffff));
  if (uVar1 < lVar16 + 1U) {
    uVar1 = lVar16 + 1;
  }
  _swift_weakCopyAssign
            ((ulong)(uVar1 + 8 + (long)param_1) & 0xfffffffffffffff8,
             (ulong)(uVar1 + 8 + (long)param_2) & 0xfffffffffffffff8);
  return param_1;
}

