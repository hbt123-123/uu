// rea decompile_all
// name: FUN_1003083a0
// address: 0x1003083a0
// body: available
// range: 0x1003083a0-0x100308a73 inclusive
// range: 0x100308a94-0x100308cb3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1003083a0(undefined8 *param_1,uint *param_2,long param_3)

{
  size_t sVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  undefined1 uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  size_t sVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  code *pcVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  
  lVar6 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(param_3 + 0x18);
  lVar15 = *(long *)(lVar6 + -8);
  uVar16 = *(ulong *)(lVar15 + 0x40);
  lVar30 = *(long *)(lVar7 + -8);
  uVar20 = *(ulong *)(lVar30 + 0x40);
  if (uVar16 <= uVar20) {
    uVar16 = uVar20;
  }
  lVar9 = 0;
  __s10Foundation10URLRequestVMa();
  lVar28 = *(long *)(lVar9 + -8);
  sVar21 = *(size_t *)(lVar28 + 0x40);
  if (*(int *)(lVar28 + 0x54) == 0) {
    sVar21 = sVar21 + 1;
  }
  lVar10 = 0;
  __s10Foundation3URLVMa();
  lVar31 = *(long *)(lVar10 + -8);
  uVar18 = *(uint *)(lVar31 + 0x50);
  uVar26 = (ulong)uVar18 & 0xff;
  lVar11 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar24 = *(long *)(lVar11 + -8);
  uVar25 = (ulong)((*(uint *)(lVar24 + 0x50) | uVar18) & 0xf8 | 7);
  uVar20 = uVar26 + 8;
  uVar23 = *(ulong *)(lVar31 + 0x40);
  lVar2 = uVar23 + uVar26;
  uVar3 = (lVar2 + (uVar20 & (uVar26 ^ 0xffffffffffffffff)) & (uVar26 ^ 0xffffffffffffffff)) +
          uVar23;
  uVar29 = (uVar23 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar29 <= uVar23) {
    uVar29 = uVar23;
  }
  if (uVar29 < 9) {
    uVar29 = 8;
  }
  if (uVar3 <= uVar29 + 1) {
    uVar3 = uVar29 + 1;
  }
  uVar4 = uVar23;
  if (uVar23 < 0x19) {
    uVar4 = 0x18;
  }
  if (uVar3 <= uVar4 + 1) {
    uVar3 = uVar4 + 1;
  }
  uVar5 = *(ulong *)(lVar24 + 0x40);
  if (*(ulong *)(lVar24 + 0x40) <= uVar23) {
    uVar5 = uVar23;
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
  uVar23 = sVar1 + (uVar25 + (sVar21 + 7 & 0xfffffffffffffff8) + 0x10 &
                   (uVar25 ^ 0xffffffffffffffff));
  if (uVar16 <= uVar23) {
    uVar16 = uVar23;
  }
  if (uVar16 < 0x19) {
    uVar16 = 0x18;
  }
  bVar8 = *(byte *)((long)param_2 + uVar16);
  uVar18 = (uint)bVar8;
  if (bVar8 < 5) {
    if (bVar8 < 2) goto LAB_10030855c;
  }
  else {
    uVar19 = (uint)uVar16;
    uVar14 = 4;
    if (uVar19 < 4) {
      uVar14 = uVar19;
    }
    if ((int)uVar14 < 2) {
      if (uVar14 != 0) {
        uVar18 = (uint)(byte)*param_2;
        goto joined_r0x000100308584;
      }
    }
    else {
      if (uVar14 == 2) {
        uVar18 = (uint)(ushort)*param_2;
      }
      else if (uVar14 == 3) {
        uVar18 = (uint)(uint3)*param_2;
      }
      else {
        uVar18 = *param_2;
      }
joined_r0x000100308584:
      if (uVar19 < 4) {
        uVar18 = (uVar18 | bVar8 - 5 << (ulong)((uVar19 & 3) << 3)) + 5;
      }
      else {
        uVar18 = uVar18 + 5;
      }
    }
    if ((int)uVar18 < 2) {
LAB_10030855c:
      if (uVar18 == 0) {
        uVar13 = 0;
        uVar32 = *(undefined8 *)param_2;
        param_1[1] = *(undefined8 *)(param_2 + 2);
        *param_1 = uVar32;
      }
      else {
        (**(code **)(lVar15 + 0x20))(param_1,param_2,lVar6);
        uVar13 = 1;
      }
      goto LAB_100308c8c;
    }
  }
  if (uVar18 == 2) {
    (**(code **)(lVar30 + 0x20))(param_1,param_2,lVar7);
    uVar13 = 2;
    goto LAB_100308c8c;
  }
  if (uVar18 == 3) {
    uVar32 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar32;
    param_1[2] = *(undefined8 *)(param_2 + 4);
    uVar13 = 3;
    goto LAB_100308c8c;
  }
  uVar18 = (uint)uVar3;
  puVar12 = param_2;
  (**(code **)(lVar28 + 0x30))(param_2,1,lVar9);
  if ((int)puVar12 == 0) {
    (**(code **)(lVar28 + 0x20))(param_1,param_2,lVar9);
    (**(code **)(lVar28 + 0x38))(param_1,0,1,lVar9);
  }
  else {
    _memcpy(param_1,param_2,sVar21);
  }
  puVar17 = (undefined8 *)((long)param_1 + sVar21 + 7 & 0xfffffffffffffff8);
  puVar22 = (undefined8 *)((ulong)((long)param_2 + sVar21 + 7) & 0xfffffffffffffff8);
  *puVar17 = *puVar22;
  puVar17 = puVar17 + 1;
  puVar22 = puVar22 + 1;
  *puVar17 = *puVar22;
  puVar12 = (uint *)((long)puVar22 + uVar25 + 8 & ~uVar25);
  bVar8 = *(byte *)((long)puVar12 + uVar3);
  uVar14 = (uint)bVar8;
  puVar17 = (undefined8 *)((long)puVar17 + uVar25 + 8 & ~uVar25);
  uVar19 = 0xf0;
  if (uVar18 < 4) {
    uVar19 = 0xf0 - (1U >> (ulong)(uVar18 << 3 & 0x1f));
  }
  if ((bVar8 ^ 0xff) < uVar19) {
    _memcpy(puVar17,puVar12,sVar1);
    uVar13 = 4;
    goto LAB_100308c8c;
  }
  if (0xe < bVar8) {
    uVar19 = 4;
    if (uVar18 < 4) {
      uVar19 = uVar18;
    }
    if ((int)uVar19 < 2) {
      if (uVar19 == 0) goto LAB_1003087d4;
      uVar19 = (uint)(byte)*puVar12;
    }
    else if (uVar19 == 2) {
      uVar19 = (uint)(ushort)*puVar12;
    }
    else if (uVar19 == 3) {
      uVar19 = (uint)(uint3)*puVar12;
    }
    else {
      uVar19 = *puVar12;
    }
    if (uVar18 < 4) {
      uVar14 = (uVar19 | uVar14 - 0xf << (ulong)(uVar18 << 3 & 0x1f)) + 0xf;
    }
    else {
      uVar14 = uVar19 + 0xf;
    }
  }
LAB_1003087d4:
  switch(uVar14) {
  case 0:
    *puVar17 = *(undefined8 *)puVar12;
    *(undefined1 *)((long)puVar17 + uVar3) = 0;
    goto LAB_100308c88;
  case 1:
    *puVar17 = *(undefined8 *)puVar12;
    uVar13 = 1;
    break;
  case 2:
    uVar26 = ~uVar26;
    *puVar17 = *(undefined8 *)puVar12;
    uVar29 = uVar20 + (long)puVar17 & uVar26;
    uVar20 = (ulong)(uVar20 + (long)puVar12) & uVar26;
    pcVar27 = *(code **)(lVar31 + 0x20);
    (*pcVar27)(uVar29,uVar20,lVar10);
    (*pcVar27)(lVar2 + uVar29 & uVar26,lVar2 + uVar20 & uVar26,lVar10);
    *(undefined1 *)((long)puVar17 + uVar3) = 2;
    goto LAB_100308c88;
  case 3:
    uVar33 = *(undefined8 *)(puVar12 + 2);
    uVar32 = *(undefined8 *)puVar12;
    uVar35 = *(undefined8 *)(puVar12 + 6);
    uVar34 = *(undefined8 *)(puVar12 + 4);
    puVar17[4] = *(undefined8 *)(puVar12 + 8);
    puVar17[1] = uVar33;
    *puVar17 = uVar32;
    puVar17[3] = uVar35;
    puVar17[2] = uVar34;
    uVar13 = 3;
    break;
  case 4:
    bVar8 = *(byte *)((long)puVar12 + uVar29);
    uVar18 = (uint)bVar8;
    if (0xc < bVar8) {
      uVar19 = (uint)uVar29;
      uVar14 = 4;
      if (uVar19 < 4) {
        uVar14 = uVar19;
      }
      if ((int)uVar14 < 2) {
        if (uVar14 == 0) goto LAB_100308a58;
        uVar18 = (uint)(byte)*puVar12;
      }
      else if (uVar14 == 2) {
        uVar18 = (uint)(ushort)*puVar12;
      }
      else if (uVar14 == 3) {
        uVar18 = (uint)(uint3)*puVar12;
      }
      else {
        uVar18 = *puVar12;
      }
      if (uVar19 < 4) {
        uVar18 = (uVar18 | bVar8 - 0xd << (ulong)((uVar19 & 3) << 3)) + 0xd;
      }
      else {
        uVar18 = uVar18 + 0xd;
      }
    }
LAB_100308a58:
                    /* WARNING: Could not recover jumptable at 0x000100308a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100308a74 + (ulong)(byte)(&DAT_1008193c9)[uVar18] * 4))();
    return puVar17;
  case 5:
    *puVar17 = *(undefined8 *)puVar12;
    uVar13 = 5;
    break;
  case 6:
    uVar33 = *(undefined8 *)(puVar12 + 2);
    uVar32 = *(undefined8 *)puVar12;
    *(byte *)(puVar17 + 2) = (byte)puVar12[4];
    puVar17[1] = uVar33;
    *puVar17 = uVar32;
    uVar13 = 6;
    break;
  case 7:
    *puVar17 = *(undefined8 *)puVar12;
    uVar13 = 7;
    break;
  case 8:
    uVar32 = *(undefined8 *)puVar12;
    puVar17[1] = *(undefined8 *)(puVar12 + 2);
    *puVar17 = uVar32;
    uVar13 = 8;
    break;
  case 9:
    bVar8 = *(byte *)((long)puVar12 + uVar4);
    uVar18 = (uint)bVar8;
    if (4 < bVar8) {
      uVar19 = (uint)uVar4;
      uVar14 = 4;
      if (uVar19 < 4) {
        uVar14 = uVar19;
      }
      if ((int)uVar14 < 2) {
        if (uVar14 == 0) goto LAB_100308abc;
        uVar18 = (uint)(byte)*puVar12;
      }
      else if (uVar14 == 2) {
        uVar18 = (uint)(ushort)*puVar12;
      }
      else if (uVar14 == 3) {
        uVar18 = (uint)(uint3)*puVar12;
      }
      else {
        uVar18 = *puVar12;
      }
      if (uVar19 < 4) {
        uVar18 = (uVar18 | bVar8 - 5 << (ulong)((uVar19 & 3) << 3)) + 5;
      }
      else {
        uVar18 = uVar18 + 5;
      }
    }
LAB_100308abc:
    if ((int)uVar18 < 2) {
      if (uVar18 == 0) {
        (**(code **)(lVar31 + 0x20))(puVar17,puVar12,lVar10);
        *(undefined1 *)((long)puVar17 + uVar4) = 0;
      }
      else {
        if (uVar18 == 1) {
          *puVar17 = *(undefined8 *)puVar12;
          uVar13 = 1;
          goto LAB_100308b2c;
        }
LAB_100308b60:
        _memcpy(puVar17,puVar12,uVar4 + 1);
      }
    }
    else {
      if (uVar18 == 2) {
        uVar33 = *(undefined8 *)(puVar12 + 2);
        uVar32 = *(undefined8 *)puVar12;
        puVar17[2] = *(undefined8 *)(puVar12 + 4);
        puVar17[1] = uVar33;
        *puVar17 = uVar32;
        uVar13 = 2;
      }
      else if (uVar18 == 3) {
        *puVar17 = *(undefined8 *)puVar12;
        uVar13 = 3;
      }
      else {
        if (uVar18 != 4) goto LAB_100308b60;
        *puVar17 = *(undefined8 *)puVar12;
        uVar13 = 4;
      }
LAB_100308b2c:
      *(undefined1 *)((long)puVar17 + uVar4) = uVar13;
    }
    uVar13 = 9;
    break;
  case 10:
    bVar8 = *(byte *)((long)puVar12 + uVar5);
    uVar18 = (uint)bVar8;
    if (5 < bVar8) {
      uVar19 = (uint)uVar5;
      uVar14 = 4;
      if (uVar19 < 4) {
        uVar14 = uVar19;
      }
      if ((int)uVar14 < 2) {
        if (uVar14 == 0) goto LAB_100308ba8;
        uVar18 = (uint)(byte)*puVar12;
      }
      else if (uVar14 == 2) {
        uVar18 = (uint)(ushort)*puVar12;
      }
      else if (uVar14 == 3) {
        uVar18 = (uint)(uint3)*puVar12;
      }
      else {
        uVar18 = *puVar12;
      }
      if (uVar19 < 4) {
        uVar18 = (uVar18 | bVar8 - 6 << (ulong)((uVar19 & 3) << 3)) + 6;
      }
      else {
        uVar18 = uVar18 + 6;
      }
    }
LAB_100308ba8:
    if ((int)uVar18 < 3) {
      if (uVar18 == 0) {
        (**(code **)(lVar31 + 0x20))(puVar17,puVar12,lVar10);
        *(undefined1 *)((long)puVar17 + uVar5) = 0;
      }
      else if (uVar18 == 1) {
        (**(code **)(lVar24 + 0x20))(puVar17,puVar12,lVar11);
        *(undefined1 *)((long)puVar17 + uVar5) = 1;
      }
      else {
        if (uVar18 == 2) {
          *puVar17 = *(undefined8 *)puVar12;
          uVar13 = 2;
          goto LAB_100308c78;
        }
LAB_100308c30:
        _memcpy(puVar17,puVar12,uVar5 + 1);
      }
    }
    else {
      if (uVar18 == 3) {
        *puVar17 = *(undefined8 *)puVar12;
        uVar13 = 3;
      }
      else if (uVar18 == 4) {
        *puVar17 = *(undefined8 *)puVar12;
        uVar13 = 4;
      }
      else {
        if (uVar18 != 5) goto LAB_100308c30;
        uVar32 = *(undefined8 *)puVar12;
        puVar17[1] = *(undefined8 *)(puVar12 + 2);
        *puVar17 = uVar32;
        uVar13 = 5;
      }
LAB_100308c78:
      *(undefined1 *)((long)puVar17 + uVar5) = uVar13;
    }
    uVar13 = 10;
    break;
  case 0xb:
    uVar33 = *(undefined8 *)(puVar12 + 2);
    uVar32 = *(undefined8 *)puVar12;
    uVar35 = *(undefined8 *)(puVar12 + 6);
    uVar34 = *(undefined8 *)(puVar12 + 4);
    uVar36 = *(undefined8 *)((long)puVar12 + 0x19);
    *(undefined8 *)((long)puVar17 + 0x21) = *(undefined8 *)((long)puVar12 + 0x21);
    *(undefined8 *)((long)puVar17 + 0x19) = uVar36;
    puVar17[1] = uVar33;
    *puVar17 = uVar32;
    puVar17[3] = uVar35;
    puVar17[2] = uVar34;
    uVar13 = 0xb;
    break;
  case 0xc:
    *puVar17 = *(undefined8 *)puVar12;
    uVar13 = 0xc;
    break;
  case 0xd:
    *puVar17 = *(undefined8 *)puVar12;
    uVar13 = 0xd;
    break;
  case 0xe:
    uVar32 = *(undefined8 *)puVar12;
    puVar17[1] = *(undefined8 *)(puVar12 + 2);
    *puVar17 = uVar32;
    uVar13 = 0xe;
    break;
  default:
    _memcpy(puVar17,puVar12,sVar1);
    goto LAB_100308c88;
  }
  *(undefined1 *)((long)puVar17 + uVar3) = uVar13;
LAB_100308c88:
  uVar13 = 4;
LAB_100308c8c:
  *(undefined1 *)((long)param_1 + uVar16) = uVar13;
  return param_1;
}

