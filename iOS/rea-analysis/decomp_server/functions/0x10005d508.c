// rea decompile_all
// name: FUN_10005d508
// address: 0x10005d508
// body: available
// range: 0x10005d508-0x10005dad3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10005dad0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10005d508(void)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  bool bVar6;
  ulong self;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x20;
  ulong *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ushort uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined1 *local_230;
  undefined8 uStack_228;
  char *local_218;
  char *pcStack_210;
  char *local_208;
  char *pcStack_200;
  long local_1f8;
  undefined4 local_1f0;
  undefined1 *local_1ec;
  undefined8 uStack_1e4;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8;
  undefined4 local_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  int local_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long local_128;
  long local_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  undefined5 uStack_d8;
  undefined3 local_d3;
  undefined5 uStack_d0;
  undefined8 uStack_cb;
  undefined1 auStack_b8 [24];
  undefined4 local_a0 [10];
  char local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  _swift_beginAccess(unaff_x20 + 0x70,auStack_b8,0,0);
  local_1f8 = *(long *)(unaff_x20 + 0x70);
  puVar11 = (ulong *)(local_1f8 + 0x40);
  uVar10 = 1L << ((ulong)*(byte *)(local_1f8 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((long)uVar10 < 0x40) {
    uVar12 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar12 = uVar12 & *puVar11;
  local_218 = "ace- remove begin screenIDs:";
  pcStack_210 = "captureFailedRetryCount";
  local_208 = "Duplicate values for key: \'";
  pcStack_200 = "oncile";
  _swift_bridgeObjectRetain();
  lVar13 = 0;
  lVar9 = local_1f8;
  puVar5 = &local_240;
joined_r0x00010005d5c8:
  do {
    while( true ) {
      do {
        while (uVar12 == 0) {
          bVar6 = SCARRY8(lVar13,1);
          lVar13 = lVar13 + 1;
          if (bVar6) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10005dab0);
            (*pcVar4)();
          }
          if ((long)(uVar10 + 0x3f >> 6) <= lVar13) {
            _swift_release();
            if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
              ___stack_chk_fail();
            }
            return;
          }
          uVar12 = puVar11[lVar13];
        }
        uVar17 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        uVar12 = uVar12 - 1 & uVar12;
        puVar1 = (undefined8 *)
                 (*(long *)(lVar9 + 0x38) +
                 (lVar13 << 0xd | LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) << 7));
        uStack_f8 = puVar1[9];
        local_100 = puVar1[8];
        uStack_e8 = puVar1[0xb];
        local_f0 = puVar1[10];
        local_e0 = puVar1[0xc];
        uVar8 = *(undefined8 *)((long)puVar1 + 0x75);
        uStack_d0 = (undefined5)((ulong)*(undefined8 *)((long)puVar1 + 0x6d) >> 0x18);
        uVar17 = puVar1[5];
        lVar16 = puVar1[4];
        uStack_108 = puVar1[7];
        uStack_110 = puVar1[6];
        uStack_138 = puVar1[1];
        local_140 = *puVar1;
        lVar18 = puVar1[3];
        uStack_130 = puVar1[2];
        uStack_d8 = (undefined5)puVar1[0xd];
        local_d3 = (undefined3)((ulong)puVar1[0xd] >> 0x28);
        uStack_cb._7_1_ = (char)((ulong)uVar8 >> 0x38);
        bVar6 = uStack_cb._7_1_ != '\x01';
        uStack_cb = uVar8;
        uStack_118 = uVar17;
        local_120 = lVar16;
        local_128 = lVar18;
      } while (bVar6);
      uVar3 = (undefined4)local_e0;
      uVar14 = local_e0 & 0xffffffff;
      uStack_118._0_1_ = (undefined1)uVar17;
      uVar2 = (undefined1)uStack_118;
      FUN_10007eca0(&local_140,&local_1c0);
      self = uVar14;
      FUN_10000290c();
      if (self != 0) break;
      FUN_100401b14();
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined4 *)((long)puVar5 + -0x10) = uVar3;
      FUN_1003fb4ec(thunk_FUN_10003e8f8,(undefined1 *)((long)puVar5 + -0x20),0xd0000000000000a9,
                    (ulong)pcStack_210 | 0x8000000000000000,0xd000000000000017,
                    (ulong)local_218 | 0x8000000000000000,0x78,0);
LAB_10005d794:
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      puVar7 = (undefined1 *)((long)puVar5 + -0x20);
      *(undefined4 *)((long)puVar5 + -0x10) = uVar3;
      pcVar4 = FUN_10007ee10;
      uVar8 = 0x58b;
LAB_10005d7ec:
      FUN_1003fb4ec(pcVar4,puVar7,0xd0000000000000a5,(ulong)pcStack_200 | 0x8000000000000000,
                    0xd00000000000001c,(ulong)local_208 | 0x8000000000000000,uVar8,0);
      FUN_10007ed50(&local_140);
      lVar9 = local_1f8;
    }
    uStack_1a8 = 0;
    local_1b0 = 0;
    uStack_1ac = 0;
    local_198 = 0;
    uStack_1a0 = 0;
    iStack_1b8 = 0;
    iStack_1b4 = 0;
    local_1c0 = 0;
    iStack_1bc = 0;
    _objc_msgSend(self,"getValue:",&local_1c0);
    local_1f0 = local_1c0;
    uStack_1d0 = uStack_1a0;
    local_1d8 = uStack_1a8;
    local_1c8 = (undefined1)local_198;
    uStack_1e4 = CONCAT44(local_1b0,iStack_1b4);
    local_1ec = (undefined1 *)CONCAT44(iStack_1b8,iStack_1bc);
    uVar15 = NEON_umaxv(CONCAT26(-(ushort)(local_1b0 < 1),
                                 CONCAT24(-(ushort)(iStack_1b4 < 1),
                                          CONCAT22(-(ushort)(iStack_1b8 < 1),
                                                   -(ushort)(iStack_1bc < 1)))),2);
    if ((uVar15 & 1) != 0) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined4 *)((long)puVar5 + -0x10) = uVar3;
      *(undefined4 **)((long)puVar5 + -8) = &local_1f0;
      FUN_1003fb4ec(thunk_FUN_10003e900,(undefined1 *)((long)puVar5 + -0x20),0xd0000000000000a9,
                    (ulong)pcStack_210 | 0x8000000000000000,0xd000000000000017,
                    (ulong)local_218 | 0x8000000000000000,0x7d,0);
      goto LAB_10005d794;
    }
    uStack_238 = uStack_1a0;
    local_240 = uStack_1a8;
    local_230 = local_1ec;
    uStack_228 = uStack_1e4;
    if (lVar18 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10005dab4);
      (*pcVar4)();
    }
    if (0x7fffffff < lVar18) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10005dab8);
      (*pcVar4)();
    }
    if (iStack_1bc != (int)lVar18) {
LAB_10005d8bc:
      uVar17 = uVar14;
      FUN_10003b530();
      if (uVar17 != 0) {
        FUN_1000459c8(local_a0,local_240);
        _swift_bridgeObjectRelease(uVar17);
        if (local_78 != '\x02') {
          FUN_100003278(uVar14,local_a0[0]);
          uVar8 = 0;
          FUN_100401b14(0);
          local_230 = (undefined1 *)puVar5;
          if ((int)uVar14 == 0) {
            (*(code *)PTR____chkstk_darwin_100995498)(uVar8);
            *(undefined4 *)((long)puVar5 + -0x20) = uVar3;
            *(long *)((long)puVar5 + -0x18) = lVar18;
            *(long *)((long)puVar5 + -0x10) = lVar16;
            *(undefined1 *)((long)puVar5 + -8) = uVar2;
            FUN_1003fb48c(FUN_10007ee3c,(undefined1 *)((long)puVar5 + -0x30),0xd0000000000000a5,
                          (ulong)pcStack_200 | 0x8000000000000000,0xd00000000000001c,
                          (ulong)local_208 | 0x8000000000000000,0x5a4,0);
          }
          else {
            (*(code *)PTR____chkstk_darwin_100995498)();
            *(undefined4 *)((long)puVar5 + -0x20) = uVar3;
            *(long *)((long)puVar5 + -0x18) = lVar18;
            *(long *)((long)puVar5 + -0x10) = lVar16;
            *(undefined1 *)((long)puVar5 + -8) = uVar2;
            *(int *)((long)puVar5 + -4) = (int)uVar14;
            FUN_1003fb4ec(FUN_10007ee28,(undefined1 *)((long)puVar5 + -0x30),0xd0000000000000a5,
                          (ulong)pcStack_200 | 0x8000000000000000,0xd00000000000001c,
                          (ulong)local_208 | 0x8000000000000000,0x5a1,0);
          }
          FUN_10007ed50(&local_140);
          lVar9 = local_1f8;
          puVar5 = (undefined8 *)local_230;
          goto joined_r0x00010005d5c8;
        }
      }
      uVar8 = 0;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)(uVar8);
      puVar7 = (undefined1 *)((long)puVar5 + -0x30);
      *(undefined4 *)((long)puVar5 + -0x20) = uVar3;
      *(long *)((long)puVar5 + -0x18) = lVar18;
      *(long *)((long)puVar5 + -0x10) = lVar16;
      *(undefined1 *)((long)puVar5 + -8) = uVar2;
      pcVar4 = FUN_10007ee18;
      uVar8 = 0x59c;
      goto LAB_10005d7ec;
    }
    if (lVar16 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10005dabc);
      (*pcVar4)();
    }
    if (0x7fffffff < lVar16) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10005dac0);
      (*pcVar4)();
    }
    if (iStack_1b8 != (int)lVar16) goto LAB_10005d8bc;
    lVar9 = lVar18 << (uVar17 & 0x3f);
    if (lVar9 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10005dac4);
      (*pcVar4)();
    }
    if (0x7fffffff < lVar9) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10005dac8);
      (*pcVar4)();
    }
    if (iStack_1b4 != (int)lVar9) goto LAB_10005d8bc;
    lVar9 = lVar16 << (uVar17 & 0x3f);
    if (lVar9 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10005dacc);
      (*pcVar4)();
    }
    if (0x7fffffff < lVar9) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10005dad0);
      (*pcVar4)();
    }
    if (local_1b0 != (int)lVar9) goto LAB_10005d8bc;
    FUN_10007ed50(&local_140);
    lVar9 = local_1f8;
  } while( true );
}

