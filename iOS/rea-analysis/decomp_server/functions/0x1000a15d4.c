// rea decompile_all
// name: FUN_1000a15d4
// address: 0x1000a15d4
// body: available
// range: 0x1000a15d4-0x1000a1727 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000a1714 to 0x1000a0f90 FUN_1000a0f90 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000a15d4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,void *param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  void *pvVar4;
  long unaff_x22;
  undefined8 uVar5;
  long *plVar6;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_6;
  lVar1 = 0;
  uVar5 = param_2;
  __s10Foundation3URLVMa();
  *(long *)(unaff_x22 + 0x18) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x30) = uVar3;
  pvVar4 = __Block_copy(param_5);
  *(void **)(unaff_x22 + 0x38) = pvVar4;
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(uVar3,param_1);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(uVar2,param_2);
  if (param_3 == 0) {
    uVar5 = 0;
    *(undefined8 *)(unaff_x22 + 0x40) = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
    *(undefined8 *)(unaff_x22 + 0x40) = uVar5;
  }
  if (param_4 != 0) {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_4,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,PTR___sSSSHsWP_100995808);
  }
  *(long *)(unaff_x22 + 0x48) = param_4;
  plVar6 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1000a1728;
  FUN_1000a0f90(uVar3,uVar2,param_3,uVar5,param_4);
  return;
}

