// rea decompile_all
// name: FUN_10029b460
// address: 0x10029b460
// body: available
// range: 0x10029b460-0x10029c01f inclusive
// range: 0x10029c03c-0x10029c1e7 inclusive
// range: 0x10029c210-0x10029c313 inclusive
// range: 0x10029c494-0x10029c5e7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint * FUN_10029b460(uint *param_1,uint *param_2,long param_3)

{
  size_t sVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint *puVar11;
  long lVar12;
  byte bVar13;
  undefined1 uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  size_t sVar23;
  undefined8 *puVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  uint uVar29;
  long lVar31;
  uint *puVar32;
  long lVar33;
  long lVar34;
  uint uVar35;
  ulong uVar36;
  ulong uVar37;
  code *pcVar38;
  ulong uVar39;
  long lVar40;
  ulong uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  uint local_84;
  ulong local_80;
  long local_78;
  ulong local_70;
  uint uVar30;
  
  lVar31 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar15 = *(ulong *)(lVar31 + 0x40);
  lVar33 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar22 = *(ulong *)(lVar33 + 0x40);
  if (uVar22 <= uVar15) {
    uVar22 = uVar15;
  }
  uVar15 = uVar22 + 1;
  if (param_1 == param_2) goto LAB_10029c4a4;
  lVar8 = 0;
  local_a8 = lVar33;
  local_a0 = lVar31;
  local_98 = *(long *)(param_3 + 0x18);
  local_90 = *(long *)(param_3 + 0x10);
  __s10Foundation10URLRequestVMa();
  lVar31 = *(long *)(lVar8 + -8);
  sVar23 = *(size_t *)(lVar31 + 0x40);
  if (*(int *)(lVar31 + 0x54) == 0) {
    sVar23 = sVar23 + 1;
  }
  lVar9 = 0;
  local_78 = lVar8;
  __s10Foundation3URLVMa();
  lVar40 = *(long *)(lVar9 + -8);
  uVar20 = *(uint *)(lVar40 + 0x50);
  uVar36 = (ulong)uVar20 & 0xff;
  lVar8 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar34 = *(long *)(lVar8 + -8);
  uVar41 = (ulong)((*(uint *)(lVar34 + 0x50) | uVar20) & 0xf8 | 7);
  uVar37 = uVar36 + 8;
  uVar27 = *(ulong *)(lVar40 + 0x40);
  lVar33 = uVar27 + uVar36;
  local_70 = (lVar33 + (uVar37 & (uVar36 ^ 0xffffffffffffffff)) & (uVar36 ^ 0xffffffffffffffff)) +
             uVar27;
  uVar28 = (uVar27 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar28 <= uVar27) {
    uVar28 = uVar27;
  }
  if (uVar28 < 9) {
    uVar28 = 8;
  }
  if (local_70 <= uVar28 + 1) {
    local_70 = uVar28 + 1;
  }
  uVar2 = uVar27;
  if (uVar27 < 0x19) {
    uVar2 = 0x18;
  }
  if (local_70 <= uVar2 + 1) {
    local_70 = uVar2 + 1;
  }
  uVar3 = *(ulong *)(lVar34 + 0x40);
  if (*(ulong *)(lVar34 + 0x40) <= uVar27) {
    uVar3 = uVar27;
  }
  if (uVar3 < 0x11) {
    uVar3 = 0x10;
  }
  if (local_70 <= uVar3 + 1) {
    local_70 = uVar3 + 1;
  }
  if (local_70 < 0x2a) {
    local_70 = 0x29;
  }
  uVar20 = (uint)local_70 << 3;
  local_84 = 0x10;
  if ((uint)local_70 < 4) {
    local_84 = 1U >> (ulong)(uVar20 & 0x1f) | 0x10;
  }
  sVar1 = local_70 + 1;
  uVar27 = sVar1 + (uVar41 + (sVar23 + 7 & 0xfffffffffffffff8) + 0x10 &
                   (uVar41 ^ 0xffffffffffffffff));
  if (uVar27 <= uVar15) {
    uVar27 = uVar15;
  }
  bVar13 = *(byte *)((long)param_1 + uVar27);
  uVar18 = (uint)bVar13;
  uVar21 = (uint)uVar27;
  if (1 < bVar13) {
    uVar30 = 4;
    if (uVar21 < 4) {
      uVar30 = uVar21;
    }
    if ((int)uVar30 < 2) {
      if (uVar30 == 0) goto LAB_10029b6a4;
      uVar18 = (uint)(byte)*param_1;
    }
    else if (uVar30 == 2) {
      uVar18 = (uint)(ushort)*param_1;
    }
    else if (uVar30 == 3) {
      uVar18 = (uint)(uint3)*param_1;
    }
    else {
      uVar18 = *param_1;
    }
    if (uVar21 < 4) {
      uVar18 = (uVar18 | bVar13 - 2 << (ulong)((uVar21 & 3) << 3)) + 2;
    }
    else {
      uVar18 = uVar18 + 2;
    }
  }
LAB_10029b6a4:
  uVar39 = ~uVar41;
  uVar36 = ~uVar36;
  uVar35 = (uint)uVar3;
  uVar26 = (uint)uVar22;
  uVar29 = (uint)uVar2;
  uVar30 = (uint)uVar28;
  local_80 = uVar15;
  if (uVar18 != 1) {
    bVar13 = *(byte *)((long)param_1 + uVar22);
    uVar18 = (uint)bVar13;
    if (bVar13 < 2) {
LAB_10029b7e8:
      if (uVar18 == 1) {
LAB_10029b7f0:
        (**(code **)(local_a8 + 8))(param_1,local_98);
        goto switchD_10029b8a4_default;
      }
    }
    else {
      uVar19 = 4;
      if (uVar26 < 4) {
        uVar19 = uVar26;
      }
      if ((int)uVar19 < 2) {
        if (uVar19 == 0) goto LAB_10029b7e8;
        uVar18 = (uint)(byte)*param_1;
      }
      else if (uVar19 == 2) {
        uVar18 = (uint)(ushort)*param_1;
      }
      else if (uVar19 == 3) {
        uVar18 = (uint)(uint3)*param_1;
      }
      else {
        uVar18 = *param_1;
      }
      if (3 < uVar26) {
        uVar18 = uVar18 + 2;
        goto LAB_10029b7e8;
      }
      if ((uVar18 | bVar13 - 2 << (ulong)((uVar26 & 3) << 3)) == 0xffffffff) goto LAB_10029b7f0;
    }
    (**(code **)(local_a0 + 8))(param_1,local_90);
    goto switchD_10029b8a4_default;
  }
  puVar11 = param_1;
  (**(code **)(lVar31 + 0x30))(param_1,1,local_78);
  if ((int)puVar11 == 0) {
    (**(code **)(lVar31 + 8))(param_1,local_78);
  }
  puVar11 = (uint *)0x0;
  puVar32 = (uint *)(((ulong)((long)param_1 + sVar23 + 7) & 0xfffffffffffffff8) + uVar41 + 0x10 &
                    uVar39);
  bVar13 = *(byte *)((long)puVar32 + local_70);
  uVar18 = (uint)bVar13;
  if ((bVar13 ^ 0xff) < 0x100 - local_84) goto switchD_10029b8a4_default;
  if (0xe < bVar13) {
    uVar25 = (uint)local_70;
    uVar19 = 4;
    if (uVar25 < 4) {
      uVar19 = uVar25;
    }
    if ((int)uVar19 < 2) {
      if (uVar19 == 0) goto LAB_10029b884;
      uVar19 = (uint)(byte)*puVar32;
    }
    else if (uVar19 == 2) {
      uVar19 = (uint)(ushort)*puVar32;
    }
    else if (uVar19 == 3) {
      uVar19 = (uint)(uint3)*puVar32;
    }
    else {
      uVar19 = *puVar32;
    }
    if (uVar25 < 4) {
      uVar18 = (uVar19 | uVar18 - 0xf << (ulong)(uVar20 & 0x1f)) + 0xf;
    }
    else {
      uVar18 = uVar19 + 0xf;
    }
  }
LAB_10029b884:
  lVar12 = lVar9;
  lVar17 = lVar40;
  switch(uVar18) {
  case 0:
  case 1:
  case 7:
  case 0xc:
  case 0xd:
switchD_10029b8a4_caseD_0:
    uVar10 = *(undefined8 *)puVar32;
    goto LAB_10029b8ac;
  case 2:
    _swift_errorRelease(*(undefined8 *)puVar32);
    uVar15 = (ulong)(uVar37 + (long)puVar32) & uVar36;
    pcVar38 = *(code **)(lVar40 + 8);
    (*pcVar38)(uVar15,lVar9);
    (*pcVar38)(lVar33 + uVar15 & uVar36,lVar9);
    break;
  case 3:
    FUN_10003f094(puVar32);
    break;
  case 4:
    bVar13 = *(byte *)((long)puVar32 + uVar28);
    uVar20 = (uint)bVar13;
    if (0xc < bVar13) {
      uVar18 = 4;
      if (uVar30 < 4) {
        uVar18 = uVar30;
      }
      if ((int)uVar18 < 2) {
        if (uVar18 == 0) goto LAB_10029c1b8;
        uVar20 = (uint)(byte)*puVar32;
      }
      else if (uVar18 == 2) {
        uVar20 = (uint)(ushort)*puVar32;
      }
      else if (uVar18 == 3) {
        uVar20 = (uint)(uint3)*puVar32;
      }
      else {
        uVar20 = *puVar32;
      }
      if (uVar30 < 4) {
        uVar20 = (uVar20 | bVar13 - 0xd << (ulong)((uVar30 & 3) << 3)) + 0xd;
      }
      else {
        uVar20 = uVar20 + 0xd;
      }
    }
LAB_10029c1b8:
                    /* WARNING: Could not recover jumptable at 0x00010029c1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(ushort *)(&DAT_100817332 + (ulong)uVar20 * 2) * 4 + 0x10029b8a8))(0);
    return puVar11;
  case 5:
    FUN_10027ba4c(*(undefined8 *)puVar32);
    break;
  case 6:
    FUN_100278f18(*(undefined8 *)puVar32,*(undefined8 *)(puVar32 + 2),(byte)puVar32[4]);
    break;
  case 8:
    _swift_errorRelease(*(undefined8 *)puVar32);
    uVar10 = *(undefined8 *)(puVar32 + 2);
LAB_10029b8ac:
    _swift_errorRelease(uVar10);
    break;
  case 9:
    bVar13 = *(byte *)((long)puVar32 + uVar2);
    uVar18 = (uint)bVar13;
    if (4 < bVar13) {
      uVar19 = 4;
      if (uVar29 < 4) {
        uVar19 = uVar29;
      }
      if ((int)uVar19 < 2) {
        if (uVar19 == 0) goto LAB_10029bf84;
        uVar18 = (uint)(byte)*puVar32;
      }
      else if (uVar19 == 2) {
        uVar18 = (uint)(ushort)*puVar32;
      }
      else if (uVar19 == 3) {
        uVar18 = (uint)(uint3)*puVar32;
      }
      else {
        uVar18 = *puVar32;
      }
      if (uVar29 < 4) {
        uVar18 = (uVar18 | bVar13 - 5 << (ulong)((uVar29 & 3) << 3)) + 5;
      }
      else {
        uVar18 = uVar18 + 5;
      }
    }
LAB_10029bf84:
    if ((int)uVar18 < 2) {
      if (uVar18 == 0) {
LAB_10029c1d8:
        (**(code **)(lVar17 + 8))(puVar32,lVar12);
      }
      else if (uVar18 == 1) {
        _swift_bridgeObjectRelease(*(undefined8 *)puVar32);
      }
    }
    else if (uVar18 == 2) {
      _swift_bridgeObjectRelease(*(undefined8 *)puVar32);
      _swift_bridgeObjectRelease(*(undefined8 *)(puVar32 + 4));
    }
    else if (uVar18 == 4) goto switchD_10029b8a4_caseD_0;
    break;
  case 10:
    bVar13 = *(byte *)((long)puVar32 + uVar3);
    uVar18 = (uint)bVar13;
    if (5 < bVar13) {
      uVar19 = 4;
      if (uVar35 < 4) {
        uVar19 = uVar35;
      }
      if ((int)uVar19 < 2) {
        if (uVar19 == 0) goto LAB_10029c060;
        uVar18 = (uint)(byte)*puVar32;
      }
      else if (uVar19 == 2) {
        uVar18 = (uint)(ushort)*puVar32;
      }
      else if (uVar19 == 3) {
        uVar18 = (uint)(uint3)*puVar32;
      }
      else {
        uVar18 = *puVar32;
      }
      if (uVar35 < 4) {
        uVar18 = (uVar18 | bVar13 - 6 << (ulong)(uVar35 << 3 & 0x1f)) + 6;
      }
      else {
        uVar18 = uVar18 + 6;
      }
    }
LAB_10029c060:
    if ((int)uVar18 < 3) {
      if ((uVar18 == 0) || (lVar12 = lVar8, lVar17 = lVar34, uVar18 == 1)) goto LAB_10029c1d8;
      if (uVar18 == 2) goto switchD_10029b8a4_caseD_0;
    }
    else {
      if ((uVar18 == 3) || (uVar18 == 4)) goto switchD_10029b8a4_caseD_0;
      if (uVar18 == 5) {
        _swift_bridgeObjectRelease(*(undefined8 *)(puVar32 + 2));
      }
    }
    break;
  case 0xb:
    FUN_100278e14(*(undefined8 *)puVar32,*(undefined8 *)(puVar32 + 2),*(undefined8 *)(puVar32 + 4),
                  *(undefined8 *)(puVar32 + 6),*(undefined8 *)(puVar32 + 8),(byte)puVar32[10]);
    break;
  case 0xe:
    FUN_100006cdc(*(undefined8 *)puVar32,*(undefined8 *)(puVar32 + 2));
  }
switchD_10029b8a4_default:
  lVar12 = local_78;
  uVar15 = local_80;
  bVar13 = *(byte *)((long)param_2 + uVar27);
  uVar18 = (uint)bVar13;
  if (bVar13 < 2) {
LAB_10029b91c:
    if (uVar18 == 1) goto LAB_10029b924;
LAB_10029ba64:
    bVar13 = *(byte *)((long)param_2 + uVar22);
    uVar20 = (uint)bVar13;
    if (1 < bVar13) {
      uVar18 = 4;
      if (uVar26 < 4) {
        uVar18 = uVar26;
      }
      if ((int)uVar18 < 2) {
        if (uVar18 == 0) goto LAB_10029bae4;
        uVar18 = (uint)(byte)*param_2;
      }
      else if (uVar18 == 2) {
        uVar18 = (uint)(ushort)*param_2;
      }
      else if (uVar18 == 3) {
        uVar18 = (uint)(uint3)*param_2;
      }
      else {
        uVar18 = *param_2;
      }
      uVar20 = uVar18 | bVar13 - 2 << (ulong)((uVar26 & 3) << 3);
      if (3 < uVar26) {
        uVar20 = uVar18;
      }
      uVar20 = uVar20 + 2;
    }
LAB_10029bae4:
    bVar7 = uVar20 == 1;
    plVar5 = &local_a8;
    if (!bVar7) {
      plVar5 = &local_a0;
    }
    plVar6 = &local_98;
    if (!bVar7) {
      plVar6 = &local_90;
    }
    (**(code **)(*plVar5 + 0x20))(param_1,param_2,*plVar6);
    bVar13 = 0;
    *(bool *)((long)param_1 + uVar22) = bVar7;
    goto LAB_10029c4a0;
  }
  uVar19 = 4;
  if (uVar21 < 4) {
    uVar19 = uVar21;
  }
  if ((int)uVar19 < 2) {
    if (uVar19 == 0) goto LAB_10029b91c;
    uVar18 = (uint)(byte)*param_2;
  }
  else if (uVar19 == 2) {
    uVar18 = (uint)(ushort)*param_2;
  }
  else if (uVar19 == 3) {
    uVar18 = (uint)(uint3)*param_2;
  }
  else {
    uVar18 = *param_2;
  }
  if (3 < uVar21) {
    uVar18 = uVar18 + 2;
    goto LAB_10029b91c;
  }
  if ((uVar18 | bVar13 - 2 << (ulong)((uVar21 & 3) << 3)) != 0xffffffff) goto LAB_10029ba64;
LAB_10029b924:
  puVar11 = param_2;
  (**(code **)(lVar31 + 0x30))(param_2,1,local_78);
  if ((int)puVar11 == 0) {
    (**(code **)(lVar31 + 0x20))(param_1,param_2,lVar12);
    (**(code **)(lVar31 + 0x38))(param_1,0,1,lVar12);
  }
  else {
    _memcpy(param_1,param_2,sVar23);
  }
  uVar15 = local_80;
  puVar16 = (undefined8 *)((ulong)((long)param_1 + sVar23 + 7) & 0xfffffffffffffff8);
  puVar24 = (undefined8 *)((ulong)((long)param_2 + sVar23 + 7) & 0xfffffffffffffff8);
  *puVar16 = *puVar24;
  puVar16 = puVar16 + 1;
  puVar24 = puVar24 + 1;
  *puVar16 = *puVar24;
  puVar11 = (uint *)((long)puVar16 + uVar41 + 8 & uVar39);
  puVar32 = (uint *)((long)puVar24 + uVar41 + 8 & uVar39);
  bVar13 = *(byte *)((long)puVar32 + local_70);
  uVar18 = (uint)bVar13;
  if ((bVar13 ^ 0xff) < 0x100 - local_84) {
    _memcpy(puVar11,puVar32,sVar1);
    bVar13 = 1;
    uVar15 = local_80;
    goto LAB_10029c4a0;
  }
  if (0xe < bVar13) {
    uVar26 = (uint)local_70;
    uVar21 = 4;
    if (uVar26 < 4) {
      uVar21 = uVar26;
    }
    if ((int)uVar21 < 2) {
      if (uVar21 == 0) goto LAB_10029bb58;
      uVar21 = (uint)(byte)*puVar32;
    }
    else if (uVar21 == 2) {
      uVar21 = (uint)(ushort)*puVar32;
    }
    else if (uVar21 == 3) {
      uVar21 = (uint)(uint3)*puVar32;
    }
    else {
      uVar21 = *puVar32;
    }
    if (uVar26 < 4) {
      uVar18 = (uVar21 | uVar18 - 0xf << (ulong)(uVar20 & 0x1f)) + 0xf;
    }
    else {
      uVar18 = uVar21 + 0xf;
    }
  }
LAB_10029bb58:
  switch(uVar18) {
  case 0:
    *(undefined8 *)puVar11 = *(undefined8 *)puVar32;
    *(undefined1 *)((long)puVar11 + local_70) = 0;
    goto LAB_10029c49c;
  case 1:
    *(undefined8 *)puVar11 = *(undefined8 *)puVar32;
    bVar13 = 1;
    *(undefined1 *)((long)puVar11 + local_70) = 1;
    goto LAB_10029c4a0;
  case 2:
    *(undefined8 *)puVar11 = *(undefined8 *)puVar32;
    uVar22 = uVar37 + (long)puVar11 & uVar36;
    uVar37 = (ulong)(uVar37 + (long)puVar32) & uVar36;
    pcVar38 = *(code **)(lVar40 + 0x20);
    (*pcVar38)(uVar22,uVar37,lVar9);
    (*pcVar38)(lVar33 + uVar22 & uVar36,lVar33 + uVar37 & uVar36,lVar9);
    *(undefined1 *)((long)puVar11 + local_70) = 2;
    goto LAB_10029c49c;
  case 3:
    uVar42 = *(undefined8 *)(puVar32 + 2);
    uVar10 = *(undefined8 *)puVar32;
    uVar44 = *(undefined8 *)(puVar32 + 6);
    uVar43 = *(undefined8 *)(puVar32 + 4);
    *(undefined8 *)(puVar11 + 8) = *(undefined8 *)(puVar32 + 8);
    *(undefined8 *)(puVar11 + 2) = uVar42;
    *(undefined8 *)puVar11 = uVar10;
    *(undefined8 *)(puVar11 + 6) = uVar44;
    *(undefined8 *)(puVar11 + 4) = uVar43;
    uVar14 = 3;
    break;
  case 4:
    bVar13 = *(byte *)((long)puVar32 + uVar28);
    uVar20 = (uint)bVar13;
    if (0xc < bVar13) {
      uVar18 = 4;
      if (uVar30 < 4) {
        uVar18 = uVar30;
      }
      if ((int)uVar18 < 2) {
        if (uVar18 == 0) goto LAB_10029c004;
        uVar20 = (uint)(byte)*puVar32;
      }
      else if (uVar18 == 2) {
        uVar20 = (uint)(ushort)*puVar32;
      }
      else if (uVar18 == 3) {
        uVar20 = (uint)(uint3)*puVar32;
      }
      else {
        uVar20 = *puVar32;
      }
      if (uVar30 < 4) {
        uVar20 = (uVar20 | bVar13 - 0xd << (ulong)((uVar30 & 3) << 3)) + 0xd;
      }
      else {
        uVar20 = uVar20 + 0xd;
      }
    }
LAB_10029c004:
                    /* WARNING: Could not recover jumptable at 0x00010029c01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_10029c020 + (ulong)*(ushort *)(&DAT_10081735c + (ulong)uVar20 * 2) * 4))();
    return puVar11;
  case 5:
    *(undefined8 *)puVar11 = *(undefined8 *)puVar32;
    uVar14 = 5;
    break;
  case 6:
    uVar42 = *(undefined8 *)(puVar32 + 2);
    uVar10 = *(undefined8 *)puVar32;
    *(byte *)(puVar11 + 4) = (byte)puVar32[4];
    *(undefined8 *)(puVar11 + 2) = uVar42;
    *(undefined8 *)puVar11 = uVar10;
    uVar14 = 6;
    break;
  case 7:
    *(undefined8 *)puVar11 = *(undefined8 *)puVar32;
    uVar14 = 7;
    break;
  case 8:
    uVar10 = *(undefined8 *)puVar32;
    *(undefined8 *)(puVar11 + 2) = *(undefined8 *)(puVar32 + 2);
    *(undefined8 *)puVar11 = uVar10;
    uVar14 = 8;
    break;
  case 9:
    bVar13 = *(byte *)((long)puVar32 + uVar2);
    uVar20 = (uint)bVar13;
    if (4 < bVar13) {
      uVar18 = 4;
      if (uVar29 < 4) {
        uVar18 = uVar29;
      }
      if ((int)uVar18 < 2) {
        if (uVar18 == 0) goto LAB_10029c0d0;
        uVar20 = (uint)(byte)*puVar32;
      }
      else if (uVar18 == 2) {
        uVar20 = (uint)(ushort)*puVar32;
      }
      else if (uVar18 == 3) {
        uVar20 = (uint)(uint3)*puVar32;
      }
      else {
        uVar20 = *puVar32;
      }
      if (uVar29 < 4) {
        uVar20 = (uVar20 | bVar13 - 5 << (ulong)((uVar29 & 3) << 3)) + 5;
      }
      else {
        uVar20 = uVar20 + 5;
      }
    }
LAB_10029c0d0:
    if ((int)uVar20 < 2) {
      if (uVar20 == 0) {
        (**(code **)(lVar40 + 0x20))(puVar11,puVar32,lVar9);
        *(undefined1 *)((long)puVar11 + uVar2) = 0;
      }
      else if (uVar20 == 1) {
        *(undefined8 *)puVar11 = *(undefined8 *)puVar32;
        *(undefined1 *)((long)puVar11 + uVar2) = 1;
      }
      else {
LAB_10029c174:
        _memcpy(puVar11,puVar32,uVar2 + 1);
      }
    }
    else if (uVar20 == 2) {
      uVar42 = *(undefined8 *)(puVar32 + 2);
      uVar10 = *(undefined8 *)puVar32;
      *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(puVar32 + 4);
      *(undefined8 *)(puVar11 + 2) = uVar42;
      *(undefined8 *)puVar11 = uVar10;
      *(undefined1 *)((long)puVar11 + uVar2) = 2;
    }
    else if (uVar20 == 3) {
      *(undefined8 *)puVar11 = *(undefined8 *)puVar32;
      *(undefined1 *)((long)puVar11 + uVar2) = 3;
    }
    else {
      if (uVar20 != 4) goto LAB_10029c174;
      *(undefined8 *)puVar11 = *(undefined8 *)puVar32;
      *(undefined1 *)((long)puVar11 + uVar2) = 4;
    }
    uVar14 = 9;
    break;
  case 10:
    bVar13 = *(byte *)((long)puVar32 + uVar3);
    uVar20 = (uint)bVar13;
    if (5 < bVar13) {
      uVar18 = 4;
      if (uVar35 < 4) {
        uVar18 = uVar35;
      }
      if ((int)uVar18 < 2) {
        if (uVar18 == 0) goto LAB_10029c23c;
        uVar20 = (uint)(byte)*puVar32;
      }
      else if (uVar18 == 2) {
        uVar20 = (uint)(ushort)*puVar32;
      }
      else if (uVar18 == 3) {
        uVar20 = (uint)(uint3)*puVar32;
      }
      else {
        uVar20 = *puVar32;
      }
      if (uVar35 < 4) {
        uVar20 = (uVar20 | bVar13 - 6 << (ulong)(uVar35 << 3 & 0x1f)) + 6;
      }
      else {
        uVar20 = uVar20 + 6;
      }
    }
LAB_10029c23c:
    if ((int)uVar20 < 3) {
      if (uVar20 == 0) {
        (**(code **)(lVar40 + 0x20))(puVar11,puVar32,lVar9);
        *(undefined1 *)((long)puVar11 + uVar3) = 0;
        uVar14 = 10;
      }
      else if (uVar20 == 1) {
        (**(code **)(lVar34 + 0x20))(puVar11,puVar32,lVar8);
        *(undefined1 *)((long)puVar11 + uVar3) = 1;
        uVar14 = 10;
      }
      else {
        if (uVar20 == 2) {
          *(undefined8 *)puVar11 = *(undefined8 *)puVar32;
          uVar14 = 2;
          goto LAB_10029c308;
        }
LAB_10029c2c0:
        _memcpy(puVar11,puVar32,uVar3 + 1);
        uVar14 = 10;
      }
    }
    else {
      if (uVar20 == 3) {
        *(undefined8 *)puVar11 = *(undefined8 *)puVar32;
        uVar14 = 3;
      }
      else if (uVar20 == 4) {
        *(undefined8 *)puVar11 = *(undefined8 *)puVar32;
        uVar14 = 4;
      }
      else {
        if (uVar20 != 5) goto LAB_10029c2c0;
        uVar10 = *(undefined8 *)puVar32;
        *(undefined8 *)(puVar11 + 2) = *(undefined8 *)(puVar32 + 2);
        *(undefined8 *)puVar11 = uVar10;
        uVar14 = 5;
      }
LAB_10029c308:
      *(undefined1 *)((long)puVar11 + uVar3) = uVar14;
      uVar14 = 10;
    }
    break;
  case 0xb:
    uVar42 = *(undefined8 *)(puVar32 + 2);
    uVar10 = *(undefined8 *)puVar32;
    uVar44 = *(undefined8 *)(puVar32 + 6);
    uVar43 = *(undefined8 *)(puVar32 + 4);
    uVar45 = *(undefined8 *)((long)puVar32 + 0x19);
    *(undefined8 *)((long)puVar11 + 0x21) = *(undefined8 *)((long)puVar32 + 0x21);
    *(undefined8 *)((long)puVar11 + 0x19) = uVar45;
    *(undefined8 *)(puVar11 + 2) = uVar42;
    *(undefined8 *)puVar11 = uVar10;
    *(undefined8 *)(puVar11 + 6) = uVar44;
    *(undefined8 *)(puVar11 + 4) = uVar43;
    uVar14 = 0xb;
    break;
  case 0xc:
    *(undefined8 *)puVar11 = *(undefined8 *)puVar32;
    uVar14 = 0xc;
    break;
  case 0xd:
    *(undefined8 *)puVar11 = *(undefined8 *)puVar32;
    uVar14 = 0xd;
    break;
  case 0xe:
    uVar10 = *(undefined8 *)puVar32;
    *(undefined8 *)(puVar11 + 2) = *(undefined8 *)(puVar32 + 2);
    *(undefined8 *)puVar11 = uVar10;
    uVar14 = 0xe;
    break;
  default:
    _memcpy(puVar11,puVar32,sVar1);
    goto LAB_10029c49c;
  }
  *(undefined1 *)((long)puVar11 + local_70) = uVar14;
LAB_10029c49c:
  bVar13 = 1;
LAB_10029c4a0:
  *(byte *)((long)param_1 + uVar27) = bVar13;
LAB_10029c4a4:
  lVar31 = 0;
  __s10Foundation10URLRequestVMa();
  iVar4 = *(int *)(*(long *)(lVar31 + -8) + 0x54);
  lVar31 = *(long *)(*(long *)(lVar31 + -8) + 0x40);
  lVar33 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar33 + -8);
  uVar20 = *(uint *)(lVar8 + 0x50);
  uVar22 = (ulong)uVar20 & 0xff;
  lVar33 = 0;
  __sSS10FoundationE8EncodingVMa();
  uVar28 = *(ulong *)(lVar8 + 0x40);
  uVar37 = (uVar28 + uVar22 + (uVar22 + 8 & (uVar22 ^ 0xffffffffffffffff)) &
           (uVar22 ^ 0xffffffffffffffff)) + uVar28;
  uVar22 = (uVar28 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar22 <= uVar28) {
    uVar22 = uVar28;
  }
  if (uVar22 < 9) {
    uVar22 = 8;
  }
  if (uVar37 <= uVar22 + 1) {
    uVar37 = uVar22 + 1;
  }
  uVar22 = uVar28;
  if (uVar28 < 0x19) {
    uVar22 = 0x18;
  }
  if (uVar37 <= uVar22 + 1) {
    uVar37 = uVar22 + 1;
  }
  uVar22 = *(ulong *)(*(long *)(lVar33 + -8) + 0x40);
  if (uVar22 <= uVar28) {
    uVar22 = uVar28;
  }
  if (uVar22 < 0x11) {
    uVar22 = 0x10;
  }
  if (uVar37 <= uVar22 + 1) {
    uVar37 = uVar22 + 1;
  }
  if (uVar37 < 0x2a) {
    uVar37 = 0x29;
  }
  if (iVar4 == 0) {
    lVar31 = lVar31 + 1;
  }
  uVar22 = (ulong)((*(uint *)(*(long *)(lVar33 + -8) + 0x50) | uVar20) & 0xf8 | 7);
  lVar31 = uVar37 + ((lVar31 + 7U & 0xfffffffffffffff8) + uVar22 + 0x10 &
                    (uVar22 ^ 0xffffffffffffffff));
  if (uVar15 < lVar31 + 1U) {
    uVar15 = lVar31 + 1;
  }
  _swift_weakTakeAssign
            ((ulong)(uVar15 + 8 + (long)param_1) & 0xfffffffffffffff8,
             (ulong)(uVar15 + 8 + (long)param_2) & 0xfffffffffffffff8);
  return param_1;
}

