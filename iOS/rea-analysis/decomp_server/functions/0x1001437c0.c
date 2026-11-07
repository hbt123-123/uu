// rea decompile_all
// name: FUN_1001437c0
// address: 0x1001437c0
// body: available
// range: 0x1001437c0-0x100143a77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001437c0(long param_1,undefined4 param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  code *pcVar9;
  undefined1 auStack_b0 [16];
  code *local_a0;
  long lStack_98;
  ulong local_90;
  code *local_80;
  long local_78;
  undefined4 local_70;
  undefined4 local_6c;
  ulong local_68;
  
  FUN_100401b14(0);
  FUN_1003fb45c(FUN_100144694,param_1,0xd0000000000000ad,0x8000000100890750,0xd000000000000029,
                0x8000000100890930,0x275,7);
  lVar1 = _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTaskFile;
  uVar5 = *(ulong *)(*(long *)(param_1 + 0x10) + 0x88);
  if (uVar5 != 0) {
    uVar6 = *(undefined8 *)
             (unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTaskFile);
    local_6c = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x14);
    _swift_retain(uVar6);
    _swift_retain(uVar5);
    FUN_1003e37e8(&local_68,&local_6c);
    _swift_release(uVar6);
    uVar4 = local_68;
    if (local_68 != 0) {
      local_78 = lVar1;
      plVar7 = *(long **)(local_68 + 0x10);
      pcVar9 = *(code **)(*plVar7 + 200);
      local_70 = param_2;
      _swift_retain(plVar7);
      pcVar2 = thunk_FUN_100145464;
      uVar3 = uVar5;
      (*pcVar9)();
      _swift_release(plVar7);
      if ((uVar3 & 1) == 0) {
        plVar7 = *(long **)(uVar4 + 0x10);
        pcVar9 = *(code **)(*plVar7 + 0x90);
        _swift_retain(plVar7);
        local_80 = pcVar2;
        (*pcVar9)(&local_68,pcVar2);
        _swift_release(plVar7);
        if (local_68 != 0) {
          uVar8 = ((ulong *)(local_68 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::file))
                  [1];
          uVar3 = *(ulong *)(local_68 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::file) &
                  0xffffffffffff;
          if ((uVar8 & 0x2000000000000000) != 0) {
            uVar3 = uVar8 >> 0x38 & 0xf;
          }
          if (uVar3 == 0) {
            _swift_release();
          }
          else {
            *(char *)(local_68 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::writeResult) =
                 (char)local_70;
            uVar3 = local_68;
            (*(code *)PTR____chkstk_darwin_100995498)();
            pcVar2 = local_80;
            local_a0 = local_80;
            lStack_98 = param_1;
            local_90 = uVar5;
            FUN_1003fb45c(FUN_10014469c,auStack_b0,0xd0000000000000ad,0x8000000100890750,
                          0xd000000000000029,0x8000000100890930,0x27c,7);
            plVar7 = *(long **)(uVar4 + 0x10);
            pcVar9 = *(code **)(*plVar7 + 0x98);
            _swift_retain(plVar7);
            _swift_retain(uVar3);
            (*pcVar9)(&local_68,pcVar2);
            _swift_release(plVar7);
            uVar8 = *(ulong *)(unaff_x20 + local_78);
            local_6c = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x14);
            _swift_retain(uVar8);
            _swift_retain(uVar4);
            FUN_1003e3634(&local_68,&local_6c);
            _swift_release(uVar4);
            _swift_release(uVar3);
            uVar4 = uVar8;
          }
        }
        _swift_release(uVar4);
      }
      else {
        _swift_release(uVar5);
        uVar5 = uVar4;
      }
    }
    _swift_release(uVar5);
  }
  return;
}

