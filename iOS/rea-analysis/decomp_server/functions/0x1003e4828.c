// rea decompile_all
// name: FUN_1003e4828
// address: 0x1003e4828
// body: available
// range: 0x1003e4828-0x1003e4903 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e4828(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_68 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_3 + 2,auStack_68,0,0);
  lVar3 = param_3[2];
  lVar2 = *(long *)(lVar1 + 0x50);
  lVar1 = lVar3;
  _swift_bridgeObjectRetain();
  __sSa5countSivg();
  _swift_bridgeObjectRelease(lVar3);
  if (lVar1 > param_2) {
    lVar3 = param_3[2];
    _swift_bridgeObjectRetain(lVar3);
    __sSayxSicig(param_1,param_2,lVar3,lVar2);
    _swift_bridgeObjectRelease(lVar3);
  }
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1,lVar1 <= param_2,1,lVar2);
  return;
}

