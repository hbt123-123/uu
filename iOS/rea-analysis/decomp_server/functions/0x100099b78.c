// rea decompile_all
// name: FUN_100099b78
// address: 0x100099b78
// body: available
// range: 0x100099b78-0x100099f0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100099f0c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100099b78(code *param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long local_98;
  ulong uStack_90;
  byte local_78 [16];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar1 = *unaff_x20;
  uVar7 = unaff_x20[1];
  uVar2 = (uint)(uVar7 >> 0x20);
  uVar6 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar6 == 0) {
      FUN_100006cdc(lVar1,uVar7);
      local_78[0] = (byte)lVar1;
      local_78[1] = (byte)((ulong)lVar1 >> 8);
      local_78[2] = (byte)((ulong)lVar1 >> 0x10);
      local_78[3] = (byte)((ulong)lVar1 >> 0x18);
      local_78[4] = (byte)((ulong)lVar1 >> 0x20);
      local_78[5] = (byte)((ulong)lVar1 >> 0x28);
      local_78[6] = (byte)((ulong)lVar1 >> 0x30);
      local_78[7] = (byte)((ulong)lVar1 >> 0x38);
      local_78[8] = (byte)uVar7;
      local_78[9] = (byte)(uVar7 >> 8);
      local_78[10] = (byte)(uVar7 >> 0x10);
      local_78[0xb] = (byte)(uVar7 >> 0x18);
      local_78[0xc] = (byte)(uVar7 >> 0x20);
      local_78[0xd] = (byte)(uVar7 >> 0x28);
      local_78[0xe] = (byte)(uVar7 >> 0x30);
      (*param_1)(&local_98,local_78,local_78 + local_78[0xe]);
      if (unaff_x21 == 0) {
        *unaff_x20 = CONCAT17(local_78[7],
                              CONCAT16(local_78[6],
                                       CONCAT15(local_78[5],
                                                CONCAT14(local_78[4],
                                                         CONCAT13(local_78[3],
                                                                  CONCAT12(local_78[2],
                                                                           CONCAT11(local_78[1],
                                                                                    local_78[0])))))
                                      ));
        unaff_x20[1] = (ulong)CONCAT16(local_78[0xe],
                                       CONCAT15(local_78[0xd],
                                                CONCAT14(local_78[0xc],
                                                         CONCAT13(local_78[0xb],
                                                                  CONCAT12(local_78[10],
                                                                           CONCAT11(local_78[9],
                                                                                    local_78[8])))))
                                      );
      }
      else {
        *unaff_x20 = CONCAT17(local_78[7],
                              CONCAT16(local_78[6],
                                       CONCAT15(local_78[5],
                                                CONCAT14(local_78[4],
                                                         CONCAT13(local_78[3],
                                                                  CONCAT12(local_78[2],
                                                                           CONCAT11(local_78[1],
                                                                                    local_78[0])))))
                                      ));
        unaff_x20[1] = (ulong)CONCAT16(local_78[0xe],
                                       CONCAT15(local_78[0xd],
                                                CONCAT14(local_78[0xc],
                                                         CONCAT13(local_78[0xb],
                                                                  CONCAT12(local_78[10],
                                                                           CONCAT11(local_78[9],
                                                                                    local_78[8])))))
                                      );
      }
      goto LAB_100099eb0;
    }
    uVar8 = uVar7 & 0x3fffffffffffffff;
    _swift_retain(uVar8);
    FUN_100006cdc(lVar1,uVar7);
    unaff_x20[1] = -0x4000000000000000;
    *unaff_x20 = 0;
    FUN_100006cdc(0,0xc000000000000000);
    uVar4 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar9 = (long)(int)lVar1;
    lVar10 = lVar1 >> 0x20;
    uVar7 = uVar8;
    if ((uVar4 & 1) == 0) {
      if (lVar10 < lVar9) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100099f08);
        (*pcVar3)();
      }
      _swift_retain();
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (uVar7 == 0) {
        uVar7 = 0;
      }
      else {
        uVar4 = uVar7;
        __s10Foundation13__DataStorageC7_offsetSivg();
        if (SBORROW8(lVar9,uVar4)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100099f0c);
          (*pcVar3)();
        }
        uVar7 = (lVar9 - uVar4) + uVar7;
      }
      uVar5 = 0;
      __s10Foundation13__DataStorageCMa();
      _swift_allocObject();
      __s10Foundation13__DataStorageC5bytes6length4copy11deallocator6offsetACSvSg_SiSbySv_SitcSgSitcfc
                (uVar7,lVar10 - lVar9,1,0,0,lVar9,uVar5);
      _swift_release_n(uVar8,2);
    }
    if (lVar10 < lVar9) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100099f04);
      (*pcVar3)();
    }
    _swift_retain(uVar7);
    FUN_10009a210(lVar9,lVar10,param_1,param_2);
    _swift_release(uVar7);
    uVar7 = uVar7 | 0x4000000000000000;
    if (unaff_x21 == 0) {
      *unaff_x20 = lVar1;
      unaff_x20[1] = uVar7;
      goto LAB_100099eb0;
    }
    *unaff_x20 = lVar1;
  }
  else {
    if (uVar6 != 2) {
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
      (*param_1)(&local_98,local_78,local_78);
      goto LAB_100099eb0;
    }
    _swift_retain(lVar1);
    _swift_retain(uVar7 & 0x3fffffffffffffff);
    FUN_100006cdc(lVar1,uVar7);
    unaff_x20[1] = -0x4000000000000000;
    *unaff_x20 = 0;
    local_98 = lVar1;
    uStack_90 = uVar7 & 0x3fffffffffffffff;
    FUN_100006cdc(0,0xc000000000000000);
    __s10Foundation4DataV10LargeSliceV21ensureUniqueReferenceyyF();
    uVar7 = uStack_90;
    lVar1 = local_98;
    FUN_10009a210(*(undefined8 *)(local_98 + 0x10),*(undefined8 *)(local_98 + 0x18),param_1,param_2)
    ;
    uVar7 = uVar7 | 0x8000000000000000;
    if (unaff_x21 == 0) {
      *unaff_x20 = lVar1;
      unaff_x20[1] = uVar7;
      goto LAB_100099eb0;
    }
    *unaff_x20 = lVar1;
  }
  unaff_x20[1] = uVar7;
LAB_100099eb0:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

