// rea decompile_all
// name: _TtC10Filepicker26FilePickerTaskResponseBody::setVideoCoverURL:
// address: 0x10036dd8c
// body: available
// range: 0x10036dd8c-0x10036de77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC10Filepicker26FilePickerTaskResponseBody::setVideoCoverURL_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  puVar1 = &DAT_100a888b8;
  FUN_100004bb4(&DAT_100a888b8,&DAT_10081cb00);
  puVar3 = auStack_50 + -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_3 == 0) {
    lVar2 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar3,param_3);
    lVar2 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar3,param_3 == 0,1);
  lVar2 = videoCoverURL;
  _swift_beginAccess(param_1 + videoCoverURL,auStack_48,0x21,0);
  FUN_10036ded4(puVar3,param_1 + lVar2);
  _swift_endAccess(auStack_48);
  return;
}

