// rea decompile_all
// name: FUN_100390c68
// address: 0x100390c68
// body: available
// range: 0x100390c68-0x100390d83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100390c68(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  void *local_60;
  undefined8 uStack_58;
  long local_50;
  undefined1 auStack_40 [24];
  int local_28;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_100384eb8(&local_60,*param_2,param_2[1]);
  }
  else {
    uStack_58 = param_2[1];
    local_60 = (void *)*param_2;
    local_50 = param_2[2];
  }
  thunk_FUN_10038f858(auStack_40,&local_60,0x16);
  if (local_50 < 0) {
    operator_delete(local_60);
  }
  if (-1 < local_28) {
    FUN_100390db0();
    if (param_1 != 0) {
      uVar1 = 1;
      FUN_100386734(1,"MemoryFile_OSX.cpp","copyFileContent",0x6e,
                    "copy content from %s to fd[%s] finish");
      goto LAB_100390d68;
    }
    FUN_100386734(3,"MemoryFile_OSX.cpp","copyFileContent",0x71,"fail to copyfile(): target file %s"
                 );
  }
  uVar1 = 0;
LAB_100390d68:
  FUN_100384c70(auStack_40);
  return uVar1;
}

