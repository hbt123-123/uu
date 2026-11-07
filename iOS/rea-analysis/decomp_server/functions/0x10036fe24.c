// rea decompile_all
// name: FUN_10036fe24
// address: 0x10036fe24
// body: available
// range: 0x10036fe24-0x10036ff9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10036fe24(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  class_t *pcVar7;
  class_t *pcVar8;
  ID IVar9;
  ID IVar10;
  objc_super local_90;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  IVar4 = NSURLSessionConfiguration::defaultSessionConfiguration
                    ((ID)&_OBJC_CLASS___NSURLSessionConfiguration,"defaultSessionConfiguration");
  IVar5 = 0;
  FUN_100361a80();
  _objc_allocWithZone();
  IVar6 = _objc_msgSend(IVar5,"init");
  pcVar7 = (class_t *)0x0;
  FUN_10035da7c();
  pcVar8 = pcVar7;
  _objc_allocWithZone();
  lVar2 = _TtC10Filepicker16FilePickerConfig::environment;
  *(undefined8 *)((long)&pcVar8->isa + _TtC10Filepicker16FilePickerConfig::environment) = 0;
  lVar3 = _TtC10Filepicker16FilePickerConfig::accessType;
  *(undefined8 *)((long)&pcVar8->isa + _TtC10Filepicker16FilePickerConfig::accessType) = 0;
  *(undefined8 *)((long)&pcVar8->isa + _TtC10Filepicker16FilePickerConfig::maxRetryCount) = 1;
  *(undefined8 *)((long)&pcVar8->isa + _TtC10Filepicker16FilePickerConfig::retryTimeDelay) =
       0x3ff0000000000000;
  puVar1 = (undefined8 *)((long)&pcVar8->isa + _TtC10Filepicker16FilePickerConfig::projectName);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  _swift_beginAccess((long)&pcVar8->isa + lVar2,auStack_68,1,0);
  *(undefined8 *)((long)&pcVar8->isa + lVar2) = 0;
  _swift_beginAccess((long)&pcVar8->isa + lVar3,auStack_80,1,0);
  *(undefined8 *)((long)&pcVar8->isa + lVar3) = 0;
  local_90.receiver = (ID)pcVar8;
  local_90.super_class = pcVar7;
  IVar9 = _objc_msgSendSuper2(&local_90,"init");
  IVar10 = NSOperationQueue::mainQueue((ID)&_OBJC_CLASS___NSOperationQueue,"mainQueue");
  IVar5 = IVar10;
  FUN_100372bc8();
  _objc_allocWithZone();
  FUN_1003708e8(IVar6,IVar9,IVar4,IVar10,IVar5);
  return;
}

