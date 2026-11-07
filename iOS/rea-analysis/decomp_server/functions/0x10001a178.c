// rea decompile_all
// name: FUN_10001a178
// address: 0x10001a178
// body: available
// range: 0x10001a178-0x10001a61f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10001a178(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ID IVar11;
  undefined1 *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long unaff_x20;
  ulong uVar18;
  undefined4 uVar19;
  ulong uVar20;
  undefined1 auStack_100 [16];
  uint local_f0;
  uint uStack_ec;
  undefined4 local_e8;
  uint local_e0;
  undefined4 uStack_dc;
  uint local_c4;
  long local_c0;
  char *local_b8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  local_c0 = *(long *)(unaff_x20 + 0x18);
  lVar13 = *(long *)(*(long *)(local_c0 + 0x10) + _TtC14UURemoteServer15StreamerManager::dispatcher)
  ;
  if ((lVar13 == 0) ||
     (lVar13 = *(long *)(lVar13 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession),
     lVar13 == 0)) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    FUN_1003fb48c(FUN_10003fcac,&local_f0,0xd0000000000000a9,0x8000000100877660,0xd00000000000001f,
                  0x8000000100879da0,0x908,0);
    return;
  }
  local_c4 = *(uint *)(lVar13 + _TtC14UURemoteServer22StreamerConnectSession::handle);
  uVar16 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((long)uVar16 < 0x40) {
    uVar18 = ~(-1L << (uVar16 & 0x3f));
  }
  uVar18 = uVar18 & *(ulong *)(param_1 + 0x40);
  _swift_bridgeObjectRetain(param_1);
  _swift_beginAccess(unaff_x20 + 0x88,auStack_78,0,0);
  lVar13 = 0;
  puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
joined_r0x00010001a244:
  do {
    while (uVar18 == 0) {
      bVar7 = SCARRY8(lVar13,1);
      lVar13 = lVar13 + 1;
      if (bVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10001a620);
        (*pcVar6)();
      }
      if ((long)(uVar16 + 0x3f >> 6) <= lVar13) {
        _swift_release(param_1);
        puVar10 = puVar9;
        FUN_100074e98();
        _swift_bridgeObjectRelease(puVar9);
        puVar9 = puVar10;
        FUN_100045da4();
        _swift_bridgeObjectRelease(puVar10);
        lVar13 = *(long *)(puVar9 + 0x10);
        if (lVar13 != 0) {
          FUN_100401b14(0);
          lVar5 = local_c0;
          uVar2 = local_c4;
          local_b8 = "- updateVideoTracks raw:";
          lVar17 = 0x20;
          uVar18 = (ulong)local_c4;
          do {
            uVar4 = *(uint *)(puVar9 + lVar17);
            IVar11 = _objc_msgSend(*(ID *)(*(long *)(lVar5 + 0x10) +
                                          _TtC14UURemoteServer15StreamerManager::controlled),
                                   "ControlledStopVideoCapture:videoIndex:",uVar18,(ulong)uVar4);
            (*(code *)PTR____chkstk_darwin_100995498)();
            _local_e0 = CONCAT44(uVar19,uVar2);
            FUN_1003fb48c(thunk_FUN_10003f65c,&local_f0,0xd000000000000095,0x8000000100877f50,
                          0xd00000000000001f,0x8000000100877ff0,0x18d,0);
            (*(code *)PTR____chkstk_darwin_100995498)();
            local_f0 = uVar2;
            uVar19 = (undefined4)IVar11;
            uStack_ec = uVar4;
            local_e8 = uVar19;
            FUN_1003fb4bc(FUN_10003fcb4,auStack_100,0xd0000000000000a9,0x8000000100877660,
                          0xd00000000000001f,(ulong)local_b8 | 0x8000000000000000,0x911,0);
            lVar17 = lVar17 + 4;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        _swift_bridgeObjectRelease(puVar9);
        return;
      }
      uVar18 = ((ulong *)(param_1 + 0x40))[lVar13];
    }
    uVar14 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
    uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
    uVar18 = uVar18 - 1 & uVar18;
    uVar14 = lVar13 << 8 | LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) << 2;
    iVar1 = *(int *)(*(long *)(param_1 + 0x38) + uVar14);
    lVar17 = *(long *)(unaff_x20 + 0x88);
    if (*(long *)(lVar17 + 0x10) != 0) {
      uVar2 = *(uint *)(*(long *)(param_1 + 0x30) + uVar14);
      uVar20 = (ulong)uVar2;
      uVar14 = *(ulong *)(lVar17 + 0x28);
      __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar14,uVar20,4);
      uVar15 = -1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
      uVar14 = uVar14 & (uVar15 ^ 0xffffffffffffffff);
      if ((*(ulong *)(lVar17 + 0x38 + (uVar14 >> 3 & 0xffffffffffffff8)) >> (uVar14 & 0x3f) & 1) !=
          0) {
        do {
          if (*(uint *)(*(long *)(lVar17 + 0x30) + uVar14 * 4) == uVar2) {
            puVar12 = auStack_90;
            _swift_beginAccess(unaff_x20 + 0x80,puVar12,0x20,0);
            lVar17 = *(long *)(unaff_x20 + 0x80);
            if ((*(long *)(lVar17 + 0x10) == 0) ||
               (thunk_FUN_1001a2c34(), ((ulong)puVar12 & 1) == 0)) {
              _swift_endAccess(auStack_90);
            }
            else {
              iVar3 = *(int *)(*(long *)(lVar17 + 0x38) + uVar20 * 4);
              _swift_endAccess(auStack_90);
              if (iVar3 == iVar1) goto joined_r0x00010001a244;
            }
            break;
          }
          uVar14 = uVar14 + 1 & ~uVar15;
        } while ((*(ulong *)(lVar17 + 0x38 + (uVar14 >> 3 & 0xffffffffffffff8)) >> (uVar14 & 0x3f) &
                 1) != 0);
      }
    }
    puVar10 = puVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar8 = puVar9;
    if (((ulong)puVar10 & 1) == 0) {
      puVar8 = (undefined *)0x0;
      FUN_1000344b4(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9,&DAT_100a75938,&DAT_10080a930);
    }
    uVar14 = *(ulong *)(puVar8 + 0x10);
    puVar9 = puVar8;
    if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar14) {
      puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
      FUN_1000344b4(puVar9,uVar14 + 1,1,puVar8,&DAT_100a75938,&DAT_10080a930);
    }
    *(ulong *)(puVar9 + 0x10) = uVar14 + 1;
    *(int *)(puVar9 + uVar14 * 4 + 0x20) = iVar1;
  } while( true );
}

