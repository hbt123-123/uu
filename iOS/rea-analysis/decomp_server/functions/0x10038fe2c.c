// rea decompile_all
// name: FUN_10038fe2c
// address: 0x10038fe2c
// body: available
// range: 0x10038fe2c-0x1003900bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10038fe2c(ulong param_1,ulong param_2)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong uVar7;
  undefined8 local_38;
  
  if (-1 < *(int *)(param_1 + 0x18)) {
    uVar7 = *(ulong *)(param_1 + 0x28);
    if (uVar7 == param_2) {
      return 1;
    }
    if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      *(ulong *)(param_1 + 0x28) = param_2;
      uVar3 = 0;
      if (DAT_100b366f8 != 0) {
        uVar3 = param_2 / DAT_100b366f8;
      }
      if ((param_2 < DAT_100b366f8) || (param_2 != uVar3 * DAT_100b366f8)) {
        param_2 = DAT_100b366f8 + DAT_100b366f8 * uVar3;
        *(ulong *)(param_1 + 0x28) = param_2;
      }
      iVar1 = _ftruncate(*(int *)(param_1 + 0x18),param_2);
      if (iVar1 != 0) {
        piVar2 = ___error();
        _strerror(*piVar2);
        FUN_100386734(3,"MemoryFile.cpp","truncate",0xa2,"fail to truncate [%s] to size %zu, %s");
        *(ulong *)(param_1 + 0x28) = uVar7;
        return 0;
      }
      lVar4 = *(ulong *)(param_1 + 0x28) - uVar7;
      if (uVar7 <= *(ulong *)(param_1 + 0x28) && lVar4 != 0) {
        uVar3 = (ulong)*(uint *)(param_1 + 0x18);
        FUN_1003900c0(uVar3,uVar7,lVar4);
        if ((uVar3 & 1) == 0) {
          piVar2 = ___error();
          _strerror(*piVar2);
          FUN_100386734(3,"MemoryFile.cpp","truncate",0xa8,"fail to zeroFile [%s] to size %zu, %s");
          *(ulong *)(param_1 + 0x28) = uVar7;
          iVar1 = _ftruncate(*(int *)(param_1 + 0x18),uVar7);
          if (iVar1 == 0) {
            FUN_100386734(3,"MemoryFile.cpp","truncate",0xb0,
                          "success to truncate [%s] back to size %zu");
            local_38 = 0;
            FUN_10038fdb4(*(undefined4 *)(param_1 + 0x18),&local_38);
            pcVar6 = "after truncate, file size = %zu";
            uVar5 = 0xb1;
          }
          else {
            piVar2 = ___error();
            _strerror(*piVar2);
            pcVar6 = "failed to truncate back [%s] to size %zu, %s";
            uVar5 = 0xae;
          }
          FUN_100386734(3,"MemoryFile.cpp","truncate",uVar5,pcVar6);
          return 0;
        }
      }
      lVar4 = *(long *)(param_1 + 0x20);
      if ((lVar4 != 0) && (_munmap(lVar4,uVar7), (int)lVar4 != 0)) {
        piVar2 = ___error();
        _strerror(*piVar2);
        FUN_100386734(3,"MemoryFile.cpp","truncate",0xba,"fail to munmap [%s], %s");
      }
      uVar7 = param_1;
      FUN_1003901fc();
      if ((uVar7 & 1) != 0) {
        return 1;
      }
      FUN_1003902f0(param_1,0);
    }
  }
  return 0;
}

