// rea decompile_all
// name: FUN_1003900c0
// address: 0x1003900c0
// body: available
// range: 0x1003900c0-0x1003901fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1003900c0(long param_1,off_t param_2,ulong param_3)

{
  off_t oVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  if ((int)param_1 < 0) {
    return 0;
  }
  oVar1 = _lseek((int)param_1,param_2,0);
  if (oVar1 < 0) {
    piVar3 = ___error();
    _strerror(*piVar3);
    pcVar5 = "fail to lseek fd[%d], error:%s";
    uVar4 = 0x177;
  }
  else {
    for (; 0xfff < param_3; param_3 = param_3 - 0x1000) {
      lVar2 = param_1;
      _write(param_1,&DAT_10081dbca,0x1000);
      if (lVar2 < 0) {
        piVar3 = ___error();
        _strerror(*piVar3);
        pcVar5 = "fail to write fd[%d], error:%s";
        uVar4 = 0x17e;
        goto LAB_1003901e0;
      }
    }
    if ((param_3 == 0) || (_write(param_1,&DAT_10081dbca,param_3), -1 < param_1)) {
      return 1;
    }
    piVar3 = ___error();
    _strerror(*piVar3);
    pcVar5 = "fail to write fd[%d], error:%s";
    uVar4 = 0x185;
  }
LAB_1003901e0:
  FUN_100386734(3,"MemoryFile.cpp","zeroFillFile",uVar4,pcVar5);
  return 0;
}

