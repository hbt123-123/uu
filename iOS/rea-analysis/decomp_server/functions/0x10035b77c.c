// rea decompile_all
// name: FUN_10035b77c
// address: 0x10035b77c
// body: available
// range: 0x10035b77c-0x10035b8f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10035b77c(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar4 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar4 = param_2 >> 0x38 & 0xf;
  }
  if (uVar4 == 0) {
    FUN_10035bd44();
    _swift_allocError(&DAT_1009b4c30,param_1,0,0);
    _swift_willThrow();
  }
  else {
    if (DAT_100a88478 != -1) {
      _swift_once(&DAT_100a88478,FUN_10035ca98);
    }
    _swift_beginAccess(&DAT_100b36620,auStack_78,0,0);
    puVar1 = (ulong *)(DAT_100b36620 + _TtC10Filepicker16FilePickerConfig::projectName);
    _swift_beginAccess(puVar1,auStack_90,1,0);
    uVar4 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRelease(uVar4);
    lVar3 = DAT_100b36620;
    lVar2 = _TtC10Filepicker16FilePickerConfig::environment;
    _swift_beginAccess(DAT_100b36620 + _TtC10Filepicker16FilePickerConfig::environment,auStack_a8,1,
                       0);
    *(undefined8 *)(lVar3 + lVar2) = param_3;
    lVar2 = _TtC10Filepicker16FilePickerConfig::accessType;
    _swift_beginAccess(lVar3 + _TtC10Filepicker16FilePickerConfig::accessType,auStack_c0,1,0);
    *(undefined8 *)(lVar3 + lVar2) = param_4;
  }
  return;
}

