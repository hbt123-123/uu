// rea decompile_all
// name: FUN_100505b68
// address: 0x100505b68
// body: available
// range: 0x100505b68-0x100505ea7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100505e94 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100505b68(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  uint7 uVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  byte local_78 [16];
  long local_68;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar17 = *param_2;
  uVar2 = param_2[1];
  uVar13 = (uint)(uVar2 >> 0x20);
  uVar19 = uVar13 >> 0x1e;
  local_78[0] = (byte)lVar17;
  uVar4 = (undefined1)((ulong)lVar17 >> 8);
  uVar5 = (undefined1)((ulong)lVar17 >> 0x10);
  uVar6 = (undefined1)((ulong)lVar17 >> 0x18);
  uVar7 = (undefined1)((ulong)lVar17 >> 0x20);
  uVar8 = (undefined1)((ulong)lVar17 >> 0x28);
  uVar9 = (undefined1)((ulong)lVar17 >> 0x30);
  uVar10 = (undefined1)((ulong)lVar17 >> 0x38);
  local_78[1] = uVar4;
  local_78[2] = uVar5;
  local_78[3] = uVar6;
  local_78[4] = uVar7;
  local_78[5] = uVar8;
  local_78[6] = uVar9;
  local_78[7] = uVar10;
  if (uVar13 >> 0x1e < 2) {
    if (uVar19 == 0) {
      FUN_100008184(param_3,param_4);
      FUN_100006cdc(lVar17,uVar2);
      local_78[8] = (byte)uVar2;
      local_78[9] = (byte)(uVar2 >> 8);
      local_78[10] = (byte)(uVar2 >> 0x10);
      local_78[0xb] = (byte)(uVar2 >> 0x18);
      local_78[0xc] = (byte)(uVar2 >> 0x20);
      local_78[0xd] = (byte)(uVar2 >> 0x28);
      local_78[0xe] = (byte)(uVar2 >> 0x30);
      FUN_100504cf0(param_1,local_78,local_78 + local_78[0xe],param_3,param_4);
      lVar17 = CONCAT17(local_78[7],
                        CONCAT16(local_78[6],
                                 CONCAT15(local_78[5],
                                          CONCAT14(local_78[4],
                                                   CONCAT13(local_78[3],
                                                            CONCAT12(local_78[2],
                                                                     CONCAT11(local_78[1],
                                                                              local_78[0])))))));
      uVar15 = CONCAT16(local_78[0xe],
                        CONCAT15(local_78[0xd],
                                 CONCAT14(local_78[0xc],
                                          CONCAT13(local_78[0xb],
                                                   CONCAT12(local_78[10],
                                                            CONCAT11(local_78[9],local_78[8]))))));
      FUN_100006cdc(param_3,param_4);
      FUN_100006cdc(param_3,param_4);
      *param_2 = lVar17;
      param_2[1] = (ulong)uVar15;
    }
    else {
      uVar20 = uVar2 & 0x3fffffffffffffff;
      FUN_100008184(param_3,param_4);
      FUN_100008184(lVar17,uVar2);
      FUN_100006cdc(lVar17,uVar2);
      local_78[8] = (byte)uVar20;
      local_78[9] = (byte)(uVar20 >> 8);
      local_78[10] = (byte)(uVar20 >> 0x10);
      local_78[0xb] = (byte)(uVar20 >> 0x18);
      local_78[0xc] = (byte)(uVar20 >> 0x20);
      local_78[0xd] = (byte)(uVar20 >> 0x28);
      local_78[0xe] = (byte)(uVar20 >> 0x30);
      local_78[0xf] = (byte)(uVar20 >> 0x38);
      param_2[1] = -0x4000000000000000;
      *param_2 = 0;
      FUN_100006cdc(0,0xc000000000000000);
      FUN_100505ea8(param_1,local_78,param_3,param_4);
      FUN_100006cdc(param_3,param_4);
      *param_2 = CONCAT17(local_78[7],
                          CONCAT16(local_78[6],
                                   CONCAT15(local_78[5],
                                            CONCAT14(local_78[4],
                                                     CONCAT13(local_78[3],
                                                              CONCAT12(local_78[2],
                                                                       CONCAT11(local_78[1],
                                                                                local_78[0])))))));
      param_2[1] = CONCAT17(local_78[0xf],
                            CONCAT16(local_78[0xe],
                                     CONCAT15(local_78[0xd],
                                              CONCAT14(local_78[0xc],
                                                       CONCAT13(local_78[0xb],
                                                                CONCAT12(local_78[10],
                                                                         CONCAT11(local_78[9],
                                                                                  local_78[8])))))))
                   | 0x4000000000000000;
    }
  }
  else if (uVar19 == 2) {
    uVar20 = uVar2 & 0x3fffffffffffffff;
    FUN_100008184(param_3,param_4);
    _swift_retain(lVar17);
    _swift_retain(uVar20);
    FUN_100006cdc(lVar17,uVar2);
    local_78[8] = (byte)uVar20;
    local_78[9] = (byte)(uVar20 >> 8);
    local_78[10] = (byte)(uVar20 >> 0x10);
    local_78[0xb] = (byte)(uVar20 >> 0x18);
    local_78[0xc] = (byte)(uVar20 >> 0x20);
    local_78[0xd] = (byte)(uVar20 >> 0x28);
    local_78[0xe] = (byte)(uVar20 >> 0x30);
    local_78[0xf] = (byte)(uVar20 >> 0x38);
    param_2[1] = -0x4000000000000000;
    *param_2 = 0;
    lVar17 = 0;
    FUN_100006cdc(0,0xc000000000000000);
    __s10Foundation4DataV10LargeSliceV21ensureUniqueReferenceyyF();
    lVar14 = CONCAT17(local_78[7],
                      CONCAT16(local_78[6],
                               CONCAT15(local_78[5],
                                        CONCAT14(local_78[4],
                                                 CONCAT13(local_78[3],
                                                          CONCAT12(local_78[2],
                                                                   CONCAT11(local_78[1],local_78[0])
                                                                  ))))));
    uVar2 = CONCAT17(local_78[0xf],
                     CONCAT16(local_78[0xe],
                              CONCAT15(local_78[0xd],
                                       CONCAT14(local_78[0xc],
                                                CONCAT13(local_78[0xb],
                                                         CONCAT12(local_78[10],
                                                                  CONCAT11(local_78[9],local_78[8]))
                                                        )))));
    lVar1 = *(long *)(lVar14 + 0x10);
    lVar3 = *(long *)(lVar14 + 0x18);
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    if (lVar17 == 0) {
      FUN_100006cdc(param_3,param_4);
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x100505ea8);
      (*pcVar16)();
    }
    lVar18 = lVar17;
    __s10Foundation13__DataStorageC7_offsetSivg();
    lVar11 = lVar1 - lVar18;
    if (SBORROW8(lVar1,lVar18)) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x100505e90);
      (*pcVar16)();
    }
    lVar12 = lVar3 - lVar1;
    if (SBORROW8(lVar3,lVar1)) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x100505e94);
      (*pcVar16)();
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
    if (lVar12 <= lVar18) {
      lVar18 = lVar12;
    }
    lVar17 = lVar17 + lVar11;
    FUN_100504cf0(param_1,lVar17,lVar17 + lVar18,param_3,param_4);
    FUN_100006cdc(param_3,param_4);
    FUN_100006cdc(param_3,param_4);
    *param_2 = lVar14;
    param_2[1] = uVar2 | 0x8000000000000000;
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
    FUN_100504cf0(local_78,local_78,param_3,param_4);
    FUN_100006cdc(param_3,param_4);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

