// rea decompile_all
// name: FUN_1005200ec
// address: 0x1005200ec
// body: available
// range: 0x1005200ec-0x1005205cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100520568) */

undefined1  [16] FUN_1005200ec(uint param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  bool bVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long unaff_x21;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  undefined1 auVar21 [16];
  undefined8 local_168;
  char *local_148;
  char *local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined6 uStack_118;
  undefined2 local_112;
  undefined6 uStack_110;
  undefined *local_100;
  undefined2 local_f8;
  undefined *local_f0 [3];
  undefined *local_d8;
  undefined **local_d0;
  char *local_c8;
  undefined8 uStack_c0;
  undefined2 local_b8;
  undefined6 uStack_b6;
  undefined6 uStack_b0;
  undefined2 uStack_aa;
  undefined2 uStack_a8;
  byte bStack_a6;
  byte bStack_a5;
  byte bStack_a4;
  byte bStack_a3;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  
  uVar8 = 0;
  FUN_100506f84(0,1,1,PTR___swiftEmptyArrayStorage_100995ea0);
  uVar20 = *(ulong *)(uVar8 + 0x10);
  if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar20) {
    uVar8 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
    FUN_100506f84(uVar8,uVar20 + 1,1);
  }
  *(ulong *)(uVar8 + 0x10) = uVar20 + 1;
  *(undefined1 *)(uVar8 + uVar20 + 0x20) = 0x7b;
  local_f0[0] = (undefined *)CONCAT71(local_f0[0]._1_7_,1);
  local_130 = (char *)CONCAT71(local_130._1_7_,1);
  bStack_a6 = (byte)param_1 & 1;
  bStack_a5 = (byte)(param_1 >> 8) & 1;
  bStack_a4 = (byte)(param_1 >> 0x10) & 1;
  bStack_a3 = (byte)(param_1 >> 0x18) & 1;
  local_c8 = (char *)0x0;
  uStack_c0 = 0;
  local_b8 = 0x100;
  uStack_b0 = (undefined6)uVar8;
  uStack_aa = (undefined2)(uVar8 >> 0x30);
  uStack_a8 = 0x100;
  uVar8 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar20 = 0xffffffffffffffff;
  if ((long)uVar8 < 0x40) {
    uVar20 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar20 = uVar20 & *(ulong *)(param_2 + 0x40);
  _swift_bridgeObjectRetain();
  lVar15 = 0;
  local_148 = (char *)0x0;
  local_168 = 0;
  bVar14 = true;
  do {
    for (; uVar20 != 0; uVar20 = uVar20 - 1 & uVar20) {
      uVar16 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) | lVar15 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar16 * 0x10);
      plVar17 = (long *)(*(long *)(param_2 + 0x38) + uVar16 * 0x30);
      uVar18 = *puVar1;
      uVar3 = puVar1[1];
      lVar13 = *plVar17;
      lVar12 = plVar17[1];
      lVar19 = plVar17[2];
      uVar5 = (undefined1)plVar17[3];
      lVar2 = plVar17[4];
      lVar4 = plVar17[5];
      if (bVar14) {
        local_c8 = ",";
        uStack_c0 = 1;
        local_b8 = 2;
        _swift_bridgeObjectRetain(uVar3);
        FUN_10051fe90(lVar13,lVar12,lVar19,uVar5);
        FUN_100008184(lVar2,lVar4);
        local_148 = ",";
        local_168 = 1;
      }
      else {
        if (local_148 == (char *)0x0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100520570);
          (*pcVar6)();
        }
        _swift_bridgeObjectRetain(uVar3);
        FUN_10051fe90(lVar13,lVar12,lVar19,uVar5);
        FUN_100008184(lVar2,lVar4);
        FUN_1004f9e80(local_148,local_168);
      }
      FUN_10052aec8(uVar18,uVar3);
      _swift_bridgeObjectRelease(uVar3);
      FUN_1004f9e80(":",1);
      local_d8 = &DAT_1009d6da8;
      local_d0 = &PTR_PTR_1009cfb30;
      puVar9 = &DAT_1009cfac8;
      _swift_allocObject(&DAT_1009cfac8,0x40,7);
      *(long *)(puVar9 + 0x10) = lVar13;
      *(long *)(puVar9 + 0x18) = lVar12;
      *(long *)(puVar9 + 0x20) = lVar19;
      puVar9[0x28] = uVar5;
      *(long *)(puVar9 + 0x30) = lVar2;
      *(long *)(puVar9 + 0x38) = lVar4;
      ppuVar10 = local_f0;
      local_f0[0] = puVar9;
      FUN_10003f030(ppuVar10,&DAT_1009d6da8);
      puStack_98 = ppuVar10[1];
      local_a0 = *ppuVar10;
      puStack_88 = ppuVar10[3];
      puStack_90 = ppuVar10[2];
      puStack_78 = ppuVar10[5];
      local_80 = ppuVar10[4];
      local_100 = PTR___swiftEmptyArrayStorage_100995ea0;
      local_f8 = 0x100;
      FUN_10051fe90(lVar13,lVar12,lVar19,uVar5);
      FUN_100008184(lVar2,lVar4);
      FUN_1005235c0(&local_100,param_1 & 0x1010101);
      puVar9 = local_100;
      if (unaff_x21 != 0) {
        _swift_bridgeObjectRelease(local_100);
        FUN_10003f094(local_f0);
        FUN_10051ff3c(lVar13,lVar12,lVar19,uVar5);
        FUN_100006cdc(lVar2,lVar4);
        _swift_release(param_2);
        uStack_120 = CONCAT62(uStack_b6,local_b8);
        uStack_128 = uStack_c0;
        local_130 = local_c8;
        uStack_118 = uStack_b0;
        local_112 = uStack_aa;
        uStack_110 = (undefined6)
                     (CONCAT17(bStack_a3,
                               CONCAT16(bStack_a4,
                                        CONCAT15(bStack_a5,
                                                 CONCAT14(bStack_a6,CONCAT22(uStack_a8,uStack_aa))))
                              ) >> 0x10);
        FUN_100521e14(&local_130);
LAB_1005204dc:
        auVar21._8_8_ = lVar13;
        auVar21._0_8_ = lVar12;
        return auVar21;
      }
      uVar18 = *(undefined8 *)(local_100 + 0x10);
      _swift_bridgeObjectRetain(local_100);
      puVar11 = puVar9 + 0x20;
      __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(puVar11,uVar18);
      _swift_bridgeObjectRelease_n(puVar9,2);
      FUN_10003f094(local_f0);
      FUN_1004fa030(puVar11,uVar18);
      FUN_10051ff3c(lVar13,lVar12,lVar19,uVar5);
      FUN_100006cdc(lVar2,lVar4);
      bVar14 = false;
    }
    bVar7 = SCARRY8(lVar15,1);
    lVar15 = lVar15 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100520568);
      (*pcVar6)();
    }
    if ((long)(uVar8 + 0x3f >> 6) <= lVar15) {
      _swift_release(param_2);
      uVar20 = CONCAT26(uStack_aa,uStack_b0);
      uVar8 = uVar20;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar16 = uVar20;
      if ((uVar8 & 1) == 0) {
        uVar16 = 0;
        FUN_100506f84(0,*(long *)(uVar20 + 0x10) + 1,1,uVar20);
      }
      uVar20 = *(ulong *)(uVar16 + 0x10);
      lVar13 = uVar20 + 1;
      uVar8 = uVar16;
      if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar20) {
        uVar8 = (ulong)(1 < *(ulong *)(uVar16 + 0x18));
        FUN_100506f84(uVar8,lVar13,1,uVar16);
      }
      *(long *)(uVar8 + 0x10) = lVar13;
      lVar12 = uVar8 + 0x20;
      *(undefined1 *)(lVar12 + uVar20) = 0x7d;
      __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ();
      _swift_bridgeObjectRelease(uVar8);
      goto LAB_1005204dc;
    }
    uVar20 = ((ulong *)(param_2 + 0x40))[lVar15];
  } while( true );
}

