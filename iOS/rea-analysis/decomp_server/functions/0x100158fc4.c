// rea decompile_all
// name: FUN_100158fc4
// address: 0x100158fc4
// body: available
// range: 0x100158fc4-0x1001590ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100158fc4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  __ss11_StringGutsV4growyySiF(0x46);
  __sSS6appendyySSF(0x1000000000000041,0x8000000100894ee0);
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x2d,0xe100000000000000);
  param_3 = param_3 + _TtC14UURemoteServer18ClipboardPCManager::managerDelegate;
  _swift_unknownObjectWeakLoadStrong();
  if ((param_3 == 0) ||
     (cVar1 = *(char *)(param_3 + _TtC14UURemoteServer16ClipboardHandler::isSuspend),
     _swift_unknownObjectRelease(), cVar1 == '\x01')) {
    uVar4 = 0xe500000000000000;
    uVar2 = 0x65736c6166;
  }
  else {
    uVar4 = 0xe400000000000000;
    uVar2 = 0x65757274;
  }
  __sSS6appendyySSF(uVar2,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

