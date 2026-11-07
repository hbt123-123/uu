// rea decompile_all
// name: FUN_1005624a0
// address: 0x1005624a0
// body: available
// range: 0x1005624a0-0x100562737 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100562730 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005624a0(undefined8 param_1,long *param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  byte local_78 [16];
  long local_68;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar15 = *param_2;
  uVar18 = param_2[1];
  uVar12 = (uint)(uVar18 >> 0x20);
  uVar17 = uVar12 >> 0x1e;
  local_78[0] = (byte)lVar15;
  uVar3 = (undefined1)((ulong)lVar15 >> 8);
  uVar4 = (undefined1)((ulong)lVar15 >> 0x10);
  uVar5 = (undefined1)((ulong)lVar15 >> 0x18);
  uVar6 = (undefined1)((ulong)lVar15 >> 0x20);
  uVar7 = (undefined1)((ulong)lVar15 >> 0x28);
  uVar8 = (undefined1)((ulong)lVar15 >> 0x30);
  uVar9 = (undefined1)((ulong)lVar15 >> 0x38);
  local_78[1] = uVar3;
  local_78[2] = uVar4;
  local_78[3] = uVar5;
  local_78[4] = uVar6;
  local_78[5] = uVar7;
  local_78[6] = uVar8;
  local_78[7] = uVar9;
  if (uVar12 >> 0x1e < 2) {
    if (uVar17 == 0) {
      FUN_100006cdc(lVar15,uVar18);
      local_78[8] = (byte)uVar18;
      local_78[9] = (byte)(uVar18 >> 8);
      local_78[10] = (byte)(uVar18 >> 0x10);
      local_78[0xb] = (byte)(uVar18 >> 0x18);
      local_78[0xc] = (byte)(uVar18 >> 0x20);
      local_78[0xd] = (byte)(uVar18 >> 0x28);
      local_78[0xe] = (byte)(uVar18 >> 0x30);
      FUN_1005613a0(param_1,local_78,local_78 + local_78[0xe],param_3,param_4 & 0xffffffff);
      lVar15 = CONCAT17(local_78[7],
                        CONCAT16(local_78[6],
                                 CONCAT15(local_78[5],
                                          CONCAT14(local_78[4],
                                                   CONCAT13(local_78[3],
                                                            CONCAT12(local_78[2],
                                                                     CONCAT11(local_78[1],
                                                                              local_78[0])))))));
      uVar18 = (ulong)CONCAT16(local_78[0xe],
                               CONCAT15(local_78[0xd],
                                        CONCAT14(local_78[0xc],
                                                 CONCAT13(local_78[0xb],
                                                          CONCAT12(local_78[10],
                                                                   CONCAT11(local_78[9],local_78[8])
                                                                  )))));
    }
    else {
      uVar19 = uVar18 & 0x3fffffffffffffff;
      _swift_retain(uVar19);
      FUN_100006cdc(lVar15,uVar18);
      local_78[8] = (byte)uVar19;
      local_78[9] = (byte)(uVar19 >> 8);
      local_78[10] = (byte)(uVar19 >> 0x10);
      local_78[0xb] = (byte)(uVar19 >> 0x18);
      local_78[0xc] = (byte)(uVar19 >> 0x20);
      local_78[0xd] = (byte)(uVar19 >> 0x28);
      local_78[0xe] = (byte)(uVar19 >> 0x30);
      local_78[0xf] = (byte)(uVar19 >> 0x38);
      param_2[1] = -0x4000000000000000;
      *param_2 = 0;
      FUN_100006cdc(0,0xc000000000000000);
      FUN_100562738(param_1,local_78,param_3,param_4);
      lVar15 = CONCAT17(local_78[7],
                        CONCAT16(local_78[6],
                                 CONCAT15(local_78[5],
                                          CONCAT14(local_78[4],
                                                   CONCAT13(local_78[3],
                                                            CONCAT12(local_78[2],
                                                                     CONCAT11(local_78[1],
                                                                              local_78[0])))))));
      uVar18 = CONCAT17(local_78[0xf],
                        CONCAT16(local_78[0xe],
                                 CONCAT15(local_78[0xd],
                                          CONCAT14(local_78[0xc],
                                                   CONCAT13(local_78[0xb],
                                                            CONCAT12(local_78[10],
                                                                     CONCAT11(local_78[9],
                                                                              local_78[8]))))))) |
               0x4000000000000000;
    }
    *param_2 = lVar15;
    param_2[1] = uVar18;
  }
  else if (uVar17 == 2) {
    uVar19 = uVar18 & 0x3fffffffffffffff;
    _swift_retain(lVar15);
    _swift_retain(uVar19);
    FUN_100006cdc(lVar15,uVar18);
    local_78[8] = (byte)uVar19;
    local_78[9] = (byte)(uVar19 >> 8);
    local_78[10] = (byte)(uVar19 >> 0x10);
    local_78[0xb] = (byte)(uVar19 >> 0x18);
    local_78[0xc] = (byte)(uVar19 >> 0x20);
    local_78[0xd] = (byte)(uVar19 >> 0x28);
    local_78[0xe] = (byte)(uVar19 >> 0x30);
    local_78[0xf] = (byte)(uVar19 >> 0x38);
    param_2[1] = -0x4000000000000000;
    *param_2 = 0;
    lVar15 = 0;
    FUN_100006cdc(0,0xc000000000000000);
    __s10Foundation4DataV10LargeSliceV21ensureUniqueReferenceyyF();
    lVar13 = CONCAT17(local_78[7],
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
    lVar1 = *(long *)(lVar13 + 0x10);
    lVar2 = *(long *)(lVar13 + 0x18);
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    if (lVar15 == 0) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x100562738);
      (*pcVar14)();
    }
    lVar16 = lVar15;
    __s10Foundation13__DataStorageC7_offsetSivg();
    lVar10 = lVar1 - lVar16;
    if (SBORROW8(lVar1,lVar16)) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x10056272c);
      (*pcVar14)();
    }
    lVar11 = lVar2 - lVar1;
    if (SBORROW8(lVar2,lVar1)) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x100562730);
      (*pcVar14)();
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
    if (lVar11 <= lVar16) {
      lVar16 = lVar11;
    }
    lVar15 = lVar15 + lVar10;
    FUN_1005613a0(param_1,lVar15,lVar15 + lVar16,param_3,param_4);
    *param_2 = lVar13;
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
    FUN_1005613a0(local_78,local_78,param_3,param_4);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

