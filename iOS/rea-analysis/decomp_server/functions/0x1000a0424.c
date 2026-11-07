// rea decompile_all
// name: _TtC14UURemoteServer30ProxyFilePickerSessionDelegate::URLSession:task:didReceiveChallenge:completionHandler:
// address: 0x1000a0424
// body: available
// range: 0x1000a0424-0x1000a04e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000a04e4 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

void _TtC14UURemoteServer30ProxyFilePickerSessionDelegate::
     URLSession_task_didReceiveChallenge_completionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  undefined8 *puVar1;
  void *aBlock;
  undefined8 *puVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  puVar2 = &local_90;
  aBlock = __Block_copy((void *)param_6);
  puVar1 = (undefined8 *)(param_1 + proxy);
  uStack_68 = puVar1[5];
  local_70 = puVar1[4];
  uStack_58 = puVar1[7];
  uStack_60 = puVar1[6];
  uStack_48 = puVar1[9];
  local_50 = puVar1[8];
  local_40 = puVar1[10];
  uStack_88 = puVar1[1];
  local_90 = *puVar1;
  uStack_78 = puVar1[3];
  uStack_80 = puVar1[2];
  FUN_10012f304(param_5,&local_90);
  (**(code **)((long)aBlock + 0x10))(aBlock,param_5,puVar2);
  __Block_release(aBlock);
  return;
}

