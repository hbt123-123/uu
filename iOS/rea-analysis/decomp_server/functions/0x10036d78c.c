// rea decompile_all
// name: _TtC10Filepicker26FilePickerTaskResponseBody::setUrl:
// address: 0x10036d78c
// body: available
// range: 0x10036d78c-0x10036d843 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC10Filepicker26FilePickerTaskResponseBody::setUrl_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ
            (auStack_60 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_3);
  lVar1 = url;
  _swift_beginAccess(param_1 + url,auStack_58,0x21,0);
  (**(code **)(lVar4 + 0x28))
            (param_1 + lVar1,auStack_60 + -(lVar3 + 0xfU & 0xfffffffffffffff0),lVar2);
  _swift_endAccess(auStack_58);
  return;
}

