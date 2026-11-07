// rea decompile_all
// name: FUN_100500714
// address: 0x100500714
// body: available
// range: 0x100500714-0x100500dd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100500714(long *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined1 uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  char *pcVar13;
  ulong uVar14;
  long lVar15;
  uint *puVar16;
  long lVar17;
  long lVar18;
  long *unaff_x20;
  long *plVar19;
  long unaff_x21;
  long lVar20;
  undefined1 *puVar21;
  long *plVar22;
  long lVar23;
  char *pcVar24;
  long *plVar25;
  long alStack_220 [2];
  long *local_210;
  undefined8 local_208;
  undefined1 auStack_1d0 [40];
  long local_1a8;
  undefined1 *puStack_1a0;
  undefined1 auStack_178 [56];
  undefined8 local_140;
  undefined1 local_138;
  undefined8 local_130;
  char *local_108;
  undefined1 *puStack_100;
  char *local_f8;
  undefined8 uStack_f0;
  undefined2 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar6 = (undefined1 *)0x0;
  __sSqMa();
  lVar17 = *(long *)(puVar6 + -8);
  uVar11 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  plVar22 = (long *)((long)alStack_220 - uVar11);
  lVar23 = (long)plVar22 - uVar11;
  lVar15 = *(long *)(param_2 + -8);
  uVar11 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
  plVar25 = (long *)(lVar23 - uVar11);
  lVar18 = (long)plVar25 - uVar11;
  lVar20 = lVar18 - uVar11;
  if (*(char *)((long)unaff_x20 + 0x21) != '\x02') {
    if (*(char *)((long)unaff_x20 + 0x21) != '\0') {
      return;
    }
    puVar21 = puVar6;
    FUN_1004fdea4();
    if (unaff_x21 != 0) {
      return;
    }
    (**(code **)(param_3 + 0x20))(lVar23,(long)(int)puVar21,param_2);
    lVar7 = lVar23;
    (**(code **)(lVar15 + 0x30))(lVar23,1,param_2);
    if ((int)lVar7 == 1) {
      (**(code **)(lVar17 + 8))(lVar23,puVar6);
      return;
    }
    (**(code **)(lVar15 + 0x20))(lVar20,lVar23,param_2);
    (**(code **)(lVar15 + 0x10))(lVar18,lVar20,param_2);
    uVar8 = 0;
    __sSaMa(0,param_2);
    __sSa6appendyyxnF(lVar18,uVar8);
    (**(code **)(lVar15 + 8))(lVar20,param_2);
    *(undefined1 *)(unaff_x20 + 4) = 1;
    return;
  }
  puVar21 = puVar6;
  FUN_1004fdea4();
  if (unaff_x21 != 0) {
    return;
  }
  if ((undefined1 *)0x7ffffffe < puVar21) {
    FUN_100506290();
    _swift_allocError(&DAT_1009cdf18,puVar21,0,0);
    uVar10 = 3;
LAB_100500920:
    *puVar21 = uVar10;
    _swift_willThrow();
    return;
  }
  puVar12 = (undefined1 *)unaff_x20[1];
  if ((long)puVar12 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100500dc4);
    (*pcVar4)();
  }
  if (puVar12 < puVar21) {
    FUN_100506290();
    _swift_allocError(&DAT_1009cdf18,puVar21,0,0);
    uVar10 = 1;
    goto LAB_100500920;
  }
  pcVar24 = (char *)*unaff_x20;
  *unaff_x20 = (long)(pcVar24 + (long)puVar21);
  unaff_x20[1] = (long)puVar12 - (long)puVar21;
  lVar20 = 0;
  pcVar13 = pcVar24;
  for (puVar12 = puVar21; puVar12 != (undefined1 *)0x0; puVar12 = puVar12 + -1) {
    if ((-1 < *pcVar13) && (bVar5 = SCARRY8(lVar20,1), lVar20 = lVar20 + 1, bVar5)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10050098c);
      (*pcVar4)();
    }
    pcVar13 = pcVar13 + 1;
  }
  lVar23 = *param_1;
  __sSa5countSivg(lVar23,param_2);
  if (SCARRY8(lVar23,lVar20)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100500dc8);
    (*pcVar4)();
  }
  uVar8 = 0;
  __sSaMa(0,param_2);
  local_208 = uVar8;
  __sSa15reserveCapacityyySiF(lVar23 + lVar20);
  FUN_1005062d0(unaff_x20,&local_1a8);
  FUN_10007f314(auStack_178,auStack_1d0,&DAT_100aaa0e8,&DAT_1008358c0);
  local_e8 = 1;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_a8 = 1;
  uStack_80 = 0xf000000000000000;
  local_88 = 0;
  uStack_70 = 0xf000000000000000;
  uStack_78 = 0;
  uStack_f0 = 0;
  local_108 = pcVar24;
  puStack_100 = puVar21;
  local_f8 = pcVar24;
  FUN_100128b30(auStack_1d0,&uStack_d8,&DAT_100aaa0e8,&DAT_1008358c0);
  local_a0 = local_140;
  local_98 = local_138;
  plVar9 = &local_1a8;
  FUN_100506304();
  local_90 = local_130;
  if (puVar21 != (undefined1 *)0x0) {
    local_210 = (long *)0x0;
LAB_100500acc:
    do {
      pcVar13 = pcVar24 + 1;
      uVar11 = (ulong)*pcVar24;
      puVar21 = puVar21 + -1;
      if ((long)uVar11 < 0) {
        if ((long)puVar21 < 1) {
LAB_100500c2c:
          FUN_100506290();
          _swift_allocError(&DAT_1009cdf18,plVar9,0,0);
          *(undefined1 *)plVar9 = 3;
          _swift_willThrow();
          FUN_100506304(&local_108);
          _swift_bridgeObjectRelease(local_210);
          return;
        }
        uVar11 = uVar11 & 0x7f;
        pcVar13 = pcVar24 + 2;
        uVar14 = 7;
        while (uVar11 = ((ulong)(byte)pcVar13[-1] & 0x7f) << (uVar14 & 0x3f) | uVar11,
              pcVar13[-1] < '\0') {
          if (puVar21 < (undefined1 *)0x2) goto LAB_100500c2c;
          pcVar13 = pcVar13 + 1;
          puVar21 = puVar21 + -1;
          bVar5 = 0x38 < uVar14;
          uVar14 = uVar14 + 7;
          if (bVar5) goto LAB_100500c2c;
        }
        puVar21 = puVar21 + -1;
      }
      local_108 = pcVar13;
      puStack_100 = puVar21;
      (**(code **)(param_3 + 0x20))(plVar22,(long)(int)uVar11,param_2);
      plVar9 = plVar22;
      (**(code **)(lVar15 + 0x30))(plVar22,1,param_2);
      pcVar24 = pcVar13;
      if ((int)plVar9 != 1) {
        (**(code **)(lVar15 + 0x20))(plVar25,plVar22,param_2);
        (**(code **)(lVar15 + 0x10))(lVar18,plVar25,param_2);
        __sSa6appendyyxnF(lVar18,local_208);
        plVar9 = plVar25;
        puVar12 = param_2;
        (**(code **)(lVar15 + 8))();
LAB_100500ac8:
        if (puVar21 == (undefined1 *)0x0) break;
        goto LAB_100500acc;
      }
      plVar9 = plVar22;
      puVar12 = puVar6;
      (**(code **)(lVar17 + 8))();
      if ((*(byte *)(unaff_x20 + 0xe) & 1) != 0) goto LAB_100500ac8;
      plVar19 = (long *)PTR___swiftEmptyArrayStorage_100995ea0;
      if (local_210 != (long *)0x0) {
        plVar19 = local_210;
      }
      plVar9 = plVar19;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)plVar9 & 1) == 0) {
        puVar12 = (undefined1 *)(plVar19[2] + 1);
        plVar9 = (long *)0x0;
        FUN_1005074a0(0,puVar12,1,plVar19);
        plVar19 = plVar9;
      }
      uVar14 = plVar19[2];
      puVar1 = (undefined1 *)(uVar14 + 1);
      local_210 = plVar19;
      if ((ulong)plVar19[3] >> 1 <= uVar14) {
        plVar9 = (long *)(ulong)(1 < (ulong)plVar19[3]);
        puVar12 = puVar1;
        alStack_220[1] = uVar14;
        FUN_1005074a0(plVar9,puVar1,1,plVar19);
        uVar14 = alStack_220[1];
        local_210 = plVar9;
      }
      local_210[2] = (long)puVar1;
      *(int *)((long)local_210 + uVar14 * 4 + 0x20) = (int)uVar11;
    } while (puVar21 != (undefined1 *)0x0);
    plVar22 = local_210;
    if (local_210 != (long *)0x0) {
      uVar2 = *(uint *)(unaff_x20 + 5);
      lVar15 = local_210[2];
      if (lVar15 == 0) {
        lVar17 = 0;
      }
      else {
        lVar17 = 0;
        puVar16 = (uint *)(local_210 + 4);
        do {
          uVar3 = *puVar16;
          if (uVar3 < 0x80) {
            lVar18 = 1;
          }
          else if ((int)uVar3 < 0) {
            lVar18 = 10;
          }
          else if (uVar3 >> 0x15 == 0) {
            if (uVar3 < 0x4000) {
              lVar18 = 2;
            }
            else {
              lVar18 = 3;
            }
          }
          else if (uVar3 >> 0x1c == 0) {
            lVar18 = 4;
          }
          else {
            lVar18 = 5;
          }
          bVar5 = SCARRY8(lVar17,lVar18);
          lVar17 = lVar17 + lVar18;
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100500dcc);
            (*pcVar4)();
          }
          lVar15 = lVar15 + -1;
          puVar16 = puVar16 + 1;
        } while (lVar15 != 0);
      }
      lVar15 = 4;
      if ((uVar2 & 0x1fffffff) >> 0x19 != 0) {
        lVar15 = 5;
      }
      lVar18 = 3;
      if (0x1fffff < uVar2 << 3) {
        lVar18 = lVar15;
      }
      if ((uVar2 & 0x1fffffff) >> 0xb == 0) {
        lVar18 = 2;
      }
      lVar15 = 1;
      if (0x7f < uVar2 << 3) {
        lVar15 = lVar18;
      }
      lVar18 = lVar17;
      FUN_1005630a4();
      if (SCARRY8(lVar15,lVar18)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100500dd0);
        (*pcVar4)();
      }
      lVar20 = lVar15 + lVar18 + lVar17;
      if (SCARRY8(lVar15 + lVar18,lVar17)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100500dd4);
        (*pcVar4)();
      }
      FUN_10009a308();
      local_1a8 = lVar20;
      puStack_1a0 = puVar12;
      _swift_bridgeObjectRetain(plVar22);
      FUN_10050574c(&local_1a8,uVar2 << 3 | 2,lVar17,plVar22);
      FUN_100506304(&local_108);
      puVar6 = puStack_1a0;
      lVar15 = local_1a8;
      FUN_100006cc8(unaff_x20[0x12],unaff_x20[0x13]);
      _swift_bridgeObjectRelease(plVar22);
      unaff_x20[0x12] = lVar15;
      unaff_x20[0x13] = (long)puVar6;
      goto LAB_100500d04;
    }
  }
  FUN_100506304(&local_108);
LAB_100500d04:
  *(undefined1 *)(unaff_x20 + 4) = 1;
  return;
}

