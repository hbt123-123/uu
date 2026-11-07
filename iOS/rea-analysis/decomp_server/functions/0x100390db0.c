// rea decompile_all
// name: FUN_100390db0
// address: 0x100390db0
// body: available
// range: 0x100390db0-0x100390ee7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100390db0(undefined8 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  void *local_60;
  undefined8 uStack_58;
  long local_50;
  undefined1 auStack_40 [24];
  int local_28;
  
  if (param_2 < 0) {
    return 0;
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    FUN_100384eb8(&local_60,*param_1,param_1[1]);
  }
  else {
    uStack_58 = param_1[1];
    local_60 = (void *)*param_1;
    local_50 = param_1[2];
  }
  thunk_FUN_10038f858(auStack_40,&local_60,1);
  if (local_50 < 0) {
    operator_delete(local_60);
  }
  if (-1 < local_28) {
    iVar1 = _fcopyfile(local_28,param_2,(copyfile_state_t)0x0,0xf);
    if (iVar1 == 0) {
      uVar3 = 1;
      FUN_100386734(1,"MemoryFile_OSX.cpp","copyFileContent",0x81,
                    "copy content from %s to fd[%d] finish");
      goto LAB_100390ecc;
    }
    ___error();
    piVar2 = ___error();
    _strerror(*piVar2);
    FUN_100386734(3,"MemoryFile_OSX.cpp","copyFileContent",0x84,
                  "fail to copyfile(): %d(%s), source file %s");
  }
  uVar3 = 0;
LAB_100390ecc:
  FUN_100384c70(auStack_40);
  return uVar3;
}

