// rea decompile_all
// name: FUN_100390584
// address: 0x100390584
// body: available
// range: 0x100390584-0x1003906df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_100390584(long *param_1)

{
  char *pcVar1;
  int iVar2;
  long *plVar3;
  off_t oVar4;
  char *pcVar5;
  long lVar6;
  int *piVar7;
  
  plVar3 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar3 = param_1;
  }
  _open(plVar3,0x1000000);
  iVar2 = (int)plVar3;
  if (iVar2 < 0) {
    piVar7 = ___error();
    _strerror(*piVar7);
    FUN_100386734(2,"MemoryFile.cpp","readWholeFile",0x16c,"fail to open %s: %s");
    return (char *)0x0;
  }
  oVar4 = _lseek(iVar2,0,2);
  if (0 < oVar4) {
    pcVar5 = operator_new(0x1a);
    thunk_FUN_10037e7cc(pcVar5,oVar4);
    _lseek(iVar2,0,0);
    pcVar1 = pcVar5 + 2;
    if (*pcVar5 != '\0') {
      pcVar1 = *(char **)(pcVar5 + 10);
    }
    lVar6 = (long)plVar3;
    _read(plVar3,pcVar1,oVar4);
    if (lVar6 != -1) goto LAB_100390674;
    piVar7 = ___error();
    _strerror(*piVar7);
    FUN_100386734(2,"MemoryFile.cpp","readWholeFile",0x164,"fail to read %s: %s");
    thunk_FUN_10037edac();
    operator_delete(pcVar5);
  }
  pcVar5 = (char *)0x0;
LAB_100390674:
  _close(plVar3);
  return pcVar5;
}

