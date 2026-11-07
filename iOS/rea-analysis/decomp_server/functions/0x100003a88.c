// rea decompile_all
// name: FUN_100003a88
// address: 0x100003a88
// body: available
// range: 0x100003a88-0x100003cf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100003a88(undefined8 param_1)

{
  qword qVar1;
  bool bVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *op;
  ID IVar4;
  ID IVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  
  if ((int)param_1 == 0) {
    FUN_100002a48(&cf_VirtualDisplayTrace_shimextendfailedreason_zeroDisplayID);
    return param_1;
  }
  pcVar3 = &cf_SLWindowMirroringManager;
  _NSClassFromString();
  if (pcVar3 == (cfstringStruct *)0x0) {
    if (DAT_100abd968 != -1) {
      FUN_1007da46c();
    }
    pcVar3 = &cf_SLWindowMirroringManager;
    _NSClassFromString();
    if ((DAT_100abd960 == 0) || (pcVar3 == (cfstringStruct *)0x0)) {
      _dlerror();
      pcVar3 = &cf_VirtualDisplayTrace_shimextendfailedreason_managerUnavailabledisplayID__uerror__s
      ;
      goto LAB_100003c20;
    }
  }
  pcVar6 = &cf_shared;
  _NSSelectorFromString();
  op = &cf_extend_;
  _NSSelectorFromString();
  pcVar8 = pcVar3;
  _class_getClassMethod(pcVar3,pcVar6);
  if (pcVar8 == (cfstringStruct *)0x0) {
    pcVar7 = (cfstringStruct *)0x0;
LAB_100003be8:
    _free(pcVar7);
  }
  else {
    pcVar7 = pcVar8;
    _method_copyReturnType();
    _method_getNumberOfArguments();
    if (((int)pcVar8 != 2) || (pcVar7 == (cfstringStruct *)0x0)) goto LAB_100003be8;
    qVar1 = pcVar7->field0_0x0;
    _free(pcVar7);
    if ((char)qVar1 == '@') {
      IVar4 = _objc_msgSend((ID)pcVar3,(SEL)pcVar6);
      _class_getInstanceMethod(pcVar3,op);
      if (pcVar3 == (cfstringStruct *)0x0) {
        pcVar8 = (cfstringStruct *)0x0;
        pcVar6 = (cfstringStruct *)0x0;
        bVar2 = true;
      }
      else {
        pcVar6 = pcVar3;
        _method_copyReturnType();
        pcVar8 = pcVar3;
        _method_copyArgumentType(pcVar3,2);
        _method_getNumberOfArguments();
        bVar2 = true;
        if (((((int)pcVar3 == 3) && (pcVar6 != (cfstringStruct *)0x0)) &&
            ((char)pcVar6->field0_0x0 == 'B')) &&
           ((*(char *)((long)&pcVar6->field0_0x0 + 1) == '\0' && (pcVar8 != (cfstringStruct *)0x0)))
           ) {
          bVar2 = (char)pcVar8->field0_0x0 != '@';
        }
      }
      _free(pcVar6);
      _free(pcVar8);
      if ((IVar4 == 0) || (bVar2)) {
        FUN_100002a48(&cf_VirtualDisplayTrace_shimextendfailedreason_extendUnavailabledisplayID__u);
      }
      else {
        IVar5 = NSNumber::numberWithUnsignedInt_((ID)&_OBJC_CLASS___NSNumber,param_1);
        IVar4 = _objc_msgSend(IVar4,(SEL)op,IVar5);
        if ((int)IVar4 != 0) {
          FUN_1000039e0(&cf_VirtualDisplayTrace_shimextendaccepteddisplayID__u);
          return 1;
        }
        FUN_100003a34(&cf_VirtualDisplayTrace_shimextendrejecteddisplayID__u);
      }
      return 0;
    }
  }
  pcVar3 = &cf_VirtualDisplayTrace_shimextendfailedreason_sharedUnavailabledisplayID__u;
LAB_100003c20:
  FUN_100002a48(pcVar3);
  return 0;
}

