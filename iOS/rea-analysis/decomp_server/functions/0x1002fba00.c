// rea decompile_all
// name: FUN_1002fba00
// address: 0x1002fba00
// body: available
// range: 0x1002fba00-0x1002fbae7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002fba00(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  
  puVar3 = &DAT_100a833a0;
  FUN_100004bb4(&DAT_100a833a0,&DAT_100817880);
  puVar5 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10007f314(param_1,puVar5,&DAT_100a833a0,&DAT_100817880);
  pcVar1 = *(code **)(puVar5 + *(int *)(puVar3 + 0x40));
  uVar2 = *(undefined8 *)((long)(puVar5 + *(int *)(puVar3 + 0x40)) + 8);
  _swift_errorRetain(param_2);
  (*pcVar1)(param_2,param_2 != 0);
  _swift_release(uVar2);
  FUN_1001803c8(param_2,param_2 != 0);
  lVar4 = 0;
  __sSo25NSURLSessionWebSocketTaskC10FoundationE7MessageOMa();
  (**(code **)(*(long *)(lVar4 + -8) + 8))(puVar5,lVar4);
  return;
}

