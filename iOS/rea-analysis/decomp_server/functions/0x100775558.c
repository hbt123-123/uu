// rea decompile_all
// name: SentryBreadcrumb::isEqualToBreadcrumb:
// address: 0x100775558
// body: available
// range: 0x100775558-0x10077598b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryBreadcrumb::isEqualToBreadcrumb_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  uint uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
    goto LAB_1007758c0;
  }
  if (param_3 != 0) {
    IVar1 = objc_stub::level(param_1);
    IVar2 = objc_stub::level(param_3);
    if (IVar1 == IVar2) {
      IVar1 = objc_stub::FUN_1007e6840(param_1);
      IVar2 = objc_stub::FUN_1007e6840(param_3);
      if (IVar1 != IVar2) {
        IVar1 = objc_stub::FUN_1007e6840(param_1);
        IVar2 = objc_stub::FUN_1007e6840(param_3);
        IVar1 = objc_stub::isEqualToString_(IVar1,IVar2);
        if ((int)IVar1 == 0) goto LAB_1007758bc;
      }
      IVar1 = objc_stub::timestamp(param_1);
      IVar2 = objc_stub::timestamp(param_3);
      if (IVar1 != IVar2) {
        IVar1 = objc_stub::timestamp(param_1);
        IVar2 = objc_stub::timestamp(param_3);
        IVar1 = objc_stub::FUN_1007ece40(IVar1,IVar2);
        if ((int)IVar1 == 0) goto LAB_1007758bc;
      }
      IVar1 = objc_stub::type(param_1);
      IVar2 = objc_stub::type(param_3);
      if (IVar1 != IVar2) {
        IVar1 = objc_stub::type(param_1);
        IVar2 = objc_stub::type(param_3);
        IVar1 = objc_stub::isEqualToString_(IVar1,IVar2);
        if ((int)IVar1 == 0) goto LAB_1007758bc;
      }
      IVar1 = objc_stub::FUN_1007eee20(param_1);
      IVar2 = objc_stub::FUN_1007eee20(param_3);
      if (IVar1 != IVar2) {
        IVar1 = objc_stub::FUN_1007eee20(param_1);
        IVar2 = objc_stub::FUN_1007eee20(param_3);
        IVar1 = objc_stub::isEqualToString_(IVar1,IVar2);
        if ((int)IVar1 == 0) goto LAB_1007758bc;
      }
      IVar1 = objc_stub::message(param_1);
      IVar2 = objc_stub::message(param_3);
      if (IVar1 != IVar2) {
        IVar1 = objc_stub::message(param_1);
        IVar2 = objc_stub::message(param_3);
        IVar1 = objc_stub::isEqualToString_(IVar1,IVar2);
        if ((int)IVar1 == 0) goto LAB_1007758bc;
      }
      IVar1 = objc_stub::data(param_1);
      IVar2 = objc_stub::data(param_3);
      if (IVar1 == IVar2) {
        uVar3 = 1;
      }
      else {
        IVar1 = objc_stub::data(param_1);
        IVar2 = objc_stub::data(param_3);
        IVar1 = objc_stub::FUN_1007ece60(IVar1,IVar2);
        uVar3 = (uint)IVar1;
      }
      goto LAB_1007758c0;
    }
  }
LAB_1007758bc:
  uVar3 = 0;
LAB_1007758c0:
  return uVar3 & 1;
}

