// rea decompile_all
// name: FUN_1003e728c
// address: 0x1003e728c
// body: available
// range: 0x1003e728c-0x1003e738b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003e728c(void)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if (DAT_100a89348 != -1) {
    _swift_once(&DAT_100a89348,thunk_FUN_1003e74bc);
  }
  puVar1 = &DAT_100a75450;
  FUN_100004bb4(&DAT_100a75450,&DAT_1008095e8);
  puVar4 = &DAT_100a89458;
  _swift_initStaticObject();
  FUN_1000960d4();
  IVar2 = 0x632e7972746e6573;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x632e7972746e6573,0xed00006769666e6f);
  puVar3 = puVar1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar1,puVar4);
  FUN_100006cdc(puVar1,puVar4);
  DAT_100b368f0 =
       MMKV::mmkvWithID_cryptKey_mode_
                 ((ID)&objc::class_t::MMKV,"mmkvWithID:cryptKey:mode:",IVar2,(ID)puVar3,2);
  return 0;
}

