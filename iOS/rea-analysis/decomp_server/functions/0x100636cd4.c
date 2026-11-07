// rea decompile_all
// name: FUN_100636cd4
// address: 0x100636cd4
// body: available
// range: 0x100636cd4-0x100636e2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100636e2c to 0x1006376cc FUN_1006376cc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100636cd4(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = *(undefined **)(param_1 + 0x10);
  if ((ulong)puVar2 >> 8 < 0xff) {
    thunk_FUN_10066690c(puVar2,2);
    _swift_bridgeObjectRetain(param_1);
    FUN_100628ae0();
    puVar1 = puVar2;
  }
  else if ((ulong)puVar2 >> 0x20 == 0) {
    puVar1 = &DAT_100ab7e50;
    FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
    _swift_initStaticObject();
    thunk_FUN_10066690c(puVar2,4);
    FUN_100628ae0();
    _swift_bridgeObjectRetain(param_1);
    FUN_100628ae0();
  }
  else {
    if (1.8446744073709552e+19 <= (double)puVar2) {
      FUN_1006376cc(param_1,0x10);
      return param_1;
    }
    puVar1 = &DAT_100ab7e50;
    FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
    _swift_initStaticObject();
    thunk_FUN_10066690c(puVar2,8);
    FUN_100628ae0();
    _swift_bridgeObjectRetain(param_1);
    FUN_100628ae0();
  }
  puVar2 = puVar1;
  FUN_1006376cc(puVar1,0x10);
  _swift_bridgeObjectRelease(puVar1);
  return puVar2;
}

