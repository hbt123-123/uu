// rea decompile_all
// name: FUN_1000c8ac4
// address: 0x1000c8ac4
// body: available
// range: 0x1000c8ac4-0x1000c8bcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1000c8ac4(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___pbRpcManager;
  lVar2 = *(long *)(unaff_x20 +
                   _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___pbRpcManager);
  lVar5 = lVar2;
  if (lVar2 == 0) {
    FUN_10017a4c8();
    _swift_allocObject();
    _swift_unknownObjectWeakInit(lVar2 + 0x10,0);
    puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_1000ccd84();
    puVar4 = &DAT_100a750f0;
    FUN_100004bb4(&DAT_100a750f0,&DAT_100808400);
    _swift_allocObject();
    FUN_1003e29fc(puVar3,puVar4);
    *(undefined **)(lVar2 + 0x18) = puVar3;
    *(undefined1 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x30) = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined8 *)(lVar2 + 0x40) = 0;
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(undefined8 *)(lVar2 + 0x48) = 0;
    *(undefined8 *)(lVar2 + 0x58) = 0;
    *(undefined8 *)(lVar2 + 0x60) = 0xf000000000000000;
    _swift_beginAccess(lVar2 + 0x10,auStack_48,1,0);
    _swift_unknownObjectWeakAssign(lVar2 + 0x10);
    uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    _swift_retain(lVar2);
    _swift_release(uVar6);
    lVar5 = 0;
  }
  _swift_retain(lVar5);
  return lVar2;
}

