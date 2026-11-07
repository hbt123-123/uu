// rea decompile_all
// name: SAReachability::startMonitoring
// address: 0x100709330
// body: available
// range: 0x100709330-0x1007094a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SAReachability::startMonitoring(ID param_1,SEL param_2)

{
  undefined *puVar1;
  __SCNetworkReachability *p_Var2;
  __SCNetworkReachability *p_Var3;
  dispatch_queue_t pdVar4;
  undefined *local_d8;
  undefined8 local_d0;
  code *local_c8;
  undefined *puStack_c0;
  ID local_b8;
  undefined **local_b0;
  undefined8 local_a8;
  undefined **ppuStack_a0;
  code *local_98;
  code *pcStack_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  stopMonitoring(param_1);
  p_Var2 = networkReachability(param_1);
  if (p_Var2 != (__SCNetworkReachability *)0x0) {
    _objc_initWeak(auStack_58,param_1);
    puVar1 = PTR___NSConcreteStackBlock_100995490;
    local_80 = PTR___NSConcreteStackBlock_100995490;
    local_78 = 0xc2000000;
    local_70 = FUN_1007094c0;
    puStack_68 = &DAT_1009e7520;
    _objc_copyWeak(auStack_60,auStack_58);
    local_a8 = 0;
    local_98 = __Block_copy;
    pcStack_90 = FUN_10070950c;
    local_88 = 0;
    ppuStack_a0 = &local_80;
    p_Var2 = networkReachability(param_1);
    _SCNetworkReachabilitySetCallback(p_Var2,FUN_100709518,&local_a8);
    p_Var3 = networkReachability(param_1);
    p_Var2 = p_Var3;
    _CFRunLoopGetMain();
    _SCNetworkReachabilityScheduleWithRunLoop
              (p_Var3,p_Var2,*(undefined8 *)PTR__kCFRunLoopCommonModes_1009953e0);
    pdVar4 = _dispatch_get_global_queue(2,0);
    local_d8 = puVar1;
    local_d0 = 0xc2000000;
    local_c8 = FUN_100709524;
    puStack_c0 = &DAT_1009e7550;
    local_b8 = param_1;
    local_b0 = &local_80;
    _dispatch_async(pdVar4,&local_d8);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}

