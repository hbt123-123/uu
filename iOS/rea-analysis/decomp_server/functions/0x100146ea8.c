// rea decompile_all
// name: FUN_100146ea8
// address: 0x100146ea8
// body: available
// range: 0x100146ea8-0x100147057 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100146ea8(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  code *pcVar6;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x5e);
  __sSS6appendyySSF(0x1000000000000036,0x8000000100892190);
  plVar4 = *(long **)(param_2 + 0x20);
  pcVar6 = *(code **)(*plVar4 + 0xa8);
  plVar5 = plVar4;
  _swift_retain();
  (*pcVar6)();
  _swift_release(plVar4);
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  puVar1 = PTR___sSiN_100995968;
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  local_58 = plVar5;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x1000000000000011,0x8000000100892070);
  plVar5 = *(long **)(param_2 + 0x50);
  pcVar6 = *(code **)(*plVar5 + 0x88);
  _swift_retain(plVar5);
  (*pcVar6)(&local_58);
  _swift_release(plVar5);
  puVar2 = puVar3;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar1,puVar3);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x1000000000000011,0x8000000100892090);
  local_58 = (long *)_objc_msgSend(*(ID *)(param_2 + 0x18),"operationCount");
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar1,puVar3);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_50;
  param_1[1] = uStack_48;
  return;
}

