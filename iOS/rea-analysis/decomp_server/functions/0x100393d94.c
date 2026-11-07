// rea decompile_all
// name: FUN_100393d94
// address: 0x100393d94
// body: available
// range: 0x100393d94-0x100393e0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100393d94(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_8c [92];
  
  iVar1 = (int)auStack_8c;
  FUN_100393d70();
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0x100ad1448;
    if (param_3 != 0) {
      lVar2 = param_3;
    }
    FUN_10039319c(auStack_8c,param_1,param_2);
    FUN_100393cb8(lVar2,auStack_8c);
  }
  return lVar2;
}

