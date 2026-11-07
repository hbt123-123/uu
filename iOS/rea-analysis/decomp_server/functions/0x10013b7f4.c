// rea decompile_all
// name: FUN_10013b7f4
// address: 0x10013b7f4
// body: available
// range: 0x10013b7f4-0x10013ba2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_10013b7f4(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  int extraout_w12;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_d0 [16];
  long local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 auStack_90 [8];
  int local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined4 local_6c;
  long local_68;
  
  FUN_100401b14(0);
  FUN_1003fb45c(FUN_10013ba30,0,0xd0000000000000ad,0x8000000100890750,0xd000000000000031,
                0x80000001008916d0,0x80,7);
  uVar4 = *(undefined8 *)
           (unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTaskFile);
  local_6c = param_1;
  _swift_retain(uVar4);
  FUN_1003e37e8(&local_68,&local_6c);
  _swift_release(uVar4);
  if (local_68 != 0) {
    local_78 = param_4;
    _swift_release();
    lVar2 = _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData;
    uVar4 = *(undefined8 *)
             (unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData);
    local_6c = param_1;
    _swift_retain(uVar4);
    FUN_1003e37e8(&local_68,&local_6c);
    _swift_release(uVar4);
    lVar3 = local_68;
    if (local_68 != 0) {
      uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
      local_6c = param_1;
      _swift_retain(uVar4);
      FUN_1003e37e8(&local_68,&local_6c);
      _swift_release(uVar4);
      if ((local_68 != 0) &&
         (bVar1 = *(byte *)(local_68 + 0x30), _swift_release(), (bVar1 & 1) == 0)) {
        local_80 = auStack_90;
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_c0 = lVar3;
        local_a0 = local_78;
        local_b8 = param_1;
        local_b0 = param_2;
        uStack_a8 = param_3;
        local_88 = extraout_w12;
        FUN_1003fb45c(FUN_100145870,auStack_d0,0xd0000000000000ad,0x8000000100890750,
                      0xd000000000000031,0x80000001008916d0,0x84,7);
        if ((*(int *)(lVar3 + 0x2c) != 0) && (*(int *)(lVar3 + 0x2c) == local_88)) {
          *(undefined1 *)(lVar3 + 0x30) = 1;
          uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
          local_6c = param_1;
          _swift_retain(uVar4);
          _swift_retain(lVar3);
          FUN_1003e3634(&local_68,&local_6c);
          _swift_release(lVar3);
          _swift_release(uVar4);
          return 1;
        }
      }
      _swift_release(lVar3);
    }
  }
  return 0;
}

