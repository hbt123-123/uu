// rea decompile_all
// name: FUN_10029fcac
// address: 0x10029fcac
// body: available
// range: 0x10029fcac-0x1002a039b inclusive
// range: 0x1002a03bc-0x1002a05c7 inclusive
// range: 0x1002a0770-0x1002a079f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10029fcac(undefined8 *param_1,uint *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  ulong *puVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  undefined1 uVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint uVar16;
  size_t sVar17;
  undefined8 *puVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  code *pcVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  undefined8 *local_68;
  
  local_70 = *(long *)(param_3 + 0x10);
  local_78 = *(long *)(param_3 + 0x18);
  local_80 = *(ulong *)(local_70 + -8);
  local_88 = *(ulong *)(local_78 + -8);
  uVar23 = *(ulong *)(local_88 + 0x40);
  if (*(ulong *)(local_88 + 0x40) <= *(ulong *)(local_80 + 0x40)) {
    uVar23 = *(ulong *)(local_80 + 0x40);
  }
  lVar8 = 0;
  local_68 = param_1;
  __s10Foundation10URLRequestVMa();
  lVar28 = *(long *)(lVar8 + -8);
  sVar17 = *(size_t *)(lVar28 + 0x40);
  if (*(int *)(lVar28 + 0x54) == 0) {
    sVar17 = sVar17 + 1;
  }
  lVar9 = 0;
  __s10Foundation3URLVMa();
  lVar26 = *(long *)(lVar9 + -8);
  uVar15 = *(uint *)(lVar26 + 0x50);
  uVar24 = (ulong)uVar15 & 0xff;
  lVar10 = 0;
  __sSS10FoundationE8EncodingVMa();
  puVar29 = local_68;
  lVar21 = *(long *)(lVar10 + -8);
  uVar27 = (ulong)((*(uint *)(lVar21 + 0x50) | uVar15) & 0xf8 | 7);
  uVar19 = *(ulong *)(lVar26 + 0x40);
  lVar1 = uVar19 + uVar24;
  uVar2 = (lVar1 + (uVar24 + 8 & (uVar24 ^ 0xffffffffffffffff)) & (uVar24 ^ 0xffffffffffffffff)) +
          uVar19;
  uVar22 = (uVar19 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar22 <= uVar19) {
    uVar22 = uVar19;
  }
  if (uVar22 < 9) {
    uVar22 = 8;
  }
  if (uVar2 <= uVar22 + 1) {
    uVar2 = uVar22 + 1;
  }
  uVar3 = uVar19;
  if (uVar19 < 0x19) {
    uVar3 = 0x18;
  }
  if (uVar2 <= uVar3 + 1) {
    uVar2 = uVar3 + 1;
  }
  uVar4 = *(ulong *)(lVar21 + 0x40);
  if (*(ulong *)(lVar21 + 0x40) <= uVar19) {
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
           (uVar27 + (sVar17 + 7 & 0xfffffffffffffff8) + 0x10 & (uVar27 ^ 0xffffffffffffffff));
  if (uVar19 <= uVar23 + 1) {
    uVar19 = uVar23 + 1;
  }
  bVar5 = *(byte *)((long)param_2 + uVar19);
  uVar15 = (uint)bVar5;
  if (bVar5 < 2) {
LAB_10029fe7c:
    if (uVar15 != 1) {
LAB_1002a0000:
      bVar5 = *(byte *)((long)param_2 + uVar23);
      uVar15 = (uint)bVar5;
      if (1 < bVar5) {
        uVar13 = (uint)uVar23;
        uVar16 = 4;
        if (uVar13 < 4) {
          uVar16 = uVar13;
        }
        if ((int)uVar16 < 2) {
          if (uVar16 == 0) goto LAB_1002a008c;
          uVar15 = (uint)(byte)*param_2;
        }
        else if (uVar16 == 2) {
          uVar15 = (uint)(ushort)*param_2;
        }
        else if (uVar16 == 3) {
          uVar15 = (uint)(uint3)*param_2;
        }
        else {
          uVar15 = *param_2;
        }
        if (uVar13 < 4) {
          uVar15 = (uVar15 | bVar5 - 2 << (ulong)((uVar13 & 3) << 3)) + 2;
        }
        else {
          uVar15 = uVar15 + 2;
        }
      }
LAB_1002a008c:
      bVar7 = uVar15 == 1;
      puVar6 = &local_88;
      if (!bVar7) {
        puVar6 = &local_80;
      }
      uVar22 = local_78;
      if (!bVar7) {
        uVar22 = local_70;
      }
      (**(code **)(*puVar6 + 0x20))(local_68,param_2,uVar22);
      uVar12 = 0;
      *(bool *)((long)puVar29 + uVar23) = bVar7;
      local_78 = uVar19;
      goto LAB_1002a0778;
    }
  }
  else {
    uVar13 = (uint)uVar19;
    uVar16 = 4;
    if (uVar13 < 4) {
      uVar16 = uVar13;
    }
    if ((int)uVar16 < 2) {
      if (uVar16 == 0) goto LAB_10029fe7c;
      uVar15 = (uint)(byte)*param_2;
    }
    else if (uVar16 == 2) {
      uVar15 = (uint)(ushort)*param_2;
    }
    else if (uVar16 == 3) {
      uVar15 = (uint)(uint3)*param_2;
    }
    else {
      uVar15 = *param_2;
    }
    if (3 < uVar13) {
      uVar15 = uVar15 + 2;
      goto LAB_10029fe7c;
    }
    if ((uVar15 | bVar5 - 2 << (ulong)((uVar13 & 3) << 3)) != 0xffffffff) goto LAB_1002a0000;
  }
  uVar15 = (int)uVar2 << 3;
  puVar11 = param_2;
  local_88 = uVar24 + 8;
  local_80 = uVar2 + 1;
  local_78 = uVar19;
  local_70 = uVar2;
  (**(code **)(lVar28 + 0x30))(param_2,1,lVar8);
  puVar29 = local_68;
  if ((int)puVar11 == 0) {
    (**(code **)(lVar28 + 0x20))(local_68,param_2,lVar8);
    (**(code **)(lVar28 + 0x38))(puVar29,0,1,lVar8);
  }
  else {
    _memcpy(local_68,param_2,sVar17);
  }
  uVar2 = local_70;
  uVar23 = local_78;
  puVar14 = (undefined8 *)((long)puVar29 + sVar17 + 7 & 0xfffffffffffffff8);
  puVar18 = (undefined8 *)((ulong)((long)param_2 + sVar17 + 7) & 0xfffffffffffffff8);
  *puVar14 = *puVar18;
  puVar14 = puVar14 + 1;
  puVar18 = puVar18 + 1;
  *puVar14 = *puVar18;
  puVar11 = (uint *)((long)puVar18 + uVar27 + 8 & ~uVar27);
  bVar5 = *(byte *)((long)puVar11 + local_70);
  uVar13 = (uint)bVar5;
  puVar14 = (undefined8 *)((long)puVar14 + uVar27 + 8 & ~uVar27);
  uVar20 = (uint)local_70;
  uVar16 = 0xf0;
  if (uVar20 < 4) {
    uVar16 = 0xf0 - (1U >> (ulong)(uVar15 & 0x1f));
  }
  if ((bVar5 ^ 0xff) < uVar16) {
    _memcpy(puVar14,puVar11,local_80);
    uVar12 = 1;
    goto LAB_1002a0778;
  }
  if (0xe < bVar5) {
    uVar16 = 4;
    if (uVar20 < 4) {
      uVar16 = uVar20;
    }
    if ((int)uVar16 < 2) {
      if (uVar16 == 0) goto LAB_1002a00f8;
      uVar16 = (uint)(byte)*puVar11;
    }
    else if (uVar16 == 2) {
      uVar16 = (uint)(ushort)*puVar11;
    }
    else if (uVar16 == 3) {
      uVar16 = (uint)(uint3)*puVar11;
    }
    else {
      uVar16 = *puVar11;
    }
    uVar13 = uVar16 | bVar5 - 0xf << (ulong)(uVar15 & 0x1f);
    if (3 < uVar20) {
      uVar13 = uVar16;
    }
    uVar13 = uVar13 + 0xf;
  }
LAB_1002a00f8:
  switch(uVar13) {
  case 0:
    *puVar14 = *(undefined8 *)puVar11;
    *(undefined1 *)((long)puVar14 + local_70) = 0;
    goto LAB_1002a0774;
  case 1:
    *puVar14 = *(undefined8 *)puVar11;
    uVar12 = 1;
    *(undefined1 *)((long)puVar14 + local_70) = 1;
    goto LAB_1002a0778;
  case 2:
    uVar24 = ~uVar24;
    *puVar14 = *(undefined8 *)puVar11;
    uVar19 = local_88 + (long)puVar14 & uVar24;
    uVar22 = (ulong)(local_88 + (long)puVar11) & uVar24;
    pcVar25 = *(code **)(lVar26 + 0x20);
    (*pcVar25)(uVar19,uVar22,lVar9);
    uVar23 = local_78;
    (*pcVar25)(lVar1 + uVar19 & uVar24,lVar1 + uVar22 & uVar24,lVar9);
    *(undefined1 *)((long)puVar14 + uVar2) = 2;
    goto LAB_1002a0774;
  case 3:
    uVar31 = *(undefined8 *)(puVar11 + 2);
    uVar30 = *(undefined8 *)puVar11;
    uVar33 = *(undefined8 *)(puVar11 + 6);
    uVar32 = *(undefined8 *)(puVar11 + 4);
    puVar14[4] = *(undefined8 *)(puVar11 + 8);
    puVar14[1] = uVar31;
    *puVar14 = uVar30;
    puVar14[3] = uVar33;
    puVar14[2] = uVar32;
    uVar12 = 3;
    break;
  case 4:
    bVar5 = *(byte *)((long)puVar11 + uVar22);
    uVar15 = (uint)bVar5;
    if (0xc < bVar5) {
      uVar13 = (uint)uVar22;
      uVar16 = 4;
      if (uVar13 < 4) {
        uVar16 = uVar13;
      }
      if ((int)uVar16 < 2) {
        if (uVar16 == 0) goto LAB_1002a0380;
        uVar15 = (uint)(byte)*puVar11;
      }
      else if (uVar16 == 2) {
        uVar15 = (uint)(ushort)*puVar11;
      }
      else if (uVar16 == 3) {
        uVar15 = (uint)(uint3)*puVar11;
      }
      else {
        uVar15 = *puVar11;
      }
      if (uVar13 < 4) {
        uVar15 = (uVar15 | bVar5 - 0xd << (ulong)((uVar13 & 3) << 3)) + 0xd;
      }
      else {
        uVar15 = uVar15 + 0xd;
      }
    }
LAB_1002a0380:
                    /* WARNING: Could not recover jumptable at 0x0001002a0398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_1002a039c + (ulong)(byte)(&DAT_10081743b)[uVar15] * 4))();
    return puVar14;
  case 5:
    *puVar14 = *(undefined8 *)puVar11;
    uVar12 = 5;
    break;
  case 6:
    uVar31 = *(undefined8 *)(puVar11 + 2);
    uVar30 = *(undefined8 *)puVar11;
    *(byte *)(puVar14 + 2) = (byte)puVar11[4];
    puVar14[1] = uVar31;
    *puVar14 = uVar30;
    uVar12 = 6;
    break;
  case 7:
    *puVar14 = *(undefined8 *)puVar11;
    uVar12 = 7;
    break;
  case 8:
    uVar30 = *(undefined8 *)puVar11;
    puVar14[1] = *(undefined8 *)(puVar11 + 2);
    *puVar14 = uVar30;
    uVar12 = 8;
    break;
  case 9:
    bVar5 = *(byte *)((long)puVar11 + uVar3);
    uVar15 = (uint)bVar5;
    if (4 < bVar5) {
      uVar13 = (uint)uVar3;
      uVar16 = 4;
      if (uVar13 < 4) {
        uVar16 = uVar13;
      }
      if ((int)uVar16 < 2) {
        if (uVar16 == 0) goto LAB_1002a03e4;
        uVar15 = (uint)(byte)*puVar11;
      }
      else if (uVar16 == 2) {
        uVar15 = (uint)(ushort)*puVar11;
      }
      else if (uVar16 == 3) {
        uVar15 = (uint)(uint3)*puVar11;
      }
      else {
        uVar15 = *puVar11;
      }
      if (uVar13 < 4) {
        uVar15 = (uVar15 | bVar5 - 5 << (ulong)((uVar13 & 3) << 3)) + 5;
      }
      else {
        uVar15 = uVar15 + 5;
      }
    }
LAB_1002a03e4:
    if ((int)uVar15 < 2) {
      if (uVar15 == 0) {
        (**(code **)(lVar26 + 0x20))(puVar14,puVar11,lVar9);
        *(undefined1 *)((long)puVar14 + uVar3) = 0;
        local_78 = uVar23;
      }
      else {
        if (uVar15 == 1) {
          *puVar14 = *(undefined8 *)puVar11;
          uVar12 = 1;
          goto LAB_1002a0454;
        }
LAB_1002a0488:
        _memcpy(puVar14,puVar11,uVar3 + 1);
      }
    }
    else {
      if (uVar15 == 2) {
        uVar31 = *(undefined8 *)(puVar11 + 2);
        uVar30 = *(undefined8 *)puVar11;
        puVar14[2] = *(undefined8 *)(puVar11 + 4);
        puVar14[1] = uVar31;
        *puVar14 = uVar30;
        uVar12 = 2;
      }
      else if (uVar15 == 3) {
        *puVar14 = *(undefined8 *)puVar11;
        uVar12 = 3;
      }
      else {
        if (uVar15 != 4) goto LAB_1002a0488;
        *puVar14 = *(undefined8 *)puVar11;
        uVar12 = 4;
      }
LAB_1002a0454:
      *(undefined1 *)((long)puVar14 + uVar3) = uVar12;
      local_78 = uVar23;
    }
    uVar12 = 9;
    break;
  case 10:
    bVar5 = *(byte *)((long)puVar11 + uVar4);
    uVar15 = (uint)bVar5;
    if (5 < bVar5) {
      uVar13 = (uint)uVar4;
      uVar16 = 4;
      if (uVar13 < 4) {
        uVar16 = uVar13;
      }
      if ((int)uVar16 < 2) {
        if (uVar16 == 0) goto LAB_1002a04d4;
        uVar15 = (uint)(byte)*puVar11;
      }
      else if (uVar16 == 2) {
        uVar15 = (uint)(ushort)*puVar11;
      }
      else if (uVar16 == 3) {
        uVar15 = (uint)(uint3)*puVar11;
      }
      else {
        uVar15 = *puVar11;
      }
      if (uVar13 < 4) {
        uVar15 = (uVar15 | bVar5 - 6 << (ulong)((uVar13 & 3) << 3)) + 6;
      }
      else {
        uVar15 = uVar15 + 6;
      }
    }
LAB_1002a04d4:
    if ((int)uVar15 < 3) {
      if (uVar15 == 0) {
        (**(code **)(lVar26 + 0x20))(puVar14,puVar11,lVar9);
        *(undefined1 *)((long)puVar14 + uVar4) = 0;
      }
      else {
        if (uVar15 != 1) {
          if (uVar15 != 2) {
LAB_1002a055c:
            _memcpy(puVar14,puVar11,uVar4 + 1);
            uVar12 = 10;
            break;
          }
          *puVar14 = *(undefined8 *)puVar11;
          uVar12 = 2;
          goto LAB_1002a05b8;
        }
        (**(code **)(lVar21 + 0x20))(puVar14,puVar11,lVar10);
        *(undefined1 *)((long)puVar14 + uVar4) = 1;
        uVar23 = local_78;
      }
      uVar12 = 10;
      local_78 = uVar23;
    }
    else {
      if (uVar15 == 3) {
        *puVar14 = *(undefined8 *)puVar11;
        uVar12 = 3;
      }
      else if (uVar15 == 4) {
        *puVar14 = *(undefined8 *)puVar11;
        uVar12 = 4;
      }
      else {
        if (uVar15 != 5) goto LAB_1002a055c;
        uVar30 = *(undefined8 *)puVar11;
        puVar14[1] = *(undefined8 *)(puVar11 + 2);
        *puVar14 = uVar30;
        uVar12 = 5;
      }
LAB_1002a05b8:
      *(undefined1 *)((long)puVar14 + uVar4) = uVar12;
      uVar12 = 10;
    }
    break;
  case 0xb:
    uVar31 = *(undefined8 *)(puVar11 + 2);
    uVar30 = *(undefined8 *)puVar11;
    uVar33 = *(undefined8 *)(puVar11 + 6);
    uVar32 = *(undefined8 *)(puVar11 + 4);
    uVar34 = *(undefined8 *)((long)puVar11 + 0x19);
    *(undefined8 *)((long)puVar14 + 0x21) = *(undefined8 *)((long)puVar11 + 0x21);
    *(undefined8 *)((long)puVar14 + 0x19) = uVar34;
    puVar14[1] = uVar31;
    *puVar14 = uVar30;
    puVar14[3] = uVar33;
    puVar14[2] = uVar32;
    uVar12 = 0xb;
    break;
  case 0xc:
    *puVar14 = *(undefined8 *)puVar11;
    uVar12 = 0xc;
    break;
  case 0xd:
    *puVar14 = *(undefined8 *)puVar11;
    uVar12 = 0xd;
    break;
  case 0xe:
    uVar30 = *(undefined8 *)puVar11;
    puVar14[1] = *(undefined8 *)(puVar11 + 2);
    *puVar14 = uVar30;
    uVar12 = 0xe;
    break;
  default:
    _memcpy(puVar14,puVar11,local_80);
    goto LAB_1002a0774;
  }
  *(undefined1 *)((long)puVar14 + local_70) = uVar12;
  uVar23 = local_78;
LAB_1002a0774:
  uVar12 = 1;
  local_78 = uVar23;
LAB_1002a0778:
  *(undefined1 *)((long)puVar29 + local_78) = uVar12;
  return puVar29;
}

