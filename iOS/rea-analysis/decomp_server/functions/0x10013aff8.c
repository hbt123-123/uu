// rea decompile_all
// name: FUN_10013aff8
// address: 0x10013aff8
// body: available
// range: 0x10013aff8-0x10013b47b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10013aff8(undefined4 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 ****ppppuVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  undefined8 *****pppppuVar7;
  undefined8 *****pppppuVar8;
  long lVar9;
  undefined8 *****pppppuVar10;
  undefined8 uVar11;
  undefined8 **ppuVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 ****ppppuVar14;
  undefined8 *puVar15;
  code *pcVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 *****pppppuVar20;
  undefined1 auStack_180 [16];
  undefined1 local_170 [8];
  long *plStack_168;
  undefined8 ****local_160;
  undefined8 ****ppppuStack_158;
  long local_148;
  long local_128;
  undefined4 local_e4;
  undefined8 ****local_e0 [7];
  long local_a8;
  undefined8 ****local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  FUN_100401b14();
  FUN_1003fb45c(FUN_10013b47c,0,0xd0000000000000ad,0x8000000100890750,0xd000000000000025,
                0x80000001008917e0,0x69,7);
  uVar13 = *(undefined8 *)
            (unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTaskFile);
  local_e0[0]._0_4_ = param_1;
  _swift_retain(uVar13);
  FUN_1003e37e8(&local_a0,local_e0);
  _swift_release(uVar13);
  pppppuVar10 = (undefined8 *****)local_a0;
  lVar17 = _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData;
  if ((undefined8 *****)local_a0 != (undefined8 *****)0x0) {
    uVar13 = *(undefined8 *)
              (unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData);
    local_e0[0] = (undefined8 ****)CONCAT44(local_e0[0]._4_4_,param_1);
    _swift_retain(uVar13);
    FUN_1003e37e8(&local_a0,local_e0);
    _swift_release(uVar13);
    ppppuVar3 = local_a0;
    if ((undefined8 *****)local_a0 != (undefined8 *****)0x0) {
      local_148 = lVar17;
      local_a8 = 0;
      lVar17 = *(long *)(param_2 + 0x10);
      if (lVar17 != 0) {
        puVar15 = (undefined8 *)(param_2 + 0x20);
        pppppuVar7 = (undefined8 *****)0x0;
        FUN_10016db6c();
        local_128 = 0;
        do {
          uVar18 = puVar15[3];
          local_90 = puVar15[2];
          uStack_78 = puVar15[5];
          lVar19 = puVar15[4];
          uVar13 = puVar15[1];
          pppppuVar20 = (undefined8 *****)*puVar15;
          local_70 = puVar15[6];
          bVar4 = (byte)local_90;
          pppppuVar8 = pppppuVar7;
          local_a0 = pppppuVar20;
          uStack_98 = uVar13;
          uStack_88 = uVar18;
          lStack_80 = lVar19;
          _swift_allocObject(pppppuVar7,*(undefined4 *)(pppppuVar7 + 6),
                             *(undefined2 *)((long)pppppuVar7 + 0x34));
          pppppuVar8[2] = (undefined8 ****)0x0;
          pppppuVar8[3] = (undefined8 ****)0x0;
          lVar5 = _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::folderURl;
          lVar9 = 0;
          __s10Foundation3URLVMa();
          pcVar16 = *(code **)(*(long *)(lVar9 + -8) + 0x38);
          (*pcVar16)((long)pppppuVar8 + lVar5,1,1,lVar9);
          (*pcVar16)((long)pppppuVar8 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::url,1,1,
                     lVar9);
          puVar1 = (undefined8 *)
                   ((long)pppppuVar8 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::file);
          *puVar1 = 0;
          puVar1[1] = 0xe000000000000000;
          lVar5 = _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::fileSize;
          *(undefined8 *)
           ((long)pppppuVar8 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::fileSize) = 0;
          lVar9 = _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::isDirectory;
          *(undefined1 *)
           ((long)pppppuVar8 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::isDirectory) = 0;
          lVar2 = _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::lastWriteTime;
          *(undefined8 *)
           ((long)pppppuVar8 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::lastWriteTime) =
               0;
          *(undefined1 *)
           ((long)pppppuVar8 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::result) = 0;
          *(undefined1 *)
           ((long)pppppuVar8 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::writeResult) = 0;
          FUN_100145880(&local_a0,local_e0);
          FUN_100218dd8();
          uVar11 = puVar1[1];
          *puVar1 = pppppuVar20;
          puVar1[1] = uVar13;
          _swift_bridgeObjectRelease(uVar11);
          *(long *)((long)pppppuVar8 + lVar5) = lVar19;
          *(byte *)((long)pppppuVar8 + lVar9) = bVar4 >> 4 & 1;
          *(undefined8 *)((long)pppppuVar8 + lVar2) = uVar18;
          ppppuVar14 = pppppuVar10[2];
          ppuVar12 = (*ppppuVar14)[0x11];
          local_e0[0] = pppppuVar8;
          _swift_retain(ppppuVar14);
          (*(code *)ppuVar12)(local_e0);
          _swift_release(ppppuVar14);
          lVar5 = local_a8;
          if ((*(byte *)((long)pppppuVar8 + lVar9) & 1) == 0) {
            if (lVar19 < 0) {
                    /* WARNING: Does not return */
              pcVar16 = (code *)SoftwareBreakpoint(1,0x10013b478);
              (*pcVar16)();
            }
            bVar6 = SCARRY8(local_128,lVar19);
            local_128 = local_128 + lVar19;
            lVar5 = local_128;
            if (bVar6) {
                    /* WARNING: Does not return */
              pcVar16 = (code *)SoftwareBreakpoint(1,0x10013b364);
              (*pcVar16)();
            }
          }
          local_a8 = lVar5;
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_160 = &local_a0;
          ppppuStack_158 = pppppuVar8;
          FUN_1003fb45c(FUN_1001458bc,local_170,0xd0000000000000ad,0x8000000100890750,
                        0xd000000000000025,0x80000001008917e0,0x77,7);
          _swift_release(pppppuVar8);
          FUN_1001458c4(&local_a0);
          puVar15 = puVar15 + 7;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      (*(code *)PTR____chkstk_darwin_100995498)();
      plStack_168 = &local_a8;
      local_160 = ppppuVar3;
      FUN_1003fb45c(FUN_1001458f8,auStack_180,0xd0000000000000ad,0x8000000100890750,
                    0xd000000000000025,0x80000001008917e0,0x79,7);
      if (SCARRY8(*(long *)((long)ppppuVar3 +
                           _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::totalDataCount),
                  local_a8)) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x10013b47c);
        (*pcVar16)();
      }
      *(long *)((long)ppppuVar3 +
               _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::totalDataCount) =
           *(long *)((long)ppppuVar3 +
                    _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::totalDataCount) +
           local_a8;
      pppppuVar7 = *(undefined8 ******)(unaff_x20 + local_148);
      local_e0[0] = ppppuVar3;
      local_e4 = param_1;
      _swift_retain(pppppuVar7);
      _swift_retain(ppppuVar3);
      FUN_1003e3634(local_e0,&local_e4);
      _swift_release(pppppuVar10);
      _swift_release(ppppuVar3);
      pppppuVar10 = pppppuVar7;
    }
    _swift_release(pppppuVar10);
  }
  return;
}

