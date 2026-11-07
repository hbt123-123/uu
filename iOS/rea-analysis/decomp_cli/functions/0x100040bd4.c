// rea decompile_all
// name: FUN_100040bd4
// address: 0x100040bd4
// body: available
// range: 0x100040bd4-0x100040fd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100040fd0 to 0x1000c27bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100040bd4(void)

{
  ulong uVar1;
  uchar *puVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  FILE *pFVar6;
  FILE *pFVar7;
  FILE *pFVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined *puVar11;
  termios *ptVar12;
  undefined1 *puVar13;
  long extraout_x8;
  long lVar14;
  byte bVar15;
  uint uVar16;
  undefined1 auStack_150 [8];
  uint local_148;
  byte local_141;
  termios local_140;
  termios local_f0;
  termios local_a0;
  long local_58;
  uint uVar17;
  
  local_58 = *(long *)PTR____stack_chk_guard_1000f0280;
  lVar5 = 0;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar13 = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  iVar4 = _isatty(0);
  if (iVar4 == 1) {
    local_a0.c_ospeed = 0;
    local_a0.c_cc[8] = '\0';
    local_a0.c_cc[9] = '\0';
    local_a0.c_cc[10] = '\0';
    local_a0.c_cc[0xb] = '\0';
    local_a0.c_cc[0xc] = '\0';
    local_a0.c_cc[0xd] = '\0';
    local_a0.c_cc[0xe] = '\0';
    local_a0.c_cc[0xf] = '\0';
    local_a0.c_cc[0] = '\0';
    local_a0.c_cc[1] = '\0';
    local_a0.c_cc[2] = '\0';
    local_a0.c_cc[3] = '\0';
    local_a0.c_cc[4] = '\0';
    local_a0.c_cc[5] = '\0';
    local_a0.c_cc[6] = '\0';
    local_a0.c_cc[7] = '\0';
    local_a0.c_ispeed = 0;
    local_a0.c_cc[0x10] = '\0';
    local_a0.c_cc[0x11] = '\0';
    local_a0.c_cc[0x12] = '\0';
    local_a0.c_cc[0x13] = '\0';
    local_a0._52_4_ = 0;
    local_a0.c_oflag = 0;
    local_a0.c_iflag = 0;
    local_a0.c_lflag = 0;
    local_a0.c_cflag = 0;
    iVar4 = _tcgetattr(0,&local_a0);
    if (iVar4 == 0) {
      local_f0.c_oflag = local_a0.c_oflag;
      local_f0.c_iflag = local_a0.c_iflag;
      local_f0.c_cc[8] = local_a0.c_cc[8];
      local_f0.c_cc[9] = local_a0.c_cc[9];
      local_f0.c_cc[10] = local_a0.c_cc[10];
      local_f0.c_cc[0xb] = local_a0.c_cc[0xb];
      local_f0.c_cc[0xc] = local_a0.c_cc[0xc];
      local_f0.c_cc[0xd] = local_a0.c_cc[0xd];
      local_f0.c_cc[0xe] = local_a0.c_cc[0xe];
      local_f0.c_cc[0xf] = local_a0.c_cc[0xf];
      local_f0.c_cc[0] = local_a0.c_cc[0];
      local_f0.c_cc[1] = local_a0.c_cc[1];
      local_f0.c_cc[2] = local_a0.c_cc[2];
      local_f0.c_cc[3] = local_a0.c_cc[3];
      local_f0.c_cc[4] = local_a0.c_cc[4];
      local_f0.c_cc[5] = local_a0.c_cc[5];
      local_f0.c_cc[6] = local_a0.c_cc[6];
      local_f0.c_cc[7] = local_a0.c_cc[7];
      local_f0.c_ispeed = local_a0.c_ispeed;
      local_f0.c_cc[0x10] = local_a0.c_cc[0x10];
      local_f0.c_cc[0x11] = local_a0.c_cc[0x11];
      local_f0.c_cc[0x12] = local_a0.c_cc[0x12];
      local_f0.c_cc[0x13] = local_a0.c_cc[0x13];
      local_f0._52_4_ = local_a0._52_4_;
      local_f0.c_ospeed = local_a0.c_ospeed;
      local_f0.c_lflag = local_a0.c_lflag & 0xfffffffffffffe77;
      local_f0.c_cflag = local_a0.c_cflag;
      iVar4 = _tcsetattr(0,0,&local_f0);
      if (iVar4 == 0) {
        local_141 = 0;
        pFVar6 = (FILE *)_read(0,&local_141,1);
        pFVar8 = (FILE *)PTR___swiftEmptyArrayStorage_1000f0740;
        if (0 < (long)pFVar6) {
          do {
            bVar15 = local_141;
            uVar16 = (uint)local_141;
            uVar17 = (uint)local_141;
            pFVar7 = pFVar8;
            if (local_141 < 10) {
              if (uVar16 != 8) {
                if (1 < uVar16 - 3) goto LAB_100040dbc;
                _swift_bridgeObjectRelease();
                __s6Darwin6stderrSpySo7__sFILEVGvg();
                pcVar9 = "^C\n";
                goto LAB_100040e8c;
              }
LAB_100040d84:
              lVar5._0_2_ = pFVar8->_flags;
              lVar5._2_2_ = pFVar8->_file;
              lVar5._4_4_ = *(undefined4 *)&pFVar8->field_0x14;
              if (lVar5 != 0) {
                _swift_isUniquelyReferenced_nonNull_native();
                if (((ulong)pFVar7 & 1) == 0) {
                  FUN_100021ff8();
                  lVar14._0_2_ = pFVar8->_flags;
                  lVar14._2_2_ = pFVar8->_file;
                  lVar14._4_4_ = *(undefined4 *)&pFVar8->field_0x14;
                  pFVar7 = pFVar8;
                }
                else {
                  lVar14._0_2_ = pFVar8->_flags;
                  lVar14._2_2_ = pFVar8->_file;
                  lVar14._4_4_ = *(undefined4 *)&pFVar8->field_0x14;
                }
                if (lVar14 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x100040fd0);
                  (*pcVar3)();
                }
                *(long *)&pFVar8->_flags = lVar14 + -1;
                pcVar9 = "\b \b";
                goto LAB_100040d24;
              }
            }
            else {
              if (uVar17 == 0x7f) goto LAB_100040d84;
              if (uVar17 == 0xd || uVar16 == 10) {
                __s6Darwin6stderrSpySo7__sFILEVGvg();
                _fputs("\n",pFVar6);
                local_140.c_iflag = (tcflag_t)pFVar8;
                __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar13);
                puVar10 = &DAT_1001036f8;
                FUN_10000eb08(&DAT_1001036f8,&DAT_1000d26f8);
                puVar11 = &DAT_100103700;
                FUN_10002cf3c(&DAT_100103700,&DAT_1001036f8,&DAT_1000d26f8,
                              PTR___sSayxGSTsMc_1000f0380);
                ptVar12 = &local_140;
                __sSS10FoundationE5bytes8encodingSSSgxh_SSAAE8EncodingVtcSTRzs5UInt8V7ElementRtzlufC
                          (ptVar12,puVar13,puVar10,puVar11);
                _swift_bridgeObjectRelease(pFVar8);
                if (puVar13 == (undefined1 *)0x0) goto LAB_100040e90;
                uVar1 = (ulong)ptVar12 & 0xffffffffffff;
                if (((ulong)puVar13 & 0x2000000000000000) != 0) {
                  uVar1 = (ulong)puVar13 >> 0x38 & 0xf;
                }
                if (uVar1 == 0) {
                  _swift_bridgeObjectRelease(puVar13);
                }
                local_140.c_cc[8] = local_a0.c_cc[8];
                local_140.c_cc[9] = local_a0.c_cc[9];
                local_140.c_cc[10] = local_a0.c_cc[10];
                local_140.c_cc[0xb] = local_a0.c_cc[0xb];
                local_140.c_cc[0xc] = local_a0.c_cc[0xc];
                local_140.c_cc[0xd] = local_a0.c_cc[0xd];
                local_140.c_cc[0xe] = local_a0.c_cc[0xe];
                local_140.c_cc[0xf] = local_a0.c_cc[0xf];
                local_140.c_cc[0] = local_a0.c_cc[0];
                local_140.c_cc[1] = local_a0.c_cc[1];
                local_140.c_cc[2] = local_a0.c_cc[2];
                local_140.c_cc[3] = local_a0.c_cc[3];
                local_140.c_cc[4] = local_a0.c_cc[4];
                local_140.c_cc[5] = local_a0.c_cc[5];
                local_140.c_cc[6] = local_a0.c_cc[6];
                local_140.c_cc[7] = local_a0.c_cc[7];
                local_140.c_ispeed = local_a0.c_ispeed;
                local_140.c_cc[0x10] = local_a0.c_cc[0x10];
                local_140.c_cc[0x11] = local_a0.c_cc[0x11];
                local_140.c_cc[0x12] = local_a0.c_cc[0x12];
                local_140.c_cc[0x13] = local_a0.c_cc[0x13];
                local_140._52_4_ = local_a0._52_4_;
                local_140.c_ospeed = local_a0.c_ospeed;
                local_140.c_lflag = local_a0.c_lflag;
                local_140.c_cflag = local_a0.c_cflag;
                local_140.c_oflag = local_a0.c_oflag;
                local_140.c_iflag = local_a0.c_iflag;
                _tcsetattr(0,0,&local_140);
                goto LAB_100040ca8;
              }
LAB_100040dbc:
              if (0x1f < uVar16) {
                _swift_isUniquelyReferenced_nonNull_native();
                if (((ulong)pFVar7 & 1) == 0) {
                  pFVar7 = (FILE *)0x0;
                  FUN_100021dd0(0,*(long *)&pFVar8->_flags + 1,1,pFVar8);
                  pFVar8 = pFVar7;
                }
                uVar1 = *(ulong *)&pFVar8->_flags;
                puVar2 = (pFVar8->_bf)._base;
                if ((ulong)puVar2 >> 1 <= uVar1) {
                  pFVar7 = (FILE *)(ulong)((uchar *)0x1 < puVar2);
                  local_148 = uVar17;
                  FUN_100021dd0(pFVar7,uVar1 + 1,1,pFVar8);
                  bVar15 = (byte)local_148;
                  pFVar8 = pFVar7;
                }
                *(ulong *)&pFVar8->_flags = uVar1 + 1;
                pFVar8->_ubuf[uVar1 - 0x54] = bVar15;
                pcVar9 = "*";
LAB_100040d24:
                __s6Darwin6stderrSpySo7__sFILEVGvg();
                _fputs(pcVar9,pFVar7);
              }
            }
            local_141 = 0;
            pFVar6 = (FILE *)_read(0,&local_141,1);
          } while (0 < (long)pFVar6);
        }
        _swift_bridgeObjectRelease();
        __s6Darwin6stderrSpySo7__sFILEVGvg();
        pcVar9 = "\n";
LAB_100040e8c:
        _fputs(pcVar9,pFVar8);
LAB_100040e90:
        local_140.c_cc[8] = local_a0.c_cc[8];
        local_140.c_cc[9] = local_a0.c_cc[9];
        local_140.c_cc[10] = local_a0.c_cc[10];
        local_140.c_cc[0xb] = local_a0.c_cc[0xb];
        local_140.c_cc[0xc] = local_a0.c_cc[0xc];
        local_140.c_cc[0xd] = local_a0.c_cc[0xd];
        local_140.c_cc[0xe] = local_a0.c_cc[0xe];
        local_140.c_cc[0xf] = local_a0.c_cc[0xf];
        local_140.c_cc[0] = local_a0.c_cc[0];
        local_140.c_cc[1] = local_a0.c_cc[1];
        local_140.c_cc[2] = local_a0.c_cc[2];
        local_140.c_cc[3] = local_a0.c_cc[3];
        local_140.c_cc[4] = local_a0.c_cc[4];
        local_140.c_cc[5] = local_a0.c_cc[5];
        local_140.c_cc[6] = local_a0.c_cc[6];
        local_140.c_cc[7] = local_a0.c_cc[7];
        local_140.c_ispeed = local_a0.c_ispeed;
        local_140.c_cc[0x10] = local_a0.c_cc[0x10];
        local_140.c_cc[0x11] = local_a0.c_cc[0x11];
        local_140.c_cc[0x12] = local_a0.c_cc[0x12];
        local_140.c_cc[0x13] = local_a0.c_cc[0x13];
        local_140._52_4_ = local_a0._52_4_;
        local_140.c_ospeed = local_a0.c_ospeed;
        local_140.c_lflag = local_a0.c_lflag;
        local_140.c_cflag = local_a0.c_cflag;
        local_140.c_oflag = local_a0.c_oflag;
        local_140.c_iflag = local_a0.c_iflag;
        _tcsetattr(0,0,&local_140);
        goto LAB_100040ca8;
      }
    }
  }
  FUN_100040fd4();
LAB_100040ca8:
  if (*(long *)PTR____stack_chk_guard_1000f0280 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

