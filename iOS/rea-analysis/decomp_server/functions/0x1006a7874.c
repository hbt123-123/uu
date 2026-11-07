// rea decompile_all
// name: FUN_1006a7874
// address: 0x1006a7874
// body: available
// range: 0x1006a7874-0x1006a7baf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006a7bac to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a7874(long param_1,char *param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  char *pcVar4;
  long local_98;
  char local_90 [72];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  pcVar4 = param_3;
  FUN_100692ea0();
  pcVar2 = param_3;
  FUN_100692c98();
  if (pcVar2 + 0x1400 < pcVar4) {
    if (param_1 != 0) {
      FUN_100695574();
      local_90[0x28] = '\0';
      local_90[0x29] = '\0';
      local_90[0x2a] = '\0';
      local_90[0x2b] = '\0';
      local_90[0x2c] = '\0';
      local_90[0x2d] = '\0';
      local_90[0x2e] = '\0';
      local_90[0x2f] = '\0';
      local_90[0x20] = '\0';
      local_90[0x21] = '\0';
      local_90[0x22] = '\0';
      local_90[0x23] = '\0';
      local_90[0x24] = '\0';
      local_90[0x25] = '\0';
      local_90[0x26] = '\0';
      local_90[0x27] = '\0';
      local_90[0x38] = '\0';
      local_90[0x39] = '\0';
      local_90[0x3a] = '\0';
      local_90[0x3b] = '\0';
      local_90[0x3c] = '\0';
      local_90[0x3d] = '\0';
      local_90[0x3e] = '\0';
      local_90[0x3f] = '\0';
      local_90[0x30] = '\0';
      local_90[0x31] = '\0';
      local_90[0x32] = '\0';
      local_90[0x33] = '\0';
      local_90[0x34] = '\0';
      local_90[0x35] = '\0';
      local_90[0x36] = '\0';
      local_90[0x37] = '\0';
      local_90[8] = '\0';
      local_90[9] = '\0';
      local_90[10] = '\0';
      local_90[0xb] = '\0';
      local_90[0xc] = '\0';
      local_90[0xd] = '\0';
      local_90[0xe] = '\0';
      local_90[0xf] = '\0';
      local_90[0] = '\0';
      local_90[1] = '\0';
      local_90[2] = '\0';
      local_90[3] = '\0';
      local_90[4] = '\0';
      local_90[5] = '\0';
      local_90[6] = '\0';
      local_90[7] = '\0';
      local_90[0x18] = '\0';
      local_90[0x19] = '\0';
      local_90[0x1a] = '\0';
      local_90[0x1b] = '\0';
      local_90[0x1c] = '\0';
      local_90[0x1d] = '\0';
      local_90[0x1e] = '\0';
      local_90[0x1f] = '\0';
      local_90[0x10] = '\0';
      local_90[0x11] = '\0';
      local_90[0x12] = '\0';
      local_90[0x13] = '\0';
      local_90[0x14] = '\0';
      local_90[0x15] = '\0';
      local_90[0x16] = '\0';
      local_90[0x17] = '\0';
      if (*(long *)(param_1 + 0x28) != 0) {
        local_98 = *(long *)(param_1 + 0x28);
        _localtime(&local_98);
        _snprintf(local_90,0x40,"%d-%02d-%02d %+.1f %02d:%02d:%02d.%.3d");
      }
      pcVar4 = param_3;
      FUN_100692eb0();
      iVar1 = _snprintf(pcVar4,0x400,"[%s][%s][%jd, %jd%s][%s][%s:%d, %s][");
      pcVar4 = param_3;
      FUN_100692c08(param_3);
      pcVar2 = param_3;
      FUN_100692c98(param_3);
      FUN_100692dd4(param_3,pcVar4 + iVar1,pcVar2 + iVar1);
    }
    if (param_2 == (char *)0x0) {
      param_2 = "error!! NULL==_logbody";
      sVar3 = 0x16;
    }
    else {
      pcVar4 = param_3;
      FUN_100692ea0();
      pcVar2 = param_3;
      FUN_100692c98();
      if ((ulong)((long)pcVar4 - (long)pcVar2) < 0x83) {
        pcVar4 = (char *)0x0;
      }
      else {
        pcVar4 = param_3;
        FUN_100692ea0();
        pcVar2 = param_3;
        FUN_100692c98();
        pcVar4 = pcVar4 + (-0x82 - (long)pcVar2);
      }
      if ((char *)0xfffe < pcVar4) {
        pcVar4 = (char *)0xffff;
      }
      sVar3 = _strnlen(param_2,(size_t)pcVar4);
      if (0xfffe < sVar3) {
        sVar3 = 0xffff;
      }
    }
    FUN_100692adc(param_3,param_2,sVar3);
    local_90[0] = 10;
    pcVar4 = param_3;
    FUN_100692eb0();
    if (pcVar4[-1] != '\n') {
      FUN_100692adc(param_3,local_90,1);
    }
  }
  else {
    DAT_100b2c648 = DAT_100b2c648 + 1;
    sVar3 = _strnlen(param_2,0x100000);
    DAT_100b2c64c = (undefined4)sVar3;
    pcVar4 = param_3;
    FUN_100692ea0();
    pcVar2 = param_3;
    FUN_100692c98();
    if (pcVar2 + 0x80 <= pcVar4) {
      pcVar4 = param_3;
      FUN_100692eb0();
      iVar1 = _snprintf(pcVar4,0x400,"[F]log_size <= 5*1024, err(%d, %d)\n");
      pcVar4 = param_3;
      FUN_100692c08(param_3);
      pcVar2 = param_3;
      FUN_100692c98(param_3);
      FUN_100692dd4(param_3,pcVar4 + iVar1,pcVar2 + iVar1);
      FUN_100692adc(param_3,"",0);
      DAT_100b2c648 = 0;
      DAT_100b2c64c = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

