// rea decompile_all
// name: FUN_1000c7b64
// address: 0x1000c7b64
// body: available
// range: 0x1000c7b64-0x1000c7c4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1000c7b64(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___appDataHandler;
  lVar2 = *(long *)(unaff_x20 +
                   _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___appDataHandler);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_1001125d0();
    _swift_allocObject();
    _swift_unknownObjectWeakInit(lVar2 + 0x10,0);
    *(undefined8 *)(lVar2 + 0x40) = 0;
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined8 *)(lVar2 + 0x30) = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(undefined2 *)(lVar2 + 0x48) = 0x100;
    *(undefined8 *)(lVar2 + 0x68) = 0;
    *(undefined2 *)(lVar2 + 0x70) = 0x100;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(undefined8 *)(lVar2 + 0x58) = 0;
    *(undefined1 *)(lVar2 + 0x60) = 0;
    *(undefined8 *)(lVar2 + 0x78) = 0;
    *(undefined2 *)(lVar2 + 0x80) = 0x100;
    *(undefined4 *)(lVar2 + 0x88) = 0;
    *(undefined1 *)(lVar2 + 0x8c) = 1;
    *(code **)(lVar2 + 0x90) = thunk_FUN_1000f62a0;
    *(undefined8 *)(lVar2 + 0x98) = 0;
    _swift_beginAccess(lVar2 + 0x10,auStack_48,1,0);
    _swift_unknownObjectWeakAssign(lVar2 + 0x10);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    _swift_retain(lVar2);
    _swift_release(uVar4);
    lVar3 = 0;
  }
  _swift_retain(lVar3);
  return lVar2;
}

