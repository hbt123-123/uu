// rea decompile_all
// name: FUN_10013e3f8
// address: 0x10013e3f8
// body: available
// range: 0x10013e3f8-0x10013e6b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10013e3f8(long param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined1 uVar5;
  ulong uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  code *pcVar10;
  undefined1 auStack_c0 [16];
  code *local_b0;
  long lStack_a8;
  ulong local_a0;
  undefined1 auStack_90 [8];
  undefined1 *local_88;
  code *local_80;
  long local_78;
  undefined4 local_6c;
  ulong local_68;
  
  FUN_100401b14(0);
  FUN_1003fb45c(FUN_10014545c,param_1,0xd0000000000000ad,0x8000000100890750,0xd000000000000020,
                0x80000001008910b0,0x10c,7);
  lVar2 = _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTaskFile;
  uVar6 = *(ulong *)(*(long *)(param_1 + 0x10) + 0x88);
  if (uVar6 != 0) {
    uVar7 = *(undefined8 *)
             (unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTaskFile);
    local_6c = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x14);
    _swift_retain(uVar7);
    _swift_retain(uVar6);
    FUN_1003e37e8(&local_68,&local_6c);
    _swift_release(uVar7);
    uVar4 = local_68;
    if (local_68 != 0) {
      local_78 = lVar2;
      plVar8 = *(long **)(local_68 + 0x10);
      pcVar10 = *(code **)(*plVar8 + 200);
      _swift_retain(plVar8);
      pcVar3 = FUN_100145464;
      uVar9 = uVar6;
      (*pcVar10)();
      _swift_release(plVar8);
      if ((uVar9 & 1) == 0) {
        plVar8 = *(long **)(uVar4 + 0x10);
        pcVar10 = *(code **)(*plVar8 + 0x90);
        _swift_retain(plVar8);
        local_80 = pcVar3;
        (*pcVar10)(&local_68,pcVar3);
        _swift_release(plVar8);
        if (local_68 != 0) {
          uVar1 = ((ulong *)(local_68 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::file))
                  [1];
          uVar9 = *(ulong *)(local_68 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::file) &
                  0xffffffffffff;
          if ((uVar1 & 0x2000000000000000) != 0) {
            uVar9 = uVar1 >> 0x38 & 0xf;
          }
          if (uVar9 == 0) {
            _swift_release(local_68);
          }
          else {
            uVar5 = 1;
            if (*(char *)(param_1 + 0x18) != '\0') {
              uVar5 = 2;
            }
            *(undefined1 *)(local_68 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::result) =
                 uVar5;
            local_88 = auStack_90;
            (*(code *)PTR____chkstk_darwin_100995498)();
            pcVar3 = local_80;
            local_b0 = local_80;
            lStack_a8 = param_1;
            local_a0 = uVar6;
            FUN_1003fb48c(FUN_100145480,auStack_c0,0xd0000000000000ad,0x8000000100890750,
                          0xd000000000000020,0x80000001008910b0,0x113,7);
            plVar8 = *(long **)(uVar4 + 0x10);
            pcVar10 = *(code **)(*plVar8 + 0x98);
            _swift_retain(plVar8);
            _swift_retain(local_68);
            (*pcVar10)(&local_68,pcVar3);
            _swift_release(plVar8);
            uVar9 = *(ulong *)(unaff_x20 + local_78);
            local_6c = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x14);
            _swift_retain(uVar9);
            _swift_retain(uVar4);
            FUN_1003e3634(&local_68,&local_6c);
            _swift_release(uVar4);
            _swift_release(local_68);
            uVar4 = uVar9;
          }
        }
        _swift_release(uVar4);
      }
      else {
        _swift_release(uVar6);
        uVar6 = uVar4;
      }
    }
    _swift_release(uVar6);
  }
  return;
}

