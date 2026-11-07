// rea decompile_all
// name: FUN_10029eb4c
// address: 0x10029eb4c
// body: available
// range: 0x10029eb4c-0x10029f7a7 inclusive
// range: 0x10029f7c4-0x10029f993 inclusive
// range: 0x10029f9b8-0x10029fadf inclusive
// range: 0x10029fc78-0x10029fcab inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

uint * FUN_10029eb4c(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  size_t sVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  byte bVar16;
  undefined1 uVar17;
  undefined8 *puVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  size_t sVar24;
  undefined8 *puVar25;
  uint uVar26;
  ulong uVar27;
  uint uVar28;
  uint uVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  uint *puVar33;
  uint *puVar34;
  ulong uVar35;
  code *pcVar36;
  long lVar37;
  ulong uVar38;
  ulong uVar39;
  undefined8 uVar40;
  uint uVar41;
  long local_a8;
  long local_a0;
  long local_98;
  ulong local_90;
  ulong local_88;
  uint local_7c;
  long local_78;
  ulong local_70;
  
  if (param_1 == param_2) {
    return param_1;
  }
  local_90 = *(long *)(param_3 + 0x10);
  local_98 = *(long *)(param_3 + 0x18);
  local_a0 = *(long *)(local_90 + -8);
  local_a8 = *(long *)(local_98 + -8);
  uVar35 = *(ulong *)(local_a8 + 0x40);
  if (*(ulong *)(local_a8 + 0x40) <= *(ulong *)(local_a0 + 0x40)) {
    uVar35 = *(ulong *)(local_a0 + 0x40);
  }
  lVar10 = 0;
  __s10Foundation10URLRequestVMa();
  lVar37 = *(long *)(lVar10 + -8);
  sVar24 = *(size_t *)(lVar37 + 0x40);
  if (*(int *)(lVar37 + 0x54) == 0) {
    sVar24 = sVar24 + 1;
  }
  lVar11 = 0;
  local_78 = lVar10;
  __s10Foundation3URLVMa();
  lVar31 = *(long *)(lVar11 + -8);
  uVar23 = *(uint *)(lVar31 + 0x50);
  uVar32 = (ulong)uVar23 & 0xff;
  lVar12 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar30 = *(long *)(lVar12 + -8);
  uVar39 = (ulong)((*(uint *)(lVar30 + 0x50) | uVar23) & 0xf8 | 7);
  uVar38 = uVar32 + 8;
  uVar27 = *(ulong *)(lVar31 + 0x40);
  lVar10 = uVar27 + uVar32;
  local_70 = (lVar10 + (uVar38 & (uVar32 ^ 0xffffffffffffffff)) & (uVar32 ^ 0xffffffffffffffff)) +
             uVar27;
  uVar1 = (uVar27 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar27) {
    uVar1 = uVar27;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  if (local_70 <= uVar1 + 1) {
    local_70 = uVar1 + 1;
  }
  uVar3 = uVar27;
  if (uVar27 < 0x19) {
    uVar3 = 0x18;
  }
  if (local_70 <= uVar3 + 1) {
    local_70 = uVar3 + 1;
  }
  uVar4 = *(ulong *)(lVar30 + 0x40);
  if (*(ulong *)(lVar30 + 0x40) <= uVar27) {
    uVar4 = uVar27;
  }
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  if (local_70 <= uVar4 + 1) {
    local_70 = uVar4 + 1;
  }
  if (local_70 < 0x2a) {
    local_70 = 0x29;
  }
  uVar23 = (uint)local_70 << 3;
  local_7c = 0x10;
  if ((uint)local_70 < 4) {
    local_7c = 1U >> (ulong)(uVar23 & 0x1f) | 0x10;
  }
  sVar2 = local_70 + 1;
  uVar27 = sVar2 + (uVar39 + (sVar24 + 7 & 0xfffffffffffffff8) + 0x10 &
                   (uVar39 ^ 0xffffffffffffffff));
  if (uVar27 <= uVar35 + 1) {
    uVar27 = uVar35 + 1;
  }
  bVar16 = *(byte *)((long)param_1 + uVar27);
  uVar20 = (uint)bVar16;
  uVar29 = (uint)uVar27;
  if (1 < bVar16) {
    uVar28 = 4;
    if (uVar29 < 4) {
      uVar28 = uVar29;
    }
    if ((int)uVar28 < 2) {
      if (uVar28 == 0) goto LAB_10029ed88;
      uVar20 = (uint)(byte)*param_1;
    }
    else if (uVar28 == 2) {
      uVar20 = (uint)(ushort)*param_1;
    }
    else if (uVar28 == 3) {
      uVar20 = (uint)(uint3)*param_1;
    }
    else {
      uVar20 = *param_1;
    }
    if (uVar29 < 4) {
      uVar20 = (uVar20 | bVar16 - 2 << (ulong)((uVar29 & 3) << 3)) + 2;
    }
    else {
      uVar20 = uVar20 + 2;
    }
  }
LAB_10029ed88:
  local_88 = ~uVar39;
  uVar32 = ~uVar32;
  uVar41 = (uint)uVar4;
  uVar22 = (uint)uVar35;
  uVar28 = (uint)uVar3;
  if (uVar20 != 1) {
    bVar16 = *(byte *)((long)param_1 + uVar35);
    uVar20 = (uint)bVar16;
    if (bVar16 < 2) {
LAB_10029eecc:
      if (uVar20 == 1) {
LAB_10029eed4:
        (**(code **)(local_a8 + 8))(param_1,local_98);
        goto switchD_10029ef88_default;
      }
    }
    else {
      uVar21 = 4;
      if (uVar22 < 4) {
        uVar21 = uVar22;
      }
      if ((int)uVar21 < 2) {
        if (uVar21 == 0) goto LAB_10029eecc;
        uVar20 = (uint)(byte)*param_1;
      }
      else if (uVar21 == 2) {
        uVar20 = (uint)(ushort)*param_1;
      }
      else if (uVar21 == 3) {
        uVar20 = (uint)(uint3)*param_1;
      }
      else {
        uVar20 = *param_1;
      }
      if (3 < uVar22) {
        uVar20 = uVar20 + 2;
        goto LAB_10029eecc;
      }
      if ((uVar20 | bVar16 - 2 << (ulong)((uVar22 & 3) << 3)) == 0xffffffff) goto LAB_10029eed4;
    }
    (**(code **)(local_a0 + 8))(param_1,local_90);
    goto switchD_10029ef88_default;
  }
  puVar34 = param_1;
  (**(code **)(lVar37 + 0x30))(param_1,1,local_78);
  if ((int)puVar34 == 0) {
    (**(code **)(lVar37 + 8))(param_1,local_78);
  }
  puVar34 = (uint *)0x0;
  puVar33 = (uint *)(((ulong)((long)param_1 + sVar24 + 7) & 0xfffffffffffffff8) + uVar39 + 0x10 &
                    local_88);
  bVar16 = *(byte *)((long)puVar33 + local_70);
  uVar20 = (uint)bVar16;
  if ((bVar16 ^ 0xff) < 0x100 - local_7c) goto switchD_10029ef88_default;
  if (0xe < bVar16) {
    uVar26 = (uint)local_70;
    uVar21 = 4;
    if (uVar26 < 4) {
      uVar21 = uVar26;
    }
    if ((int)uVar21 < 2) {
      if (uVar21 == 0) goto LAB_10029ef68;
      uVar21 = (uint)(byte)*puVar33;
    }
    else if (uVar21 == 2) {
      uVar21 = (uint)(ushort)*puVar33;
    }
    else if (uVar21 == 3) {
      uVar21 = (uint)(uint3)*puVar33;
    }
    else {
      uVar21 = *puVar33;
    }
    if (uVar26 < 4) {
      uVar20 = (uVar21 | uVar20 - 0xf << (ulong)(uVar23 & 0x1f)) + 0xf;
    }
    else {
      uVar20 = uVar21 + 0xf;
    }
  }
LAB_10029ef68:
  lVar15 = lVar11;
  lVar19 = lVar31;
  switch(uVar20) {
  case 0:
  case 1:
  case 7:
  case 0xc:
  case 0xd:
switchD_10029ef88_caseD_0:
    uVar13 = *(undefined8 *)puVar33;
    goto LAB_10029ef90;
  case 2:
    _swift_errorRelease(*(undefined8 *)puVar33);
    uVar14 = (ulong)(uVar38 + (long)puVar33) & uVar32;
    pcVar36 = *(code **)(lVar31 + 8);
    (*pcVar36)(uVar14,lVar11);
    (*pcVar36)(lVar10 + uVar14 & uVar32,lVar11);
    break;
  case 3:
    FUN_10003f094(puVar33);
    break;
  case 4:
    bVar16 = *(byte *)((long)puVar33 + uVar1);
    uVar23 = (uint)bVar16;
    if (0xc < bVar16) {
      uVar29 = (uint)uVar1;
      uVar20 = 4;
      if (uVar29 < 4) {
        uVar20 = uVar29;
      }
      if ((int)uVar20 < 2) {
        if (uVar20 == 0) goto LAB_10029f964;
        uVar23 = (uint)(byte)*puVar33;
      }
      else if (uVar20 == 2) {
        uVar23 = (uint)(ushort)*puVar33;
      }
      else if (uVar20 == 3) {
        uVar23 = (uint)(uint3)*puVar33;
      }
      else {
        uVar23 = *puVar33;
      }
      if (uVar29 < 4) {
        uVar23 = (uVar23 | bVar16 - 0xd << (ulong)((uVar29 & 3) << 3)) + 0xd;
      }
      else {
        uVar23 = uVar23 + 0xd;
      }
    }
LAB_10029f964:
                    /* WARNING: Could not recover jumptable at 0x00010029f97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(ushort *)(&DAT_1008173e8 + (ulong)uVar23 * 2) * 4 + 0x10029ef8c))(0);
    return puVar34;
  case 5:
    FUN_10027ba4c(*(undefined8 *)puVar33);
    break;
  case 6:
    FUN_100278f18(*(undefined8 *)puVar33,*(undefined8 *)(puVar33 + 2),(byte)puVar33[4]);
    break;
  case 8:
    _swift_errorRelease(*(undefined8 *)puVar33);
    uVar13 = *(undefined8 *)(puVar33 + 2);
LAB_10029ef90:
    _swift_errorRelease(uVar13);
    break;
  case 9:
    bVar16 = *(byte *)((long)puVar33 + uVar3);
    uVar20 = (uint)bVar16;
    if (4 < bVar16) {
      uVar21 = 4;
      if (uVar28 < 4) {
        uVar21 = uVar28;
      }
      if ((int)uVar21 < 2) {
        if (uVar21 == 0) goto LAB_10029f70c;
        uVar20 = (uint)(byte)*puVar33;
      }
      else if (uVar21 == 2) {
        uVar20 = (uint)(ushort)*puVar33;
      }
      else if (uVar21 == 3) {
        uVar20 = (uint)(uint3)*puVar33;
      }
      else {
        uVar20 = *puVar33;
      }
      if (uVar28 < 4) {
        uVar20 = (uVar20 | bVar16 - 5 << (ulong)((uVar28 & 3) << 3)) + 5;
      }
      else {
        uVar20 = uVar20 + 5;
      }
    }
LAB_10029f70c:
    if ((int)uVar20 < 2) {
      if (uVar20 == 0) {
LAB_10029f984:
        (**(code **)(lVar19 + 8))(puVar33,lVar15);
      }
      else if (uVar20 == 1) {
        _swift_bridgeObjectRelease(*(undefined8 *)puVar33);
      }
    }
    else if (uVar20 == 2) {
      _swift_bridgeObjectRelease(*(undefined8 *)puVar33);
      _swift_bridgeObjectRelease(*(undefined8 *)(puVar33 + 4));
    }
    else if (uVar20 == 4) goto switchD_10029ef88_caseD_0;
    break;
  case 10:
    bVar16 = *(byte *)((long)puVar33 + uVar4);
    uVar20 = (uint)bVar16;
    if (5 < bVar16) {
      uVar21 = 4;
      if (uVar41 < 4) {
        uVar21 = uVar41;
      }
      if ((int)uVar21 < 2) {
        if (uVar21 == 0) goto LAB_10029f7e8;
        uVar20 = (uint)(byte)*puVar33;
      }
      else if (uVar21 == 2) {
        uVar20 = (uint)(ushort)*puVar33;
      }
      else if (uVar21 == 3) {
        uVar20 = (uint)(uint3)*puVar33;
      }
      else {
        uVar20 = *puVar33;
      }
      if (uVar41 < 4) {
        uVar20 = (uVar20 | bVar16 - 6 << (ulong)(uVar41 << 3 & 0x1f)) + 6;
      }
      else {
        uVar20 = uVar20 + 6;
      }
    }
LAB_10029f7e8:
    if ((int)uVar20 < 3) {
      if ((uVar20 == 0) || (lVar15 = lVar12, lVar19 = lVar30, uVar20 == 1)) goto LAB_10029f984;
      if (uVar20 == 2) goto switchD_10029ef88_caseD_0;
    }
    else {
      if ((uVar20 == 3) || (uVar20 == 4)) goto switchD_10029ef88_caseD_0;
      if (uVar20 == 5) {
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
switchD_10029ef88_default:
  lVar15 = local_78;
  bVar16 = *(byte *)((long)param_2 + uVar27);
  uVar20 = (uint)bVar16;
  if (bVar16 < 2) {
LAB_10029f000:
    if (uVar20 != 1) {
LAB_10029f158:
      bVar16 = *(byte *)((long)param_2 + uVar35);
      uVar23 = (uint)bVar16;
      if (1 < bVar16) {
        uVar20 = 4;
        if (uVar22 < 4) {
          uVar20 = uVar22;
        }
        if ((int)uVar20 < 2) {
          if (uVar20 == 0) goto LAB_10029f1e4;
          uVar23 = (uint)(byte)*param_2;
        }
        else if (uVar20 == 2) {
          uVar23 = (uint)(ushort)*param_2;
        }
        else if (uVar20 == 3) {
          uVar23 = (uint)(uint3)*param_2;
        }
        else {
          uVar23 = *param_2;
        }
        if (uVar22 < 4) {
          uVar23 = (uVar23 | bVar16 - 2 << (ulong)((uVar22 & 3) << 3)) + 2;
        }
        else {
          uVar23 = uVar23 + 2;
        }
      }
LAB_10029f1e4:
      bVar9 = uVar23 == 1;
      plVar8 = &local_a8;
      if (!bVar9) {
        plVar8 = &local_a0;
      }
      uVar38 = local_98;
      if (!bVar9) {
        uVar38 = local_90;
      }
      (**(code **)(*plVar8 + 0x10))(param_1,param_2,uVar38);
      bVar16 = 0;
      *(bool *)((long)param_1 + uVar35) = bVar9;
      goto LAB_10029fc84;
    }
  }
  else {
    uVar21 = 4;
    if (uVar29 < 4) {
      uVar21 = uVar29;
    }
    if ((int)uVar21 < 2) {
      if (uVar21 == 0) goto LAB_10029f000;
      uVar20 = (uint)(byte)*param_2;
    }
    else if (uVar21 == 2) {
      uVar20 = (uint)(ushort)*param_2;
    }
    else if (uVar21 == 3) {
      uVar20 = (uint)(uint3)*param_2;
    }
    else {
      uVar20 = *param_2;
    }
    if (3 < uVar29) {
      uVar20 = uVar20 + 2;
      goto LAB_10029f000;
    }
    if ((uVar20 | bVar16 - 2 << (ulong)((uVar29 & 3) << 3)) != 0xffffffff) goto LAB_10029f158;
  }
  puVar34 = param_2;
  (**(code **)(lVar37 + 0x30))(param_2,1,local_78);
  local_90 = uVar1;
  if ((int)puVar34 == 0) {
    (**(code **)(lVar37 + 0x10))(param_1,param_2,lVar15);
    (**(code **)(lVar37 + 0x38))(param_1,0,1,lVar15);
  }
  else {
    _memcpy(param_1,param_2,sVar24);
  }
  puVar25 = (undefined8 *)((ulong)((long)param_2 + sVar24 + 7) & 0xfffffffffffffff8);
  puVar18 = (undefined8 *)((ulong)((long)param_1 + sVar24 + 7) & 0xfffffffffffffff8);
  *puVar18 = *puVar25;
  puVar18 = puVar18 + 1;
  puVar25 = puVar25 + 1;
  puVar34 = (uint *)*puVar25;
  *puVar18 = puVar34;
  puVar18 = (undefined8 *)((long)puVar18 + uVar39 + 8 & local_88);
  puVar33 = (uint *)((long)puVar25 + uVar39 + 8 & local_88);
  bVar16 = *(byte *)((long)puVar33 + local_70);
  uVar20 = (uint)bVar16;
  if ((bVar16 ^ 0xff) < 0x100 - local_7c) {
switchD_10029f274_default:
    _memcpy(puVar18,puVar33,sVar2);
    goto LAB_10029fc80;
  }
  if (0xe < bVar16) {
    uVar22 = (uint)local_70;
    uVar29 = 4;
    if (uVar22 < 4) {
      uVar29 = uVar22;
    }
    if ((int)uVar29 < 2) {
      if (uVar29 == 0) goto LAB_10029f254;
      uVar20 = (uint)(byte)*puVar33;
    }
    else if (uVar29 == 2) {
      uVar20 = (uint)(ushort)*puVar33;
    }
    else if (uVar29 == 3) {
      uVar20 = (uint)(uint3)*puVar33;
    }
    else {
      uVar20 = *puVar33;
    }
    if (uVar22 < 4) {
      uVar20 = uVar20 | bVar16 - 0xf << (ulong)(uVar23 & 0x1f);
    }
    uVar20 = uVar20 + 0xf;
  }
LAB_10029f254:
  switch(uVar20) {
  case 0:
    uVar13 = *(undefined8 *)puVar33;
    _swift_errorRetain(uVar13);
    *puVar18 = uVar13;
    *(undefined1 *)((long)puVar18 + local_70) = 0;
    goto LAB_10029fc80;
  case 1:
    uVar13 = *(undefined8 *)puVar33;
    _swift_errorRetain(uVar13);
    *puVar18 = uVar13;
    bVar16 = 1;
    *(undefined1 *)((long)puVar18 + local_70) = 1;
    goto LAB_10029fc84;
  case 2:
    uVar13 = *(undefined8 *)puVar33;
    _swift_errorRetain(uVar13);
    *puVar18 = uVar13;
    uVar35 = uVar38 + (long)puVar18 & uVar32;
    uVar38 = (ulong)(uVar38 + (long)puVar33) & uVar32;
    pcVar36 = *(code **)(lVar31 + 0x10);
    (*pcVar36)(uVar35,uVar38,lVar11);
    (*pcVar36)(lVar10 + uVar35 & uVar32,lVar10 + uVar38 & uVar32,lVar11);
    uVar17 = 2;
    break;
  case 3:
    lVar10 = *(long *)(puVar33 + 6);
    puVar18[3] = lVar10;
    puVar18[4] = *(undefined8 *)(puVar33 + 8);
    (*(code *)**(undefined8 **)(lVar10 + -8))(puVar18,puVar33);
    uVar17 = 3;
    break;
  case 4:
    bVar16 = *(byte *)((long)puVar33 + local_90);
    uVar23 = (uint)bVar16;
    if (0xc < bVar16) {
      uVar29 = (uint)local_90;
      uVar20 = 4;
      if (uVar29 < 4) {
        uVar20 = uVar29;
      }
      if ((int)uVar20 < 2) {
        if (uVar20 == 0) goto LAB_10029f78c;
        uVar23 = (uint)(byte)*puVar33;
      }
      else if (uVar20 == 2) {
        uVar23 = (uint)(ushort)*puVar33;
      }
      else if (uVar20 == 3) {
        uVar23 = (uint)(uint3)*puVar33;
      }
      else {
        uVar23 = *puVar33;
      }
      if (uVar29 < 4) {
        uVar23 = (uVar23 | bVar16 - 0xd << (ulong)((uVar29 & 3) << 3)) + 0xd;
      }
      else {
        uVar23 = uVar23 + 0xd;
      }
    }
LAB_10029f78c:
                    /* WARNING: Could not recover jumptable at 0x00010029f7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_10029f7a8 + (ulong)*(ushort *)(&DAT_100817412 + (ulong)uVar23 * 2) * 4))
              (puVar34);
    return puVar34;
  case 5:
    uVar13 = *(undefined8 *)puVar33;
    FUN_10027c0e0(uVar13);
    *puVar18 = uVar13;
    uVar17 = 5;
    break;
  case 6:
    uVar13 = *(undefined8 *)puVar33;
    uVar5 = *(undefined8 *)(puVar33 + 2);
    uVar23 = puVar33[4];
    FUN_10027c0fc(uVar13,uVar5,(byte)uVar23);
    *puVar18 = uVar13;
    puVar18[1] = uVar5;
    *(byte *)(puVar18 + 2) = (byte)uVar23;
    uVar17 = 6;
    break;
  case 7:
    uVar13 = *(undefined8 *)puVar33;
    _swift_errorRetain(uVar13);
    *puVar18 = uVar13;
    uVar17 = 7;
    break;
  case 8:
    uVar13 = *(undefined8 *)puVar33;
    _swift_errorRetain(uVar13);
    *puVar18 = uVar13;
    uVar13 = *(undefined8 *)(puVar33 + 2);
    _swift_errorRetain(uVar13);
    puVar18[1] = uVar13;
    uVar17 = 8;
    break;
  case 9:
    bVar16 = *(byte *)((long)puVar33 + uVar3);
    uVar23 = (uint)bVar16;
    if (4 < bVar16) {
      uVar20 = 4;
      if (uVar28 < 4) {
        uVar20 = uVar28;
      }
      if ((int)uVar20 < 2) {
        if (uVar20 == 0) goto LAB_10029f858;
        uVar23 = (uint)(byte)*puVar33;
      }
      else if (uVar20 == 2) {
        uVar23 = (uint)(ushort)*puVar33;
      }
      else if (uVar20 == 3) {
        uVar23 = (uint)(uint3)*puVar33;
      }
      else {
        uVar23 = *puVar33;
      }
      if (uVar28 < 4) {
        uVar23 = (uVar23 | bVar16 - 5 << (ulong)((uVar28 & 3) << 3)) + 5;
      }
      else {
        uVar23 = uVar23 + 5;
      }
    }
LAB_10029f858:
    if ((int)uVar23 < 2) {
      if (uVar23 == 0) {
        (**(code **)(lVar31 + 0x10))(puVar18,puVar33,lVar11);
        *(undefined1 *)((long)puVar18 + uVar3) = 0;
      }
      else if (uVar23 == 1) {
        *puVar18 = *(undefined8 *)puVar33;
        *(undefined1 *)((long)puVar18 + uVar3) = 1;
        _swift_bridgeObjectRetain();
      }
      else {
LAB_10029f920:
        _memcpy(puVar18,puVar33,uVar3 + 1);
      }
    }
    else if (uVar23 == 2) {
      *puVar18 = *(undefined8 *)puVar33;
      puVar18[1] = *(undefined8 *)(puVar33 + 2);
      uVar13 = *(undefined8 *)(puVar33 + 4);
      puVar18[2] = uVar13;
      *(undefined1 *)((long)puVar18 + uVar3) = 2;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar13);
    }
    else if (uVar23 == 3) {
      *puVar18 = *(undefined8 *)puVar33;
      *(undefined1 *)((long)puVar18 + uVar3) = 3;
    }
    else {
      if (uVar23 != 4) goto LAB_10029f920;
      uVar13 = *(undefined8 *)puVar33;
      _swift_errorRetain(uVar13);
      *puVar18 = uVar13;
      *(undefined1 *)((long)puVar18 + uVar3) = 4;
    }
    uVar17 = 9;
    break;
  case 10:
    bVar16 = *(byte *)((long)puVar33 + uVar4);
    uVar23 = (uint)bVar16;
    if (5 < bVar16) {
      uVar20 = 4;
      if (uVar41 < 4) {
        uVar20 = uVar41;
      }
      if ((int)uVar20 < 2) {
        if (uVar20 == 0) goto LAB_10029f9e4;
        uVar23 = (uint)(byte)*puVar33;
      }
      else if (uVar20 == 2) {
        uVar23 = (uint)(ushort)*puVar33;
      }
      else if (uVar20 == 3) {
        uVar23 = (uint)(uint3)*puVar33;
      }
      else {
        uVar23 = *puVar33;
      }
      if (uVar41 < 4) {
        uVar23 = (uVar23 | bVar16 - 6 << (ulong)(uVar41 << 3 & 0x1f)) + 6;
      }
      else {
        uVar23 = uVar23 + 6;
      }
    }
LAB_10029f9e4:
    if ((int)uVar23 < 3) {
      if (uVar23 == 0) {
        (**(code **)(lVar31 + 0x10))(puVar18,puVar33,lVar11);
        *(undefined1 *)((long)puVar18 + uVar4) = 0;
        uVar17 = 10;
        break;
      }
      if (uVar23 == 1) {
        (**(code **)(lVar30 + 0x10))(puVar18,puVar33,lVar12);
        uVar17 = 1;
      }
      else {
        if (uVar23 != 2) {
LAB_10029fa8c:
          _memcpy(puVar18,puVar33,uVar4 + 1);
          uVar17 = 10;
          break;
        }
        uVar13 = *(undefined8 *)puVar33;
        _swift_errorRetain(uVar13);
        *puVar18 = uVar13;
        uVar17 = 2;
      }
    }
    else if (uVar23 == 3) {
      uVar13 = *(undefined8 *)puVar33;
      _swift_errorRetain(uVar13);
      *puVar18 = uVar13;
      uVar17 = 3;
    }
    else {
      if (uVar23 != 4) {
        if (uVar23 != 5) goto LAB_10029fa8c;
        *puVar18 = *(undefined8 *)puVar33;
        puVar18[1] = *(undefined8 *)(puVar33 + 2);
        *(undefined1 *)((long)puVar18 + uVar4) = 5;
        _swift_bridgeObjectRetain();
        uVar17 = 10;
        break;
      }
      uVar13 = *(undefined8 *)puVar33;
      _swift_errorRetain(uVar13);
      *puVar18 = uVar13;
      uVar17 = 4;
    }
    *(undefined1 *)((long)puVar18 + uVar4) = uVar17;
    uVar17 = 10;
    break;
  case 0xb:
    uVar13 = *(undefined8 *)puVar33;
    uVar6 = *(undefined8 *)(puVar33 + 2);
    uVar5 = *(undefined8 *)(puVar33 + 4);
    uVar7 = *(undefined8 *)(puVar33 + 6);
    uVar40 = *(undefined8 *)(puVar33 + 8);
    uVar23 = puVar33[10];
    FUN_10027c10c(uVar13,uVar6,uVar5,uVar7,uVar40,(byte)uVar23);
    *puVar18 = uVar13;
    puVar18[1] = uVar6;
    puVar18[2] = uVar5;
    puVar18[3] = uVar7;
    puVar18[4] = uVar40;
    bVar16 = 1;
    *(byte *)(puVar18 + 5) = (byte)uVar23;
    *(undefined1 *)((long)puVar18 + local_70) = 0xb;
    goto LAB_10029fc84;
  case 0xc:
    uVar13 = *(undefined8 *)puVar33;
    _swift_errorRetain(uVar13);
    *puVar18 = uVar13;
    uVar17 = 0xc;
    break;
  case 0xd:
    uVar13 = *(undefined8 *)puVar33;
    _swift_errorRetain(uVar13);
    *puVar18 = uVar13;
    uVar17 = 0xd;
    break;
  case 0xe:
    uVar13 = *(undefined8 *)puVar33;
    uVar5 = *(undefined8 *)(puVar33 + 2);
    FUN_100008184(uVar13,uVar5);
    *puVar18 = uVar13;
    puVar18[1] = uVar5;
    uVar17 = 0xe;
    break;
  default:
    goto switchD_10029f274_default;
  }
  *(undefined1 *)((long)puVar18 + local_70) = uVar17;
LAB_10029fc80:
  bVar16 = 1;
LAB_10029fc84:
  *(byte *)((long)param_1 + uVar27) = bVar16;
  return param_1;
}

