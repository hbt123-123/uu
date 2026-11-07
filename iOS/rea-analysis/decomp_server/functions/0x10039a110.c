// rea decompile_all
// name: FUN_10039a110
// address: 0x10039a110
// body: available
// range: 0x10039a110-0x10039a193 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10039a110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code **ppcVar2;
  code *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_28 = param_3;
  _swift_unknownObjectRetain_n(param_3,2);
  puVar1 = &DAT_100a8aca8;
  FUN_100004bb4(&DAT_100a8aca8,&DAT_10081f490);
  ppcVar2 = &local_38;
  _swift_dynamicCast(ppcVar2,&local_28,PTR___syXlN_100995e80 + 8,puVar1,6);
  if ((int)ppcVar2 != 0) {
    (*local_38)();
    _swift_release(uStack_30);
  }
  _swift_unknownObjectRelease(param_3);
  return;
}

