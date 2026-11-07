// rea decompile_all
// name: FUN_10038f8b8
// address: 0x10038f8b8
// body: available
// range: 0x10038f8b8-0x10038fa03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10038f8b8(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  int *piVar6;
  undefined8 uVar7;
  
  if ((int)param_1[3] < 0) {
    plVar5 = param_1;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      plVar5 = (long *)*param_1;
    }
    uVar3 = *(uint *)((long)param_1 + 0x1c);
    uVar1 = 0x1000000;
    if ((uVar3 & 2) != 0) {
      uVar1 = 0x1000001;
    }
    uVar2 = 0x1000000;
    if ((uVar3 & 1) == 0) {
      uVar2 = uVar1;
    }
    if (((uVar3 ^ 0xffffffff) & 3) == 0) {
      uVar2 = 0x1000002;
    }
    _open(plVar5,(uVar3 >> 3 & 1) << 0xb | (uVar3 & 4) << 7 | (uVar3 >> 4 & 1) << 10 | uVar2);
    iVar4 = (int)plVar5;
    *(int *)(param_1 + 3) = iVar4;
    if (iVar4 < 0) {
      ___error();
      piVar6 = ___error();
      _strerror(*piVar6);
      FUN_100386734(3,"MemoryFile.cpp","open",99,"fail to open [%s], flag %x, %d(%s)");
      uVar7 = 0;
    }
    else {
      _fchmod(iVar4,0x1b6);
      uVar7 = 1;
      FUN_100386734(1,"MemoryFile.cpp","open",0x6a,"open fd[%p], flag %x, %s");
    }
  }
  else {
    uVar7 = 1;
  }
  return uVar7;
}

