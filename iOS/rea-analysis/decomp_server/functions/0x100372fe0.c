// rea decompile_all
// name: FUN_100372fe0
// address: 0x100372fe0
// body: available
// range: 0x100372fe0-0x1003734c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003734c0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100372fe0(undefined6 *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined6 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined6 **ppuVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined6 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined *puVar15;
  code cVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 auStack_140 [16];
  undefined6 **local_130;
  undefined6 *local_118;
  ulong local_110;
  code *local_108;
  ulong local_100;
  undefined6 *local_f0;
  ulong uStack_e8;
  undefined6 *local_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined6 local_b0;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined6 uStack_a8;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  undefined6 local_98;
  undefined2 uStack_92;
  undefined6 uStack_90;
  undefined2 auStack_8a [5];
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_b0 = SUB86(param_1,0);
  uVar2 = local_b0;
  uStack_aa = (undefined1)((ulong)param_1 >> 0x30);
  uStack_a9 = (undefined1)((ulong)param_1 >> 0x38);
  uStack_a8 = (undefined6)param_2;
  uStack_a2 = (undefined1)(param_2 >> 0x30);
  uStack_a1 = (undefined1)(param_2 >> 0x38);
  local_f0 = param_1;
  uStack_e8 = param_2;
  _swift_bridgeObjectRetain(param_2);
  puVar4 = &DAT_100a88fa0;
  FUN_100004bb4(&DAT_100a88fa0,&DAT_10081d3d8);
  ppuVar5 = &local_e0;
  puVar6 = PTR___sSS8UTF8ViewVN_1009957e0;
  _swift_dynamicCast(ppuVar5,&local_b0,PTR___sSS8UTF8ViewVN_1009957e0,puVar4,6);
  if ((int)ppuVar5 != 0) {
    FUN_1000a0074(&local_e0,&local_98);
    FUN_10003f030(&local_98,local_80);
    __s10Foundation15ContiguousBytesP010withUnsafeC0yqd__qd__SWKXEKlFTj
              (&local_b0,FUN_100099f10,0,PTR___s10Foundation4DataV15_RepresentationON_1009961c0,
               local_80,uStack_78);
    uStack_d8 = CONCAT17(uStack_a1,CONCAT16(uStack_a2,uStack_a8));
    local_e0 = (undefined6 *)CONCAT17(uStack_a9,CONCAT16(uStack_aa,local_b0));
    FUN_10003f094(&local_98);
    puVar8 = local_e0;
    uVar11 = uStack_d8;
    goto LAB_100373414;
  }
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = (undefined6 *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  FUN_1003734c4(&local_e0);
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1 >> 0x3c & 1) == 0) {
        puVar8 = param_1;
        uVar9 = param_2;
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
      }
      else {
        puVar8 = (undefined6 *)((param_2 & 0xfffffffffffffff) + 0x20);
        uVar9 = (ulong)param_1 & 0xffffffffffff;
      }
      uVar11 = 0;
      if (puVar8 != (undefined6 *)0x0) {
        uVar11 = uVar9 + (long)puVar8;
      }
    }
    else {
      uStack_92 = (undefined2)((ulong)param_1 >> 0x30);
      uStack_90 = (undefined6)(param_2 & 0xffffffffffffff);
      auStack_8a[0] = (undefined2)((param_2 & 0xffffffffffffff) >> 0x30);
      puVar8 = &local_98;
      uVar11 = (long)&local_98 + (param_2 >> 0x38 & 0xf);
      local_98 = uVar2;
    }
    FUN_1001f8534();
    if (uVar11 >> 0x3c < 0xf) goto LAB_100373414;
    param_1 = (undefined6 *)((ulong)param_1 & 0xffffffffffff);
    local_118 = puVar8;
    local_110 = uVar11;
    if ((param_2 & 0x2000000000000000) != 0) {
      param_1 = (undefined6 *)(param_2 >> 0x38 & 0xf);
    }
  }
  else {
    uVar11 = param_2;
    __sSS8UTF8ViewV13_foreignCountSiyF();
    local_118 = (undefined6 *)0x0;
    local_110 = 0xf000000000000000;
  }
  FUN_10037350c();
  puVar10 = auStack_140;
  local_130 = &local_f0;
  pcVar3 = FUN_1000a001c;
  local_e0 = param_1;
  uStack_d8 = uVar11;
  FUN_100099b78();
  uVar12 = (uint)(uStack_d8 >> 0x20);
  uVar13 = uVar12 >> 0x1e;
  if (uVar12 >> 0x1e < 2) {
    if (uVar13 == 0) {
      puVar15 = (undefined *)(uStack_d8 >> 0x30 & 0xff);
    }
    else {
      iVar14 = (int)((ulong)local_e0 >> 0x20);
      if (SBORROW4(iVar14,(int)local_e0)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003734c0);
        (*pcVar3)();
      }
      puVar15 = (undefined *)(long)(iVar14 - (int)local_e0);
    }
    if (puVar4 == puVar15) goto LAB_100373204;
LAB_1003731e0:
    if (uVar13 == 2) {
      uVar11 = *(ulong *)(local_e0 + 3);
    }
    else if (uVar13 == 1) {
      uVar11 = (long)local_e0 >> 0x20;
    }
    else {
      uVar11 = uStack_d8 >> 0x30 & 0xff;
    }
LAB_1003733f4:
    if ((long)uVar11 < (long)puVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003734b8);
      (*pcVar3)();
    }
    __s10Foundation4DataV15_RepresentationO15replaceSubrange_4with5countySnySiG_SVSgSitF
              (puVar4,uVar11,0,0);
LAB_10037340c:
    _swift_bridgeObjectRelease(puVar10);
    puVar8 = local_e0;
    uVar11 = uStack_d8;
  }
  else {
    if (uVar13 == 2) {
      if (SBORROW8(*(long *)(local_e0 + 3),*(long *)(local_e0 + 2))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003734bc);
        (*pcVar3)();
      }
      if (puVar4 != (undefined *)(*(long *)(local_e0 + 3) - *(long *)(local_e0 + 2)))
      goto LAB_1003731e0;
    }
    else if (puVar4 != (undefined *)0x0) {
      uVar11 = 0;
      goto LAB_1003733f4;
    }
LAB_100373204:
    uVar11 = (ulong)pcVar3 & 0xffffffffffff;
    if (((ulong)puVar10 & 0x2000000000000000) != 0) {
      uVar11 = (ulong)puVar10 >> 0x38 & 0xf;
    }
    uStack_a8 = 0;
    uStack_a2 = 0;
    local_b0 = 0;
    uStack_aa = 0;
    uStack_a9 = 0;
    if (uVar11 * 4 - ((ulong)puVar6 >> 0xe) != 0) {
      uVar9 = 0;
      uVar12 = (uint)((ulong)pcVar3 >> 0x3b) & 1;
      if (((ulong)puVar10 & 0x1000000000000000) == 0) {
        uVar12 = 1;
      }
      uVar18 = 4L << uVar12;
      local_100 = (ulong)puVar10 & 0xffffffffffffff;
      local_108 = (code *)(((ulong)puVar10 & 0xfffffffffffffff) + 0x20);
      do {
        uVar19 = (ulong)puVar6 & 0xc;
        puVar4 = puVar6;
        if (uVar19 == uVar18) {
          FUN_10000caa8(puVar6,pcVar3,puVar10);
        }
        uVar17 = (ulong)puVar4 >> 0x10;
        if (uVar11 <= uVar17) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10037347c);
          (*pcVar3)();
        }
        if (((ulong)puVar10 >> 0x3c & 1) == 0) {
          if (((ulong)puVar10 >> 0x3d & 1) != 0) {
            local_98 = SUB86(pcVar3,0);
            uStack_92 = (undefined2)((ulong)pcVar3 >> 0x30);
            uStack_90 = (undefined6)local_100;
            auStack_8a[0] = (undefined2)(local_100 >> 0x30);
            cVar16 = *(code *)((long)&local_98 + uVar17);
            goto joined_r0x0001003732f0;
          }
          pcVar7 = local_108;
          if (((ulong)pcVar3 >> 0x3c & 1) == 0) {
            pcVar7 = pcVar3;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(pcVar3,puVar10);
          }
          cVar16 = pcVar7[uVar17];
          if (uVar19 == uVar18) goto LAB_1003732f4;
LAB_1003732b0:
          if (((ulong)puVar10 >> 0x3c & 1) != 0) goto LAB_10037330c;
LAB_1003732b4:
          puVar6 = (undefined *)(((ulong)puVar6 & 0xffffffffffff0000) + 0x10004);
        }
        else {
          __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF();
          cVar16 = SUB81(puVar4,0);
joined_r0x0001003732f0:
          if (uVar19 != uVar18) goto LAB_1003732b0;
LAB_1003732f4:
          FUN_10000caa8(puVar6,pcVar3,puVar10);
          if (((ulong)puVar10 >> 0x3c & 1) == 0) goto LAB_1003732b4;
LAB_10037330c:
          if (uVar11 <= (ulong)puVar6 >> 0x10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100373484);
            (*pcVar3)();
          }
          __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF(puVar6,pcVar3,puVar10);
        }
        *(code *)((long)&local_b0 + (uVar9 & 0xff)) = cVar16;
        uVar12 = ((uint)uVar9 & 0xff) + 1;
        uVar9 = (ulong)uVar12;
        if ((uVar12 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100373480);
          (*pcVar3)();
        }
        if ((uVar12 & 0xff) == 0xe) {
          local_98 = local_b0;
          uStack_92 = CONCAT11(uStack_a9,uStack_aa);
          uStack_90 = uStack_a8;
          __s10Foundation4DataV15_RepresentationO6append10contentsOfySW_tF(&local_98,auStack_8a);
          uVar9 = 0;
        }
      } while (uVar11 * 4 - ((ulong)puVar6 >> 0xe) != 0);
      if ((uVar9 & 0xff) != 0) {
        local_98 = local_b0;
        uStack_92 = CONCAT11(uStack_a9,uStack_aa);
        uStack_90 = uStack_a8;
        __s10Foundation4DataV15_RepresentationO6append10contentsOfySW_tF
                  (&local_98,(long)&local_98 + (uVar9 & 0xff));
        FUN_100006cc8(local_118,local_110);
        goto LAB_10037340c;
      }
    }
    _swift_bridgeObjectRelease(puVar10);
    FUN_100006cc8(local_118,local_110);
    puVar8 = local_e0;
    uVar11 = uStack_d8;
  }
LAB_100373414:
  uStack_d8 = uVar11;
  local_e0 = puVar8;
  uVar11 = uStack_d8;
  puVar8 = local_e0;
  auVar1._8_8_ = uStack_d8;
  auVar1._0_8_ = local_e0;
  FUN_100008184(local_e0,uStack_d8);
  _swift_bridgeObjectRelease(param_2);
  FUN_100006cdc(puVar8,uVar11);
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return auVar1;
}

