// rea decompile_all
// name: SentryDispatchQueueWrapper::dispatchAfter:block:
// address: 0x1007398ac
// body: available
// range: 0x1007398ac-0x10073996b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryDispatchQueueWrapper::dispatchAfter_block_
               (ID param_1,SEL param_2,double param_3,ID param_4,undefined4 param_5)

{
  dispatch_time_t dVar1;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  
  dVar1 = _dispatch_time(0,(long)(param_3 * 1000000000.0));
  local_68 = PTR___NSConcreteStackBlock_100995490;
  local_60 = 0xc2000000;
  local_58 = FUN_10073996c;
  puStack_50 = &DAT_1009e8698;
  local_48 = param_4;
  _dispatch_after(dVar1,*(undefined8 *)(param_1 + 8),&local_68);
  return;
}

