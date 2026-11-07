// rea decompile_all
// name: FUN_100693e10
// address: 0x100693e10
// body: available
// range: 0x100693e10-0x100694017 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100694014 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100693e10(char *param_1,long param_2,ulong param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined1 auStack_320 [520];
  undefined8 local_118;
  char local_110 [72];
  char *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar4 = (uint)param_3;
  if (uVar4 < 0x401) {
    if (1 < uVar4) {
      uVar9 = (ulong)(uVar4 >> 1);
      param_2 = param_2 + 1;
      puVar10 = auStack_320;
      do {
        local_118 = (char *)(CONCAT62((int6)((ulong)local_118 >> 0x10),*(undefined2 *)(param_2 + -1)
                                     ) & 0xffffffff0000ffff);
        local_c8 = (char *)0x0;
        lVar3 = _strtol((char *)&local_118,&local_c8,0x10);
        *puVar10 = (char)lVar3;
        param_2 = param_2 + 2;
        uVar9 = uVar9 - 1;
        puVar10 = puVar10 + 1;
      } while (uVar9 != 0);
    }
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
    std::string::assign(param_1,(ulong)auStack_320);
  }
  else {
    iVar2 = 5;
    ___xlogger_IsEnabledFor_impl();
    if (iVar2 != 0) {
      FUN_100695740(auStack_320,5,"mars::comm",
                    "/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/strutil.cc",
                    "Str2Hex",0xf2,0,0);
      FUN_100695934(auStack_320,"false");
      local_118 = (char *)0x0;
      uVar9 = 8;
      do {
        uVar7 = uVar9;
        uVar4 = (uint)param_3;
        local_110[uVar7 - 8] =
             "ZYXWVUTSRQPONMLKJIHGFEDCBA9876543210123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
             [uVar4 + (int)((param_3 & 0xffffffff) / 10) * -10 + 0x23];
        uVar9 = uVar7 + 1;
        param_3 = (param_3 & 0xffffffff) / 10;
      } while (9 < uVar4);
      *(char *)((long)&local_118 + uVar7 + 1) = '\0';
      local_118 = local_110;
      if (8 < uVar7) {
        pcVar8 = local_110;
        pcVar5 = local_110 + (uVar7 - 8);
        do {
          pcVar8 = pcVar8 + 1;
          cVar1 = *pcVar5;
          pcVar6 = pcVar5 + -1;
          *pcVar5 = pcVar8[-1];
          pcVar8[-1] = cVar1;
          pcVar5 = pcVar6;
        } while (pcVar8 < pcVar6);
      }
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      local_b0 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      local_90 = 0;
      uStack_78 = 0;
      local_80 = 0;
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      local_60 = 0;
      local_50 = 0;
      local_c8 = (char *)&local_118;
      FUN_100695b54();
      thunk_FUN_1006957ac(auStack_320);
    }
    FUN_1006928dc(param_1,"");
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

