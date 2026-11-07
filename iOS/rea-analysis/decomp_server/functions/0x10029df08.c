// rea decompile_all
// name: FUN_10029df08
// address: 0x10029df08
// body: available
// range: 0x10029df08-0x10029e74f inclusive
// range: 0x10029e76c-0x10029e997 inclusive
// range: 0x10029eb3c-0x10029eb4b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void * FUN_10029df08(void *param_1,uint *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  long *plVar11;
  bool bVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 uVar16;
  uint uVar17;
  undefined8 *puVar18;
  uint uVar19;
  size_t sVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  long lVar26;
  undefined8 uVar27;
  uint *puVar28;
  ulong uVar29;
  code *pcVar30;
  ulong uVar31;
  ulong uVar32;
  undefined8 uVar33;
  void *pvVar34;
  long lVar35;
  void *pvVar36;
  long local_88;
  long local_80;
  size_t local_78;
  ulong local_70;
  void *local_68;
  
  local_70 = *(long *)(param_3 + 0x10);
  local_78 = *(long *)(param_3 + 0x18);
  local_80 = *(long *)(local_70 + -8);
  local_88 = *(long *)(local_78 + -8);
  uVar4 = *(ulong *)(local_88 + 0x40);
  if (*(ulong *)(local_88 + 0x40) <= *(ulong *)(local_80 + 0x40)) {
    uVar4 = *(ulong *)(local_80 + 0x40);
  }
  lVar13 = 0;
  local_68 = param_1;
  __s10Foundation10URLRequestVMa();
  lVar35 = *(long *)(lVar13 + -8);
  sVar20 = *(size_t *)(lVar35 + 0x40);
  if (*(int *)(lVar35 + 0x54) == 0) {
    sVar20 = sVar20 + 1;
  }
  lVar14 = 0;
  __s10Foundation3URLVMa();
  lVar26 = *(long *)(lVar14 + -8);
  uVar19 = *(uint *)(lVar26 + 0x50);
  uVar31 = (ulong)uVar19 & 0xff;
  lVar15 = 0;
  __sSS10FoundationE8EncodingVMa();
  pvVar36 = local_68;
  lVar23 = *(long *)(lVar15 + -8);
  uVar32 = (ulong)((*(uint *)(lVar23 + 0x50) | uVar19) & 0xf8 | 7);
  uVar29 = uVar31 + 8;
  uVar22 = *(ulong *)(lVar26 + 0x40);
  lVar1 = uVar22 + uVar31;
  uVar2 = (lVar1 + (uVar29 & (uVar31 ^ 0xffffffffffffffff)) & (uVar31 ^ 0xffffffffffffffff)) +
          uVar22;
  uVar24 = (uVar22 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar24 <= uVar22) {
    uVar24 = uVar22;
  }
  if (uVar24 < 9) {
    uVar24 = 8;
  }
  if (uVar2 <= uVar24 + 1) {
    uVar2 = uVar24 + 1;
  }
  uVar5 = uVar22;
  if (uVar22 < 0x19) {
    uVar5 = 0x18;
  }
  if (uVar2 <= uVar5 + 1) {
    uVar2 = uVar5 + 1;
  }
  uVar6 = *(ulong *)(lVar23 + 0x40);
  if (*(ulong *)(lVar23 + 0x40) <= uVar22) {
    uVar6 = uVar22;
  }
  if (uVar6 < 0x11) {
    uVar6 = 0x10;
  }
  if (uVar2 <= uVar6 + 1) {
    uVar2 = uVar6 + 1;
  }
  if (uVar2 < 0x2a) {
    uVar2 = 0x29;
  }
  uVar22 = uVar2 + 1 +
           (uVar32 + (sVar20 + 7 & 0xfffffffffffffff8) + 0x10 & (uVar32 ^ 0xffffffffffffffff));
  if (uVar22 <= uVar4 + 1) {
    uVar22 = uVar4 + 1;
  }
  bVar10 = *(byte *)((long)param_2 + uVar22);
  uVar19 = (uint)bVar10;
  if (bVar10 < 2) {
LAB_10029e0d8:
    if (uVar19 != 1) {
LAB_10029e288:
      bVar10 = *(byte *)((long)param_2 + uVar4);
      uVar19 = (uint)bVar10;
      if (1 < bVar10) {
        uVar25 = (uint)uVar4;
        uVar3 = 4;
        if (uVar25 < 4) {
          uVar3 = uVar25;
        }
        if ((int)uVar3 < 2) {
          if (uVar3 == 0) goto LAB_10029e320;
          uVar19 = (uint)(byte)*param_2;
        }
        else if (uVar3 == 2) {
          uVar19 = (uint)(ushort)*param_2;
        }
        else if (uVar3 == 3) {
          uVar19 = (uint)(uint3)*param_2;
        }
        else {
          uVar19 = *param_2;
        }
        if (uVar25 < 4) {
          uVar19 = (uVar19 | bVar10 - 2 << (ulong)((uVar25 & 3) << 3)) + 2;
        }
        else {
          uVar19 = uVar19 + 2;
        }
      }
LAB_10029e320:
      bVar12 = uVar19 == 1;
      plVar11 = &local_88;
      if (!bVar12) {
        plVar11 = &local_80;
      }
      uVar29 = local_78;
      if (!bVar12) {
        uVar29 = local_70;
      }
      (**(code **)(*plVar11 + 0x10))(local_68,param_2,uVar29);
      uVar16 = 0;
      *(bool *)((long)pvVar36 + uVar4) = bVar12;
      goto LAB_10029e354;
    }
  }
  else {
    uVar25 = (uint)uVar22;
    uVar3 = 4;
    if (uVar25 < 4) {
      uVar3 = uVar25;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) goto LAB_10029e0d8;
      uVar19 = (uint)(byte)*param_2;
    }
    else if (uVar3 == 2) {
      uVar19 = (uint)(ushort)*param_2;
    }
    else if (uVar3 == 3) {
      uVar19 = (uint)(uint3)*param_2;
    }
    else {
      uVar19 = *param_2;
    }
    if (3 < uVar25) {
      uVar19 = uVar19 + 2;
      goto LAB_10029e0d8;
    }
    if ((uVar19 | bVar10 - 2 << (ulong)((uVar25 & 3) << 3)) != 0xffffffff) goto LAB_10029e288;
  }
  uVar19 = (int)uVar2 << 3;
  local_88 = CONCAT44(local_88._4_4_,uVar19);
  puVar28 = param_2;
  local_80 = lVar23;
  local_78 = uVar2 + 1;
  local_70 = uVar2;
  (**(code **)(lVar35 + 0x30))(param_2,1,lVar13);
  pvVar36 = local_68;
  if ((int)puVar28 == 0) {
    (**(code **)(lVar35 + 0x10))(local_68,param_2,lVar13);
    (**(code **)(lVar35 + 0x38))(pvVar36,0,1,lVar13);
  }
  else {
    _memcpy(local_68,param_2,sVar20);
  }
  uVar4 = local_70;
  puVar18 = (undefined8 *)((long)pvVar36 + sVar20 + 7 & 0xfffffffffffffff8);
  puVar21 = (undefined8 *)((ulong)((long)param_2 + sVar20 + 7) & 0xfffffffffffffff8);
  *puVar18 = *puVar21;
  puVar18 = puVar18 + 1;
  puVar21 = puVar21 + 1;
  pvVar34 = (void *)*puVar21;
  *puVar18 = pvVar34;
  puVar18 = (undefined8 *)((long)puVar18 + uVar32 + 8 & ~uVar32);
  puVar28 = (uint *)((long)puVar21 + uVar32 + 8 & ~uVar32);
  bVar10 = *(byte *)((long)puVar28 + local_70);
  uVar25 = (uint)bVar10;
  uVar17 = (uint)local_70;
  uVar3 = 0xf0;
  if (uVar17 < 4) {
    uVar3 = 0xf0 - (1U >> (ulong)(uVar19 & 0x1f));
  }
  if ((bVar10 ^ 0xff) < uVar3) {
    _memcpy(puVar18,puVar28,local_78);
    uVar16 = 1;
    goto LAB_10029e354;
  }
  if (0xe < bVar10) {
    uVar19 = 4;
    if (uVar17 < 4) {
      uVar19 = uVar17;
    }
    if ((int)uVar19 < 2) {
      if (uVar19 == 0) goto LAB_10029e3b4;
      uVar19 = (uint)(byte)*puVar28;
    }
    else if (uVar19 == 2) {
      uVar19 = (uint)(ushort)*puVar28;
    }
    else if (uVar19 == 3) {
      uVar19 = (uint)(uint3)*puVar28;
    }
    else {
      uVar19 = *puVar28;
    }
    uVar25 = uVar19 | bVar10 - 0xf << (ulong)((uint)local_88 & 0x1f);
    if (3 < uVar17) {
      uVar25 = uVar19;
    }
    uVar25 = uVar25 + 0xf;
  }
LAB_10029e3b4:
  switch(uVar25) {
  case 0:
    uVar27 = *(undefined8 *)puVar28;
    _swift_errorRetain(uVar27);
    *puVar18 = uVar27;
    *(undefined1 *)((long)puVar18 + uVar4) = 0;
    uVar16 = 1;
    goto LAB_10029e354;
  case 1:
    uVar27 = *(undefined8 *)puVar28;
    _swift_errorRetain(uVar27);
    *puVar18 = uVar27;
    uVar16 = 1;
    *(undefined1 *)((long)puVar18 + uVar4) = 1;
    goto LAB_10029e354;
  case 2:
    uVar31 = ~uVar31;
    uVar27 = *(undefined8 *)puVar28;
    _swift_errorRetain(uVar27);
    *puVar18 = uVar27;
    uVar24 = uVar29 + (long)puVar18 & uVar31;
    uVar29 = (ulong)(uVar29 + (long)puVar28) & uVar31;
    pcVar30 = *(code **)(lVar26 + 0x10);
    (*pcVar30)(uVar24,uVar29,lVar14);
    (*pcVar30)(lVar1 + uVar24 & uVar31,lVar1 + uVar29 & uVar31,lVar14);
    *(undefined1 *)((long)puVar18 + uVar4) = 2;
    uVar16 = 1;
    goto LAB_10029e354;
  case 3:
    lVar13 = *(long *)(puVar28 + 6);
    puVar18[3] = lVar13;
    puVar18[4] = *(undefined8 *)(puVar28 + 8);
    (*(code *)**(undefined8 **)(lVar13 + -8))(puVar18,puVar28);
    uVar16 = 3;
    break;
  case 4:
    bVar10 = *(byte *)((long)puVar28 + uVar24);
    uVar19 = (uint)bVar10;
    if (0xc < bVar10) {
      uVar25 = (uint)uVar24;
      uVar3 = 4;
      if (uVar25 < 4) {
        uVar3 = uVar25;
      }
      if ((int)uVar3 < 2) {
        if (uVar3 == 0) goto LAB_10029e734;
        uVar19 = (uint)(byte)*puVar28;
      }
      else if (uVar3 == 2) {
        uVar19 = (uint)(ushort)*puVar28;
      }
      else if (uVar3 == 3) {
        uVar19 = (uint)(uint3)*puVar28;
      }
      else {
        uVar19 = *puVar28;
      }
      if (uVar25 < 4) {
        uVar19 = (uVar19 | bVar10 - 0xd << (ulong)((uVar25 & 3) << 3)) + 0xd;
      }
      else {
        uVar19 = uVar19 + 0xd;
      }
    }
LAB_10029e734:
                    /* WARNING: Could not recover jumptable at 0x00010029e74c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_10029e750 + (ulong)(byte)(&DAT_1008173bd)[uVar19] * 4))(pvVar34);
    return pvVar34;
  case 5:
    uVar27 = *(undefined8 *)puVar28;
    FUN_10027c0e0(uVar27);
    *puVar18 = uVar27;
    uVar16 = 5;
    break;
  case 6:
    uVar27 = *(undefined8 *)puVar28;
    uVar7 = *(undefined8 *)(puVar28 + 2);
    uVar19 = puVar28[4];
    FUN_10027c0fc(uVar27,uVar7,(byte)uVar19);
    *puVar18 = uVar27;
    puVar18[1] = uVar7;
    *(byte *)(puVar18 + 2) = (byte)uVar19;
    uVar16 = 6;
    break;
  case 7:
    uVar27 = *(undefined8 *)puVar28;
    _swift_errorRetain(uVar27);
    *puVar18 = uVar27;
    uVar16 = 7;
    break;
  case 8:
    uVar27 = *(undefined8 *)puVar28;
    _swift_errorRetain(uVar27);
    *puVar18 = uVar27;
    uVar27 = *(undefined8 *)(puVar28 + 2);
    _swift_errorRetain(uVar27);
    puVar18[1] = uVar27;
    uVar16 = 8;
    break;
  case 9:
    bVar10 = *(byte *)((long)puVar28 + uVar5);
    uVar19 = (uint)bVar10;
    if (4 < bVar10) {
      uVar25 = (uint)uVar5;
      uVar3 = 4;
      if (uVar25 < 4) {
        uVar3 = uVar25;
      }
      if ((int)uVar3 < 2) {
        if (uVar3 == 0) goto LAB_10029e790;
        uVar19 = (uint)(byte)*puVar28;
      }
      else if (uVar3 == 2) {
        uVar19 = (uint)(ushort)*puVar28;
      }
      else if (uVar3 == 3) {
        uVar19 = (uint)(uint3)*puVar28;
      }
      else {
        uVar19 = *puVar28;
      }
      if (uVar25 < 4) {
        uVar19 = (uVar19 | bVar10 - 5 << (ulong)((uVar25 & 3) << 3)) + 5;
      }
      else {
        uVar19 = uVar19 + 5;
      }
    }
LAB_10029e790:
    if ((int)uVar19 < 2) {
      if (uVar19 == 0) {
        (**(code **)(lVar26 + 0x10))(puVar18,puVar28,lVar14);
        *(undefined1 *)((long)puVar18 + uVar5) = 0;
      }
      else if (uVar19 == 1) {
        *puVar18 = *(undefined8 *)puVar28;
        *(undefined1 *)((long)puVar18 + uVar5) = 1;
        _swift_bridgeObjectRetain();
      }
      else {
LAB_10029e858:
        _memcpy(puVar18,puVar28,uVar5 + 1);
      }
    }
    else if (uVar19 == 2) {
      *puVar18 = *(undefined8 *)puVar28;
      puVar18[1] = *(undefined8 *)(puVar28 + 2);
      uVar27 = *(undefined8 *)(puVar28 + 4);
      puVar18[2] = uVar27;
      *(undefined1 *)((long)puVar18 + uVar5) = 2;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar27);
    }
    else {
      if (uVar19 == 3) {
        *puVar18 = *(undefined8 *)puVar28;
        uVar16 = 3;
      }
      else {
        if (uVar19 != 4) goto LAB_10029e858;
        uVar27 = *(undefined8 *)puVar28;
        _swift_errorRetain(uVar27);
        *puVar18 = uVar27;
        uVar16 = 4;
      }
      *(undefined1 *)((long)puVar18 + uVar5) = uVar16;
    }
    uVar16 = 9;
    goto LAB_10029eb3c;
  case 10:
    bVar10 = *(byte *)((long)puVar28 + uVar6);
    uVar19 = (uint)bVar10;
    if (5 < bVar10) {
      uVar25 = (uint)uVar6;
      uVar3 = 4;
      if (uVar25 < 4) {
        uVar3 = uVar25;
      }
      if ((int)uVar3 < 2) {
        if (uVar3 == 0) goto LAB_10029e89c;
        uVar19 = (uint)(byte)*puVar28;
      }
      else if (uVar3 == 2) {
        uVar19 = (uint)(ushort)*puVar28;
      }
      else if (uVar3 == 3) {
        uVar19 = (uint)(uint3)*puVar28;
      }
      else {
        uVar19 = *puVar28;
      }
      if (uVar25 < 4) {
        uVar19 = (uVar19 | bVar10 - 6 << (ulong)((uVar25 & 3) << 3)) + 6;
      }
      else {
        uVar19 = uVar19 + 6;
      }
    }
LAB_10029e89c:
    if ((int)uVar19 < 3) {
      if (uVar19 == 0) {
        (**(code **)(lVar26 + 0x10))(puVar18,puVar28,lVar14);
        *(undefined1 *)((long)puVar18 + uVar6) = 0;
        uVar16 = 10;
        goto LAB_10029eb3c;
      }
      if (uVar19 == 1) {
        (**(code **)(local_80 + 0x10))(puVar18,puVar28,lVar15);
        uVar16 = 1;
      }
      else {
        if (uVar19 != 2) {
LAB_10029e944:
          _memcpy(puVar18,puVar28,uVar6 + 1);
          uVar16 = 10;
          goto LAB_10029eb3c;
        }
        uVar27 = *(undefined8 *)puVar28;
        _swift_errorRetain(uVar27);
        *puVar18 = uVar27;
        uVar16 = 2;
      }
    }
    else if (uVar19 == 3) {
      uVar27 = *(undefined8 *)puVar28;
      _swift_errorRetain(uVar27);
      *puVar18 = uVar27;
      uVar16 = 3;
    }
    else {
      if (uVar19 != 4) {
        if (uVar19 != 5) goto LAB_10029e944;
        *puVar18 = *(undefined8 *)puVar28;
        puVar18[1] = *(undefined8 *)(puVar28 + 2);
        *(undefined1 *)((long)puVar18 + uVar6) = 5;
        _swift_bridgeObjectRetain();
        uVar16 = 10;
        goto LAB_10029eb3c;
      }
      uVar27 = *(undefined8 *)puVar28;
      _swift_errorRetain(uVar27);
      *puVar18 = uVar27;
      uVar16 = 4;
    }
    *(undefined1 *)((long)puVar18 + uVar6) = uVar16;
    uVar16 = 10;
LAB_10029eb3c:
    *(undefined1 *)((long)puVar18 + local_70) = uVar16;
    uVar16 = 1;
    goto LAB_10029e354;
  case 0xb:
    uVar27 = *(undefined8 *)puVar28;
    uVar8 = *(undefined8 *)(puVar28 + 2);
    uVar7 = *(undefined8 *)(puVar28 + 4);
    uVar9 = *(undefined8 *)(puVar28 + 6);
    uVar33 = *(undefined8 *)(puVar28 + 8);
    uVar19 = puVar28[10];
    FUN_10027c10c(uVar27,uVar8,uVar7,uVar9,uVar33,(byte)uVar19);
    *puVar18 = uVar27;
    puVar18[1] = uVar8;
    puVar18[2] = uVar7;
    puVar18[3] = uVar9;
    puVar18[4] = uVar33;
    uVar16 = 1;
    *(byte *)(puVar18 + 5) = (byte)uVar19;
    *(undefined1 *)((long)puVar18 + uVar4) = 0xb;
    goto LAB_10029e354;
  case 0xc:
    uVar27 = *(undefined8 *)puVar28;
    _swift_errorRetain(uVar27);
    *puVar18 = uVar27;
    uVar16 = 0xc;
    break;
  case 0xd:
    uVar27 = *(undefined8 *)puVar28;
    _swift_errorRetain(uVar27);
    *puVar18 = uVar27;
    uVar16 = 0xd;
    break;
  case 0xe:
    uVar27 = *(undefined8 *)puVar28;
    uVar7 = *(undefined8 *)(puVar28 + 2);
    FUN_100008184(uVar27,uVar7);
    *puVar18 = uVar27;
    puVar18[1] = uVar7;
    uVar16 = 0xe;
    break;
  default:
    _memcpy(puVar18,puVar28,local_78);
    uVar16 = 1;
    goto LAB_10029e354;
  }
  *(undefined1 *)((long)puVar18 + uVar4) = uVar16;
  uVar16 = 1;
LAB_10029e354:
  *(undefined1 *)((long)pvVar36 + uVar22) = uVar16;
  return pvVar36;
}

