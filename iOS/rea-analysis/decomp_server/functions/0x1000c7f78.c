// rea decompile_all
// name: FUN_1000c7f78
// address: 0x1000c7f78
// body: available
// range: 0x1000c7f78-0x1000c80d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1000c7f78(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar1 = _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___rpcRequestHandler;
  lVar2 = *(long *)(unaff_x20 +
                   _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___rpcRequestHandler
                   );
  lVar7 = lVar2;
  if (lVar2 == 0) {
    FUN_100202800();
    _swift_allocObject();
    _swift_unknownObjectWeakInit(lVar2 + 0x10,0);
    *(undefined1 *)(lVar2 + 0x18) = 0;
    _swift_beginAccess(lVar2 + 0x10,auStack_68,1,0);
    _swift_unknownObjectWeakAssign(lVar2 + 0x10);
    uVar3 = 0;
    FUN_1002013d0();
    _swift_allocObject();
    uVar4 = 0;
    FUN_1002013f0();
    _swift_allocObject();
    puVar6 = &DAT_10099b6d8;
    puVar5 = puVar6;
    _swift_allocObject(&DAT_10099b6d8,0x18,7);
    _swift_unknownObjectWeakInit(puVar5 + 0x10);
    _swift_allocObject(&DAT_10099b6d8,0x18,7);
    _swift_unknownObjectWeakInit(puVar6 + 0x10);
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    *(undefined ***)(lVar2 + 0x28) = &PTR_PTR_1009a4f68;
    *(undefined8 *)(lVar2 + 0x30) = uVar4;
    *(undefined ***)(lVar2 + 0x38) = &PTR_PTR_1009a4f58;
    *(code **)(lVar2 + 0x40) = FUN_1000cc400;
    *(undefined **)(lVar2 + 0x48) = puVar5;
    *(code **)(lVar2 + 0x50) = FUN_1000cc408;
    *(undefined **)(lVar2 + 0x58) = puVar6;
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    _swift_retain(lVar2);
    _swift_release(uVar3);
    lVar7 = 0;
  }
  _swift_retain(lVar7);
  return lVar2;
}

