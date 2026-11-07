// rea decompile_all
// name: SentryTracer::startDeadlineTimeout
// address: 0x10076db28
// body: available
// range: 0x10076db28-0x10076dc3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryTracer::startDeadlineTimeout(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  long lVar4;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  IVar3 = *(ID *)(param_1 + (long)_dispatchQueue);
  local_70 = PTR___NSConcreteStackBlock_100995490;
  local_68 = 0xc2000000;
  local_60 = FUN_10076dc6c;
  puStack_58 = &DAT_1009e91f0;
  _objc_copyWeak(auStack_50,auStack_48);
  IVar3 = objc_stub::FUN_1007e7660(IVar3,&local_70);
  uVar1 = *(undefined8 *)(param_1 + (long)_dispatchTimeoutLock);
  _objc_sync_enter();
  lVar4 = (long)_deadlineTimeoutBlock;
  objc_stub::FUN_1007e88c0(param_1,0x403e000000000000,*(undefined8 *)(param_1 + lVar4),IVar3);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(ID *)(param_1 + lVar4) = IVar3;
  _objc_sync_exit(uVar2,uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}

