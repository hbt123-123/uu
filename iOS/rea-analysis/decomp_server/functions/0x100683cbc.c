// rea decompile_all
// name: FUN_100683cbc
// address: 0x100683cbc
// body: available
// range: 0x100683cbc-0x100683ff3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100683cbc(void)

{
  byte bVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  long local_68;
  
  if (*(char *)((long)unaff_x20 + 0x31) == '\x03') {
    uVar19 = 0;
    iVar16 = 0;
    uVar14 = *(ulong *)(*unaff_x20 + 0x10);
    if (uVar14 != 0) {
      bVar2 = true;
      uVar17 = 0;
      iVar13 = 0;
      goto LAB_100683d98;
    }
    uVar17 = 0;
    iVar13 = 0;
  }
  else {
    if (*(char *)((long)unaff_x20 + 0x31) != '\x04') {
      return 0;
    }
    lVar12 = unaff_x20[1];
    bVar1 = *(byte *)(lVar12 + 0x20);
    local_68 = lVar12;
    _swift_bridgeObjectRetain(lVar12);
    uVar17 = lVar12 + 0x40;
    __ss10_HashTableV11startBucketAB0D0Vvg(uVar17,~(-1L << ((ulong)bVar1 & 0x3f)));
    iVar16 = *(int *)(lVar12 + 0x24);
    FUN_100040bb4(&local_68,&DAT_100ab9ea0,&DAT_10084d528);
    iVar13 = *(int *)(lVar12 + 0x24);
    if (iVar13 != iVar16) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100683ff0);
      (*pcVar3)();
    }
    uVar14 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
    if ((long)uVar14 < (long)uVar17) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100683ff4);
      (*pcVar3)();
    }
    uVar19 = 0x40;
    if (uVar17 != uVar14) {
      bVar2 = false;
LAB_100683d98:
      FUN_100690ab4(uVar17,iVar16,uVar19);
      lVar7 = 0;
      lVar12 = 1;
      uVar18 = uVar17;
      uVar20 = uVar19;
      iVar15 = iVar16;
LAB_100683ddc:
      bVar4 = SCARRY8(lVar7,1);
      lVar7 = lVar7 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100683fe8);
        (*pcVar3)();
      }
      lVar5 = lVar12;
      uVar10 = uVar18;
      if (0x3f < uVar20) {
        lVar21 = unaff_x20[1];
        lVar5 = lVar7;
        do {
          if (((long)uVar18 < 0) ||
             (uVar10 = 1L << ((ulong)*(byte *)(lVar21 + 0x20) & 0x3f), (long)uVar10 <= (long)uVar18)
             ) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100683fd4);
            (*pcVar3)();
          }
          uVar8 = uVar18 >> 6;
          uVar6 = *(ulong *)(lVar21 + 0x40 + uVar8 * 8);
          if ((uVar6 >> (uVar18 & 0x3f) & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100683fd8);
            (*pcVar3)();
          }
          if (*(int *)(lVar21 + 0x24) != iVar15) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100683fdc);
            (*pcVar3)();
          }
          uVar6 = uVar6 & -2L << (uVar18 & 0x3f);
          if (uVar6 == 0) {
            lVar11 = uVar8 << 6;
            puVar9 = (ulong *)(lVar21 + 0x48 + uVar8 * 8);
            do {
              uVar8 = uVar8 + 1;
              if (uVar10 + 0x3f >> 6 <= uVar8) {
                FUN_100690ae8(uVar18,iVar15,0x40);
                uVar18 = uVar10;
                goto joined_r0x000100683e58;
              }
              uVar6 = *puVar9;
              lVar11 = lVar11 + 0x40;
              puVar9 = puVar9 + 1;
            } while (uVar6 == 0);
            FUN_100690ae8(uVar18,iVar15,0x40);
            uVar18 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
            uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
            uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
            uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
            uVar18 = LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) + lVar11;
          }
          else {
            FUN_100690ae8(uVar18,iVar15,0x40);
            uVar10 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
            uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
            uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
            uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
            uVar18 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar18 & 0x7fffffffffffffc0;
          }
joined_r0x000100683e58:
          if (!bVar2) goto LAB_100683f20;
          bVar4 = SCARRY8(lVar5,1);
          lVar5 = lVar5 + 1;
          if (bVar4) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100683fe4);
            (*pcVar3)();
          }
        } while( true );
      }
      while( true ) {
        uVar18 = uVar10 + 1;
        if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100683fd0);
          (*pcVar3)();
        }
        if (bVar2) break;
        bVar4 = SCARRY8(lVar5,1);
        lVar5 = lVar5 + 1;
        uVar10 = uVar10 + 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100683fe0);
          (*pcVar3)();
        }
      }
      iVar15 = 0;
      uVar20 = 0;
      goto LAB_100683dd0;
    }
  }
  FUN_100690ae8(uVar17,iVar13,uVar19);
  FUN_100690ae8(uVar17,iVar16,uVar19);
  return 0;
LAB_100683f20:
  if (iVar15 != iVar13) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100683fec);
    (*pcVar3)();
  }
  uVar20 = 0x40;
LAB_100683dd0:
  lVar12 = lVar12 + 1;
  if (uVar18 == uVar14) {
    FUN_100690ae8(uVar14,iVar13,uVar19);
    FUN_100690ae8(uVar17,iVar16,uVar19);
    FUN_100690ae8(uVar14,iVar15,uVar20);
    return lVar7;
  }
  goto LAB_100683ddc;
}

