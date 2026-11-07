// rea decompile_all
// name: FUN_100390abc
// address: 0x100390abc
// body: available
// range: 0x100390abc-0x100390c67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100390abc(char *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  ID IVar3;
  ID IVar4;
  char *to;
  int *piVar5;
  char *pcVar6;
  
  NSDate::timeIntervalSinceReferenceDate((ID)&_OBJC_CLASS___NSDate);
  IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_mmkv__zu);
  IVar4 = IVar3;
  _NSTemporaryDirectory();
  IVar4 = objc_stub::stringByAppendingPathComponent_(IVar4,IVar3);
  pcVar6 = *(char **)param_1;
  if (-1 < param_1[0x17]) {
    pcVar6 = param_1;
  }
  to = (char *)objc_stub::UTF8String(IVar4);
  iVar2 = _copyfile(pcVar6,to,(copyfile_state_t)0x0,0x1200000);
  objc_stub::UTF8String(IVar4);
  if (iVar2 == 0) {
    FUN_100386734(1,"MemoryFile_OSX.cpp","copyFile",0x5e,"copyfile [%s] to [%s]");
    IVar3 = objc_stub::UTF8String(IVar4);
    plVar1 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar1 = param_2;
    }
    FUN_1003909e4(IVar3,plVar1);
    if ((int)IVar3 != 0) {
      FUN_100386734(1,"MemoryFile_OSX.cpp","copyFile",0x61,"copyfile [%s] to [%s] finish.");
      return 1;
    }
    pcVar6 = (char *)objc_stub::UTF8String(IVar4);
    _unlink(pcVar6);
  }
  else {
    piVar5 = ___error();
    _strerror(*piVar5);
    FUN_100386734(3,"MemoryFile_OSX.cpp","copyFile",0x5b,"fail to copyfile [%s] to [%s], %s");
  }
  return 0;
}

