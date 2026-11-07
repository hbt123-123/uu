// rea decompile_all
// name: FUN_100116058
// address: 0x100116058
// body: available
// range: 0x100116058-0x10011620b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100116058(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _TtC14UURemoteServer22ClipboardMobileManager::lastContent);
    uVar4 = *(undefined8 *)PTR__NSPasteboardTypeString_100995440;
    local_80 = uVar4;
    local_78 = param_2;
    uStack_70 = param_3;
    _swift_retain(uVar3);
    _swift_bridgeObjectRetain(param_3);
    FUN_1003be2ac(&local_78,&local_80);
    _swift_release(uVar3);
    lVar1 = _TtC14UURemoteServer22ClipboardMobileManager::pasteboard;
    _objc_msgSend(*(ID *)(param_1 + _TtC14UURemoteServer22ClipboardMobileManager::pasteboard),
                  "clearContents");
    IVar2 = *(ID *)(param_1 + lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
    IVar2 = _objc_msgSend(IVar2,"setString:forType:",param_2,uVar4);
    FUN_100401b14(0);
    if ((int)IVar2 == 0) {
      FUN_1003fb4ec(FUN_100116238,0,0xd0000000000000ac,0x800000010088c8a0,0x2874786554746573,
                    0xeb00000000293a5f,0x8e,0);
    }
    else {
      FUN_1003fb48c(FUN_10011620c,0,0xd0000000000000ac,0x800000010088c8a0,0x2874786554746573,
                    0xeb00000000293a5f,0x8c,0);
    }
  }
  return;
}

