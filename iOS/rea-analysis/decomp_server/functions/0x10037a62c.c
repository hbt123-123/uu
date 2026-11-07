// rea decompile_all
// name: MMKV::mmapKeyWithMMapID:rootPath:
// address: 0x10037a62c
// body: available
// range: 0x10037a62c-0x10037a75b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10037a758 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

ID MMKV::mmapKeyWithMMapID_rootPath_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  long lVar3;
  char local_74 [4];
  char local_70 [40];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = objc_stub::length(param_4);
  if (IVar1 != 0) {
    IVar1 = mmkvBasePath((ID)&objc::class_t::MMKV);
    IVar1 = objc_stub::isEqualToString_(param_4,IVar1);
    if ((IVar1 & 1) == 0) {
      IVar1 = objc_stub::stringByAppendingPathComponent_(param_4,param_3);
      local_48 = 0;
      uStack_40 = 0;
      local_74[2] = 0;
      local_74[0] = '\0';
      local_74[1] = '\0';
      local_70[0x20] = 0;
      local_70[8] = '\0';
      local_70[9] = '\0';
      local_70[10] = '\0';
      local_70[0xb] = '\0';
      local_70[0xc] = '\0';
      local_70[0xd] = '\0';
      local_70[0xe] = '\0';
      local_70[0xf] = '\0';
      local_70[0] = '\0';
      local_70[1] = '\0';
      local_70[2] = '\0';
      local_70[3] = '\0';
      local_70[4] = '\0';
      local_70[5] = '\0';
      local_70[6] = '\0';
      local_70[7] = '\0';
      local_70[0x18] = '\0';
      local_70[0x19] = '\0';
      local_70[0x1a] = '\0';
      local_70[0x1b] = '\0';
      local_70[0x1c] = '\0';
      local_70[0x1d] = '\0';
      local_70[0x1e] = '\0';
      local_70[0x1f] = '\0';
      local_70[0x10] = '\0';
      local_70[0x11] = '\0';
      local_70[0x12] = '\0';
      local_70[0x13] = '\0';
      local_70[0x14] = '\0';
      local_70[0x15] = '\0';
      local_70[0x16] = '\0';
      local_70[0x17] = '\0';
      IVar1 = objc_stub::dataUsingEncoding_(IVar1,4);
      IVar2 = objc_stub::bytes(IVar1);
      IVar1 = objc_stub::length(IVar1);
      FUN_100393d94(IVar2,IVar1,&local_48);
      lVar3 = 0;
      do {
        _snprintf(local_74,3,"%2.2x");
        _strcat(local_70,local_74);
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x10);
      param_3 = NSString::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,local_70,1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

