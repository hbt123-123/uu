// rea decompile_all
// name: FUN_1002989e0
// address: 0x1002989e0
// body: available
// range: 0x1002989e0-0x10029924f inclusive
// range: 0x10029926c-0x10029949f inclusive
// range: 0x10029963c-0x100299647 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void * FUN_1002989e0(void *param_1,uint *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  size_t *psVar10;
  bool bVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 uVar15;
  uint uVar16;
  undefined8 *puVar17;
  uint uVar18;
  size_t sVar19;
  undefined8 *puVar20;
  ulong uVar21;
  size_t sVar22;
  uint uVar23;
  long lVar24;
  undefined8 uVar25;
  ulong uVar26;
  uint uVar27;
  ulong uVar28;
  code *pcVar29;
  undefined8 uVar30;
  uint *puVar31;
  ulong uVar32;
  ulong uVar33;
  long lVar34;
  void *pvVar35;
  size_t local_88;
  size_t local_80;
  ulong local_78;
  ulong local_70;
  void *local_68;
  
  local_70 = *(ulong *)(param_3 + 0x10);
  local_78 = *(ulong *)(param_3 + 0x18);
  local_80 = *(size_t *)(local_70 - 8);
  local_88 = *(size_t *)(local_78 - 8);
  uVar3 = *(ulong *)(local_88 + 0x40);
  if (*(ulong *)(local_88 + 0x40) <= *(ulong *)(local_80 + 0x40)) {
    uVar3 = *(ulong *)(local_80 + 0x40);
  }
  lVar12 = 0;
  local_68 = param_1;
  __s10Foundation10URLRequestVMa();
  lVar34 = *(long *)(lVar12 + -8);
  sVar19 = *(size_t *)(lVar34 + 0x40);
  if (*(int *)(lVar34 + 0x54) == 0) {
    sVar19 = sVar19 + 1;
  }
  lVar13 = 0;
  __s10Foundation3URLVMa();
  lVar24 = *(long *)(lVar13 + -8);
  uVar18 = *(uint *)(lVar24 + 0x50);
  uVar33 = (ulong)uVar18 & 0xff;
  lVar14 = 0;
  __sSS10FoundationE8EncodingVMa();
  pvVar35 = local_68;
  sVar22 = *(size_t *)(lVar14 + -8);
  uVar28 = (ulong)((*(uint *)(sVar22 + 0x50) | uVar18) & 0xf8 | 7);
  uVar32 = uVar33 + 8;
  uVar21 = *(ulong *)(lVar24 + 0x40);
  lVar1 = uVar21 + uVar33;
  uVar2 = (lVar1 + (uVar32 & (uVar33 ^ 0xffffffffffffffff)) & (uVar33 ^ 0xffffffffffffffff)) +
          uVar21;
  uVar26 = (uVar21 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar26 <= uVar21) {
    uVar26 = uVar21;
  }
  if (uVar26 < 9) {
    uVar26 = 8;
  }
  if (uVar2 <= uVar26 + 1) {
    uVar2 = uVar26 + 1;
  }
  uVar4 = uVar21;
  if (uVar21 < 0x19) {
    uVar4 = 0x18;
  }
  if (uVar2 <= uVar4 + 1) {
    uVar2 = uVar4 + 1;
  }
  uVar5 = *(ulong *)(sVar22 + 0x40);
  if (*(ulong *)(sVar22 + 0x40) <= uVar21) {
    uVar5 = uVar21;
  }
  if (uVar5 < 0x11) {
    uVar5 = 0x10;
  }
  if (uVar2 <= uVar5 + 1) {
    uVar2 = uVar5 + 1;
  }
  if (uVar2 < 0x2a) {
    uVar2 = 0x29;
  }
  uVar21 = uVar2 + 1 +
           (uVar28 + (sVar19 + 7 & 0xfffffffffffffff8) + 0x10 & (uVar28 ^ 0xffffffffffffffff));
  if (uVar21 <= uVar3 + 1) {
    uVar21 = uVar3 + 1;
  }
  bVar9 = *(byte *)((long)param_2 + uVar21);
  uVar18 = (uint)bVar9;
  if (bVar9 < 2) {
    if (bVar9 != 1) goto LAB_100298b94;
  }
  else {
    uVar23 = (uint)uVar21;
    uVar27 = 4;
    if (uVar23 < 4) {
      uVar27 = uVar23;
    }
    if ((int)uVar27 < 2) {
      if (uVar27 != 0) {
        uVar18 = (uint)(byte)*param_2;
        goto joined_r0x000100298bec;
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
joined_r0x000100298bec:
      if (3 < uVar23) {
        if (uVar18 != 0xffffffff) goto LAB_100298b94;
        goto LAB_100298c08;
      }
      uVar18 = (uVar18 | bVar9 - 2 << (ulong)((uVar23 & 3) << 3)) + 2;
    }
    if (uVar18 != 1) {
LAB_100298b94:
      bVar9 = *(byte *)((long)param_2 + uVar3);
      uVar18 = (uint)bVar9;
      if (1 < bVar9) {
        uVar23 = (uint)uVar3;
        uVar27 = 4;
        if (uVar23 < 4) {
          uVar27 = uVar23;
        }
        if ((int)uVar27 < 2) {
          if (uVar27 == 0) goto LAB_100298e08;
          uVar18 = (uint)(byte)*param_2;
        }
        else if (uVar27 == 2) {
          uVar18 = (uint)(ushort)*param_2;
        }
        else if (uVar27 == 3) {
          uVar18 = (uint)(uint3)*param_2;
        }
        else {
          uVar18 = *param_2;
        }
        if (uVar23 < 4) {
          uVar18 = (uVar18 | bVar9 - 2 << (ulong)((uVar23 & 3) << 3)) + 2;
        }
        else {
          uVar18 = uVar18 + 2;
        }
      }
LAB_100298e08:
      bVar11 = uVar18 == 1;
      psVar10 = &local_88;
      if (!bVar11) {
        psVar10 = &local_80;
      }
      uVar32 = local_78;
      if (!bVar11) {
        uVar32 = local_70;
      }
      (**(code **)(*psVar10 + 0x10))(local_68,param_2,uVar32);
      *(bool *)((long)pvVar35 + uVar3) = bVar11;
      *(undefined1 *)((long)pvVar35 + uVar21) = 0;
      goto LAB_100298e3c;
    }
  }
LAB_100298c08:
  uVar18 = (int)uVar2 << 3;
  puVar31 = param_2;
  local_88 = sVar22;
  local_80 = uVar2 + 1;
  local_78 = uVar21;
  local_70 = uVar2;
  (**(code **)(lVar34 + 0x30))(param_2,1,lVar12);
  pvVar35 = local_68;
  if ((int)puVar31 == 0) {
    (**(code **)(lVar34 + 0x10))(local_68,param_2,lVar12);
    (**(code **)(lVar34 + 0x38))(pvVar35,0,1,lVar12);
  }
  else {
    _memcpy(local_68,param_2,sVar19);
  }
  uVar3 = local_70;
  uVar21 = local_78;
  puVar17 = (undefined8 *)((long)pvVar35 + sVar19 + 7 & 0xfffffffffffffff8);
  puVar20 = (undefined8 *)((ulong)((long)param_2 + sVar19 + 7) & 0xfffffffffffffff8);
  *puVar17 = *puVar20;
  puVar17 = puVar17 + 1;
  puVar20 = puVar20 + 1;
  pvVar35 = (void *)*puVar20;
  *puVar17 = pvVar35;
  puVar17 = (undefined8 *)((long)puVar17 + uVar28 + 8 & ~uVar28);
  puVar31 = (uint *)((long)puVar20 + uVar28 + 8 & ~uVar28);
  bVar9 = *(byte *)((long)puVar31 + local_70);
  uVar27 = (uint)bVar9;
  uVar16 = (uint)local_70;
  uVar23 = 0xf0;
  if (uVar16 < 4) {
    uVar23 = 0xf0 - (1U >> (ulong)(uVar18 & 0x1f));
  }
  if ((bVar9 ^ 0xff) < uVar23) {
    _memcpy(puVar17,puVar31,local_80);
    uVar21 = local_78;
    goto LAB_100298d30;
  }
  if (0xe < bVar9) {
    uVar23 = 4;
    if (uVar16 < 4) {
      uVar23 = uVar16;
    }
    if ((int)uVar23 < 2) {
      if (uVar23 == 0) goto LAB_100298ea8;
      uVar27 = (uint)(byte)*puVar31;
    }
    else if (uVar23 == 2) {
      uVar27 = (uint)(ushort)*puVar31;
    }
    else if (uVar23 == 3) {
      uVar27 = (uint)(uint3)*puVar31;
    }
    else {
      uVar27 = *puVar31;
    }
    if (uVar16 < 4) {
      uVar27 = uVar27 | bVar9 - 0xf << (ulong)(uVar18 & 0x1f);
    }
    uVar27 = uVar27 + 0xf;
  }
LAB_100298ea8:
  switch(uVar27) {
  case 0:
    uVar30 = *(undefined8 *)puVar31;
    _swift_errorRetain(uVar30);
    *puVar17 = uVar30;
    *(undefined1 *)((long)puVar17 + uVar3) = 0;
    uVar21 = local_78;
    break;
  case 1:
    uVar30 = *(undefined8 *)puVar31;
    _swift_errorRetain(uVar30);
    *puVar17 = uVar30;
    *(undefined1 *)((long)puVar17 + uVar3) = 1;
    uVar21 = local_78;
    break;
  case 2:
    uVar33 = ~uVar33;
    uVar30 = *(undefined8 *)puVar31;
    _swift_errorRetain(uVar30);
    *puVar17 = uVar30;
    uVar26 = uVar32 + (long)puVar17 & uVar33;
    uVar32 = (ulong)(uVar32 + (long)puVar31) & uVar33;
    pcVar29 = *(code **)(lVar24 + 0x10);
    (*pcVar29)(uVar26,uVar32,lVar13);
    (*pcVar29)(lVar1 + uVar26 & uVar33,lVar1 + uVar32 & uVar33,lVar13);
    *(undefined1 *)((long)puVar17 + uVar3) = 2;
    uVar21 = local_78;
    break;
  case 3:
    lVar12 = *(long *)(puVar31 + 6);
    puVar17[3] = lVar12;
    puVar17[4] = *(undefined8 *)(puVar31 + 8);
    (*(code *)**(undefined8 **)(lVar12 + -8))(puVar17,puVar31);
    *(undefined1 *)((long)puVar17 + uVar3) = 3;
    uVar21 = local_78;
    break;
  case 4:
    bVar9 = *(byte *)((long)puVar31 + uVar26);
    uVar18 = (uint)bVar9;
    if (0xc < bVar9) {
      uVar23 = (uint)uVar26;
      uVar27 = 4;
      if (uVar23 < 4) {
        uVar27 = uVar23;
      }
      if ((int)uVar27 < 2) {
        if (uVar27 == 0) goto LAB_100299230;
        uVar18 = (uint)(byte)*puVar31;
      }
      else if (uVar27 == 2) {
        uVar18 = (uint)(ushort)*puVar31;
      }
      else if (uVar27 == 3) {
        uVar18 = (uint)(uint3)*puVar31;
      }
      else {
        uVar18 = *puVar31;
      }
      if (uVar23 < 4) {
        uVar18 = (uVar18 | bVar9 - 0xd << (ulong)((uVar23 & 3) << 3)) + 0xd;
      }
      else {
        uVar18 = uVar18 + 0xd;
      }
    }
LAB_100299230:
                    /* WARNING: Could not recover jumptable at 0x00010029924c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100299250 + (ulong)(byte)(&DAT_10081727b)[uVar18] * 4))(pvVar35);
    return pvVar35;
  case 5:
    uVar30 = *(undefined8 *)puVar31;
    FUN_10027c0e0(uVar30);
    *puVar17 = uVar30;
    *(undefined1 *)((long)puVar17 + uVar3) = 5;
    uVar21 = local_78;
    break;
  case 6:
    uVar30 = *(undefined8 *)puVar31;
    uVar6 = *(undefined8 *)(puVar31 + 2);
    uVar18 = puVar31[4];
    FUN_10027c0fc(uVar30,uVar6,(byte)uVar18);
    *puVar17 = uVar30;
    puVar17[1] = uVar6;
    *(byte *)(puVar17 + 2) = (byte)uVar18;
    *(undefined1 *)((long)puVar17 + uVar3) = 6;
    uVar21 = local_78;
    break;
  case 7:
    uVar30 = *(undefined8 *)puVar31;
    _swift_errorRetain(uVar30);
    *puVar17 = uVar30;
    *(undefined1 *)((long)puVar17 + uVar3) = 7;
    uVar21 = local_78;
    break;
  case 8:
    uVar30 = *(undefined8 *)puVar31;
    _swift_errorRetain(uVar30);
    *puVar17 = uVar30;
    uVar30 = *(undefined8 *)(puVar31 + 2);
    _swift_errorRetain(uVar30);
    puVar17[1] = uVar30;
    *(undefined1 *)((long)puVar17 + uVar3) = 8;
    uVar21 = local_78;
    break;
  case 9:
    bVar9 = *(byte *)((long)puVar31 + uVar4);
    uVar18 = (uint)bVar9;
    if (4 < bVar9) {
      uVar23 = (uint)uVar4;
      uVar27 = 4;
      if (uVar23 < 4) {
        uVar27 = uVar23;
      }
      if ((int)uVar27 < 2) {
        if (uVar27 == 0) goto LAB_100299290;
        uVar18 = (uint)(byte)*puVar31;
      }
      else if (uVar27 == 2) {
        uVar18 = (uint)(ushort)*puVar31;
      }
      else if (uVar27 == 3) {
        uVar18 = (uint)(uint3)*puVar31;
      }
      else {
        uVar18 = *puVar31;
      }
      if (uVar23 < 4) {
        uVar18 = (uVar18 | bVar9 - 5 << (ulong)((uVar23 & 3) << 3)) + 5;
      }
      else {
        uVar18 = uVar18 + 5;
      }
    }
LAB_100299290:
    if ((int)uVar18 < 2) {
      if (uVar18 == 0) {
        (**(code **)(lVar24 + 0x10))(puVar17,puVar31,lVar13);
        *(undefined1 *)((long)puVar17 + uVar4) = 0;
      }
      else if (uVar18 == 1) {
        *puVar17 = *(undefined8 *)puVar31;
        *(undefined1 *)((long)puVar17 + uVar4) = 1;
        _swift_bridgeObjectRetain();
      }
      else {
LAB_100299358:
        _memcpy(puVar17,puVar31,uVar4 + 1);
      }
    }
    else if (uVar18 == 2) {
      *puVar17 = *(undefined8 *)puVar31;
      puVar17[1] = *(undefined8 *)(puVar31 + 2);
      uVar30 = *(undefined8 *)(puVar31 + 4);
      puVar17[2] = uVar30;
      *(undefined1 *)((long)puVar17 + uVar4) = 2;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar30);
    }
    else if (uVar18 == 3) {
      *puVar17 = *(undefined8 *)puVar31;
      *(undefined1 *)((long)puVar17 + uVar4) = 3;
    }
    else {
      if (uVar18 != 4) goto LAB_100299358;
      uVar30 = *(undefined8 *)puVar31;
      _swift_errorRetain(uVar30);
      *puVar17 = uVar30;
      *(undefined1 *)((long)puVar17 + uVar4) = 4;
    }
    uVar15 = 9;
    goto LAB_10029963c;
  case 10:
    bVar9 = *(byte *)((long)puVar31 + uVar5);
    uVar18 = (uint)bVar9;
    if (5 < bVar9) {
      uVar23 = (uint)uVar5;
      uVar27 = 4;
      if (uVar23 < 4) {
        uVar27 = uVar23;
      }
      if ((int)uVar27 < 2) {
        if (uVar27 == 0) goto LAB_10029939c;
        uVar18 = (uint)(byte)*puVar31;
      }
      else if (uVar27 == 2) {
        uVar18 = (uint)(ushort)*puVar31;
      }
      else if (uVar27 == 3) {
        uVar18 = (uint)(uint3)*puVar31;
      }
      else {
        uVar18 = *puVar31;
      }
      if (uVar23 < 4) {
        uVar18 = (uVar18 | bVar9 - 6 << (ulong)((uVar23 & 3) << 3)) + 6;
      }
      else {
        uVar18 = uVar18 + 6;
      }
    }
LAB_10029939c:
    if ((int)uVar18 < 3) {
      if (uVar18 == 0) {
        (**(code **)(lVar24 + 0x10))(puVar17,puVar31,lVar13);
        *(undefined1 *)((long)puVar17 + uVar5) = 0;
        uVar15 = 10;
        goto LAB_10029963c;
      }
      if (uVar18 == 1) {
        (**(code **)(local_88 + 0x10))(puVar17,puVar31,lVar14);
        uVar15 = 1;
      }
      else {
        if (uVar18 != 2) {
LAB_10029944c:
          _memcpy(puVar17,puVar31,uVar5 + 1);
          uVar15 = 10;
          goto LAB_10029963c;
        }
        uVar30 = *(undefined8 *)puVar31;
        _swift_errorRetain(uVar30);
        *puVar17 = uVar30;
        uVar15 = 2;
      }
    }
    else if (uVar18 == 3) {
      uVar30 = *(undefined8 *)puVar31;
      _swift_errorRetain(uVar30);
      *puVar17 = uVar30;
      uVar15 = 3;
    }
    else {
      if (uVar18 != 4) {
        if (uVar18 != 5) goto LAB_10029944c;
        *puVar17 = *(undefined8 *)puVar31;
        puVar17[1] = *(undefined8 *)(puVar31 + 2);
        *(undefined1 *)((long)puVar17 + uVar5) = 5;
        _swift_bridgeObjectRetain();
        uVar15 = 10;
        goto LAB_10029963c;
      }
      uVar30 = *(undefined8 *)puVar31;
      _swift_errorRetain(uVar30);
      *puVar17 = uVar30;
      uVar15 = 4;
    }
    *(undefined1 *)((long)puVar17 + uVar5) = uVar15;
    uVar15 = 10;
LAB_10029963c:
    *(undefined1 *)((long)puVar17 + local_70) = uVar15;
    break;
  case 0xb:
    uVar30 = *(undefined8 *)puVar31;
    uVar7 = *(undefined8 *)(puVar31 + 2);
    uVar6 = *(undefined8 *)(puVar31 + 4);
    uVar8 = *(undefined8 *)(puVar31 + 6);
    uVar25 = *(undefined8 *)(puVar31 + 8);
    uVar18 = puVar31[10];
    FUN_10027c10c(uVar30,uVar7,uVar6,uVar8,uVar25,(byte)uVar18);
    *puVar17 = uVar30;
    puVar17[1] = uVar7;
    puVar17[2] = uVar6;
    puVar17[3] = uVar8;
    puVar17[4] = uVar25;
    *(byte *)(puVar17 + 5) = (byte)uVar18;
    *(undefined1 *)((long)puVar17 + uVar3) = 0xb;
    uVar21 = local_78;
    break;
  case 0xc:
    uVar30 = *(undefined8 *)puVar31;
    _swift_errorRetain(uVar30);
    *puVar17 = uVar30;
    *(undefined1 *)((long)puVar17 + uVar3) = 0xc;
    uVar21 = local_78;
    break;
  case 0xd:
    uVar30 = *(undefined8 *)puVar31;
    _swift_errorRetain(uVar30);
    *puVar17 = uVar30;
    *(undefined1 *)((long)puVar17 + uVar3) = 0xd;
    uVar21 = local_78;
    break;
  case 0xe:
    uVar30 = *(undefined8 *)puVar31;
    uVar6 = *(undefined8 *)(puVar31 + 2);
    FUN_100008184(uVar30,uVar6);
    *puVar17 = uVar30;
    puVar17[1] = uVar6;
    *(undefined1 *)((long)puVar17 + uVar3) = 0xe;
    uVar21 = local_78;
    break;
  default:
    _memcpy(puVar17,puVar31,local_80);
    uVar21 = local_78;
  }
LAB_100298d30:
  *(undefined1 *)((long)local_68 + uVar21) = 1;
  pvVar35 = local_68;
LAB_100298e3c:
  _swift_weakCopyInit(uVar21 + 8 + (long)pvVar35 & 0xfffffffffffffff8,
                      (ulong)(uVar21 + 8 + (long)param_2) & 0xfffffffffffffff8);
  return pvVar35;
}

