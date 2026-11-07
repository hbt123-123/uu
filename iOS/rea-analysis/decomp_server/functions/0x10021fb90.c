// rea decompile_all
// name: FUN_10021fb90
// address: 0x10021fb90
// body: available
// range: 0x10021fb90-0x10022005f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100220054 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10021fb90(long *param_1,long param_2,ulong param_3,undefined4 *param_4,ulong param_5,
                  code *param_6)

{
  undefined1 uVar1;
  uint uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  undefined1 local_78 [16];
  long local_68;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar13 = *param_1;
  uVar16 = param_1[1];
  uVar9 = (uint)(uVar16 >> 0x20);
  uVar15 = uVar9 >> 0x1e;
  uVar22 = (uint)param_3;
  uVar1 = (undefined1)lVar13;
  uVar2 = (undefined1)((ulong)lVar13 >> 8);
  uVar3 = (undefined1)((ulong)lVar13 >> 0x10);
  uVar4 = (undefined1)((ulong)lVar13 >> 0x18);
  uVar5 = (undefined1)((ulong)lVar13 >> 0x20);
  uVar6 = (undefined1)((ulong)lVar13 >> 0x28);
  uVar7 = (undefined1)((ulong)lVar13 >> 0x30);
  uVar8 = (undefined1)((ulong)lVar13 >> 0x38);
  if (uVar9 >> 0x1e < 2) {
    if (uVar15 == 0) {
      FUN_100006cdc(lVar13,uVar16);
      local_78[8] = (undefined1)uVar16;
      local_78[9] = (undefined1)(uVar16 >> 8);
      local_78[10] = (undefined1)(uVar16 >> 0x10);
      local_78[0xb] = (undefined1)(uVar16 >> 0x18);
      local_78[0xc] = (undefined1)(uVar16 >> 0x20);
      local_78[0xd] = (undefined1)(uVar16 >> 0x28);
      local_78[0xe] = (undefined1)(uVar16 >> 0x30);
      uVar16 = *(ulong *)(param_2 + 0x28);
      if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10021fff0);
        local_78[0] = uVar1;
        local_78[1] = uVar2;
        local_78[2] = uVar3;
        local_78[3] = uVar4;
        local_78[4] = uVar5;
        local_78[5] = uVar6;
        local_78[6] = uVar7;
        local_78[7] = uVar8;
        (*pcVar10)();
      }
      *(undefined1 **)(param_2 + 0x18) = local_78 + uVar16;
      if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100220000);
        local_78[0] = uVar1;
        local_78[1] = uVar2;
        local_78[2] = uVar3;
        local_78[3] = uVar4;
        local_78[4] = uVar5;
        local_78[5] = uVar6;
        local_78[6] = uVar7;
        local_78[7] = uVar8;
        (*pcVar10)();
      }
      if (param_3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100220010);
        local_78[0] = uVar1;
        local_78[1] = uVar2;
        local_78[2] = uVar3;
        local_78[3] = uVar4;
        local_78[4] = uVar5;
        local_78[5] = uVar6;
        local_78[6] = uVar7;
        local_78[7] = uVar8;
        (*pcVar10)();
      }
      if (uVar16 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100220020);
        local_78[0] = uVar1;
        local_78[1] = uVar2;
        local_78[2] = uVar3;
        local_78[3] = uVar4;
        local_78[4] = uVar5;
        local_78[5] = uVar6;
        local_78[6] = uVar7;
        local_78[7] = uVar8;
        (*pcVar10)();
      }
      if (uVar22 < (uint)uVar16) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100220030);
        local_78[0] = uVar1;
        local_78[1] = uVar2;
        local_78[2] = uVar3;
        local_78[3] = uVar4;
        local_78[4] = uVar5;
        local_78[5] = uVar6;
        local_78[6] = uVar7;
        local_78[7] = uVar8;
        (*pcVar10)();
      }
      *(uint *)(param_2 + 0x20) = uVar22 - (uint)uVar16;
      lVar13 = param_2;
      local_78[0] = uVar1;
      local_78[1] = uVar2;
      local_78[2] = uVar3;
      local_78[3] = uVar4;
      local_78[4] = uVar5;
      local_78[5] = uVar6;
      local_78[6] = uVar7;
      local_78[7] = uVar8;
      (*param_6)(param_2,param_5 & 0xffffffff);
      *param_4 = (int)lVar13;
      *(undefined8 *)(param_2 + 0x18) = 0;
      *param_1 = CONCAT17(local_78[7],
                          CONCAT16(local_78[6],
                                   CONCAT15(local_78[5],
                                            CONCAT14(local_78[4],
                                                     CONCAT13(local_78[3],
                                                              CONCAT12(local_78[2],
                                                                       CONCAT11(local_78[1],
                                                                                local_78[0])))))));
      param_1[1] = (ulong)CONCAT16(local_78[0xe],
                                   CONCAT15(local_78[0xd],
                                            CONCAT14(local_78[0xc],
                                                     CONCAT13(local_78[0xb],
                                                              CONCAT12(local_78[10],
                                                                       CONCAT11(local_78[9],
                                                                                local_78[8]))))));
      goto LAB_10021ffb4;
    }
    uVar19 = uVar16 & 0x3fffffffffffffff;
    _swift_retain(uVar19);
    FUN_100006cdc(lVar13,uVar16);
    param_1[1] = -0x4000000000000000;
    *param_1 = 0;
    FUN_100006cdc(0,0xc000000000000000);
    uVar18 = uVar19;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar20 = (long)(int)lVar13;
    lVar21 = lVar13 >> 0x20;
    uVar16 = uVar19;
    if ((uVar18 & 1) == 0) {
      if (lVar21 < lVar20) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100220050);
        (*pcVar10)();
      }
      _swift_retain();
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (uVar16 == 0) {
        uVar16 = 0;
      }
      else {
        uVar18 = uVar16;
        __s10Foundation13__DataStorageC7_offsetSivg();
        if (SBORROW8(lVar20,uVar18)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100220054);
          (*pcVar10)();
        }
        uVar16 = (lVar20 - uVar18) + uVar16;
      }
      uVar14 = 0;
      __s10Foundation13__DataStorageCMa();
      _swift_allocObject();
      __s10Foundation13__DataStorageC5bytes6length4copy11deallocator6offsetACSvSg_SiSbySv_SitcSgSitcfc
                (uVar16,lVar21 - lVar20,1,0,0,lVar20,uVar14);
      _swift_release_n(uVar19,2);
    }
    if (lVar21 < lVar20) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10021fffc);
      (*pcVar10)();
    }
    uVar18 = uVar16;
    _swift_retain();
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    if (uVar18 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x100220060);
      (*pcVar10)();
    }
    uVar19 = uVar18;
    __s10Foundation13__DataStorageC7_offsetSivg();
    if (SBORROW8(lVar20,uVar19)) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10022000c);
      (*pcVar10)();
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
    uVar17 = *(ulong *)(param_2 + 0x28);
    if ((long)uVar17 < 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10022001c);
      (*pcVar10)();
    }
    *(ulong *)(param_2 + 0x18) = uVar18 + (lVar20 - uVar19) + uVar17;
    if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10022002c);
      (*pcVar10)();
    }
    if (param_3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10022003c);
      (*pcVar10)();
    }
    if (uVar17 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x100220044);
      (*pcVar10)();
    }
    if (uVar22 < (uint)uVar17) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10022004c);
      (*pcVar10)();
    }
    *(uint *)(param_2 + 0x20) = uVar22 - (uint)uVar17;
    lVar20 = param_2;
    (*param_6)(param_2,param_5 & 0xffffffff);
    *param_4 = (int)lVar20;
    *(undefined8 *)(param_2 + 0x18) = 0;
    _swift_release(uVar16);
    uVar16 = uVar16 | 0x4000000000000000;
    *param_1 = lVar13;
  }
  else {
    if (uVar15 != 2) {
      local_78[8] = 0;
      local_78[9] = 0;
      local_78[10] = 0;
      local_78[0xb] = 0;
      local_78[0xc] = 0;
      local_78[0xd] = 0;
      local_78[0xe] = 0;
      local_78[0] = 0;
      local_78[1] = 0;
      local_78[2] = 0;
      local_78[3] = 0;
      local_78[4] = 0;
      local_78[5] = 0;
      local_78[6] = 0;
      local_78[7] = 0;
      uVar16 = *(ulong *)(param_2 + 0x28);
      if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10021fff4);
        (*pcVar10)();
      }
      *(undefined1 **)(param_2 + 0x18) = local_78 + uVar16;
      if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100220004);
        (*pcVar10)();
      }
      if (param_3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100220014);
        (*pcVar10)();
      }
      if (uVar16 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100220024);
        (*pcVar10)();
      }
      if (uVar22 < (uint)uVar16) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100220034);
        (*pcVar10)();
      }
      *(uint *)(param_2 + 0x20) = uVar22 - (uint)uVar16;
      lVar13 = param_2;
      (*param_6)(param_2,param_5);
      *param_4 = (int)lVar13;
      *(undefined8 *)(param_2 + 0x18) = 0;
      goto LAB_10021ffb4;
    }
    uVar18 = uVar16 & 0x3fffffffffffffff;
    _swift_retain(lVar13);
    _swift_retain(uVar18);
    FUN_100006cdc(lVar13,uVar16);
    local_78[8] = (undefined1)uVar18;
    local_78[9] = (undefined1)(uVar18 >> 8);
    local_78[10] = (undefined1)(uVar18 >> 0x10);
    local_78[0xb] = (undefined1)(uVar18 >> 0x18);
    local_78[0xc] = (undefined1)(uVar18 >> 0x20);
    local_78[0xd] = (undefined1)(uVar18 >> 0x28);
    local_78[0xe] = (undefined1)(uVar18 >> 0x30);
    local_78[0xf] = (undefined1)(uVar18 >> 0x38);
    param_1[1] = -0x4000000000000000;
    *param_1 = 0;
    lVar11 = 0;
    local_78[0] = uVar1;
    local_78[1] = uVar2;
    local_78[2] = uVar3;
    local_78[3] = uVar4;
    local_78[4] = uVar5;
    local_78[5] = uVar6;
    local_78[6] = uVar7;
    local_78[7] = uVar8;
    FUN_100006cdc(0,0xc000000000000000);
    __s10Foundation4DataV10LargeSliceV21ensureUniqueReferenceyyF();
    lVar21 = CONCAT17(local_78[7],
                      CONCAT16(local_78[6],
                               CONCAT15(local_78[5],
                                        CONCAT14(local_78[4],
                                                 CONCAT13(local_78[3],
                                                          CONCAT12(local_78[2],
                                                                   CONCAT11(local_78[1],local_78[0])
                                                                  ))))));
    uVar16 = CONCAT17(local_78[0xf],
                      CONCAT16(local_78[0xe],
                               CONCAT15(local_78[0xd],
                                        CONCAT14(local_78[0xc],
                                                 CONCAT13(local_78[0xb],
                                                          CONCAT12(local_78[10],
                                                                   CONCAT11(local_78[9],local_78[8])
                                                                  ))))));
    lVar13 = *(long *)(lVar21 + 0x10);
    lVar20 = *(long *)(lVar21 + 0x18);
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10022005c);
      (*pcVar10)();
    }
    lVar12 = lVar11;
    __s10Foundation13__DataStorageC7_offsetSivg();
    if (SBORROW8(lVar13,lVar12)) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10021fff8);
      (*pcVar10)();
    }
    if (SBORROW8(lVar20,lVar13)) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x100220008);
      (*pcVar10)();
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
    uVar18 = *(ulong *)(param_2 + 0x28);
    if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x100220018);
      (*pcVar10)();
    }
    *(ulong *)(param_2 + 0x18) = lVar11 + (lVar13 - lVar12) + uVar18;
    if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x100220028);
      (*pcVar10)();
    }
    if (param_3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x100220038);
      (*pcVar10)();
    }
    if (uVar18 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x100220040);
      (*pcVar10)();
    }
    if (uVar22 < (uint)uVar18) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x100220048);
      (*pcVar10)();
    }
    *(uint *)(param_2 + 0x20) = uVar22 - (uint)uVar18;
    lVar13 = param_2;
    (*param_6)(param_2,param_5 & 0xffffffff);
    *param_4 = (int)lVar13;
    *(undefined8 *)(param_2 + 0x18) = 0;
    uVar16 = uVar16 | 0x8000000000000000;
    *param_1 = lVar21;
  }
  param_1[1] = uVar16;
LAB_10021ffb4:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

