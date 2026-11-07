// rea decompile_all
// name: FUN_1007b3df4
// address: 0x1007b3df4
// body: available
// range: 0x1007b3df4-0x1007b3e83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_1007b3df4(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_50;
  long local_48;
  
  local_50 = 0;
  local_48 = 0;
  __sSS10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo8NSStringC_SSSgztFZ
            (param_1,&local_50);
  lVar1 = local_48;
  uVar2 = local_50;
  if (local_48 == 0) {
    uVar2 = 0;
  }
  else {
    _swift_bridgeObjectRetain(local_48);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
  }
  _swift_bridgeObjectRelease_n(lVar1,2);
  *param_2 = uVar2;
  return (uint)param_1 & 1;
}

