// rea decompile_all
// name: FUN_100312230
// address: 0x100312230
// body: available
// range: 0x100312230-0x10031230b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100312230(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  
  __s10Foundation10URLRequestV10httpMethodSSSgvg();
  if (param_2 != 0) {
    uVar3 = param_2;
    if ((param_1 == 0x544547) && (param_2 == 0xe300000000000000)) {
      _swift_bridgeObjectRelease();
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      _swift_bridgeObjectRelease();
      if ((param_1 & 1) == 0) {
        return;
      }
    }
    __s10Foundation10URLRequestV8httpBodyAA4DataVSgvg();
    if (uVar3 >> 0x3c < 0xf) {
      puVar1 = (ulong *)0x0;
      FUN_100277ad0();
      puVar2 = puVar1;
      FUN_1002c272c();
      _swift_allocError(puVar1,puVar2,0,0);
      *puVar2 = param_2;
      puVar2[1] = uVar3;
      _swift_storeEnumTagMultiPayload(puVar2,puVar1,0xe);
      _swift_willThrow();
    }
  }
  return;
}

