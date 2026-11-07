// rea decompile_all
// name: FUN_10051dadc
// address: 0x10051dadc
// body: available
// range: 0x10051dadc-0x10051dbc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10051dadc(ulong param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)(param_3 + 0x28);
  lVar4 = *(long *)(param_3 + 0x10) + 1;
  do {
    lVar4 = lVar4 + -1;
    if (lVar4 == 0) break;
    uVar2 = plVar5[-1];
    lVar1 = *plVar5;
    _swift_bridgeObjectRetain_n(lVar1,2);
    __sSS6appendyySSF(0x2e,0xe100000000000000);
    uVar3 = uVar2;
    __sSS9hasPrefixySbSSF(uVar2,lVar1,param_1,param_2);
    _swift_bridgeObjectRelease(lVar1);
    if (((uVar3 & 1) != 0) || ((uVar2 == param_1 && (lVar1 == param_2)))) {
      _swift_bridgeObjectRelease(lVar1);
      break;
    }
    plVar5 = plVar5 + 2;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar2,lVar1,param_1,param_2,0);
    _swift_bridgeObjectRelease(lVar1);
  } while ((uVar2 & 1) == 0);
  return lVar4 != 0;
}

