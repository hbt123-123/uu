// rea decompile_all
// name: FUN_10035ca98
// address: 0x10035ca98
// body: available
// range: 0x10035ca98-0x10035cb67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10035ca98(class_t *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  class_t *pcVar4;
  objc_super local_70;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  FUN_10035da7c();
  pcVar4 = param_1;
  _objc_allocWithZone();
  lVar2 = _TtC10Filepicker16FilePickerConfig::environment;
  *(undefined8 *)((long)&pcVar4->isa + _TtC10Filepicker16FilePickerConfig::environment) = 0;
  lVar3 = _TtC10Filepicker16FilePickerConfig::accessType;
  *(undefined8 *)((long)&pcVar4->isa + _TtC10Filepicker16FilePickerConfig::accessType) = 0;
  *(undefined8 *)((long)&pcVar4->isa + _TtC10Filepicker16FilePickerConfig::maxRetryCount) = 1;
  *(undefined8 *)((long)&pcVar4->isa + _TtC10Filepicker16FilePickerConfig::retryTimeDelay) =
       0x3ff0000000000000;
  puVar1 = (undefined8 *)((long)&pcVar4->isa + _TtC10Filepicker16FilePickerConfig::projectName);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  _swift_beginAccess((long)&pcVar4->isa + lVar2,auStack_48,1,0);
  *(undefined8 *)((long)&pcVar4->isa + lVar2) = 0;
  _swift_beginAccess((long)&pcVar4->isa + lVar3,auStack_60,1,0);
  *(undefined8 *)((long)&pcVar4->isa + lVar3) = 0;
  local_70.receiver = (ID)pcVar4;
  local_70.super_class = param_1;
  DAT_100b36620 = _objc_msgSendSuper2(&local_70,"init");
  return;
}

