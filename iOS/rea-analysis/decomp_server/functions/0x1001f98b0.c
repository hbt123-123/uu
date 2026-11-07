// rea decompile_all
// name: FUN_1001f98b0
// address: 0x1001f98b0
// body: available
// range: 0x1001f98b0-0x1001fa267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001fa25c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001f98b0(ulong param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined6 uVar7;
  code *pcVar8;
  int iVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  char cVar25;
  ulong uVar26;
  uint uVar27;
  ulong uVar28;
  undefined1 local_c0 [24];
  undefined8 local_a8;
  ulong local_a0;
  undefined *local_90;
  undefined8 *local_88;
  long local_80;
  ulong uStack_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  uStack_78 = 0xc000000000000000;
  local_80 = 0;
  iVar9 = (int)param_1;
  uVar21 = (ulong)iVar9;
  uVar28 = param_2 >> 0x30 & 0xff;
  uVar6 = (uint)(param_2 >> 0x20);
  uVar27 = uVar6 >> 0x1e;
  if (uVar6 >> 0x1e < 2) {
    uVar10 = uVar28;
    if (uVar27 != 0) {
      iVar20 = (int)(param_1 >> 0x20);
      if (SBORROW4(iVar20,iVar9)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1001fa248);
        (*pcVar8)();
      }
      __s10Foundation4DataV15_RepresentationO15reserveCapacityyySiF((long)(iVar20 - iVar9));
      uVar10 = uVar21;
      goto LAB_1001f9974;
    }
  }
  else {
    uVar10 = 0;
    if (uVar27 == 2) {
      if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1001fa244);
        (*pcVar8)();
      }
      __s10Foundation4DataV15_RepresentationO15reserveCapacityyySiF
                (*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10));
      uVar10 = *(ulong *)(param_1 + 0x10);
      goto LAB_1001f9974;
    }
  }
  __s10Foundation4DataV15_RepresentationO15reserveCapacityyySiF(uVar10);
  uVar10 = 0;
LAB_1001f9974:
  uVar26 = (long)param_1 >> 0x20;
  uVar22 = uVar10;
LAB_1001f9a18:
  do {
    while( true ) {
      uVar16 = uVar22;
      uVar22 = local_a0;
      uVar23 = uVar6 >> 0x1e;
      if (uVar23 < 2) {
        uVar14 = uVar28;
        if (uVar27 != 0) {
          uVar14 = uVar26;
        }
      }
      else {
        if (uVar27 != 2) {
          if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1001fa11c);
            (*pcVar8)();
          }
          goto LAB_1001fa1b8;
        }
        uVar14 = *(ulong *)(param_1 + 0x18);
      }
      if ((long)uVar14 <= (long)uVar16) goto LAB_1001fa1b8;
      local_a0._0_6_ = (undefined6)param_2;
      uVar7 = (undefined6)local_a0;
      uVar14 = uVar16;
      local_a0 = uVar22;
      if (uVar23 == 2) break;
      if (uVar23 == 1) {
        if (((long)uVar16 < (long)uVar21) || ((long)uVar26 <= (long)uVar16)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1001fa200);
          (*pcVar8)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar14 == 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1001fa250);
          (*pcVar8)();
        }
        uVar15 = uVar14;
        __s10Foundation13__DataStorageC7_offsetSivg();
        if (SBORROW8(uVar16,uVar15)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1001fa208);
          (*pcVar8)();
        }
        goto LAB_1001f9ad0;
      }
      if ((long)uVar28 <= (long)uVar16) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1001fa1f8);
        (*pcVar8)();
      }
      local_a8 = param_1;
      local_a0._6_2_ = SUB82(uVar22,6);
      cVar25 = *(char *)((long)&local_a8 + uVar16);
      uVar15 = uVar16;
      if (cVar25 == '\x1b') goto LAB_1001f9adc;
LAB_1001f9bc8:
      uVar23 = (uint)(uStack_78 >> 0x3e);
      if (uVar23 < 2) {
        uVar22 = uStack_78 >> 0x30 & 0xff;
        if (uVar23 != 0) {
          uVar22 = local_80 >> 0x20;
        }
      }
      else if (uVar23 == 2) {
        uVar22 = *(ulong *)(local_80 + 0x18);
      }
      else {
        uVar22 = 0;
      }
      puVar11 = &DAT_100a7d500;
      FUN_100004bb4(&DAT_100a7d500,&DAT_100812820);
      puVar12 = &DAT_100a7d508;
      local_90 = puVar11;
      FUN_10003f840(&DAT_100a7d508,&DAT_100a7d500,&DAT_100812820,
                    PTR___ss15CollectionOfOneVyxG10Foundation15ContiguousBytesADs5UInt8VRszlMc_100996350
                   );
      local_a8 = CONCAT71(local_a8._1_7_,cVar25);
      puVar13 = &local_a8;
      local_88 = puVar12;
      FUN_10003f030(puVar13,puVar11);
      local_c0[0] = *(undefined1 *)puVar13;
      __s10Foundation4DataV15_RepresentationO15replaceSubrange_4with5countySnySiG_SVSgSitF
                (uVar22,uVar22,local_c0,1);
      FUN_10003f094(&local_a8);
      uVar22 = uVar16 + 1;
    }
    if ((long)uVar16 < *(long *)(param_1 + 0x10)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1001fa1fc);
      (*pcVar8)();
    }
    if (*(long *)(param_1 + 0x18) <= (long)uVar16) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1001fa204);
      (*pcVar8)();
    }
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    if (uVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1001fa254);
      (*pcVar8)();
    }
    uVar15 = uVar14;
    __s10Foundation13__DataStorageC7_offsetSivg();
    if (SBORROW8(uVar16,uVar15)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1001fa20c);
      (*pcVar8)();
    }
LAB_1001f9ad0:
    cVar25 = *(char *)(uVar14 + (uVar16 - uVar15));
    if (cVar25 != '\x1b') goto LAB_1001f9bc8;
LAB_1001f9adc:
    uVar22 = uVar28;
    if ((uVar23 != 0) && (uVar22 = uVar26, uVar23 == 2)) {
      uVar22 = *(ulong *)(param_1 + 0x18);
    }
    lVar1 = uVar16 + 1;
    if ((long)uVar22 <= lVar1) {
      uVar6 = (uint)(uStack_78 >> 0x20);
      uVar27 = uVar6 >> 0x1e;
      if (uVar6 >> 0x1e < 2) {
        if (uVar27 == 0) {
          uVar21 = uStack_78 >> 0x30 & 0xff;
        }
        else {
          uVar21 = local_80 >> 0x20;
        }
      }
      else if (uVar27 == 2) {
        uVar21 = *(ulong *)(local_80 + 0x18);
      }
      else {
        uVar21 = 0;
      }
      puVar11 = &DAT_100a7d500;
      FUN_100004bb4(&DAT_100a7d500,&DAT_100812820);
      puVar12 = &DAT_100a7d508;
      local_90 = puVar11;
      FUN_10003f840(&DAT_100a7d508,&DAT_100a7d500,&DAT_100812820,
                    PTR___ss15CollectionOfOneVyxG10Foundation15ContiguousBytesADs5UInt8VRszlMc_100996350
                   );
      local_a8 = CONCAT71(local_a8._1_7_,0x1b);
      puVar13 = &local_a8;
      local_88 = puVar12;
      FUN_10003f030(puVar13,puVar11);
      local_c0[0] = *(undefined1 *)puVar13;
      __s10Foundation4DataV15_RepresentationO15replaceSubrange_4with5countySnySiG_SVSgSitF
                (uVar21,uVar21,local_c0,1);
      FUN_10003f094(&local_a8);
LAB_1001fa1b8:
      if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail(local_80,uStack_78);
      }
      return;
    }
    uVar22 = param_1;
    if (uVar23 == 2) {
      if (lVar1 < *(long *)(param_1 + 0x10)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1001fa210);
        (*pcVar8)();
      }
      if (*(long *)(param_1 + 0x18) <= lVar1) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1001fa21c);
        (*pcVar8)();
      }
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (uVar15 == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1001fa25c);
        (*pcVar8)();
      }
      uVar14 = uVar15;
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar1,uVar14)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1001fa224);
        (*pcVar8)();
      }
LAB_1001f9c20:
      bVar4 = *(byte *)(uVar15 + (lVar1 - uVar14));
      uVar24 = (uint)bVar4;
      uVar23 = uVar24;
      if (bVar4 < 0x5e) goto LAB_1001f9c30;
LAB_1001f9cdc:
      if (1 < uVar23 - 0x5e) goto LAB_1001f9dfc;
LAB_1001f9ce8:
      FUN_1001f8e98(param_1,param_2,lVar1);
      goto LAB_1001f9a18;
    }
    if (uVar23 == 1) {
      if ((lVar1 < (long)uVar21) || ((long)uVar26 <= lVar1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1001fa218);
        (*pcVar8)();
      }
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (uVar15 == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1001fa258);
        (*pcVar8)();
      }
      uVar14 = uVar15;
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar1,uVar14)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1001fa220);
        (*pcVar8)();
      }
      goto LAB_1001f9c20;
    }
    if ((long)uVar28 <= lVar1) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1001fa214);
      (*pcVar8)();
    }
    local_a8 = param_1;
    local_a0 = CONCAT26(local_a0._6_2_,uVar7);
    bVar4 = *(byte *)((long)&local_a8 + uVar16 + 1);
    uVar23 = (uint)bVar4;
    uVar24 = (uint)bVar4;
    if (0x5d < bVar4) goto LAB_1001f9cdc;
LAB_1001f9c30:
    if (uVar24 == 0x50) goto LAB_1001f9ce8;
    if (uVar24 == 0x5b) {
      uVar14 = param_1;
      uVar22 = param_2;
      FUN_1001f95d0(param_1,param_2,lVar1);
      if ((uVar14 & 1) == 0) {
        if ((long)uVar22 < (long)uVar16) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1001fa228);
          (*pcVar8)();
        }
        uVar15 = uVar22;
        __s10Foundation4DataV15_RepresentationOyACSnySiGcig(uVar16,uVar22,param_1,param_2);
        local_90 = PTR___s10Foundation4DataVN_1009961e8;
        local_88 = (undefined8 *)PTR___s10Foundation4DataVAA15ContiguousBytesAAWP_1009961d8;
        plVar17 = &local_a8;
        local_a8 = uVar16;
        local_a0 = uVar15;
        FUN_10003f030();
        lVar1 = *plVar17;
        uVar14 = plVar17[1];
        uVar23 = (uint)(uVar14 >> 0x20);
        uVar24 = uVar23 >> 0x1e;
        if (uVar23 >> 0x1e < 2) {
          if (uVar24 == 0) {
            local_c0[0] = (undefined1)lVar1;
            local_c0[1] = (undefined1)((ulong)lVar1 >> 8);
            local_c0[2] = (undefined1)((ulong)lVar1 >> 0x10);
            local_c0[3] = (undefined1)((ulong)lVar1 >> 0x18);
            local_c0[4] = (undefined1)((ulong)lVar1 >> 0x20);
            local_c0[5] = (undefined1)((ulong)lVar1 >> 0x28);
            local_c0[6] = (undefined1)((ulong)lVar1 >> 0x30);
            local_c0[7] = (undefined1)((ulong)lVar1 >> 0x38);
            local_c0[8] = (undefined1)uVar14;
            local_c0[9] = (undefined1)(uVar14 >> 8);
            local_c0[10] = (undefined1)(uVar14 >> 0x10);
            local_c0[0xb] = (undefined1)(uVar14 >> 0x18);
            local_c0[0xc] = (undefined1)(uVar14 >> 0x20);
            local_c0[0xd] = (undefined1)(uVar14 >> 0x28);
            puVar19 = local_c0 + (uVar14 >> 0x30 & 0xff);
LAB_1001fa0dc:
            __s10Foundation4DataV15_RepresentationO6append10contentsOfySW_tF(local_c0,puVar19);
          }
          else {
            if (lVar1 >> 0x20 < (long)(int)lVar1) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x1001fa24c);
              (*pcVar8)();
            }
            FUN_100008184(uVar16,uVar15);
            FUN_1001f81c0((long)(int)lVar1,lVar1 >> 0x20,uVar14 & 0x3fffffffffffffff,&local_80);
            FUN_100006cdc(uVar16,uVar15);
          }
        }
        else {
          if (uVar24 != 2) {
            local_c0[8] = 0;
            local_c0[9] = 0;
            local_c0[10] = 0;
            local_c0[0xb] = 0;
            local_c0[0xc] = 0;
            local_c0[0xd] = 0;
            local_c0[0] = 0;
            local_c0[1] = 0;
            local_c0[2] = 0;
            local_c0[3] = 0;
            local_c0[4] = 0;
            local_c0[5] = 0;
            local_c0[6] = 0;
            local_c0[7] = 0;
            puVar19 = local_c0;
            goto LAB_1001fa0dc;
          }
          uVar2 = *(undefined8 *)(lVar1 + 0x10);
          uVar3 = *(undefined8 *)(lVar1 + 0x18);
          FUN_100008184(uVar16,uVar15);
          FUN_1001f81c0(uVar2,uVar3,uVar14 & 0x3fffffffffffffff,&local_80);
          FUN_100006cdc(uVar16,uVar15);
        }
        FUN_10003f094(&local_a8);
      }
    }
    else if (uVar24 == 0x5d) {
      FUN_1001f9230(param_1,param_2,lVar1);
    }
    else {
LAB_1001f9dfc:
      uVar23 = (uint)(uStack_78 >> 0x20);
      uVar24 = uVar23 >> 0x1e;
      if (uVar23 >> 0x1e < 2) {
        if (uVar24 == 0) {
          uVar22 = uStack_78 >> 0x30 & 0xff;
        }
        else {
          uVar22 = local_80 >> 0x20;
        }
      }
      else if (uVar24 == 2) {
        uVar22 = *(ulong *)(local_80 + 0x18);
      }
      else {
        uVar22 = 0;
      }
      puVar11 = &DAT_100a7d500;
      FUN_100004bb4(&DAT_100a7d500,&DAT_100812820);
      puVar12 = &DAT_100a7d508;
      local_90 = puVar11;
      FUN_10003f840(&DAT_100a7d508,&DAT_100a7d500,&DAT_100812820,
                    PTR___ss15CollectionOfOneVyxG10Foundation15ContiguousBytesADs5UInt8VRszlMc_100996350
                   );
      local_a8 = CONCAT71(local_a8._1_7_,0x1b);
      puVar13 = &local_a8;
      local_88 = puVar12;
      FUN_10003f030(puVar13,puVar11);
      local_c0[0] = *(undefined1 *)puVar13;
      __s10Foundation4DataV15_RepresentationO15replaceSubrange_4with5countySnySiG_SVSgSitF
                (uVar22,uVar22,local_c0,1);
      puVar13 = &local_a8;
      FUN_10003f094();
      if (uVar27 == 2) {
        if (lVar1 < *(long *)(param_1 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1001fa234);
          (*pcVar8)();
        }
        if (*(long *)(param_1 + 0x18) <= lVar1) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1001fa238);
          (*pcVar8)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (puVar13 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1001fa268);
          (*pcVar8)();
        }
        puVar18 = puVar13;
        __s10Foundation13__DataStorageC7_offsetSivg();
        if (SBORROW8(lVar1,(long)puVar18)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1001fa240);
          (*pcVar8)();
        }
LAB_1001f9f3c:
        uVar5 = *(undefined1 *)((long)puVar13 + (lVar1 - (long)puVar18));
      }
      else {
        if (uVar27 == 1) {
          if ((lVar1 < (long)uVar21) || ((long)uVar26 <= lVar1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1001fa22c);
            (*pcVar8)();
          }
          __s10Foundation13__DataStorageC6_bytesSvSgvg();
          if (puVar13 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1001fa264);
            (*pcVar8)();
          }
          puVar18 = puVar13;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar1,(long)puVar18)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1001fa23c);
            (*pcVar8)();
          }
          goto LAB_1001f9f3c;
        }
        if ((long)uVar28 <= lVar1) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1001fa230);
          (*pcVar8)();
        }
        local_a8 = param_1;
        local_a0 = CONCAT26(local_a0._6_2_,uVar7);
        uVar5 = *(undefined1 *)((long)&local_a8 + uVar16 + 1);
      }
      uVar23 = (uint)(uStack_78 >> 0x20);
      uVar24 = uVar23 >> 0x1e;
      if (uVar23 >> 0x1e < 2) {
        if (uVar24 == 0) {
          uVar22 = uStack_78 >> 0x30 & 0xff;
        }
        else {
          uVar22 = local_80 >> 0x20;
        }
      }
      else if (uVar24 == 2) {
        uVar22 = *(ulong *)(local_80 + 0x18);
      }
      else {
        uVar22 = 0;
      }
      local_a8 = CONCAT71(local_a8._1_7_,uVar5);
      puVar13 = &local_a8;
      local_90 = puVar11;
      local_88 = puVar12;
      FUN_10003f030(puVar13,puVar11);
      local_c0[0] = *(undefined1 *)puVar13;
      __s10Foundation4DataV15_RepresentationO15replaceSubrange_4with5countySnySiG_SVSgSitF
                (uVar22,uVar22,local_c0,1);
      FUN_10003f094(&local_a8);
      uVar22 = uVar16 + 2;
    }
  } while( true );
}

