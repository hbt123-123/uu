// rea decompile_all
// name: FUN_1001d581c
// address: 0x1001d581c
// body: available
// range: 0x1001d581c-0x1001d5a77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001d581c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_a0 [16];
  undefined4 local_90;
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [24];
  
  lVar6 = _TtC14UURemoteServer15TerminalManager::sessions;
  puVar4 = auStack_78;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer15TerminalManager::sessions,puVar4,0x20,0);
  lVar6 = *(long *)(unaff_x20 + lVar6);
  uVar5 = (undefined4)param_1;
  local_90 = uVar5;
  if ((*(long *)(lVar6 + 0x10) == 0) ||
     (lVar1 = param_1, thunk_FUN_1001a2c34(), ((ulong)puVar4 & 1) == 0)) {
    _swift_endAccess(auStack_78);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    FUN_1003fb48c(FUN_1001e4764,auStack_a0,0xd000000000000095,0x8000000100889250,0xd000000000000011,
                  0x800000010089f720,0x259,0);
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + lVar1 * 8);
    _swift_endAccess(auStack_78);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    _swift_retain(uVar7);
    FUN_1003fb48c(FUN_1001e476c,auStack_a0,0xd000000000000095,0x8000000100889250,0xd000000000000011,
                  0x800000010089f720,0x25c,0);
    _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer15TerminalManager::closingSessionIds,
                       auStack_78,0x21,0);
    FUN_10006d93c(auStack_7c,param_1);
    _swift_endAccess(auStack_78);
    puVar2 = &DAT_1009a3ab0;
    _swift_allocObject(&DAT_1009a3ab0,0x18,7);
    _swift_unknownObjectWeakInit(puVar2 + 0x10);
    puVar3 = &DAT_1009a3f60;
    _swift_allocObject(&DAT_1009a3f60,0x1c,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined4 *)(puVar3 + 0x18) = uVar5;
    FUN_100004b70(0);
    _swift_retain(puVar2);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    FUN_1001e843c();
    _swift_release(uVar7);
    _swift_release(puVar2);
    _swift_release(puVar3);
  }
  return;
}

