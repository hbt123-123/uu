// rea decompile_all
// name: thunk_FUN_1006957ac
// address: 0x10069588c
// body: available
// range: 0x10069588c-0x10069588f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


code * thunk_FUN_1006957ac(code *param_1)

{
  int iVar1;
  undefined4 extraout_var;
  code *pcVar3;
  code *pcVar4;
  long lVar5;
  code *pcVar2;
  
  if (((byte)param_1[0x70] & 1) == 0) {
    lVar5 = (long)(char)param_1[0x6f];
    if (lVar5 < 0) {
      lVar5 = *(long *)(param_1 + 0x60);
    }
    if (lVar5 == 0) goto LAB_10069586c;
  }
  iVar1 = _gettimeofday((timeval *)(param_1 + 0x28),(void *)0x0);
  pcVar2 = (code *)CONCAT44(extraout_var,iVar1);
  if ((*(code **)(param_1 + 0x80) == (code *)0x0) ||
     (pcVar2 = param_1, (**(code **)(param_1 + 0x80))(param_1,param_1 + 0x58), (int)pcVar2 != 0)) {
    FUN_100697b4c();
    if (pcVar2 != (code *)0x0) {
      pcVar4 = param_1 + 0x58;
      if ((char)param_1[0x6f] < '\0') {
        pcVar4 = *(code **)pcVar4;
      }
      pcVar3 = param_1;
      (*pcVar2)(param_1,pcVar4);
      if ((int)pcVar3 < 1) goto LAB_10069586c;
    }
    pcVar2 = (code *)0x0;
    if (param_1[0x88] == (code)0x0) {
      pcVar2 = param_1;
    }
    if (param_1[0x70] == (code)0x1) {
      pcVar4 = param_1 + 0x58;
      if ((char)param_1[0x6f] < '\0') {
        pcVar4 = *(code **)pcVar4;
      }
      ___xlogger_Assert_impl(pcVar2,*(undefined8 *)(param_1 + 0x78),pcVar4);
    }
    else {
      pcVar4 = param_1 + 0x58;
      if ((char)param_1[0x6f] < '\0') {
        pcVar4 = *(code **)pcVar4;
      }
      ___xlogger_Write_impl(pcVar2,pcVar4);
    }
  }
LAB_10069586c:
  if ((char)param_1[0x6f] < '\0') {
    operator_delete(*(void **)(param_1 + 0x58));
  }
  return param_1;
}

