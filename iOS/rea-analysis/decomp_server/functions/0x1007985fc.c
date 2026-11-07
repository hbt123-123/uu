// rea decompile_all
// name: SentryMetricProfiler::registerSampler
// address: 0x1007985fc
// body: available
// range: 0x1007985fc-0x10079872b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryMetricProfiler::registerSampler(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
  IVar1 = objc_stub::FUN_1007e8820(IVar1);
  puVar2 = PTR___dispatch_queue_attr_concurrent_1009954b8;
  _dispatch_queue_attr_make_with_qos_class(PTR___dispatch_queue_attr_concurrent_1009954b8,0x11,0);
  local_70 = PTR___NSConcreteStackBlock_100995490;
  local_68 = 0xc2000000;
  local_60 = FUN_100798770;
  puStack_58 = &DAT_1009e98f8;
  _objc_copyWeak(auStack_50,auStack_48);
  IVar1 = objc_stub::FUN_1007f5b60
                    (IVar1,100000000,50000000,"io.sentry.metric-profiler",puVar2,&local_70);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(ID *)(param_1 + 8) = IVar1;
  _objc_destroyWeak(uVar3,auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}

