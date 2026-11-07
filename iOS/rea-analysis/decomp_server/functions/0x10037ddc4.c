// rea decompile_all
// name: FUN_10037ddc4
// address: 0x10037ddc4
// body: available
// range: 0x10037ddc4-0x10037df4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10037ddc4(int *param_1,int param_2,int param_3,int param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  uVar4 = 1;
  if (param_2 != 0) {
    uVar4 = 2;
  }
  uVar1 = uVar4;
  if (param_3 == 0) {
    uVar1 = uVar4 | 4;
  }
  if (param_4 != 0) {
    iVar2 = _flock(*param_1,uVar4 | 4);
    if (iVar2 == 0) {
      return 1;
    }
    iVar2 = _flock(*param_1,8);
    if (iVar2 != 0) {
      piVar3 = ___error();
      _strerror(*piVar3);
      FUN_100386734(3,"InterProcessLock.cpp","platformLock",0x66,
                    "fail to try unlock first fd=%d, ret=%d, error:%s");
    }
  }
  iVar2 = _flock(*param_1,uVar1);
  if (iVar2 == 0) {
    return 1;
  }
  if (param_5 != 0) {
    piVar3 = ___error();
    *(bool *)param_5 = *piVar3 == 0x23;
  }
  if (param_3 != 0) {
    piVar3 = ___error();
    _strerror(*piVar3);
    FUN_100386734(3,"InterProcessLock.cpp","platformLock",0x70,
                  "fail to lock fd=%d, ret=%d, error:%s");
  }
  if (param_4 != 0) {
    iVar2 = _flock(*param_1,1);
    if (iVar2 == 0) {
      return 0;
    }
    piVar3 = ___error();
    _strerror(*piVar3);
    FUN_100386734(3,"InterProcessLock.cpp","platformLock",0x77,
                  "fail to recover shared-lock fd=%d, ret=%d, error:%s");
  }
  return 0;
}

