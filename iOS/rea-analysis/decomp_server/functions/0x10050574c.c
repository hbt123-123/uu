// rea decompile_all
// name: FUN_10050574c
// address: 0x10050574c
// body: available
// range: 0x10050574c-0x100505b67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100505b54 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050574c(undefined8 param_1,long *param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 uVar2;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  uint7 uVar13;
  code *pcVar14;
  long lVar15;
  undefined8 uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  byte local_78 [16];
  long local_68;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar1 = *param_2;
  uVar18 = param_2[1];
  uVar12 = (uint)(uVar18 >> 0x20);
  uVar17 = uVar12 >> 0x1e;
  uVar2 = (undefined1)((ulong)lVar1 >> 8);
  uVar3 = (undefined1)((ulong)lVar1 >> 0x10);
  uVar4 = (undefined1)((ulong)lVar1 >> 0x18);
  uVar5 = (undefined1)((ulong)lVar1 >> 0x20);
  uVar6 = (undefined1)((ulong)lVar1 >> 0x28);
  uVar7 = (undefined1)((ulong)lVar1 >> 0x30);
  uVar8 = (undefined1)((ulong)lVar1 >> 0x38);
  if (uVar12 >> 0x1e < 2) {
    if (uVar17 == 0) {
      _swift_bridgeObjectRetain(param_5);
      FUN_100006cdc(lVar1,uVar18);
      local_78[8] = (byte)uVar18;
      local_78[9] = (byte)(uVar18 >> 8);
      local_78[10] = (byte)(uVar18 >> 0x10);
      local_78[0xb] = (byte)(uVar18 >> 0x18);
      local_78[0xc] = (byte)(uVar18 >> 0x20);
      local_78[0xd] = (byte)(uVar18 >> 0x28);
      local_78[0xe] = (byte)(uVar18 >> 0x30);
      local_78[0] = (byte)lVar1;
      local_78[1] = uVar2;
      local_78[2] = uVar3;
      local_78[3] = uVar4;
      local_78[4] = uVar5;
      local_78[5] = uVar6;
      local_78[6] = uVar7;
      local_78[7] = uVar8;
      FUN_100500dd4(param_1,local_78,local_78 + local_78[0xe],param_3 & 0xffffffff,param_4,param_5);
      lVar1 = CONCAT17(local_78[7],
                       CONCAT16(local_78[6],
                                CONCAT15(local_78[5],
                                         CONCAT14(local_78[4],
                                                  CONCAT13(local_78[3],
                                                           CONCAT12(local_78[2],
                                                                    CONCAT11(local_78[1],local_78[0]
                                                                            )))))));
      uVar13 = CONCAT16(local_78[0xe],
                        CONCAT15(local_78[0xd],
                                 CONCAT14(local_78[0xc],
                                          CONCAT13(local_78[0xb],
                                                   CONCAT12(local_78[10],
                                                            CONCAT11(local_78[9],local_78[8]))))));
      _swift_bridgeObjectRelease_n(param_5,2);
      *param_2 = lVar1;
      param_2[1] = (ulong)uVar13;
    }
    else {
      uVar22 = uVar18 & 0x3fffffffffffffff;
      _swift_bridgeObjectRetain(param_5);
      FUN_100008184(lVar1,uVar18);
      FUN_100006cdc(lVar1,uVar18);
      param_2[1] = -0x4000000000000000;
      *param_2 = 0;
      FUN_100006cdc(0,0xc000000000000000);
      _swift_bridgeObjectRetain(param_5);
      uVar21 = uVar22;
      _swift_isUniquelyReferenced_nonNull_native();
      lVar20 = (long)(int)lVar1;
      lVar19 = lVar1 >> 0x20;
      uVar18 = uVar22;
      if ((uVar21 & 1) == 0) {
        if (lVar19 < lVar20) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x100505b50);
          (*pcVar14)();
        }
        _swift_retain();
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar18 == 0) {
          uVar18 = 0;
        }
        else {
          uVar21 = uVar18;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,uVar21)) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x100505b54);
            (*pcVar14)();
          }
          uVar18 = (lVar20 - uVar21) + uVar18;
        }
        uVar16 = 0;
        __s10Foundation13__DataStorageCMa();
        _swift_allocObject();
        __s10Foundation13__DataStorageC5bytes6length4copy11deallocator6offsetACSvSg_SiSbySv_SitcSgSitcfc
                  (uVar18,lVar19 - lVar20,1,0,0,lVar20,uVar16);
        _swift_release_n(uVar22,2);
      }
      if (lVar19 < lVar20) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x100505b44);
        (*pcVar14)();
      }
      uVar21 = uVar18;
      _swift_retain();
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (uVar21 == 0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x100505b68);
        (*pcVar14)();
      }
      uVar22 = uVar21;
      __s10Foundation13__DataStorageC7_offsetSivg();
      lVar11 = lVar20 - uVar22;
      if (SBORROW8(lVar20,uVar22)) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x100505b4c);
        (*pcVar14)();
      }
      __s10Foundation13__DataStorageC7_lengthSivg();
      if (lVar19 - lVar20 <= (long)uVar22) {
        uVar22 = lVar19 - lVar20;
      }
      lVar11 = uVar21 + lVar11;
      FUN_100500dd4(param_1,lVar11,lVar11 + uVar22,param_3 & 0xffffffff,param_4,param_5);
      _swift_bridgeObjectRelease_n(param_5,3);
      _swift_release(uVar18);
      *param_2 = lVar1;
      param_2[1] = uVar18 | 0x4000000000000000;
    }
  }
  else if (uVar17 == 2) {
    uVar21 = uVar18 & 0x3fffffffffffffff;
    _swift_bridgeObjectRetain(param_5);
    _swift_retain(lVar1);
    _swift_retain(uVar21);
    FUN_100006cdc(lVar1,uVar18);
    local_78[8] = (byte)uVar21;
    local_78[9] = (byte)(uVar21 >> 8);
    local_78[10] = (byte)(uVar21 >> 0x10);
    local_78[0xb] = (byte)(uVar21 >> 0x18);
    local_78[0xc] = (byte)(uVar21 >> 0x20);
    local_78[0xd] = (byte)(uVar21 >> 0x28);
    local_78[0xe] = (byte)(uVar21 >> 0x30);
    local_78[0xf] = (byte)(uVar21 >> 0x38);
    param_2[1] = -0x4000000000000000;
    *param_2 = 0;
    lVar19 = 0;
    local_78[0] = (byte)lVar1;
    local_78[1] = uVar2;
    local_78[2] = uVar3;
    local_78[3] = uVar4;
    local_78[4] = uVar5;
    local_78[5] = uVar6;
    local_78[6] = uVar7;
    local_78[7] = uVar8;
    FUN_100006cdc(0,0xc000000000000000);
    __s10Foundation4DataV10LargeSliceV21ensureUniqueReferenceyyF();
    lVar11 = CONCAT17(local_78[7],
                      CONCAT16(local_78[6],
                               CONCAT15(local_78[5],
                                        CONCAT14(local_78[4],
                                                 CONCAT13(local_78[3],
                                                          CONCAT12(local_78[2],
                                                                   CONCAT11(local_78[1],local_78[0])
                                                                  ))))));
    uVar18 = CONCAT17(local_78[0xf],
                      CONCAT16(local_78[0xe],
                               CONCAT15(local_78[0xd],
                                        CONCAT14(local_78[0xc],
                                                 CONCAT13(local_78[0xb],
                                                          CONCAT12(local_78[10],
                                                                   CONCAT11(local_78[9],local_78[8])
                                                                  ))))));
    lVar1 = *(long *)(lVar11 + 0x10);
    lVar20 = *(long *)(lVar11 + 0x18);
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    if (lVar19 == 0) {
      _swift_bridgeObjectRelease(param_5);
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x100505b64);
      (*pcVar14)();
    }
    lVar15 = lVar19;
    __s10Foundation13__DataStorageC7_offsetSivg();
    lVar9 = lVar1 - lVar15;
    if (SBORROW8(lVar1,lVar15)) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x100505b40);
      (*pcVar14)();
    }
    lVar10 = lVar20 - lVar1;
    if (SBORROW8(lVar20,lVar1)) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x100505b48);
      (*pcVar14)();
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
    if (lVar10 <= lVar15) {
      lVar15 = lVar10;
    }
    lVar19 = lVar19 + lVar9;
    FUN_100500dd4(param_1,lVar19,lVar19 + lVar15,param_3 & 0xffffffff,param_4,param_5);
    _swift_bridgeObjectRelease_n(param_5,2);
    *param_2 = lVar11;
    param_2[1] = uVar18 | 0x8000000000000000;
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
    FUN_100500dd4(local_78,local_78,param_3,param_4,param_5);
    _swift_bridgeObjectRelease(param_5);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

