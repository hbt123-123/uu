// rea decompile_all
// name: FUN_1000dfc54
// address: 0x1000dfc54
// body: available
// range: 0x1000dfc54-0x1000dfd93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000dfc54(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_80 [16];
  undefined4 local_70;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer28FileTransferReceiveOperation::tasksByID,
                     auStack_58,0x21,0);
  lVar3 = param_1;
  FUN_1001de1f0();
  _swift_endAccess(auStack_58);
  if (lVar3 == 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_70 = (undefined4)param_1;
    FUN_1003fb45c(FUN_1000e3878,auStack_80,0xd0000000000000ae,0x8000000100886ab0,
                  &DAT_d000000000000013,0x8000000100887c60,0x3da,0);
  }
  else {
    uVar1 = *(undefined8 *)(lVar3 + 0x18);
    uVar2 = *(undefined8 *)(lVar3 + 0x20);
    _swift_beginAccess(unaff_x20 +
                       _TtC14UURemoteServer28FileTransferReceiveOperation::taskIDByUniqueID,
                       auStack_58,0x21,0);
    _swift_bridgeObjectRetain(uVar2);
    FUN_1001de11c(uVar1,uVar2);
    _swift_endAccess(auStack_58);
    _swift_bridgeObjectRelease(uVar2);
    _swift_release(lVar3);
  }
  return;
}

