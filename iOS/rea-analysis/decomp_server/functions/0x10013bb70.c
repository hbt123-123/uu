// rea decompile_all
// name: FUN_10013bb70
// address: 0x10013bb70
// body: available
// range: 0x10013bb70-0x10013be8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10013bb70(undefined4 *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  long *plVar9;
  code *pcVar10;
  undefined1 auStack_c0 [16];
  undefined4 *local_b0;
  long lStack_a8;
  ulong local_a0;
  undefined1 auStack_90 [8];
  ulong local_88;
  undefined1 *local_80;
  long local_78;
  undefined4 local_6c;
  long local_68;
  
  FUN_100401b14(0);
  FUN_1003fb45c(FUN_10013be90,0,0xd0000000000000ad,0x8000000100890750,&DAT_d000000000000033,
                0x80000001008913c0,0x8f,7);
  uVar8 = *(undefined8 *)
           (unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTaskFile);
  uVar2 = *param_1;
  local_6c = uVar2;
  _swift_retain(uVar8);
  FUN_1003e37e8(&local_68,&local_6c);
  _swift_release(uVar8);
  lVar7 = local_68;
  if (local_68 != 0) {
    plVar9 = *(long **)(local_68 + 0x10);
    pcVar10 = *(code **)(*plVar9 + 0xb8);
    plVar6 = plVar9;
    _swift_retain();
    (*pcVar10)();
    _swift_release(plVar9);
    lVar4 = _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData;
    if (((ulong)plVar6 & 1) == 0) {
      uVar8 = *(undefined8 *)
               (unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData);
      local_6c = uVar2;
      _swift_retain(uVar8);
      FUN_1003e37e8(&local_68,&local_6c);
      _swift_release(uVar8);
      lVar5 = local_68;
      if (local_68 != 0) {
        uVar8 = *(undefined8 *)(unaff_x20 + lVar4);
        local_6c = uVar2;
        _swift_retain(uVar8);
        FUN_1003e37e8(&local_68,&local_6c);
        _swift_release(uVar8);
        if (local_68 == 0) {
          _swift_release(lVar5);
        }
        else {
          bVar3 = *(byte *)(local_68 + 0x30);
          _swift_release();
          if ((bVar3 & 1) == 0) {
            local_78 = lVar5;
            plVar9 = *(long **)(lVar7 + 0x10);
            pcVar10 = *(code **)(*plVar9 + 0xa8);
            plVar6 = plVar9;
            _swift_retain();
            (*pcVar10)();
            _swift_release(plVar9);
            local_88 = (long)plVar6 * 0x98ead65b7a32847 + 0x57619f0fb38a94U >> 2 |
                       (long)plVar6 * 0x98ead65b7a32847 << 0x3e;
            plVar9 = *(long **)(lVar7 + 0x10);
            pcVar10 = *(code **)(*plVar9 + 0xa8);
            plVar6 = plVar9;
            _swift_retain();
            (*pcVar10)();
            _swift_release(plVar9);
            uVar1 = (long)plVar6 / 0x5dc;
            if (0x2bb0cf87d9c54a < local_88) {
              uVar1 = uVar1 + 1;
            }
            local_80 = auStack_90;
            (*(code *)PTR____chkstk_darwin_100995498)();
            lStack_a8 = lVar7;
            local_b0 = param_1;
            local_a0 = uVar1;
            FUN_1003fb45c(FUN_100145780,auStack_c0,0xd0000000000000ad,0x8000000100890750,
                          &DAT_d000000000000033,0x80000001008913c0,0x94,7);
            lVar5 = local_78;
            if (uVar1 == (uint)param_1[1]) {
              *(undefined1 *)(local_78 + 0x30) = 1;
              uVar8 = *(undefined8 *)(unaff_x20 + lVar4);
              local_68 = local_78;
              local_6c = uVar2;
              _swift_retain(uVar8);
              _swift_retain(lVar5);
              FUN_1003e3634(&local_68,&local_6c);
              _swift_release(lVar7);
              _swift_release(lVar5);
              _swift_release(uVar8);
              return 1;
            }
            _swift_release(lVar7);
            lVar7 = local_78;
          }
          else {
            _swift_release(lVar7);
            lVar7 = lVar5;
          }
        }
      }
    }
    _swift_release(lVar7);
  }
  return 0;
}

