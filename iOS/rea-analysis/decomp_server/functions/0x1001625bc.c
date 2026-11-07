// rea decompile_all
// name: FUN_1001625bc
// address: 0x1001625bc
// body: available
// range: 0x1001625bc-0x1001626ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1001625bc(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined *puVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  puVar3 = &local_a0;
  FUN_10015659c(0x8ce69dafe89abce4,0xac000000b7b5e882);
  lVar5 = _TtC14UURemoteServer18ClipboardPCManager::dropTasks;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::dropTasks,auStack_78,0,0)
  ;
  lVar5 = *(long *)(unaff_x20 + lVar5);
  puVar4 = *(undefined **)(lVar5 + 0x10);
  if (puVar4 == (undefined *)0x0) {
    lVar5 = *(long *)(PTR___swiftEmptyArrayStorage_100995ea0 + 0x10);
    puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    puVar2 = puVar4;
    FUN_10006d580(puVar4,0);
    thunk_FUN_100074010(&local_a0,puVar2 + 0x20,puVar4,lVar5);
    _swift_bridgeObjectRetain(lVar5);
    FUN_10003f638(local_a0,uStack_98,local_90,uStack_88,local_80);
    if (puVar3 != (undefined8 *)puVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100162700);
      (*pcVar1)();
    }
    lVar5 = *(long *)(puVar2 + 0x10);
  }
  if (lVar5 != 0) {
    puVar6 = (undefined4 *)(puVar2 + 0x20);
    do {
      FUN_100161224(*puVar6);
      lVar5 = lVar5 + -1;
      puVar6 = puVar6 + 1;
    } while (lVar5 != 0);
  }
  _swift_release(puVar2);
  lVar5 = _TtC14UURemoteServer18ClipboardPCManager::timer;
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::timer),"invalidate");
  *(undefined8 *)(unaff_x20 + lVar5) = 0;
  return 0;
}

