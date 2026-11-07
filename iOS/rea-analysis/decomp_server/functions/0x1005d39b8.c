// rea decompile_all
// name: FUN_1005d39b8
// address: 0x1005d39b8
// body: available
// range: 0x1005d39b8-0x1005d3a93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005d39b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  ID self;
  long lVar4;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [8];
  
  _swift_weakInit(auStack_48,*(undefined8 *)(param_1 + 0x10));
  _swift_beginAccess(auStack_48,auStack_60,0,0);
  puVar3 = auStack_48;
  _swift_weakLoadStrong();
  if (puVar3 != (undefined1 *)0x0) {
    lVar4 = *(long *)(puVar3 + 0x10);
    self = *(ID *)(lVar4 + 0x20);
    _swift_retain(lVar4);
    _objc_msgSend(self,"lock");
    pcVar1 = *(code **)(lVar4 + 0x10);
    uVar2 = *(undefined8 *)(lVar4 + 0x18);
    *(undefined8 *)(lVar4 + 0x10) = 0;
    *(undefined8 *)(lVar4 + 0x18) = 0;
    _objc_msgSend(*(ID *)(lVar4 + 0x20),"unlock");
    _swift_release(puVar3);
    _swift_release(lVar4);
    if (pcVar1 != (code *)0x0) {
      local_68 = 0;
      local_78 = param_2;
      uStack_70 = param_3;
      (*pcVar1)(&local_78);
      FUN_10007ed2c(pcVar1,uVar2);
    }
  }
  _swift_weakDestroy(auStack_48);
  return;
}

