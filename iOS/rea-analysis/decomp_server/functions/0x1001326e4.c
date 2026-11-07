// rea decompile_all
// name: FUN_1001326e4
// address: 0x1001326e4
// body: available
// range: 0x1001326e4-0x100132eef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001326e4(ulong param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  long lVar15;
  code *pcVar16;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar17;
  long unaff_x20;
  undefined8 uVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  undefined1 *puVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined1 auStack_170 [16];
  undefined4 auStack_160 [2];
  undefined8 uStack_158;
  long alStack_150 [2];
  undefined1 auStack_140 [8];
  long local_88 [3];
  undefined4 local_6c [3];
  
  puVar4 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar25 = auStack_140 + -extraout_x8;
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar24 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar24 + 0x40));
  lVar27 = (long)puVar25 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar23 = lVar27 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar26 = lVar23 - extraout_x12_00;
  uVar18 = *(undefined8 *)(unaff_x20 + 0x20);
  local_6c[0] = (int)param_1;
  _swift_retain(uVar18);
  FUN_1003e37e8(local_88,local_6c);
  _swift_release(uVar18);
  if (local_88[0] == 0) {
    lVar6 = local_88[0];
    FUN_10016db44();
    _swift_allocObject();
    plVar20 = (long *)&DAT_100a79f50;
    FUN_100004bb4(&DAT_100a79f50,&DAT_10080ea60);
    _swift_allocObject();
    FUN_1003e43e4();
    *(long **)(lVar6 + 0x10) = plVar20;
    lVar12 = *(long *)(param_2 + 0x10);
    if (lVar12 != 0) {
      FUN_100401b14();
      lVar19 = 0;
      uVar14 = (ulong)*(byte *)(lVar24 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar24 + 0x50) ^ 0xffffffffffffffff);
      lVar15 = *(long *)(lVar24 + 0x48);
      pcVar16 = *(code **)(lVar24 + 0x10);
      uVar22 = param_1;
      do {
        (*pcVar16)(lVar26,param_2 + uVar14 + lVar15 * lVar19,lVar5);
        (*(code *)PTR____chkstk_darwin_100995498)();
        lVar11 = lVar26 + -0x20;
        *(int *)(lVar26 + -0x10) = (int)uVar22;
        *(long *)(lVar26 + -8) = lVar26;
        pcVar7 = FUN_100135a88;
        FUN_1003fb45c(FUN_100135a88,lVar11,0xd0000000000000ac,0x800000010088fc60,0xd00000000000001b,
                      0x800000010088fe50,0x2e,7);
        __s10Foundation3URLV25deletingLastPathComponentACyF(lVar23);
        __s10Foundation3URLV17lastPathComponentSSvg();
        pcVar13 = *(code **)(lVar24 + 8);
        (*pcVar13)(lVar23,lVar5);
        __s10Foundation3URLV25deletingLastPathComponentACyF(lVar27);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(int *)(lVar26 + -0x20) = (int)uVar22;
        *(code **)(lVar26 + -0x18) = pcVar7;
        *(long *)(lVar26 + -0x10) = lVar11;
        *(long *)(lVar26 + -8) = lVar27;
        FUN_1003fb45c(FUN_100135a94,lVar26 + -0x30,0xd0000000000000ac,0x800000010088fc60,
                      0xd00000000000001b,0x800000010088fe50,0x31,7);
        lVar8 = lVar26;
        FUN_100219b0c(lVar26,0);
        lVar28 = *(long *)(lVar8 + 0x10);
        if (lVar28 == 0) {
          _swift_bridgeObjectRelease(lVar11);
          _swift_bridgeObjectRelease(lVar8);
        }
        else {
          lVar21 = lVar8 + uVar14;
          do {
            (*pcVar16)(lVar23,lVar21,lVar5);
            (*(code *)PTR____chkstk_darwin_100995498)();
            *(int *)(lVar26 + -0x10) = (int)uVar22;
            *(long *)(lVar26 + -8) = lVar23;
            FUN_1003fb45c(FUN_100135aa4,lVar26 + -0x20,0xd0000000000000ac,0x800000010088fc60,
                          0xd00000000000001b,0x800000010088fe50,0x34,7);
            lVar9 = 0;
            FUN_10016db6c();
            _swift_allocObject();
            *(undefined8 *)(lVar9 + 0x10) = 0;
            *(undefined8 *)(lVar9 + 0x18) = 0;
            lVar2 = _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::folderURl;
            pcVar17 = *(code **)(lVar24 + 0x38);
            (*pcVar17)(lVar9 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::folderURl,1,1,
                       lVar5);
            lVar3 = _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::url;
            (*pcVar17)(lVar9 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::url,1,1,lVar5);
            puVar1 = (undefined8 *)
                     (lVar9 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::file);
            *puVar1 = 0;
            puVar1[1] = 0xe000000000000000;
            *(undefined8 *)(lVar9 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::fileSize) =
                 0;
            *(undefined1 *)(lVar9 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::isDirectory)
                 = 0;
            *(undefined8 *)
             (lVar9 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::lastWriteTime) = 0;
            *(undefined1 *)(lVar9 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::result) = 0;
            *(undefined1 *)(lVar9 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::writeResult)
                 = 0;
            *(code **)(lVar9 + 0x10) = pcVar7;
            *(long *)(lVar9 + 0x18) = lVar11;
            (*pcVar16)(puVar25,lVar27,lVar5);
            (*pcVar17)(puVar25,0,1,lVar5);
            _swift_beginAccess(lVar9 + lVar2,local_88,0x21,0);
            _swift_bridgeObjectRetain(lVar11);
            FUN_100135ab0(puVar25,lVar9 + lVar2);
            _swift_endAccess(local_88);
            (*pcVar16)(puVar25,lVar23,lVar5);
            (*pcVar17)(puVar25,0,1,lVar5);
            _swift_beginAccess(lVar9 + lVar3,local_88,0x21,0);
            FUN_100135ab0(puVar25,lVar9 + lVar3);
            _swift_endAccess(local_88);
            plVar20 = *(long **)(lVar6 + 0x10);
            pcVar17 = *(code **)(*plVar20 + 0x88);
            local_88[0] = lVar9;
            _swift_retain(plVar20);
            (*pcVar17)(local_88);
            uVar22 = param_1 & 0xffffffff;
            _swift_release(lVar9);
            _swift_release(plVar20);
            (*pcVar13)(lVar23,lVar5);
            lVar21 = lVar21 + lVar15;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          _swift_bridgeObjectRelease(lVar11);
          _swift_bridgeObjectRelease(lVar8);
        }
        lVar19 = lVar19 + 1;
        (*pcVar13)(lVar27,lVar5);
        (*pcVar13)(lVar26,lVar5);
      } while (lVar19 != lVar12);
      plVar20 = *(long **)(lVar6 + 0x10);
      param_1 = uVar22;
    }
    pcVar16 = *(code **)(*plVar20 + 0xa8);
    plVar10 = plVar20;
    _swift_retain();
    (*pcVar16)();
    _swift_release(plVar20);
    if ((long)plVar10 < 1) {
      _swift_release(lVar6);
    }
    else {
      uVar18 = *(undefined8 *)(unaff_x20 + 0x20);
      local_6c[0] = (int)param_1;
      _swift_retain(uVar18);
      _swift_retain(lVar6);
      FUN_1003e3634(local_88,local_6c);
      _swift_release(uVar18);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(int *)(lVar26 + -0x10) = (int)param_1;
      FUN_1003fb45c(FUN_100135b00,lVar26 + -0x20,0xd0000000000000ac,0x800000010088fc60,
                    0xd00000000000001b,0x800000010088fe50,0x3f,7);
      FUN_100133770(param_1);
      _swift_release(lVar6);
    }
  }
  else {
    _swift_release();
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(int *)(lVar26 + -0x10) = (int)param_1;
    FUN_1003fb45c(FUN_100135b08,lVar26 + -0x20,0xd0000000000000ac,0x800000010088fc60,
                  0xd00000000000001b,0x800000010088fe50,0x28,7);
    FUN_100133770(param_1);
  }
  return;
}

