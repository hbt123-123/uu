// rea decompile_all
// name: FUN_10040e740
// address: 0x10040e740
// body: available
// range: 0x10040e740-0x10040e7ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10040e740(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = &DAT_100a75458;
  FUN_100004bb4(&DAT_100a75458,&DAT_1008095f0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  uVar3 = 1;
  if (puVar2 != (undefined *)0x1) {
    uVar3 = 2;
  }
  uVar1 = 0;
  if (puVar2 != (undefined *)0x0) {
    uVar1 = uVar3;
  }
  return uVar1;
}

