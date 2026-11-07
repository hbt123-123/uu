// rea decompile_all
// name: FUN_10050ff0c
// address: 0x10050ff0c
// body: available
// range: 0x10050ff0c-0x10050ff9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050ff0c(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [32];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  lVar2 = param_1[2];
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  pcVar1 = (code *)auStack_80;
  (**(code **)(param_2 + 0x20))(pcVar1,*(undefined8 *)(*param_1 + 0x58),param_2);
  FUN_10050fb8c(&local_60,auStack_a8);
  FUN_10050f90c(auStack_a8,lVar2);
  FUN_100040bb4(&local_60,&DAT_100aaa288,&DAT_100836090);
  (*pcVar1)(auStack_80,0);
  return;
}

