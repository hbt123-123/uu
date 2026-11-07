// rea decompile_all
// name: FUN_1000c8610
// address: 0x1000c8610
// body: available
// range: 0x1000c8610-0x1000c870f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1000c8610(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___terminalHandler;
  lVar2 = *(long *)(unaff_x20 +
                   _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___terminalHandler);
  lVar4 = lVar2;
  if (lVar2 == 0) {
    FUN_1001ca51c();
    _swift_allocObject();
    _swift_unknownObjectWeakInit(lVar2 + 0x10,0);
    _swift_beginAccess(lVar2 + 0x10,auStack_48,1,0);
    _swift_unknownObjectWeakAssign(lVar2 + 0x10);
    uVar3 = 0;
    FUN_100401b14(0);
    FUN_1003fb48c(uVar3,FUN_1001c60b8,0,0xd000000000000095,0x8000000100885070,0x6665722874696e69,
                  0xea0000000000293a,0x13,0);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    _swift_retain(lVar2);
    _swift_release(uVar3);
    lVar4 = 0;
  }
  _swift_retain(lVar4);
  return lVar2;
}

