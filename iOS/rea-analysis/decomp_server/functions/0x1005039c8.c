// rea decompile_all
// name: FUN_1005039c8
// address: 0x1005039c8
// body: available
// range: 0x1005039c8-0x100504cef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100504cc0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010050414c) */
/* WARNING: Removing unreachable block (ram,0x000100503ff0) */
/* WARNING: Removing unreachable block (ram,0x000100504c60) */
/* WARNING: Removing unreachable block (ram,0x000100504bbc) */
/* WARNING: Removing unreachable block (ram,0x000100504c68) */
/* WARNING: Removing unreachable block (ram,0x000100504b78) */
/* WARNING: Removing unreachable block (ram,0x000100504b7c) */
/* WARNING: Removing unreachable block (ram,0x000100503bfc) */
/* WARNING: Removing unreachable block (ram,0x000100504c40) */

void FUN_1005039c8(undefined6 *param_1,ulong param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 uVar10;
  uint uVar11;
  undefined6 *puVar12;
  int iVar13;
  char *pcVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined6 *puVar19;
  long *unaff_x20;
  void *pvVar20;
  long unaff_x21;
  ulong uVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  long lVar24;
  long lVar25;
  undefined1 auStack_2b0 [8];
  ulong local_2a8;
  ulong local_2a0;
  code *local_298;
  ulong local_290;
  long local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  ulong local_268;
  undefined8 local_260;
  undefined6 *local_258;
  code *local_250;
  undefined1 local_246;
  undefined1 local_245;
  undefined1 local_244;
  undefined1 local_243;
  undefined1 local_242;
  undefined1 local_241;
  undefined1 local_240;
  undefined1 local_23f;
  undefined1 local_23e;
  undefined1 local_23d;
  undefined1 local_23c;
  undefined1 local_23b;
  undefined1 local_23a;
  undefined1 local_239;
  undefined1 auStack_238 [40];
  undefined6 auStack_210 [3];
  long local_1f8;
  undefined1 auStack_1e0 [56];
  undefined8 local_1a8;
  undefined1 local_1a0;
  undefined8 local_198;
  undefined6 local_170;
  undefined2 uStack_16a;
  uint6 uStack_168;
  byte bStack_162;
  undefined1 uStack_161;
  undefined1 *local_160;
  long local_158;
  long local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [24];
  long local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  puVar19 = param_1;
  uVar9 = param_2;
  FUN_1004fd7d4();
  if (unaff_x21 == 0) {
    lVar24 = 0;
    local_250 = (code *)((ulong)local_250 & 0xffffffff00000000);
    uVar21 = 0xf000000000000000;
    uStack_278 = 0xf000000000000000;
    local_280 = 0;
    local_268 = param_2;
    local_260 = param_3;
    local_258 = param_1;
    while ((uVar9 & 1) == 0) {
      if (puVar19 == (undefined6 *)0x2) {
        if (*(char *)((long)unaff_x20 + 0x21) != '\0') goto LAB_100504948;
        lVar17 = unaff_x20[1];
        uVar9 = lVar17 - 1;
        if (lVar17 < 1) {
          uVar10 = 1;
LAB_1005049cc:
          FUN_100506290();
          _swift_allocError(&DAT_1009cdf18,puVar19,0,0);
          *(undefined1 *)puVar19 = uVar10;
          goto LAB_1005049ec;
        }
        pcVar14 = (char *)*unaff_x20;
        uVar16 = (ulong)*pcVar14;
        if ((long)uVar16 < 0) {
          if (lVar17 == 1) {
            uVar10 = 3;
            goto LAB_1005049cc;
          }
          uVar16 = uVar16 & 0x7f;
          pcVar14 = pcVar14 + 2;
          uVar18 = 7;
          while (uVar16 = ((ulong)(byte)pcVar14[-1] & 0x7f) << (uVar18 & 0x3f) | uVar16,
                pcVar14[-1] < '\0') {
            uVar10 = 3;
            if (uVar9 < 2) goto LAB_1005049cc;
            pcVar14 = pcVar14 + 1;
            uVar9 = uVar9 - 1;
            bVar1 = 0x38 < uVar18;
            uVar18 = uVar18 + 7;
            if (bVar1) goto LAB_1005049cc;
          }
          uVar9 = uVar9 - 1;
          *unaff_x20 = (long)pcVar14;
        }
        else {
          *unaff_x20 = (long)(pcVar14 + 1);
        }
        unaff_x20[1] = uVar9;
        *(undefined1 *)(unaff_x20 + 4) = 1;
        if ((int)uVar16 == 0) goto LAB_100504948;
        uVar9 = 0;
        FUN_10007f314(&local_a0,&local_170,&DAT_100aaa280,&DAT_100835b68);
        lVar17 = local_158;
        puVar19 = &local_170;
        FUN_100040bb4(puVar19,&DAT_100aaa280,&DAT_100835b68);
        if (lVar17 == 0) {
          lVar17 = unaff_x20[9];
          if (lVar17 == 0) {
            local_288 = lVar24;
            FUN_100040bb4(&local_a0,&DAT_100aaa280,&DAT_100835b68);
            FUN_100006cc8(local_288,uVar21);
            local_150 = 0;
            uStack_168 = 0;
            bStack_162 = 0;
            uStack_161 = 0;
            local_170 = 0;
            uStack_16a = 0;
            local_158 = 0;
            local_160 = (undefined1 *)0x0;
          }
          else {
            lVar25 = unaff_x20[10];
            plVar5 = unaff_x20 + 6;
            local_290 = uVar21;
            local_288 = lVar24;
            FUN_10003f030(plVar5,lVar17);
            lVar15 = *(long *)(lVar17 + -8);
            lVar24 = *(long *)(lVar15 + 0x40);
            (**(code **)(lVar15 + 0x10))
                      (auStack_2b0 + -(lVar24 + 0xfU & 0xfffffffffffffff0),plVar5,lVar17);
            (**(code **)(lVar25 + 8))
                      (&local_170,local_268,local_260,(long)(int)uVar16,lVar17,lVar25);
            (**(code **)(lVar15 + 8))(auStack_2b0 + -(lVar24 + 0xfU & 0xfffffffffffffff0),lVar17);
            FUN_100040bb4(&local_a0,&DAT_100aaa280,&DAT_100835b68);
            if (local_158 != 0) {
              FUN_1000a0074(&local_170,auStack_c8);
              puVar6 = auStack_c8;
              uVar9 = 0;
              FUN_1000b142c();
              uVar21 = local_290;
              lVar24 = local_288;
              if (local_290 >> 0x3c < 0xf) {
                uVar2 = (uint)(local_290 >> 0x20);
                uVar11 = uVar2 >> 0x1e;
                if (uVar2 >> 0x1e < 2) {
                  if (uVar11 == 0) {
                    local_246 = (undefined1)local_288;
                    local_245 = (undefined1)((ulong)local_288 >> 8);
                    local_244 = (undefined1)((ulong)local_288 >> 0x10);
                    local_243 = (undefined1)((ulong)local_288 >> 0x18);
                    local_242 = (undefined1)((ulong)local_288 >> 0x20);
                    local_241 = (undefined1)((ulong)local_288 >> 0x28);
                    local_240 = (undefined1)((ulong)local_288 >> 0x30);
                    local_23f = (undefined1)((ulong)local_288 >> 0x38);
                    local_23e = (undefined1)local_290;
                    local_23d = (undefined1)(local_290 >> 8);
                    local_23c = (undefined1)(local_290 >> 0x10);
                    local_23b = (undefined1)(local_290 >> 0x18);
                    local_23a = (undefined1)(local_290 >> 0x20);
                    uVar9 = local_290 >> 0x30 & 0xff;
                    local_239 = (undefined1)(local_290 >> 0x28);
                    if (uVar9 != 0) {
                      FUN_1005062d0();
                      uVar10 = local_1a0;
                      uVar8 = local_1a8;
                      FUN_10007f314(auStack_1e0,auStack_238,&DAT_100aaa0e8,&DAT_1008358c0);
                      uStack_140 = 0;
                      local_148 = 0;
                      uStack_130 = 0;
                      local_138 = 0;
                      uStack_120 = 0;
                      local_128 = 0;
                      local_118 = 0;
                      local_110 = 1;
                      uStack_e8 = uStack_278;
                      local_f0 = local_280;
                      uStack_d8 = uStack_278;
                      uStack_e0 = local_280;
                      local_160 = &local_246;
                      local_170 = SUB86(local_160,0);
                      uStack_16a = (undefined2)((ulong)local_160 >> 0x30);
                      uStack_168 = (uint6)uVar9;
                      bStack_162 = 0;
                      uStack_161 = 0;
                      local_158 = 0;
                      FUN_100128b30(auStack_238,&uStack_140,&DAT_100aaa0e8,&DAT_1008358c0);
                      uVar3 = local_198;
                      local_108 = uVar8;
                      local_100 = uVar10;
                      FUN_100506304(auStack_210);
                      lVar24 = lStack_a8;
                      lVar17 = local_b0;
                      local_f8 = uVar3;
                      local_150 = CONCAT62(local_150._2_6_,0x200);
                      FUN_10003f030(auStack_c8,local_b0);
                      (**(code **)(lVar24 + 8))(lVar17,lVar24);
                      pcVar4 = (code *)auStack_238;
                      FUN_100505f7c();
                      local_298 = pcVar4;
                      FUN_10007f314(lVar17,auStack_210,&DAT_100aaa288,&DAT_100836090);
                      lVar24 = local_1f8;
                      FUN_100040bb4(auStack_210,&DAT_100aaa288,&DAT_100836090);
                      lVar25 = lStack_a8;
                      lVar15 = local_b0;
                      if (lVar24 == 0) {
                        FUN_10003f030(auStack_c8,local_b0);
                        (**(code **)(lVar25 + 0x20))
                                  (auStack_210,&local_170,&DAT_1009cdc68,&PTR_PTR_1009cdcb0,lVar15,
                                   lVar25);
                        FUN_100128b30(auStack_210,lVar17,&DAT_100aaa288,&DAT_100836090);
                      }
                      else {
                        lVar24 = *(long *)(lVar17 + 0x18);
                        if (lVar24 == 0) {
                    /* WARNING: Does not return */
                          pcVar4 = (code *)SoftwareBreakpoint(1,0x100504ce8);
                          (*pcVar4)();
                        }
                        lVar15 = *(long *)(lVar17 + 0x20);
                        FUN_1000ce034(lVar17,lVar24);
                        (**(code **)(lVar15 + 0x28))
                                  (&local_170,&DAT_1009cdc68,&PTR_PTR_1009cdcb0,lVar24,lVar15);
                      }
                      lVar24 = local_288;
                      uVar9 = local_290;
                      pcVar4 = local_298;
                      if ((char)local_150 != '\x01') {
                        (*local_298)(auStack_238,0);
                        goto LAB_100504bd0;
                      }
                      FUN_10007f314(lVar17,auStack_210,&DAT_100aaa288,&DAT_100836090);
                      lVar17 = local_1f8;
                      puVar19 = auStack_210;
                      FUN_100040bb4(puVar19,&DAT_100aaa288,&DAT_100836090);
                      if (lVar17 != 0) {
                        (*pcVar4)(auStack_238,0);
                        FUN_100506304(&local_170);
                        goto LAB_100504664;
                      }
                      FUN_100506290();
                      _swift_allocError(&DAT_1009cdf18,puVar19,0,0);
                      *(undefined1 *)puVar19 = 5;
                      _swift_willThrow();
                      (*pcVar4)(auStack_238,0);
                      FUN_100506304(&local_170);
LAB_100504c88:
                      FUN_100006cc8(lVar24,uVar9);
                      FUN_100040bb4(&local_a0,&DAT_100aaa280,&DAT_100835b68);
                      puVar19 = (undefined6 *)auStack_c8;
                      goto LAB_100504cac;
                    }
                  }
                  else {
                    lVar24 = (long)(int)local_288;
                    puVar22 = (undefined1 *)((local_288 >> 0x20) - lVar24);
                    if (local_288 >> 0x20 < lVar24) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x100504cbc);
                      (*pcVar4)();
                    }
                    __s10Foundation13__DataStorageC6_bytesSvSgvg();
                    if (puVar6 == (undefined1 *)0x0) {
                      puVar23 = (undefined1 *)0x0;
                    }
                    else {
                      puVar7 = puVar6;
                      __s10Foundation13__DataStorageC7_offsetSivg();
                      if (SBORROW8(lVar24,(long)puVar7)) {
                    /* WARNING: Does not return */
                        pcVar4 = (code *)SoftwareBreakpoint(1,0x100504ccc);
                        (*pcVar4)();
                      }
                      puVar23 = puVar6 + (lVar24 - (long)puVar7);
                      puVar6 = puVar7;
                    }
                    __s10Foundation13__DataStorageC7_lengthSivg();
                    if ((long)puVar22 <= (long)puVar6) {
                      puVar6 = puVar22;
                    }
                    lVar24 = local_288;
                    if ((puVar23 != (undefined1 *)0x0) && (0 < (long)puVar6)) {
                      FUN_1005062d0();
                      uVar10 = local_1a0;
                      uVar8 = local_1a8;
                      FUN_10007f314(auStack_1e0,auStack_238,&DAT_100aaa0e8,&DAT_1008358c0);
                      uStack_140 = 0;
                      local_148 = 0;
                      uStack_130 = 0;
                      local_138 = 0;
                      uStack_120 = 0;
                      local_128 = 0;
                      local_118 = 0;
                      local_110 = 1;
                      uStack_e8 = uStack_278;
                      local_f0 = local_280;
                      uStack_d8 = uStack_278;
                      uStack_e0 = local_280;
                      local_170 = SUB86(puVar23,0);
                      uStack_16a = (undefined2)((ulong)puVar23 >> 0x30);
                      uStack_168 = (uint6)puVar6;
                      bStack_162 = (byte)((ulong)puVar6 >> 0x30);
                      uStack_161 = (undefined1)((ulong)puVar6 >> 0x38);
                      local_158 = 0;
                      local_160 = puVar23;
                      FUN_100128b30(auStack_238,&uStack_140,&DAT_100aaa0e8,&DAT_1008358c0);
                      uVar3 = local_198;
                      local_108 = uVar8;
                      local_100 = uVar10;
                      FUN_100506304(auStack_210);
                      lVar24 = lStack_a8;
                      lVar17 = local_b0;
                      local_f8 = uVar3;
                      local_150 = CONCAT62(local_150._2_6_,0x200);
                      FUN_10003f030(auStack_c8,local_b0);
                      (**(code **)(lVar24 + 8))(lVar17,lVar24);
                      pcVar4 = (code *)auStack_238;
                      FUN_100505f7c();
                      FUN_10007f314(lVar17,auStack_210,&DAT_100aaa288,&DAT_100836090);
                      lVar24 = local_1f8;
                      FUN_100040bb4(auStack_210,&DAT_100aaa288,&DAT_100836090);
                      if (lVar24 != 0) {
                        lVar24 = *(long *)(lVar17 + 0x18);
                        if (lVar24 == 0) {
                    /* WARNING: Does not return */
                          pcVar4 = (code *)SoftwareBreakpoint(1,0x100504cf0);
                          (*pcVar4)();
                        }
                        goto LAB_100504458;
                      }
LAB_1005044b0:
                      lVar15 = lStack_a8;
                      lVar24 = local_b0;
                      FUN_10003f030(auStack_c8,local_b0);
                      (**(code **)(lVar15 + 0x20))
                                (auStack_210,&local_170,&DAT_1009cdc68,&PTR_PTR_1009cdcb0,lVar24,
                                 lVar15);
                      FUN_100128b30(auStack_210,lVar17,&DAT_100aaa288,&DAT_100836090);
LAB_100504524:
                      lVar24 = local_288;
                      uVar9 = local_290;
                      if ((char)local_150 == '\x01') {
                        FUN_10007f314(lVar17,auStack_210,&DAT_100aaa288,&DAT_100836090);
                        lVar17 = local_1f8;
                        puVar19 = auStack_210;
                        FUN_100040bb4(puVar19,&DAT_100aaa288,&DAT_100836090);
                        if (lVar17 != 0) {
                          (*pcVar4)(auStack_238,0);
                          FUN_100506304(&local_170);
LAB_100504664:
                          FUN_100006cc8(lVar24);
                          lVar24 = 0;
                          uVar21 = 0xf000000000000000;
                          goto LAB_100504674;
                        }
                        FUN_100506290();
                        _swift_allocError(&DAT_1009cdf18,puVar19,0,0);
                        *(undefined1 *)puVar19 = 5;
                        _swift_willThrow();
                        (*pcVar4)(auStack_238,0);
                        FUN_100506304(&local_170);
                        goto LAB_100504c88;
                      }
                      (*pcVar4)(auStack_238,0);
LAB_100504bd0:
                      FUN_100506304(&local_170);
                      uVar21 = uVar9;
                    }
                  }
                }
                else if (uVar11 == 2) {
                  lVar24 = *(long *)(local_288 + 0x10);
                  lVar17 = *(long *)(local_288 + 0x18);
                  __s10Foundation13__DataStorageC6_bytesSvSgvg();
                  if (puVar6 == (undefined1 *)0x0) {
                    puVar22 = (undefined1 *)0x0;
                  }
                  else {
                    puVar23 = puVar6;
                    __s10Foundation13__DataStorageC7_offsetSivg();
                    if (SBORROW8(lVar24,(long)puVar23)) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x100504cc8);
                      (*pcVar4)();
                    }
                    puVar22 = puVar6 + (lVar24 - (long)puVar23);
                    puVar6 = puVar23;
                  }
                  puVar23 = (undefined1 *)(lVar17 - lVar24);
                  if (SBORROW8(lVar17,lVar24)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x100504cc0);
                    (*pcVar4)();
                  }
                  __s10Foundation13__DataStorageC7_lengthSivg();
                  if ((long)puVar23 <= (long)puVar6) {
                    puVar6 = puVar23;
                  }
                  lVar24 = local_288;
                  if ((puVar22 != (undefined1 *)0x0) && (0 < (long)puVar6)) {
                    FUN_1005062d0();
                    uVar10 = local_1a0;
                    uVar8 = local_1a8;
                    FUN_10007f314(auStack_1e0,auStack_238,&DAT_100aaa0e8,&DAT_1008358c0);
                    uStack_140 = 0;
                    local_148 = 0;
                    uStack_130 = 0;
                    local_138 = 0;
                    uStack_120 = 0;
                    local_128 = 0;
                    local_118 = 0;
                    local_110 = 1;
                    uStack_e8 = uStack_278;
                    local_f0 = local_280;
                    uStack_d8 = uStack_278;
                    uStack_e0 = local_280;
                    local_170 = SUB86(puVar22,0);
                    uStack_16a = (undefined2)((ulong)puVar22 >> 0x30);
                    uStack_168 = (uint6)puVar6;
                    bStack_162 = (byte)((ulong)puVar6 >> 0x30);
                    uStack_161 = (undefined1)((ulong)puVar6 >> 0x38);
                    local_158 = 0;
                    local_160 = puVar22;
                    FUN_100128b30(auStack_238,&uStack_140,&DAT_100aaa0e8,&DAT_1008358c0);
                    uVar3 = local_198;
                    local_108 = uVar8;
                    local_100 = uVar10;
                    FUN_100506304(auStack_210);
                    lVar24 = lStack_a8;
                    lVar17 = local_b0;
                    local_f8 = uVar3;
                    local_150 = CONCAT62(local_150._2_6_,0x200);
                    FUN_10003f030(auStack_c8,local_b0);
                    (**(code **)(lVar24 + 8))(lVar17,lVar24);
                    pcVar4 = (code *)auStack_238;
                    FUN_100505f7c();
                    FUN_10007f314(lVar17,auStack_210,&DAT_100aaa288,&DAT_100836090);
                    lVar24 = local_1f8;
                    FUN_100040bb4(auStack_210,&DAT_100aaa288,&DAT_100836090);
                    if (lVar24 == 0) goto LAB_1005044b0;
                    lVar24 = *(long *)(lVar17 + 0x18);
                    if (lVar24 == 0) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x100504cec);
                      (*pcVar4)();
                    }
LAB_100504458:
                    lVar15 = *(long *)(lVar17 + 0x20);
                    FUN_1000ce034(lVar17,lVar24);
                    (**(code **)(lVar15 + 0x28))
                              (&local_170,&DAT_1009cdc68,&PTR_PTR_1009cdcb0,lVar24,lVar15);
                    goto LAB_100504524;
                  }
                }
                FUN_100006cc8(lVar24,uVar21);
                FUN_100040bb4(&local_a0,&DAT_100aaa280,&DAT_100835b68);
                puVar19 = (undefined6 *)auStack_c8;
                goto LAB_100504c00;
              }
LAB_100504674:
              puVar19 = (undefined6 *)auStack_c8;
              FUN_10003f094();
              goto LAB_100503bf4;
            }
            FUN_100006cc8(local_288,local_290);
          }
          FUN_100040bb4(&local_170,&DAT_100aaa280,&DAT_100835b68);
          goto LAB_100504a1c;
        }
LAB_100503bf4:
        FUN_1004fd7d4();
      }
      else {
        if (puVar19 != (undefined6 *)0x3) {
          if (unaff_x20[3] != 0) {
            *unaff_x20 = unaff_x20[3];
LAB_100503b34:
            *(undefined1 *)(unaff_x20 + 4) = 1;
            goto LAB_100503bf4;
          }
          lVar15 = *unaff_x20 - unaff_x20[2];
          lVar17 = unaff_x20[1] + lVar15;
          if (SCARRY8(unaff_x20[1],lVar15)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100504b78);
            (*pcVar4)();
          }
          *unaff_x20 = unaff_x20[2];
          unaff_x20[1] = lVar17;
          if (lVar17 < 1) {
LAB_1005049a0:
            FUN_100506290();
            _swift_allocError(&DAT_1009cdf18,puVar19,0,0);
            uVar10 = 1;
          }
          else {
            FUN_1004fdea4();
            if (((puVar19 < (undefined6 *)0xffffffff) && ((undefined6 *)0x7 < puVar19)) &&
               (uVar2 = (uint)puVar19 & 7, uVar2 < 6)) {
              *(char *)((long)unaff_x20 + 0x21) = (char)uVar2;
              unaff_x20[5] = (ulong)puVar19 >> 3;
              FUN_100504f64();
              unaff_x20[3] = *unaff_x20;
              goto LAB_100503b34;
            }
LAB_10050497c:
            FUN_100506290();
            _swift_allocError(&DAT_1009cdf18,puVar19,0,0);
            uVar10 = 3;
          }
          *(undefined1 *)puVar19 = uVar10;
LAB_1005049ec:
          _swift_willThrow();
          FUN_100006cc8(lVar24,uVar21);
          FUN_100040bb4(&local_a0,&DAT_100aaa280,&DAT_100835b68);
          goto LAB_100504a1c;
        }
        if (((ulong)local_250 & 1) == 0) {
          FUN_10007f314(&local_a0,auStack_210,&DAT_100aaa280,&DAT_100835b68);
          puVar19 = auStack_210;
          if (local_1f8 != 0) {
            local_288 = lVar24;
            FUN_1000a0074(puVar19,&local_170);
            lVar24 = local_150;
            lVar17 = local_158;
            FUN_10003f030(&local_170,local_158);
            (**(code **)(lVar24 + 8))(lVar17,lVar24);
            pcVar4 = (code *)auStack_c8;
            FUN_100505f7c();
            local_250 = pcVar4;
            FUN_10007f314(lVar17,auStack_210,&DAT_100aaa288,&DAT_100836090);
            lVar24 = local_1f8;
            FUN_100040bb4(auStack_210,&DAT_100aaa288,&DAT_100836090);
            lVar15 = local_150;
            if (lVar24 == 0) {
              FUN_10003f030(&local_170,local_158);
              (**(code **)(lVar15 + 0x20))(auStack_210);
              FUN_100128b30(auStack_210,lVar17,&DAT_100aaa288,&DAT_100836090);
            }
            else {
              if (*(long *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100504ce4);
                (*pcVar4)();
              }
              lVar24 = *(long *)(lVar17 + 0x20);
              FUN_1000ce034(lVar17,*(long *)(lVar17 + 0x18));
              (**(code **)(lVar24 + 0x28))();
            }
            lVar24 = local_288;
            if ((char)unaff_x20[4] == '\x01') {
              FUN_10007f314(lVar17,auStack_210,&DAT_100aaa288,&DAT_100836090);
              lVar17 = local_1f8;
              puVar19 = auStack_210;
              FUN_100040bb4(puVar19,&DAT_100aaa288,&DAT_100836090);
              if (lVar17 != 0) {
                uVar9 = 0;
                (*local_250)(auStack_c8);
                puVar19 = &local_170;
                FUN_10003f094();
                goto LAB_10050413c;
              }
              FUN_100506290();
              _swift_allocError(&DAT_1009cdf18,puVar19,0,0);
              *(undefined1 *)puVar19 = 5;
              _swift_willThrow();
              (*local_250)(auStack_c8,0);
              FUN_100006cc8(lVar24,uVar21);
              FUN_100040bb4(&local_a0,&DAT_100aaa280,&DAT_100835b68);
              puVar19 = &local_170;
LAB_100504cac:
              FUN_10003f094(puVar19);
            }
            else {
              (*local_250)(auStack_c8,0);
              FUN_100040bb4(&local_a0,&DAT_100aaa280,&DAT_100835b68);
              FUN_100006cc8(lVar24,uVar21);
              puVar19 = &local_170;
LAB_100504c00:
              FUN_10003f094(puVar19);
            }
            goto LAB_100504a1c;
          }
          local_288 = lVar24;
          FUN_100040bb4(puVar19,&DAT_100aaa280,&DAT_100835b68);
          if (*(char *)((long)unaff_x20 + 0x21) != '\x02') goto LAB_100504948;
          FUN_1004fdea4();
          if ((undefined6 *)0x7ffffffe < puVar19) goto LAB_10050497c;
          puVar12 = (undefined6 *)unaff_x20[1];
          if ((long)puVar12 < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100504cd0);
            (*pcVar4)();
          }
          if (puVar12 < puVar19) goto LAB_1005049a0;
          pvVar20 = (void *)*unaff_x20;
          *unaff_x20 = (long)pvVar20 + (long)puVar19;
          unaff_x20[1] = (long)puVar12 - (long)puVar19;
          if (puVar19 == (undefined6 *)0x0) {
            uVar16 = 0;
            puVar19 = (undefined6 *)0x0;
            *(undefined1 *)(unaff_x20 + 4) = 1;
            uVar9 = 0xc000000000000000;
            lVar24 = 1;
          }
          else {
            if (puVar19 < (undefined6 *)0xf) {
              uStack_168 = 0;
              local_170 = 0;
              uStack_16a = 0;
              bStack_162 = (byte)puVar19;
              _memcpy(&local_170,pvVar20,(size_t)puVar19);
              puVar12 = (undefined6 *)CONCAT26(uStack_16a,local_170);
              puVar19 = (undefined6 *)(ulong)bStack_162;
              uVar9 = local_2a0 & 0xf00000000000000 | (ulong)uStack_168 | (long)puVar19 << 0x30;
              *(undefined1 *)(unaff_x20 + 4) = 1;
              local_2a0 = uVar9;
            }
            else {
              uVar8 = 0;
              __s10Foundation13__DataStorageCMa();
              _swift_allocObject();
              __s10Foundation13__DataStorageC5bytes6lengthACSVSg_Sitcfc(pvVar20,puVar19,uVar8);
              puVar12 = (undefined6 *)((long)puVar19 << 0x20);
              uVar9 = (ulong)pvVar20 | 0x4000000000000000;
              *(undefined1 *)(unaff_x20 + 4) = 1;
            }
            if (puVar19 < (undefined6 *)0x80) {
              lVar24 = 1;
            }
            else if ((ulong)puVar19 >> 0x15 == 0) {
              if (puVar19 < (undefined6 *)0x4000) {
                lVar24 = 2;
              }
              else {
                lVar24 = 3;
              }
            }
            else if ((ulong)puVar19 >> 0x1c == 0) {
              lVar24 = 4;
            }
            else {
              lVar24 = 5;
            }
            uVar2 = (uint)(uVar9 >> 0x20);
            uVar11 = uVar2 >> 0x1e;
            puVar19 = puVar12;
            if (uVar2 >> 0x1e < 2) {
              if (uVar11 == 0) {
                uVar16 = uVar9 >> 0x30 & 0xff;
              }
              else {
                iVar13 = (int)((ulong)puVar12 >> 0x20);
                if (SBORROW4(iVar13,(int)puVar12)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x100504ce0);
                  (*pcVar4)();
                }
                uVar16 = (ulong)(iVar13 - (int)puVar12);
              }
            }
            else if (uVar11 == 2) {
              uVar16 = *(long *)(puVar12 + 3) - *(long *)(puVar12 + 2);
              if (SBORROW8(*(long *)(puVar12 + 3),*(long *)(puVar12 + 2))) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100504cdc);
                (*pcVar4)();
              }
            }
            else {
              uVar16 = 0;
            }
          }
          uVar18 = lVar24 + uVar16;
          if (SCARRY8(lVar24,uVar16)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100504cd4);
            (*pcVar4)();
          }
          if (uVar18 == 0) {
            lVar24 = 0;
            uVar16 = 0xc000000000000000;
          }
          else if ((long)uVar18 < 0xf) {
            if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100504cd8);
              (*pcVar4)();
            }
            lVar24 = 0;
            uVar16 = local_2a8 & 0xf00000000000000 | (uVar18 & 0xff) << 0x30;
            local_2a8 = uVar16;
          }
          else {
            __s10Foundation13__DataStorageCMa();
            _swift_allocObject();
            uVar16 = uVar18;
            __s10Foundation13__DataStorageC6lengthACSi_tcfc();
            if (uVar18 < 0x7fffffff) {
              lVar24 = uVar18 << 0x20;
              uVar16 = uVar16 | 0x4000000000000000;
            }
            else {
              lVar24 = 0;
              __s10Foundation4DataV14RangeReferenceCMa();
              _swift_allocObject();
              *(undefined8 *)(lVar24 + 0x10) = 0;
              *(ulong *)(lVar24 + 0x18) = uVar18;
              uVar16 = uVar16 | 0x8000000000000000;
            }
          }
          local_170 = (undefined6)lVar24;
          uStack_16a = (undefined2)((ulong)lVar24 >> 0x30);
          uStack_168 = (uint6)uVar16;
          bStack_162 = (byte)(uVar16 >> 0x30);
          uStack_161 = (undefined1)(uVar16 >> 0x38);
          FUN_100008184(puVar19,uVar9);
          FUN_100505b68(&local_170,puVar19,uVar9);
          FUN_100006cc8(local_288,uVar21);
          FUN_100006cdc();
          lVar24 = CONCAT26(uStack_16a,local_170);
          uVar21 = CONCAT17(uStack_161,CONCAT16(bStack_162,uStack_168));
        }
        else {
          if (*(char *)((long)unaff_x20 + 0x21) != '\x02') {
LAB_100504948:
            FUN_100040bb4(&local_a0,&DAT_100aaa280,&DAT_100835b68);
            FUN_100006cc8(lVar24,uVar21);
            goto LAB_100504a1c;
          }
          if (unaff_x20[3] == 0) {
            lVar15 = *unaff_x20 - unaff_x20[2];
            lVar17 = unaff_x20[1] + lVar15;
            if (SCARRY8(unaff_x20[1],lVar15)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100504cb8);
              (*pcVar4)();
            }
            *unaff_x20 = unaff_x20[2];
            unaff_x20[1] = lVar17;
            if (lVar17 < 1) goto LAB_1005049a0;
            FUN_1004fdea4();
            if ((((undefined6 *)0xfffffffe < puVar19) || (puVar19 < (undefined6 *)0x8)) ||
               (uVar2 = (uint)puVar19 & 7, 5 < uVar2)) goto LAB_10050497c;
            *(char *)((long)unaff_x20 + 0x21) = (char)uVar2;
            unaff_x20[5] = (ulong)puVar19 >> 3;
            FUN_100504f64();
            unaff_x20[3] = *unaff_x20;
          }
          else {
            *unaff_x20 = unaff_x20[3];
          }
          *(undefined1 *)(unaff_x20 + 4) = 1;
        }
LAB_10050413c:
        FUN_1004fd7d4();
        local_250 = (code *)CONCAT44(local_250._4_4_,1);
      }
    }
    FUN_100040bb4(&local_a0,&DAT_100aaa280,&DAT_100835b68);
    FUN_100006cc8(lVar24,uVar21);
  }
  else {
    FUN_100040bb4(&local_a0,&DAT_100aaa280,&DAT_100835b68);
    FUN_100006cc8(0,0xf000000000000000);
  }
LAB_100504a1c:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

