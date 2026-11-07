// rea decompile_all
// name: FUN_10069f2e8
// address: 0x10069f2e8
// body: available
// range: 0x10069f2e8-0x10069f3e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10069f3e0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069f2e8(char *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  ulong uVar3;
  char acStack_78 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  if ((DAT_100b2c548 & 1) == 0) {
    FUN_10069f45c();
  }
  pcVar2 = acStack_78;
  uVar3 = 0x40;
  do {
    iVar1 = _strerror_r(param_3,pcVar2,uVar3);
    if (iVar1 != 0x22) {
      param_1[0] = '\0';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0x10] = '\0';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      std::string::assign(param_1);
      if (0x40 < uVar3) {
        _free(pcVar2);
      }
      goto LAB_10069f3ac;
    }
    if (0x40 < uVar3) {
      _free(pcVar2);
    }
    uVar3 = uVar3 << 1;
    pcVar2 = _malloc(uVar3);
  } while (pcVar2 != (char *)0x0);
  FUN_1006928dc(param_1,"ENOMEM");
LAB_10069f3ac:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

