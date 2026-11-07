// rea decompile_all
// name: FUN_1005d3a94
// address: 0x1005d3a94
// body: available
// range: 0x1005d3a94-0x1005d3b93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005d3a94(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  ID self;
  long lVar5;
  undefined *local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [8];
  
  puVar3 = auStack_48;
  _swift_weakInit(puVar3,*(undefined8 *)(param_1 + 0x10));
  FUN_1005d42c0();
  puVar4 = &DAT_1009d90b8;
  _swift_allocError(&DAT_1009d90b8,puVar3,0,0);
  *puVar3 = 0;
  _swift_beginAccess(auStack_48,auStack_60,0,0);
  puVar3 = auStack_48;
  _swift_weakLoadStrong();
  if (puVar3 != (undefined1 *)0x0) {
    lVar5 = *(long *)(puVar3 + 0x10);
    self = *(ID *)(lVar5 + 0x20);
    _swift_retain(lVar5);
    _objc_msgSend(self,"lock");
    pcVar1 = *(code **)(lVar5 + 0x10);
    uVar2 = *(undefined8 *)(lVar5 + 0x18);
    *(undefined8 *)(lVar5 + 0x10) = 0;
    *(undefined8 *)(lVar5 + 0x18) = 0;
    _objc_msgSend(*(ID *)(lVar5 + 0x20),"unlock");
    _swift_release(puVar3);
    _swift_release(lVar5);
    if (pcVar1 != (code *)0x0) {
      uStack_70 = 0;
      local_68 = 1;
      local_78 = puVar4;
      (*pcVar1)(&local_78);
      FUN_10007ed2c(pcVar1,uVar2);
    }
  }
  _swift_errorRelease(puVar4);
  _swift_weakDestroy(auStack_48);
  return;
}

