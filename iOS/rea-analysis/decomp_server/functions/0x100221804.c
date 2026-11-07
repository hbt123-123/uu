// rea decompile_all
// name: FUN_100221804
// address: 0x100221804
// body: available
// range: 0x100221804-0x100221c9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100221c9c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100221804(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  uint uVar9;
  uint7 uVar10;
  code *pcVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint uVar14;
  ulong uVar15;
  long unaff_x21;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  byte local_79;
  byte local_78 [16];
  long local_68;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar1 = *param_1;
  uVar17 = param_1[1];
  uVar9 = (uint)(uVar17 >> 0x20);
  uVar14 = uVar9 >> 0x1e;
  uVar2 = (undefined1)(uVar1 >> 8);
  uVar3 = (undefined1)(uVar1 >> 0x10);
  uVar4 = (undefined1)(uVar1 >> 0x18);
  uVar5 = (undefined1)(uVar1 >> 0x20);
  uVar6 = (undefined1)(uVar1 >> 0x28);
  uVar7 = (undefined1)(uVar1 >> 0x30);
  uVar8 = (undefined1)(uVar1 >> 0x38);
  if (uVar9 >> 0x1e < 2) {
    if (uVar14 == 0) {
      FUN_100008184(param_2,param_3);
      FUN_100008184(param_2,param_3);
      FUN_100006cdc(uVar1,uVar17);
      local_78[8] = (byte)uVar17;
      local_78[9] = (byte)(uVar17 >> 8);
      local_78[10] = (byte)(uVar17 >> 0x10);
      local_78[0xb] = (byte)(uVar17 >> 0x18);
      local_78[0xc] = (byte)(uVar17 >> 0x20);
      local_78[0xd] = (byte)(uVar17 >> 0x28);
      local_78[0xe] = (byte)(uVar17 >> 0x30);
      local_78[0] = (byte)uVar1;
      local_78[1] = uVar2;
      local_78[2] = uVar3;
      local_78[3] = uVar4;
      local_78[4] = uVar5;
      local_78[5] = uVar6;
      local_78[6] = uVar7;
      local_78[7] = uVar8;
      FUN_100220e30(&local_79,local_78,local_78 + local_78[0xe],param_2,param_3);
      if (unaff_x21 == 0) {
        uVar1 = CONCAT17(local_78[7],
                         CONCAT16(local_78[6],
                                  CONCAT15(local_78[5],
                                           CONCAT14(local_78[4],
                                                    CONCAT13(local_78[3],
                                                             CONCAT12(local_78[2],
                                                                      CONCAT11(local_78[1],
                                                                               local_78[0])))))));
        uVar10 = CONCAT16(local_78[0xe],
                          CONCAT15(local_78[0xd],
                                   CONCAT14(local_78[0xc],
                                            CONCAT13(local_78[0xb],
                                                     CONCAT12(local_78[10],
                                                              CONCAT11(local_78[9],local_78[8]))))))
        ;
        FUN_100006cdc(param_2,param_3);
        FUN_100006cdc(param_2,param_3);
        *param_1 = uVar1;
        param_1[1] = (ulong)uVar10;
        uVar17 = (ulong)local_79;
      }
      else {
        uVar17 = CONCAT17(local_78[7],
                          CONCAT16(local_78[6],
                                   CONCAT15(local_78[5],
                                            CONCAT14(local_78[4],
                                                     CONCAT13(local_78[3],
                                                              CONCAT12(local_78[2],
                                                                       CONCAT11(local_78[1],
                                                                                local_78[0])))))));
        uVar10 = CONCAT16(local_78[0xe],
                          CONCAT15(local_78[0xd],
                                   CONCAT14(local_78[0xc],
                                            CONCAT13(local_78[0xb],
                                                     CONCAT12(local_78[10],
                                                              CONCAT11(local_78[9],local_78[8]))))))
        ;
        FUN_100006cdc(param_2,param_3);
        FUN_100006cdc(param_2,param_3);
        *param_1 = uVar17;
        param_1[1] = (ulong)uVar10;
      }
    }
    else {
      uVar16 = uVar17 & 0x3fffffffffffffff;
      FUN_100008184(param_2,param_3);
      FUN_100008184(param_2,param_3);
      FUN_100008184(uVar1,uVar17);
      FUN_100006cdc(uVar1,uVar17);
      param_1[1] = 0xc000000000000000;
      *param_1 = 0;
      FUN_100006cdc(0,0xc000000000000000);
      uVar12 = uVar16;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar17 = (ulong)(int)uVar1;
      lVar18 = (long)uVar1 >> 0x20;
      uVar15 = uVar16;
      if ((uVar12 & 1) == 0) {
        if (lVar18 < (long)uVar17) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x100221c98);
          (*pcVar11)();
        }
        _swift_retain();
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar15 == 0) {
          uVar15 = 0;
        }
        else {
          uVar12 = uVar15;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(uVar17,uVar12)) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x100221c9c);
            (*pcVar11)();
          }
          uVar15 = (uVar17 - uVar12) + uVar15;
        }
        uVar13 = 0;
        __s10Foundation13__DataStorageCMa();
        _swift_allocObject();
        __s10Foundation13__DataStorageC5bytes6length4copy11deallocator6offsetACSvSg_SiSbySv_SitcSgSitcfc
                  (uVar15,lVar18 - uVar17,1,0,0,uVar17,uVar13);
        _swift_release_n(uVar16,2);
      }
      if (lVar18 < (long)uVar17) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100221c94);
        (*pcVar11)();
      }
      FUN_100008184(param_2,param_3);
      _swift_retain(uVar15);
      FUN_100221754(uVar17,lVar18,uVar15,param_2,param_3);
      FUN_100006cdc(param_2,param_3);
      _swift_release(uVar15);
      FUN_100006cdc(param_2,param_3);
      FUN_100006cdc(param_2,param_3);
      *param_1 = uVar1;
      param_1[1] = uVar15 | 0x4000000000000000;
    }
  }
  else if (uVar14 == 2) {
    uVar15 = uVar17 & 0x3fffffffffffffff;
    FUN_100008184(param_2,param_3);
    FUN_100008184(param_2,param_3);
    FUN_100008184(uVar1,uVar17);
    FUN_100006cdc(uVar1,uVar17);
    local_78[8] = (byte)uVar15;
    local_78[9] = (byte)(uVar15 >> 8);
    local_78[10] = (byte)(uVar15 >> 0x10);
    local_78[0xb] = (byte)(uVar15 >> 0x18);
    local_78[0xc] = (byte)(uVar15 >> 0x20);
    local_78[0xd] = (byte)(uVar15 >> 0x28);
    local_78[0xe] = (byte)(uVar15 >> 0x30);
    local_78[0xf] = (byte)(uVar15 >> 0x38);
    param_1[1] = 0xc000000000000000;
    *param_1 = 0;
    local_78[0] = (byte)uVar1;
    local_78[1] = uVar2;
    local_78[2] = uVar3;
    local_78[3] = uVar4;
    local_78[4] = uVar5;
    local_78[5] = uVar6;
    local_78[6] = uVar7;
    local_78[7] = uVar8;
    FUN_100006cdc(0,0xc000000000000000);
    __s10Foundation4DataV10LargeSliceV21ensureUniqueReferenceyyF();
    uVar15 = CONCAT17(local_78[7],
                      CONCAT16(local_78[6],
                               CONCAT15(local_78[5],
                                        CONCAT14(local_78[4],
                                                 CONCAT13(local_78[3],
                                                          CONCAT12(local_78[2],
                                                                   CONCAT11(local_78[1],local_78[0])
                                                                  ))))));
    uVar12 = CONCAT17(local_78[0xf],
                      CONCAT16(local_78[0xe],
                               CONCAT15(local_78[0xd],
                                        CONCAT14(local_78[0xc],
                                                 CONCAT13(local_78[0xb],
                                                          CONCAT12(local_78[10],
                                                                   CONCAT11(local_78[9],local_78[8])
                                                                  ))))));
    uVar1 = *(ulong *)(uVar15 + 0x10);
    uVar13 = *(undefined8 *)(uVar15 + 0x18);
    FUN_100008184(param_2,param_3);
    uVar17 = uVar1;
    FUN_100221754(uVar1,uVar13,uVar12,param_2,param_3);
    if (unaff_x21 == 0) {
      FUN_100006cdc(param_2,param_3);
      FUN_100006cdc(param_2,param_3);
      FUN_100006cdc(param_2,param_3);
      *param_1 = uVar15;
      param_1[1] = uVar12 | 0x8000000000000000;
    }
    else {
      FUN_100006cdc(param_2,param_3);
      FUN_100006cdc(param_2,param_3);
      FUN_100006cdc(param_2,param_3);
      *param_1 = uVar15;
      param_1[1] = uVar12 | 0x8000000000000000;
      uVar17 = uVar1;
    }
  }
  else {
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
    FUN_100220e30(&local_79,local_78,local_78,param_2,param_3);
    if (unaff_x21 == 0) {
      uVar17 = (ulong)local_79;
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

