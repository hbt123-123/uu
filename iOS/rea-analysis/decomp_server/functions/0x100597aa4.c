// rea decompile_all
// name: FUN_100597aa4
// address: 0x100597aa4
// body: available
// range: 0x100597aa4-0x100597b3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100597aa4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  char local_31;
  
  lVar1 = param_1 + 0x18;
  _swift_beginAccess(lVar1,auStack_58,0,0);
  local_31 = *(char *)(param_1 + 0x18);
  if (local_31 != '\x03') {
    pcVar2 = *(code **)(param_4 + 0x80);
    FUN_1005b2a44();
    (*pcVar2)(&local_31,0x11,&DAT_1009d5278,lVar1,param_3,param_4);
  }
  return;
}

