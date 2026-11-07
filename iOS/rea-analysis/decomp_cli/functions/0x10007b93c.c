// rea decompile_all
// name: FUN_10007b93c
// address: 0x10007b93c
// body: available
// range: 0x10007b93c-0x10007b9f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10007b93c(void)

{
  undefined8 uVar1;
  undefined1 auStack_98 [8];
  long local_90;
  undefined1 auStack_80 [48];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long local_38;
  
  FUN_10007b83c(auStack_98);
  if (local_90 == 0) {
    FUN_10001fc18(auStack_98,&DAT_100104818,&DAT_1000d62d0);
    uStack_48 = 0;
    local_50 = 0;
    local_38 = 0;
    uStack_40 = 0;
  }
  else {
    FUN_1000133cc(auStack_80,&local_50,&DAT_100104198,&DAT_1000d5180);
    FUN_100065194(auStack_98);
    if (local_38 != 0) {
      uVar1 = 0;
      goto LAB_10007b9c0;
    }
  }
  uVar1 = 1;
LAB_10007b9c0:
  FUN_10001fc18(&local_50,&DAT_100104198,&DAT_1000d5180);
  return uVar1;
}

