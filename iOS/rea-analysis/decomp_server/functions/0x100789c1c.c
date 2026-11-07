// rea decompile_all
// name: SentryBreadcrumbTracker::trackApplicationNotifications
// address: 0x100789c1c
// body: available
// range: 0x100789c1c-0x100789d5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_unsafeClaimAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryBreadcrumbTracker::trackApplicationNotifications(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  ID local_90;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  ID local_68;
  
  uVar4 = *(undefined8 *)PTR__NSApplicationDidBecomeActiveNotification_100995400;
  uVar2 = *(undefined8 *)PTR__NSApplicationWillResignActiveNotification_100995420;
  IVar3 = objc_stub::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  puVar1 = PTR___NSConcreteStackBlock_100995490;
  local_88 = PTR___NSConcreteStackBlock_100995490;
  local_80 = 0xc2000000;
  local_78 = FUN_100789d5c;
  puStack_70 = &DAT_1009e96a0;
  local_68 = param_1;
  objc_stub::FUN_1007e5060(IVar3,uVar2,0,0,&local_88);
  IVar3 = objc_stub::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  local_b0 = puVar1;
  local_a8 = 0xc2000000;
  local_a0 = FUN_100789d88;
  puStack_98 = &DAT_1009e96a0;
  local_90 = param_1;
  objc_stub::FUN_1007e5060(IVar3,uVar4,0,0,&local_b0);
  return;
}

