// rea decompile_all
// name: FUN_100695b54
// address: 0x100695b54
// body: available
// range: 0x100695b54-0x100695d37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100695d34 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100695b54(undefined4 *param_1,char *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  long *plVar5;
  uint uVar6;
  uint local_bc;
  undefined1 *local_b8;
  undefined1 auStack_b0 [72];
  long local_68;
  
  uVar6 = 0;
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  while( true ) {
    while( true ) {
      cVar4 = (char)param_1;
      if (*param_2 != '%') break;
      cVar3 = param_2[1];
      uVar1 = (int)cVar3 - 0x30U & 0xff;
      if (cVar3 == 0x5f || uVar1 < 10) {
        uVar2 = uVar6;
        if (cVar3 != '_') {
          uVar2 = uVar1;
        }
        plVar5 = *(long **)(param_3 + (ulong)uVar2 * 8);
        if (plVar5 == (long *)0x0) {
          *param_1 = 5;
          std::string::append((char *)(param_1 + 0x16));
          local_b8 = (undefined1 *)0x0;
          local_bc = uVar2;
          FUN_10069627c(&local_bc,auStack_b0,10,1);
          local_b8 = auStack_b0;
          std::string::append((char *)(param_1 + 0x16));
        }
        else if (*plVar5 == 0) {
          *param_1 = 5;
          std::string::append((char *)(param_1 + 0x16));
          local_b8 = (undefined1 *)0x0;
          local_bc = uVar2;
          FUN_10069627c(&local_bc,auStack_b0,10,1);
          local_b8 = auStack_b0;
          std::string::append((char *)(param_1 + 0x16));
        }
        std::string::append((char *)(param_1 + 0x16));
        uVar6 = uVar6 + 1;
        param_2 = param_2 + 2;
      }
      else if (cVar3 == '%') {
        std::string::push_back(cVar4 + 'X');
        param_2 = param_2 + 2;
      }
      else {
        *param_1 = 5;
        std::string::append((char *)(param_1 + 0x16));
        std::string::push_back(cVar4 + 'X');
        std::string::append((char *)(param_1 + 0x16));
        param_2 = param_2 + 1;
      }
    }
    if (*param_2 == '\0') break;
    std::string::push_back(cVar4 + 'X');
    param_2 = param_2 + 1;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

