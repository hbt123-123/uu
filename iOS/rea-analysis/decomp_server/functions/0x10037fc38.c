// rea decompile_all
// name: FUN_10037fc38
// address: 0x10037fc38
// body: available
// range: 0x10037fc38-0x10037fd43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037fc38(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 local_28;
  undefined4 local_24;
  
  DAT_100a89118 = param_2;
  DAT_100b36708 = param_3;
  _pthread_once((pthread_once_t *)&DAT_100a890f8,FUN_10037fb7c);
  local_24 = 0;
  local_28 = 0;
  FUN_10038f378(&local_24,&local_28);
  FUN_100386734(1,"MMKV.cpp","initializeMMKV",0xd4,"Apple Device: %d, version: %d");
  uVar1 = DAT_100b366e8;
  if (-1 < (char)DAT_100b366f0._7_1_) {
    uVar1 = (ulong)DAT_100b366f0._7_1_;
  }
  puVar2 = &DAT_100b366e0;
  if (uVar1 == 0) {
    std::string::operator=((string *)&DAT_100b366e0,(string *)&DAT_100b366e0);
    FUN_10039046c(puVar2);
  }
  FUN_100386734(1,"MMKV.cpp","initializeMMKV",0xe4,"root dir: %s");
  return;
}

