// rea decompile_all
// name: FUN_1002c508c
// address: 0x1002c508c
// body: available
// range: 0x1002c508c-0x1002c5137 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002c508c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  if (DAT_100a81bf0 != -1) {
    _swift_once(&DAT_100a81bf0,FUN_100357644);
  }
  uVar1 = 0;
  __s10Foundation12CharacterSetVMa(0);
  FUN_10021bec0();
  uVar2 = uVar1;
  FUN_1002c6438();
  puVar3 = PTR___sSSN_1009957f8;
  __sSy10FoundationE21addingPercentEncoding21withAllowedCharactersSSSgAA12CharacterSetV_tF
            (uVar1,PTR___sSSN_1009957f8,uVar2);
  if (puVar3 == (undefined *)0x0) {
    _swift_bridgeObjectRetain(param_2);
  }
  return;
}

