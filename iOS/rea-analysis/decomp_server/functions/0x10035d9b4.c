// rea decompile_all
// name: FUN_10035d9b4
// address: 0x10035d9b4
// body: available
// range: 0x10035d9b4-0x10035da7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10035d9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar2 = _TtC10Filepicker16FilePickerConfig::environment;
  *(undefined8 *)(unaff_x20 + _TtC10Filepicker16FilePickerConfig::environment) = 0;
  lVar3 = _TtC10Filepicker16FilePickerConfig::accessType;
  *(undefined8 *)(unaff_x20 + _TtC10Filepicker16FilePickerConfig::accessType) = 0;
  *(undefined8 *)(unaff_x20 + _TtC10Filepicker16FilePickerConfig::maxRetryCount) = 1;
  *(undefined8 *)(unaff_x20 + _TtC10Filepicker16FilePickerConfig::retryTimeDelay) =
       0x3ff0000000000000;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC10Filepicker16FilePickerConfig::projectName);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_58,1,0);
  *(undefined8 *)(unaff_x20 + lVar2) = param_3;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_70,1,0);
  *(undefined8 *)(unaff_x20 + lVar3) = param_4;
  FUN_10035da7c();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff80,"init");
  return;
}

