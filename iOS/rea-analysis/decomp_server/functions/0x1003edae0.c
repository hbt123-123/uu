// rea decompile_all
// name: FUN_1003edae0
// address: 0x1003edae0
// body: available
// range: 0x1003edae0-0x1003ee1bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003ee1bc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003edae0(long param_1)

{
  double dVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  long lVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  code *pcVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined1 uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  double *pdVar27;
  int iVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  long local_118;
  ulong uStack_110;
  long local_108;
  ulong uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined *local_e0;
  undefined *local_d8;
  long local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  ulong uStack_98;
  long local_90;
  
  local_90 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar26 = *(ulong *)(param_1 + 0x10);
  if (uVar26 == 0) {
    lVar25 = 0;
    uVar26 = 0xf000000000000000;
LAB_1003ee120:
    if (*(long *)PTR____stack_chk_guard_1009954a0 != local_90) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    auVar31._8_8_ = uVar26;
    auVar31._0_8_ = lVar25;
    return auVar31;
  }
  uStack_98 = 0xc000000000000000;
  local_a0 = 0;
  __s10Foundation4DataV15_RepresentationO6append10contentsOfySW_tF(&DAT_100a8a210,&DAT_100a8a212);
  __s10Foundation4DataV15_RepresentationO6append10contentsOfySW_tF(&DAT_100a8a240,&DAT_100a8a242);
  if (uVar26 >> 0x10 != 0) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x1003ee1ac);
    (*pcVar14)();
  }
  local_f8 = CONCAT62(local_f8._2_6_,(short)uVar26);
  puVar15 = &local_f8;
  lVar25 = (long)&local_f8 + 2;
  FUN_1001f8534(puVar15,lVar25);
  __s10Foundation4DataV6appendyyACF();
  FUN_100006cdc(puVar15,lVar25);
  uVar13 = uStack_98;
  lVar12 = local_a0;
  uStack_b8 = 0xc000000000000000;
  local_c0 = 0;
  uStack_a8 = 0xc000000000000000;
  local_b0 = 0;
  uVar21 = (uint)(uStack_98 >> 0x20);
  uVar19 = uVar21 >> 0x1e;
  if (uVar21 >> 0x1e < 2) {
    if (uVar19 == 0) {
      uVar22 = uStack_98 >> 0x30 & 0xff;
    }
    else {
      iVar20 = (int)((ulong)local_a0 >> 0x20);
      uVar21 = iVar20 - (int)local_a0;
      uVar22 = (ulong)uVar21;
      if (SBORROW4(iVar20,(int)local_a0)) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1003ee1bc);
        (*pcVar14)();
      }
      if ((int)uVar21 < 0) {
LAB_1003edc04:
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1003edc08);
        (*pcVar14)();
      }
    }
  }
  else if (uVar19 == 2) {
    uVar22 = *(long *)(local_a0 + 0x18) - *(long *)(local_a0 + 0x10);
    if (SBORROW8(*(long *)(local_a0 + 0x18),*(long *)(local_a0 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x1003ee1b8);
      (*pcVar14)();
    }
    if (0xffffffff < (long)uVar22) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x1003ee1b0);
      (*pcVar14)();
    }
    if ((long)uVar22 < 0) goto LAB_1003edc04;
  }
  else {
    uVar22 = 0;
  }
  uVar21 = (int)uVar26 * 0x10;
  uVar19 = (uint)uVar22 + uVar21;
  if (CARRY4((uint)uVar22,uVar21)) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x1003ee1b4);
    (*pcVar14)();
  }
  dVar29 = *(double *)(param_1 + 0x20);
  if ((ulong)ABS(dVar29) < 0x7ff0000000000000) {
    pdVar27 = (double *)(param_1 + 0x40);
    do {
      if (dVar29 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1003ee16c);
        (*pcVar14)();
      }
      if (9.223372036854776e+18 <= dVar29) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1003ee170);
        (*pcVar14)();
      }
      uVar22 = (ulong)dVar29;
      if ((long)uVar22 < 0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1003ee174);
        (*pcVar14)();
      }
      dVar30 = pdVar27[-3];
      if (0xfe < uVar22) {
        uVar22 = 0xff;
      }
      if (0x7fefffffffffffff < (ulong)ABS(dVar30)) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1003ee178);
        (*pcVar14)();
      }
      if (dVar30 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1003ee17c);
        (*pcVar14)();
      }
      if (9.223372036854776e+18 <= dVar30) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1003ee180);
        (*pcVar14)();
      }
      uVar23 = (ulong)dVar30;
      if ((long)uVar23 < 0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1003ee184);
        (*pcVar14)();
      }
      dVar1 = pdVar27[-2];
      dVar4 = pdVar27[-1];
      if (0xfe < uVar23) {
        uVar23 = 0xff;
      }
      uVar18 = 0;
      if (dVar29 != 256.0) {
        uVar18 = (undefined1)uVar22;
      }
      puVar16 = &DAT_100a7d500;
      local_d0 = 0;
      uStack_c8 = 0xc000000000000000;
      FUN_100004bb4(&DAT_100a7d500,&DAT_100812820);
      puVar17 = puVar16;
      local_e0 = puVar16;
      FUN_1001e77a8();
      puVar15 = &local_f8;
      local_d8 = puVar17;
      local_f8._0_1_ = uVar18;
      FUN_10003f030(puVar15,puVar16);
      local_108._0_1_ = *(undefined1 *)puVar15;
      FUN_100008184(dVar1,dVar4);
      __s10Foundation4DataV15_RepresentationO15replaceSubrange_4with5countySnySiG_SVSgSitF
                (0,0,&local_108,1);
      FUN_10003f094(&local_f8);
      local_f8._0_1_ = 0;
      if (dVar30 != 256.0) {
        local_f8._0_1_ = (undefined1)uVar23;
      }
      uVar21 = (uint)(uStack_c8 >> 0x20);
      uVar24 = uVar21 >> 0x1e;
      if (uVar21 >> 0x1e < 2) {
        uVar22 = uStack_c8 >> 0x30 & 0xff;
        if (uVar24 != 0) {
          uVar22 = local_d0 >> 0x20;
        }
      }
      else {
        uVar22 = 0;
        if (uVar24 == 2) {
          uVar22 = *(ulong *)(local_d0 + 0x18);
        }
      }
      puVar15 = &local_f8;
      local_e0 = puVar16;
      local_d8 = puVar17;
      FUN_10003f030(puVar15,puVar16);
      local_108._0_1_ = *(undefined1 *)puVar15;
      __s10Foundation4DataV15_RepresentationO15replaceSubrange_4with5countySnySiG_SVSgSitF
                (uVar22,uVar22,&local_108,1);
      FUN_10003f094(&local_f8);
      uVar21 = (uint)(uStack_c8 >> 0x20);
      uVar24 = uVar21 >> 0x1e;
      if (uVar21 >> 0x1e < 2) {
        uVar22 = uStack_c8 >> 0x30 & 0xff;
        if (uVar24 != 0) {
          uVar22 = local_d0 >> 0x20;
        }
      }
      else if (uVar24 == 2) {
        uVar22 = *(ulong *)(local_d0 + 0x18);
      }
      else {
        uVar22 = 0;
      }
      local_f8._0_1_ = 0;
      puVar15 = &local_f8;
      local_e0 = puVar16;
      local_d8 = puVar17;
      FUN_10003f030(puVar15,puVar16);
      local_108._0_1_ = *(undefined1 *)puVar15;
      __s10Foundation4DataV15_RepresentationO15replaceSubrange_4with5countySnySiG_SVSgSitF
                (uVar22,uVar22,&local_108,1);
      FUN_10003f094(&local_f8);
      uVar21 = (uint)(uStack_c8 >> 0x20);
      uVar24 = uVar21 >> 0x1e;
      if (uVar21 >> 0x1e < 2) {
        uVar22 = uStack_c8 >> 0x30 & 0xff;
        if (uVar24 != 0) {
          uVar22 = local_d0 >> 0x20;
        }
      }
      else if (uVar24 == 2) {
        uVar22 = *(ulong *)(local_d0 + 0x18);
      }
      else {
        uVar22 = 0;
      }
      local_f8 = (ulong)local_f8._1_7_ << 8;
      puVar15 = &local_f8;
      local_e0 = puVar16;
      local_d8 = puVar17;
      FUN_10003f030(puVar15,puVar16);
      local_108 = CONCAT71(local_108._1_7_,*(undefined1 *)puVar15);
      __s10Foundation4DataV15_RepresentationO15replaceSubrange_4with5countySnySiG_SVSgSitF
                (uVar22,uVar22,&local_108,1);
      FUN_10003f094(&local_f8);
      __s10Foundation4DataV15_RepresentationO6append10contentsOfySW_tF
                (&DAT_100a8a270,&DAT_100a8a272);
      __s10Foundation4DataV15_RepresentationO6append10contentsOfySW_tF
                (&DAT_100a8a2a0,&DAT_100a8a2a2);
      uVar21 = (uint)((ulong)dVar4 >> 0x20);
      uVar24 = uVar21 >> 0x1e;
      iVar28 = SUB84(dVar1,0);
      iVar20 = (int)((ulong)dVar1 >> 0x20);
      if (uVar21 >> 0x1e < 2) {
        if (uVar24 == 0) {
          uVar22 = (ulong)dVar4 >> 0x30 & 0xff;
        }
        else {
          if (SBORROW4(iVar20,iVar28)) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x1003ee19c);
            (*pcVar14)();
          }
          uVar22 = (ulong)(iVar20 - iVar28);
LAB_1003edef0:
          if ((long)uVar22 < 0) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x1003ee188);
            (*pcVar14)();
          }
          if (uVar22 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x1003ee18c);
            (*pcVar14)();
          }
        }
      }
      else {
        if (uVar24 == 2) {
          uVar22 = *(long *)((long)dVar1 + 0x18) - *(long *)((long)dVar1 + 0x10);
          if (SBORROW8(*(long *)((long)dVar1 + 0x18),*(long *)((long)dVar1 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x1003ee1a0);
            (*pcVar14)();
          }
          goto LAB_1003edef0;
        }
        uVar22 = 0;
      }
      __s10Foundation4DataV6appendyyACF(uVar22,0x4000000000000);
      __s10Foundation4DataV6appendyyACF(uVar19,0x4000000000000);
      uVar22 = uStack_c8;
      lVar25 = local_d0;
      __s10Foundation4DataV6appendyyACF(local_d0,uStack_c8);
      FUN_100008184(dVar1,dVar4);
      __s10Foundation4DataV6appendyyACF(dVar1,dVar4);
      FUN_100006cdc(dVar1,dVar4);
      if (uVar24 < 2) {
        if (uVar24 == 0) {
          FUN_100006cdc(dVar1,dVar4);
          uVar21 = (ushort)((ulong)dVar4 >> 0x30) & 0xff;
        }
        else {
          FUN_100006cdc(dVar1,dVar4);
          if (SBORROW4(iVar20,iVar28)) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x1003ee1a4);
            (*pcVar14)();
          }
          uVar23 = (ulong)(iVar20 - iVar28);
LAB_1003edfc4:
          if ((long)uVar23 < 0) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x1003ee190);
            (*pcVar14)();
          }
          if (uVar23 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x1003ee194);
            (*pcVar14)();
          }
          uVar21 = (uint)uVar23;
        }
        bVar7 = CARRY4(uVar19,uVar21);
        uVar19 = uVar19 + uVar21;
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x1003ee198);
          (*pcVar14)();
        }
      }
      else {
        if (uVar24 == 2) {
          lVar2 = *(long *)((long)dVar1 + 0x10);
          lVar5 = *(long *)((long)dVar1 + 0x18);
          FUN_100006cdc(dVar1,dVar4);
          uVar23 = lVar5 - lVar2;
          if (SBORROW8(lVar5,lVar2)) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x1003ee1a8);
            (*pcVar14)();
          }
          goto LAB_1003edfc4;
        }
        FUN_100006cdc(dVar1,dVar4);
      }
      FUN_100006cdc(lVar25,uVar22);
      uVar11 = uStack_a8;
      uVar10 = local_b0;
      puVar17 = PTR___s10Foundation4DataVN_1009961e8;
      puVar16 = PTR___s10Foundation4DataVAA15ContiguousBytesAAWP_1009961d8;
      uVar26 = uVar26 - 1;
      if (uVar26 == 0) {
        local_118 = lVar12;
        uStack_110 = uVar13;
        local_e0 = PTR___s10Foundation4DataVN_1009961e8;
        local_d8 = PTR___s10Foundation4DataVAA15ContiguousBytesAAWP_1009961d8;
        local_f8 = local_b0;
        uStack_f0 = uStack_a8;
        puVar15 = &local_f8;
        FUN_10003f030(puVar15,PTR___s10Foundation4DataVN_1009961e8);
        uVar3 = *puVar15;
        uVar6 = puVar15[1];
        FUN_100008184(lVar12,uVar13);
        FUN_100008184(uVar10,uVar11);
        FUN_1001f7dd8(uVar3,uVar6,&local_118);
        FUN_10003f094(&local_f8);
        uVar9 = uStack_b8;
        uVar8 = local_c0;
        uVar26 = uStack_110;
        lVar25 = local_118;
        local_108 = local_118;
        uStack_100 = uStack_110;
        local_e0 = puVar17;
        local_d8 = puVar16;
        local_f8 = local_c0;
        uStack_f0 = uStack_b8;
        puVar15 = &local_f8;
        FUN_10003f030(puVar15,puVar17);
        uVar3 = *puVar15;
        uVar6 = puVar15[1];
        FUN_100008184(lVar25,uVar26);
        FUN_100008184(uVar8,uVar9);
        FUN_1001f7dd8(uVar3,uVar6,&local_108);
        FUN_100006cdc(lVar25,uVar26);
        FUN_100006cdc(uVar8,uVar9);
        FUN_100006cdc(uVar10,uVar11);
        FUN_10003f094(&local_f8);
        uVar26 = uStack_100;
        lVar25 = local_108;
        FUN_100006cdc(lVar12,uVar13);
        goto LAB_1003ee120;
      }
      dVar29 = *pdVar27;
      pdVar27 = pdVar27 + 4;
    } while ((ulong)ABS(dVar29) < 0x7ff0000000000000);
  }
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x1003ee030);
  (*pcVar14)();
}

