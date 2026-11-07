// rea decompile_all
// name: SentrySystemWrapper::memoryFootprintBytes:
// address: 0x100762268
// body: available
// range: 0x100762268-0x100762313 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

unsigned_long_long SentrySystemWrapper::memoryFootprintBytes_(ID param_1,SEL param_2,ID *param_3)

{
  unsigned_long_long *puVar1;
  kern_return_t kVar2;
  ID IVar3;
  unsigned_long_long uVar4;
  mach_msg_type_number_t local_19c;
  integer_t aiStack_198 [4];
  unsigned_long_long auStack_188 [16];
  unsigned_long_long local_108 [27];
  
  local_19c = 0x59;
  kVar2 = _task_info(*(task_name_t *)PTR__mach_task_self__1009954c8,0x16,aiStack_198,&local_19c);
  if (kVar2 == 0) {
    puVar1 = local_108;
    if (local_19c < 0x26) {
      puVar1 = auStack_188;
    }
    uVar4 = *puVar1;
  }
  else if (param_3 == (ID *)0x0) {
    uVar4 = 0;
  }
  else {
    IVar3 = 0x6d;
    FUN_100756a90(0x6d,&cf_task_inforeportedanerror_,kVar2);
    uVar4 = 0;
    *param_3 = IVar3;
  }
  return uVar4;
}

