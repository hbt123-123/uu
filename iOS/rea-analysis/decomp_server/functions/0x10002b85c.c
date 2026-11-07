// rea decompile_all
// name: FUN_10002b85c
// address: 0x10002b85c
// body: available
// range: 0x10002b85c-0x10002b95b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10002b85c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x61);
  __sSS6appendyySSF(0xd00000000000005f,0x8000000100879a80);
  lVar1 = 0;
  FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
  thunk_FUN_1003d7218();
  if (lVar1 == 0) {
    local_48 = 0;
  }
  else {
    lVar2 = lVar1;
    FUN_1003d541c();
    local_48 = (undefined4)lVar2;
  }
  local_44 = lVar1 == 0;
  puVar3 = &DAT_100a75aa8;
  FUN_100004bb4(&DAT_100a75aa8,&DAT_10080eab0);
  __sSS10describingSSx_tclufC(&local_48,puVar3);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_40;
  param_1[1] = uStack_38;
  return;
}

