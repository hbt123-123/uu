// rea decompile_all
// name: SentrySystemWrapper::cpuUsageWithError:
// address: 0x100762314
// body: available
// range: 0x100762314-0x100762457 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10076243c to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentrySystemWrapper::cpuUsageWithError_(ID param_1,SEL param_2,ID *param_3)

{
  undefined *puVar1;
  kern_return_t kVar2;
  ID IVar3;
  vm_size_t size;
  ulong uVar4;
  float fVar5;
  integer_t aiStack_90 [4];
  int local_80;
  mach_msg_type_number_t local_64;
  thread_act_array_t local_60;
  uint local_54;
  
  puVar1 = PTR__mach_task_self__1009954c8;
  kVar2 = _task_threads(*(task_t *)PTR__mach_task_self__1009954c8,&local_60,&local_54);
  if (kVar2 == 0) {
    if (local_54 == 0) {
      size = 0;
      fVar5 = 0.0;
    }
    else {
      uVar4 = 0;
      fVar5 = 0.0;
      do {
        local_64 = 10;
        kVar2 = _thread_info(local_60[uVar4],3,aiStack_90,&local_64);
        if (kVar2 != 0) {
          if (param_3 == (ID *)0x0) goto LAB_10076237c;
          kVar2 = 0;
          goto LAB_100762368;
        }
        fVar5 = fVar5 + (float)local_80 / *(float *)(param_1 + 8);
        uVar4 = uVar4 + 1;
      } while (uVar4 < local_54);
      size = (ulong)local_54 << 2;
    }
    _vm_deallocate(*(vm_map_t *)puVar1,(vm_address_t)local_60,size);
    IVar3 = objc_stub::numberWithFloat_((ID)&_OBJC_CLASS___NSNumber,fVar5);
  }
  else {
    if (param_3 != (ID *)0x0) {
LAB_100762368:
      IVar3 = 0x6d;
      FUN_100756a90(0x6d,&cf_task_threadsreportedanerror_,kVar2);
      *param_3 = IVar3;
    }
LAB_10076237c:
    _vm_deallocate(*(vm_map_t *)puVar1,(vm_address_t)local_60,(ulong)local_54 << 2);
    IVar3 = 0;
  }
  return IVar3;
}

