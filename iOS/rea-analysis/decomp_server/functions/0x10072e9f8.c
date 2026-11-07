// rea decompile_all
// name: SADelegateProxy::invokeWithTarget:selector:
// address: 0x10072e9f8
// body: available
// range: 0x10072e9f8-0x10072ebd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SADelegateProxy::invokeWithTarget_selector_(ID param_1,SEL param_2,ID param_3,SEL param_4)

{
  ID IVar1;
  class_t *pcVar2;
  SEL self;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  objc_super local_78;
  undefined8 *puVar8;
  
  IVar1 = objc_stub::sensorsdata_delegateObject(param_3);
  pcVar2 = (class_t *)objc_stub::delegateISA(IVar1);
  self = param_4;
  _NSStringFromSelector();
  IVar1 = objc_stub::componentsSeparatedByString_((ID)self,&cf__);
  IVar1 = objc_stub::count(IVar1);
  if ((long)(IVar1 - 1) < 1) {
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    lVar7 = 0;
    puVar8 = (undefined8 *)register0x00000008;
    do {
      if (lVar7 < 2) {
        if (lVar7 == 0) {
          uVar3 = *puVar8;
          goto LAB_10072eb40;
        }
        if (lVar7 == 1) {
          uVar4 = *puVar8;
          goto LAB_10072eb40;
        }
      }
      else {
        if (lVar7 == 2) {
          uVar5 = *puVar8;
        }
        else {
          if (lVar7 != 3) goto LAB_10072eb4c;
          uVar6 = *puVar8;
        }
LAB_10072eb40:
        puVar8 = puVar8 + 1;
      }
LAB_10072eb4c:
      lVar7 = lVar7 + 1;
    } while (IVar1 - 1 != lVar7);
  }
  local_78.receiver = param_3;
  local_78.super_class = pcVar2;
  _objc_msgSendSuper(&local_78,param_4,uVar3,uVar4,uVar5,uVar6);
  return;
}

