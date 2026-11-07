// rea decompile_all
// name: FUN_100303168
// address: 0x100303168
// body: available
// range: 0x100303168-0x10030389b inclusive
// range: 0x1003038c0-0x100303ae3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100303168(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  size_t sVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  byte bVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint *puVar16;
  undefined1 uVar17;
  uint uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  uint uVar24;
  size_t sVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  code *pcVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  uint *puVar34;
  long lVar35;
  undefined8 *puVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  
  _swift_weakTakeInit();
  lVar9 = *(long *)(param_3 + 0x10);
  lVar10 = *(long *)(param_3 + 0x18);
  lVar31 = *(long *)(lVar9 + -8);
  uVar24 = *(uint *)(lVar31 + 0x50);
  lVar35 = *(long *)(lVar10 + -8);
  uVar21 = *(uint *)(lVar35 + 0x50);
  lVar13 = 0;
  __s10Foundation10URLRequestVMa();
  lVar28 = *(long *)(lVar13 + -8);
  uVar18 = *(uint *)(lVar28 + 0x50);
  lVar14 = 0;
  __s10Foundation3URLVMa();
  lVar29 = *(long *)(lVar14 + -8);
  uVar11 = *(uint *)(lVar29 + 0x50);
  uVar33 = (ulong)uVar11 & 0xff;
  lVar15 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar27 = *(long *)(lVar15 + -8);
  uVar11 = *(uint *)(lVar27 + 0x50) | uVar11;
  uVar19 = (ulong)(uVar11 & 0xf8 | 7);
  uVar22 = (ulong)((uVar21 | uVar24 | uVar18 | uVar11) & 0xf8 | 7);
  puVar36 = (undefined8 *)(uVar22 + 8 + (long)param_1 & (uVar22 ^ 0xffffffffffffffff));
  puVar34 = (uint *)(uVar22 + 8 + param_2 & (uVar22 ^ 0xffffffffffffffff));
  uVar22 = *(ulong *)(lVar31 + 0x40);
  if (*(ulong *)(lVar31 + 0x40) <= *(ulong *)(lVar35 + 0x40)) {
    uVar22 = *(ulong *)(lVar35 + 0x40);
  }
  sVar25 = *(size_t *)(lVar28 + 0x40);
  if (*(int *)(lVar28 + 0x54) == 0) {
    sVar25 = sVar25 + 1;
  }
  uVar32 = sVar25 + 7;
  lVar1 = uVar19 + 8;
  uVar2 = uVar33 + 8;
  uVar26 = *(ulong *)(lVar29 + 0x40);
  lVar5 = uVar26 + uVar33;
  uVar6 = (lVar5 + (uVar2 & (uVar33 ^ 0xffffffffffffffff)) & (uVar33 ^ 0xffffffffffffffff)) + uVar26
  ;
  uVar3 = (uVar26 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar3 <= uVar26) {
    uVar3 = uVar26;
  }
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  if (uVar6 <= uVar3 + 1) {
    uVar6 = uVar3 + 1;
  }
  uVar7 = uVar26;
  if (uVar26 < 0x19) {
    uVar7 = 0x18;
  }
  if (uVar6 <= uVar7 + 1) {
    uVar6 = uVar7 + 1;
  }
  uVar8 = *(ulong *)(lVar27 + 0x40);
  if (*(ulong *)(lVar27 + 0x40) <= uVar26) {
    uVar8 = uVar26;
  }
  if (uVar8 < 0x11) {
    uVar8 = 0x10;
  }
  if (uVar6 <= uVar8 + 1) {
    uVar6 = uVar8 + 1;
  }
  if (uVar6 < 0x2a) {
    uVar6 = 0x29;
  }
  sVar4 = uVar6 + 1;
  uVar26 = sVar4 + (lVar1 + (uVar32 & 0xfffffffffffffff8) + 8 & (uVar19 ^ 0xffffffffffffffff));
  if (uVar22 <= uVar26) {
    uVar22 = uVar26;
  }
  if (uVar22 < 0x19) {
    uVar22 = 0x18;
  }
  bVar12 = *(byte *)((long)puVar34 + uVar22);
  uVar24 = (uint)bVar12;
  if (4 < bVar12) {
    uVar18 = (uint)uVar22;
    uVar21 = 4;
    if (uVar18 < 4) {
      uVar21 = uVar18;
    }
    if ((int)uVar21 < 2) {
      if (uVar21 == 0) goto LAB_100303394;
      uVar21 = (uint)(byte)*puVar34;
    }
    else if (uVar21 == 2) {
      uVar21 = (uint)(ushort)*puVar34;
    }
    else if (uVar21 == 3) {
      uVar21 = (uint)(uint3)*puVar34;
    }
    else {
      uVar21 = *puVar34;
    }
    uVar24 = uVar21 | bVar12 - 5 << (ulong)((uVar18 & 3) << 3);
    if (3 < uVar18) {
      uVar24 = uVar21;
    }
    uVar24 = uVar24 + 5;
  }
LAB_100303394:
  if ((int)uVar24 < 2) {
    if (uVar24 == 0) {
      uVar17 = 0;
      uVar37 = *(undefined8 *)puVar34;
      puVar36[1] = *(undefined8 *)(puVar34 + 2);
      *puVar36 = uVar37;
    }
    else {
      (**(code **)(lVar31 + 0x20))(puVar36,puVar34,lVar9);
      uVar17 = 1;
    }
    goto LAB_100303800;
  }
  if (uVar24 == 2) {
    (**(code **)(lVar35 + 0x20))(puVar36,puVar34,lVar10);
    uVar17 = 2;
    goto LAB_100303800;
  }
  if (uVar24 == 3) {
    uVar38 = *(undefined8 *)(puVar34 + 2);
    uVar37 = *(undefined8 *)puVar34;
    puVar36[2] = *(undefined8 *)(puVar34 + 4);
    puVar36[1] = uVar38;
    *puVar36 = uVar37;
    uVar17 = 3;
    goto LAB_100303800;
  }
  uVar24 = (uint)uVar6;
  puVar16 = puVar34;
  (**(code **)(lVar28 + 0x30))(puVar34,1,lVar13);
  if ((int)puVar16 == 0) {
    (**(code **)(lVar28 + 0x20))(puVar36,puVar34,lVar13);
    (**(code **)(lVar28 + 0x38))(puVar36,0,1,lVar13);
  }
  else {
    _memcpy(puVar36,puVar34,sVar25);
  }
  puVar23 = (undefined8 *)((ulong)(uVar32 + (long)puVar34) & 0xfffffffffffffff8);
  puVar20 = (undefined8 *)(uVar32 + (long)puVar36 & 0xfffffffffffffff8);
  *puVar20 = *puVar23;
  puVar20 = puVar20 + 1;
  puVar23 = puVar23 + 1;
  *puVar20 = *puVar23;
  puVar34 = (uint *)(lVar1 + (long)puVar23 & ~uVar19);
  bVar12 = *(byte *)((long)puVar34 + uVar6);
  uVar18 = (uint)bVar12;
  puVar20 = (undefined8 *)(lVar1 + (long)puVar20 & ~uVar19);
  uVar21 = 0xf0;
  if (uVar24 < 4) {
    uVar21 = 0xf0 - (1U >> (ulong)(uVar24 << 3 & 0x1f));
  }
  if ((bVar12 ^ 0xff) < uVar21) {
    _memcpy(puVar20,puVar34,sVar4);
    goto LAB_1003037fc;
  }
  if (0xe < bVar12) {
    uVar21 = 4;
    if (uVar24 < 4) {
      uVar21 = uVar24;
    }
    if ((int)uVar21 < 2) {
      if (uVar21 == 0) goto LAB_1003035cc;
      uVar21 = (uint)(byte)*puVar34;
    }
    else if (uVar21 == 2) {
      uVar21 = (uint)(ushort)*puVar34;
    }
    else if (uVar21 == 3) {
      uVar21 = (uint)(uint3)*puVar34;
    }
    else {
      uVar21 = *puVar34;
    }
    uVar18 = uVar21 | bVar12 - 0xf << (ulong)(uVar24 << 3 & 0x1f);
    if (3 < uVar24) {
      uVar18 = uVar21;
    }
    uVar18 = uVar18 + 0xf;
  }
LAB_1003035cc:
  switch(uVar18) {
  case 0:
    *puVar20 = *(undefined8 *)puVar34;
    *(undefined1 *)((long)puVar20 + uVar6) = 0;
    goto LAB_1003037fc;
  case 1:
    *puVar20 = *(undefined8 *)puVar34;
    uVar17 = 1;
    break;
  case 2:
    uVar33 = ~uVar33;
    *puVar20 = *(undefined8 *)puVar34;
    uVar19 = uVar2 + (long)puVar20 & uVar33;
    uVar32 = (ulong)(uVar2 + (long)puVar34) & uVar33;
    pcVar30 = *(code **)(lVar29 + 0x20);
    (*pcVar30)(uVar19,uVar32,lVar14);
    (*pcVar30)(lVar5 + uVar19 & uVar33,lVar5 + uVar32 & uVar33,lVar14);
    *(undefined1 *)((long)puVar20 + uVar6) = 2;
    goto LAB_1003037fc;
  case 3:
    uVar38 = *(undefined8 *)(puVar34 + 2);
    uVar37 = *(undefined8 *)puVar34;
    uVar40 = *(undefined8 *)(puVar34 + 6);
    uVar39 = *(undefined8 *)(puVar34 + 4);
    puVar20[4] = *(undefined8 *)(puVar34 + 8);
    puVar20[1] = uVar38;
    *puVar20 = uVar37;
    puVar20[3] = uVar40;
    puVar20[2] = uVar39;
    uVar17 = 3;
    break;
  case 4:
    bVar12 = *(byte *)((long)puVar34 + uVar3);
    uVar24 = (uint)bVar12;
    if (0xc < bVar12) {
      uVar18 = (uint)uVar3;
      uVar21 = 4;
      if (uVar18 < 4) {
        uVar21 = uVar18;
      }
      if ((int)uVar21 < 2) {
        if (uVar21 == 0) goto LAB_10030387c;
        uVar21 = (uint)(byte)*puVar34;
      }
      else if (uVar21 == 2) {
        uVar21 = (uint)(ushort)*puVar34;
      }
      else if (uVar21 == 3) {
        uVar21 = (uint)(uint3)*puVar34;
      }
      else {
        uVar21 = *puVar34;
      }
      uVar24 = uVar21 | bVar12 - 0xd << (ulong)((uVar18 & 3) << 3);
      if (3 < uVar18) {
        uVar24 = uVar21;
      }
      uVar24 = uVar24 + 0xd;
    }
LAB_10030387c:
                    /* WARNING: Could not recover jumptable at 0x000100303898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_10030389c + (ulong)(byte)(&DAT_100819295)[uVar24] * 4))();
    return puVar20;
  case 5:
    *puVar20 = *(undefined8 *)puVar34;
    uVar17 = 5;
    break;
  case 6:
    uVar38 = *(undefined8 *)(puVar34 + 2);
    uVar37 = *(undefined8 *)puVar34;
    *(byte *)(puVar20 + 2) = (byte)puVar34[4];
    puVar20[1] = uVar38;
    *puVar20 = uVar37;
    uVar17 = 6;
    break;
  case 7:
    *puVar20 = *(undefined8 *)puVar34;
    uVar17 = 7;
    break;
  case 8:
    uVar37 = *(undefined8 *)puVar34;
    puVar20[1] = *(undefined8 *)(puVar34 + 2);
    *puVar20 = uVar37;
    uVar17 = 8;
    break;
  case 9:
    bVar12 = *(byte *)((long)puVar34 + uVar7);
    uVar24 = (uint)bVar12;
    if (4 < bVar12) {
      uVar18 = (uint)uVar7;
      uVar21 = 4;
      if (uVar18 < 4) {
        uVar21 = uVar18;
      }
      if ((int)uVar21 < 2) {
        if (uVar21 == 0) goto LAB_1003038e8;
        uVar24 = (uint)(byte)*puVar34;
      }
      else if (uVar21 == 2) {
        uVar24 = (uint)(ushort)*puVar34;
      }
      else if (uVar21 == 3) {
        uVar24 = (uint)(uint3)*puVar34;
      }
      else {
        uVar24 = *puVar34;
      }
      if (uVar18 < 4) {
        uVar24 = (uVar24 | bVar12 - 5 << (ulong)((uVar18 & 3) << 3)) + 5;
      }
      else {
        uVar24 = uVar24 + 5;
      }
    }
LAB_1003038e8:
    if ((int)uVar24 < 2) {
      if (uVar24 == 0) {
        (**(code **)(lVar29 + 0x20))(puVar20,puVar34,lVar14);
        *(undefined1 *)((long)puVar20 + uVar7) = 0;
      }
      else {
        if (uVar24 == 1) {
          *puVar20 = *(undefined8 *)puVar34;
          uVar17 = 1;
          goto LAB_100303960;
        }
LAB_100303998:
        _memcpy(puVar20,puVar34,uVar7 + 1);
      }
    }
    else {
      if (uVar24 == 2) {
        uVar38 = *(undefined8 *)(puVar34 + 2);
        uVar37 = *(undefined8 *)puVar34;
        puVar20[2] = *(undefined8 *)(puVar34 + 4);
        puVar20[1] = uVar38;
        *puVar20 = uVar37;
        uVar17 = 2;
      }
      else if (uVar24 == 3) {
        *puVar20 = *(undefined8 *)puVar34;
        uVar17 = 3;
      }
      else {
        if (uVar24 != 4) goto LAB_100303998;
        *puVar20 = *(undefined8 *)puVar34;
        uVar17 = 4;
      }
LAB_100303960:
      *(undefined1 *)((long)puVar20 + uVar7) = uVar17;
    }
    uVar17 = 9;
    goto LAB_100303ad8;
  case 10:
    bVar12 = *(byte *)((long)puVar34 + uVar8);
    uVar24 = (uint)bVar12;
    if (5 < bVar12) {
      uVar18 = (uint)uVar8;
      uVar21 = 4;
      if (uVar18 < 4) {
        uVar21 = uVar18;
      }
      if ((int)uVar21 < 2) {
        if (uVar21 == 0) goto LAB_1003039dc;
        uVar24 = (uint)(byte)*puVar34;
      }
      else if (uVar21 == 2) {
        uVar24 = (uint)(ushort)*puVar34;
      }
      else if (uVar21 == 3) {
        uVar24 = (uint)(uint3)*puVar34;
      }
      else {
        uVar24 = *puVar34;
      }
      if (uVar18 < 4) {
        uVar24 = (uVar24 | bVar12 - 6 << (ulong)((uVar18 & 3) << 3)) + 6;
      }
      else {
        uVar24 = uVar24 + 6;
      }
    }
LAB_1003039dc:
    if ((int)uVar24 < 3) {
      if (uVar24 == 0) {
        (**(code **)(lVar29 + 0x20))(puVar20,puVar34,lVar14);
        *(undefined1 *)((long)puVar20 + uVar8) = 0;
      }
      else if (uVar24 == 1) {
        (**(code **)(lVar27 + 0x20))(puVar20,puVar34,lVar15);
        *(undefined1 *)((long)puVar20 + uVar8) = 1;
      }
      else {
        if (uVar24 == 2) {
          *puVar20 = *(undefined8 *)puVar34;
          uVar17 = 2;
          goto LAB_100303acc;
        }
LAB_100303a7c:
        _memcpy(puVar20,puVar34,uVar8 + 1);
      }
    }
    else if (uVar24 == 3) {
      *puVar20 = *(undefined8 *)puVar34;
      *(undefined1 *)((long)puVar20 + uVar8) = 3;
    }
    else {
      if (uVar24 == 4) {
        *puVar20 = *(undefined8 *)puVar34;
        uVar17 = 4;
      }
      else {
        if (uVar24 != 5) goto LAB_100303a7c;
        uVar37 = *(undefined8 *)puVar34;
        puVar20[1] = *(undefined8 *)(puVar34 + 2);
        *puVar20 = uVar37;
        uVar17 = 5;
      }
LAB_100303acc:
      *(undefined1 *)((long)puVar20 + uVar8) = uVar17;
    }
    uVar17 = 10;
LAB_100303ad8:
    *(undefined1 *)((long)puVar20 + uVar6) = uVar17;
    goto LAB_1003037fc;
  case 0xb:
    uVar38 = *(undefined8 *)(puVar34 + 2);
    uVar37 = *(undefined8 *)puVar34;
    uVar40 = *(undefined8 *)(puVar34 + 6);
    uVar39 = *(undefined8 *)(puVar34 + 4);
    uVar41 = *(undefined8 *)((long)puVar34 + 0x19);
    *(undefined8 *)((long)puVar20 + 0x21) = *(undefined8 *)((long)puVar34 + 0x21);
    *(undefined8 *)((long)puVar20 + 0x19) = uVar41;
    puVar20[1] = uVar38;
    *puVar20 = uVar37;
    puVar20[3] = uVar40;
    puVar20[2] = uVar39;
    uVar17 = 0xb;
    break;
  case 0xc:
    *puVar20 = *(undefined8 *)puVar34;
    uVar17 = 0xc;
    break;
  case 0xd:
    *puVar20 = *(undefined8 *)puVar34;
    uVar17 = 0xd;
    break;
  case 0xe:
    uVar37 = *(undefined8 *)puVar34;
    puVar20[1] = *(undefined8 *)(puVar34 + 2);
    *puVar20 = uVar37;
    uVar17 = 0xe;
    break;
  default:
    _memcpy(puVar20,puVar34,sVar4);
    goto LAB_1003037fc;
  }
  *(undefined1 *)((long)puVar20 + uVar6) = uVar17;
LAB_1003037fc:
  uVar17 = 4;
LAB_100303800:
  *(undefined1 *)((long)puVar36 + uVar22) = uVar17;
  return param_1;
}

