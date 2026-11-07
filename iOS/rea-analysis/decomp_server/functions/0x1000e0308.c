// rea decompile_all
// name: FUN_1000e0308
// address: 0x1000e0308
// body: available
// range: 0x1000e0308-0x1000e06ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_1000e0308(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long extraout_x8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  undefined1 local_d0 [8];
  long local_c8;
  uint local_bc;
  undefined1 *local_b8;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined *local_98 [3];
  undefined1 auStack_80 [24];
  undefined *local_68;
  
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar16 = _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveTask::files;
  lVar13 = _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile::
           finalURL;
  local_b8 = local_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_bc = (uint)*(byte *)(param_3 +
                            _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveTask
                            ::strategy);
  if (local_bc == 1) {
    _swift_beginAccess(param_2 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                                 ::finalURL,auStack_80,0,0);
    (**(code **)(lVar12 + 0x10))(param_1,param_2 + lVar13,lVar5);
  }
  else {
    local_b0 = lVar12;
    local_a8 = param_1;
    _swift_beginAccess(param_3 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveTask
                                 ::files,auStack_80,0,0);
    lVar13 = *(long *)(param_3 + lVar16);
    uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
    uVar10 = 0xffffffffffffffff;
    if ((long)uVar9 < 0x40) {
      uVar10 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar10 = uVar10 & *(ulong *)(lVar13 + 0x40);
    _swift_bridgeObjectRetain(lVar13);
    puVar15 = PTR___swiftEmptyArrayStorage_100995ea0;
    lVar16 = 0;
    local_a0 = param_2;
    puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
    while( true ) {
      while (uVar10 != 0) {
        uVar1 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 - 1 & uVar10;
        lVar12 = *(long *)(*(long *)(lVar13 + 0x38) +
                          (lVar16 << 9 | LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) << 3));
        if (lVar12 != param_2) {
          _swift_retain(lVar12);
          puVar14 = puVar7;
          _swift_isUniquelyReferenced_nonNull_native();
          local_c8 = lVar5;
          local_98[0] = puVar7;
          if (((ulong)puVar14 & 1) == 0) {
            FUN_10006fe54(0,*(long *)(puVar7 + 0x10) + 1,1);
          }
          uVar1 = *(ulong *)(local_98[0] + 0x10);
          if (*(ulong *)(local_98[0] + 0x18) >> 1 <= uVar1) {
            FUN_10006fe54(1 < *(ulong *)(local_98[0] + 0x18),uVar1 + 1,1);
          }
          *(ulong *)(local_98[0] + 0x10) = uVar1 + 1;
          *(long *)(local_98[0] + uVar1 * 8 + 0x20) = lVar12;
          lVar5 = local_c8;
          param_2 = local_a0;
          puVar7 = local_98[0];
        }
      }
      bVar4 = SCARRY8(lVar16,1);
      lVar16 = lVar16 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000e063c);
        (*pcVar3)();
      }
      if ((long)(uVar9 + 0x3f >> 6) <= lVar16) break;
      uVar10 = ((ulong *)(lVar13 + 0x40))[lVar16];
    }
    _swift_release(lVar13);
    if (((long)puVar7 < 0) || (((ulong)puVar7 >> 0x3e & 1) != 0)) {
      puVar14 = puVar7;
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    else {
      puVar14 = *(undefined **)(puVar7 + 0x10);
    }
    if (puVar14 == (undefined *)0x0) {
      _swift_release(puVar7);
      puVar15 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      local_68 = puVar15;
      FUN_10006fae0(0,(ulong)puVar14 & ((long)puVar14 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)puVar14 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000e0700);
        (*pcVar3)();
      }
      puVar17 = (undefined *)0x0;
      local_c8 = lVar5;
      do {
        puVar15 = local_68;
        if (((ulong)puVar7 & 0xc000000000000001) == 0) {
          puVar11 = *(undefined **)(puVar7 + (long)puVar17 * 8 + 0x20);
          _swift_retain(puVar11);
        }
        else {
          puVar11 = puVar17;
          FUN_10016a1e4(puVar17,puVar7);
        }
        ppuVar8 = local_98;
        _swift_beginAccess(puVar11 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                                     ::finalURL,ppuVar8,0x20,0);
        puVar6 = puVar11;
        _swift_retain();
        __s10Foundation3URLV4pathSSvg();
        _swift_endAccess(local_98);
        _swift_release_n(puVar11,2);
        uVar10 = *(ulong *)(puVar15 + 0x10);
        local_68 = puVar15;
        if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar10) {
          FUN_10006fae0(1 < *(ulong *)(puVar15 + 0x18),uVar10 + 1,1);
        }
        puVar15 = local_68;
        puVar17 = puVar17 + 1;
        *(ulong *)(local_68 + 0x10) = uVar10 + 1;
        *(undefined **)(local_68 + uVar10 * 0x10 + 0x20) = puVar6;
        *(undefined ***)(local_68 + uVar10 * 0x10 + 0x28) = ppuVar8;
      } while (puVar14 != puVar17);
      _swift_release(puVar7);
      lVar5 = local_c8;
    }
    puVar7 = puVar15;
    FUN_100074e04();
    _swift_bridgeObjectRelease(puVar15);
    lVar12 = local_a0;
    lVar13 = _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile::
             finalURL;
    local_68 = puVar7;
    _swift_beginAccess(local_a0 +
                       _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                       ::finalURL,local_98,0,0);
    lVar16 = local_b0;
    puVar2 = local_b8;
    (**(code **)(local_b0 + 0x10))(local_b8,lVar12 + lVar13,lVar5);
    FUN_1000dc6e0(local_a8,puVar2,local_bc,&local_68);
    (**(code **)(lVar16 + 8))(puVar2,lVar5);
    _swift_bridgeObjectRelease(local_68);
  }
  return;
}

