// rea decompile_all
// name: FUN_1006a05cc
// address: 0x1006a05cc
// body: available
// range: 0x1006a05cc-0x1006a088f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006a088c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a05cc(int *param_1,undefined8 *param_2,char *param_3)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  size_t sVar6;
  undefined **ppuVar7;
  uint extraout_w8;
  ulong uVar8;
  undefined *puVar9;
  undefined1 auStack_1e0 [32];
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  char local_160 [264];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  if ((*(byte *)((long)param_1 + 0x1b1) & 1) != 0) goto LAB_1006a0734;
  piVar3 = ___error();
  iVar1 = *piVar3;
  ppuVar4 = &PTR___tlv_bootstrap_100abd878;
  (*(code *)PTR___tlv_bootstrap_100abd878)();
  if (((ulong)*ppuVar4 & 1) == 0) {
    FUN_1006a76ec();
  }
  ppuVar4 = &PTR___tlv_bootstrap_100abd848;
  (*(code *)PTR___tlv_bootstrap_100abd848)();
  *(int *)ppuVar4 = *(int *)ppuVar4 + 1;
  if ((char)param_1[0x6c] == '\x01') {
    FUN_1006af33c(param_2,param_3);
  }
  if (DAT_100b3a868 != (code *)0x0) {
    (*DAT_100b3a868)(param_2,param_3);
  }
  ppuVar5 = &PTR___tlv_bootstrap_100abd860;
  (*(code *)PTR___tlv_bootstrap_100abd860)(*(int *)ppuVar4);
  if (extraout_w8 < 2) {
LAB_1006a06b4:
    if (*(char *)((long)ppuVar5 + 0x17) < '\0') {
      if (ppuVar5[1] != (undefined *)0x0) {
        ppuVar7 = (undefined **)*ppuVar5;
        goto LAB_1006a06d4;
      }
    }
    else {
      ppuVar7 = ppuVar5;
      if (*(char *)((long)ppuVar5 + 0x17) != '\0') {
LAB_1006a06d4:
        FUN_1006a0890(param_1,ppuVar7);
        if (*(char *)((long)ppuVar5 + 0x17) < '\0') {
          **ppuVar5 = 0;
          ppuVar5[1] = (undefined *)0x0;
        }
        else {
          *(undefined1 *)ppuVar5 = 0;
          *(undefined1 *)((long)ppuVar5 + 0x17) = 0;
        }
      }
    }
    if (*param_1 == 1) {
      FUN_1006a0994();
    }
    else {
      FUN_1006a0ab4(param_1,param_2,param_3);
    }
LAB_1006a0720:
    *(int *)ppuVar4 = *(int *)ppuVar4 + -1;
  }
  else {
    puVar9 = ppuVar5[1];
    if (-1 < (char)*(byte *)((long)ppuVar5 + 0x17)) {
      puVar9 = (undefined *)(ulong)*(byte *)((long)ppuVar5 + 0x17);
    }
    if (puVar9 != (undefined *)0x0) goto LAB_1006a06b4;
    if (extraout_w8 < 0xb) {
      std::string::resize((ulong)ppuVar5,'\0');
      uStack_198 = param_2[5];
      local_1a0 = param_2[4];
      uStack_188 = param_2[7];
      uStack_190 = param_2[6];
      uStack_178 = param_2[9];
      local_180 = param_2[8];
      local_170 = param_2[10];
      uStack_1b8 = param_2[1];
      uStack_1a8 = param_2[3];
      uStack_1b0 = param_2[2];
      _local_1c0 = CONCAT44((int)((ulong)*param_2 >> 0x20),5);
      local_160[0xe8] = '\0';
      local_160[0xe9] = '\0';
      local_160[0xea] = '\0';
      local_160[0xeb] = '\0';
      local_160[0xec] = '\0';
      local_160[0xed] = '\0';
      local_160[0xee] = '\0';
      local_160[0xef] = '\0';
      local_160[0xe0] = '\0';
      local_160[0xe1] = '\0';
      local_160[0xe2] = '\0';
      local_160[0xe3] = '\0';
      local_160[0xe4] = '\0';
      local_160[0xe5] = '\0';
      local_160[0xe6] = '\0';
      local_160[0xe7] = '\0';
      local_160[0xf8] = '\0';
      local_160[0xf9] = '\0';
      local_160[0xfa] = '\0';
      local_160[0xfb] = '\0';
      local_160[0xfc] = '\0';
      local_160[0xfd] = '\0';
      local_160[0xfe] = '\0';
      local_160[0xff] = '\0';
      local_160[0xf0] = '\0';
      local_160[0xf1] = '\0';
      local_160[0xf2] = '\0';
      local_160[0xf3] = '\0';
      local_160[0xf4] = '\0';
      local_160[0xf5] = '\0';
      local_160[0xf6] = '\0';
      local_160[0xf7] = '\0';
      local_160[200] = '\0';
      local_160[0xc9] = '\0';
      local_160[0xca] = '\0';
      local_160[0xcb] = '\0';
      local_160[0xcc] = '\0';
      local_160[0xcd] = '\0';
      local_160[0xce] = '\0';
      local_160[0xcf] = '\0';
      local_160[0xc0] = '\0';
      local_160[0xc1] = '\0';
      local_160[0xc2] = '\0';
      local_160[0xc3] = '\0';
      local_160[0xc4] = '\0';
      local_160[0xc5] = '\0';
      local_160[0xc6] = '\0';
      local_160[199] = '\0';
      local_160[0xd8] = '\0';
      local_160[0xd9] = '\0';
      local_160[0xda] = '\0';
      local_160[0xdb] = '\0';
      local_160[0xdc] = '\0';
      local_160[0xdd] = '\0';
      local_160[0xde] = '\0';
      local_160[0xdf] = '\0';
      local_160[0xd0] = '\0';
      local_160[0xd1] = '\0';
      local_160[0xd2] = '\0';
      local_160[0xd3] = '\0';
      local_160[0xd4] = '\0';
      local_160[0xd5] = '\0';
      local_160[0xd6] = '\0';
      local_160[0xd7] = '\0';
      local_160[0xa8] = '\0';
      local_160[0xa9] = '\0';
      local_160[0xaa] = '\0';
      local_160[0xab] = '\0';
      local_160[0xac] = '\0';
      local_160[0xad] = '\0';
      local_160[0xae] = '\0';
      local_160[0xaf] = '\0';
      local_160[0xa0] = '\0';
      local_160[0xa1] = '\0';
      local_160[0xa2] = '\0';
      local_160[0xa3] = '\0';
      local_160[0xa4] = '\0';
      local_160[0xa5] = '\0';
      local_160[0xa6] = '\0';
      local_160[0xa7] = '\0';
      local_160[0xb8] = '\0';
      local_160[0xb9] = '\0';
      local_160[0xba] = '\0';
      local_160[0xbb] = '\0';
      local_160[0xbc] = '\0';
      local_160[0xbd] = '\0';
      local_160[0xbe] = '\0';
      local_160[0xbf] = '\0';
      local_160[0xb0] = '\0';
      local_160[0xb1] = '\0';
      local_160[0xb2] = '\0';
      local_160[0xb3] = '\0';
      local_160[0xb4] = '\0';
      local_160[0xb5] = '\0';
      local_160[0xb6] = '\0';
      local_160[0xb7] = '\0';
      local_160[0x88] = '\0';
      local_160[0x89] = '\0';
      local_160[0x8a] = '\0';
      local_160[0x8b] = '\0';
      local_160[0x8c] = '\0';
      local_160[0x8d] = '\0';
      local_160[0x8e] = '\0';
      local_160[0x8f] = '\0';
      local_160[0x80] = '\0';
      local_160[0x81] = '\0';
      local_160[0x82] = '\0';
      local_160[0x83] = '\0';
      local_160[0x84] = '\0';
      local_160[0x85] = '\0';
      local_160[0x86] = '\0';
      local_160[0x87] = '\0';
      local_160[0x98] = '\0';
      local_160[0x99] = '\0';
      local_160[0x9a] = '\0';
      local_160[0x9b] = '\0';
      local_160[0x9c] = '\0';
      local_160[0x9d] = '\0';
      local_160[0x9e] = '\0';
      local_160[0x9f] = '\0';
      local_160[0x90] = '\0';
      local_160[0x91] = '\0';
      local_160[0x92] = '\0';
      local_160[0x93] = '\0';
      local_160[0x94] = '\0';
      local_160[0x95] = '\0';
      local_160[0x96] = '\0';
      local_160[0x97] = '\0';
      local_160[0x68] = '\0';
      local_160[0x69] = '\0';
      local_160[0x6a] = '\0';
      local_160[0x6b] = '\0';
      local_160[0x6c] = '\0';
      local_160[0x6d] = '\0';
      local_160[0x6e] = '\0';
      local_160[0x6f] = '\0';
      local_160[0x60] = '\0';
      local_160[0x61] = '\0';
      local_160[0x62] = '\0';
      local_160[99] = '\0';
      local_160[100] = '\0';
      local_160[0x65] = '\0';
      local_160[0x66] = '\0';
      local_160[0x67] = '\0';
      local_160[0x78] = '\0';
      local_160[0x79] = '\0';
      local_160[0x7a] = '\0';
      local_160[0x7b] = '\0';
      local_160[0x7c] = '\0';
      local_160[0x7d] = '\0';
      local_160[0x7e] = '\0';
      local_160[0x7f] = '\0';
      local_160[0x70] = '\0';
      local_160[0x71] = '\0';
      local_160[0x72] = '\0';
      local_160[0x73] = '\0';
      local_160[0x74] = '\0';
      local_160[0x75] = '\0';
      local_160[0x76] = '\0';
      local_160[0x77] = '\0';
      local_160[0x48] = '\0';
      local_160[0x49] = '\0';
      local_160[0x4a] = '\0';
      local_160[0x4b] = '\0';
      local_160[0x4c] = '\0';
      local_160[0x4d] = '\0';
      local_160[0x4e] = '\0';
      local_160[0x4f] = '\0';
      local_160[0x40] = '\0';
      local_160[0x41] = '\0';
      local_160[0x42] = '\0';
      local_160[0x43] = '\0';
      local_160[0x44] = '\0';
      local_160[0x45] = '\0';
      local_160[0x46] = '\0';
      local_160[0x47] = '\0';
      local_160[0x58] = '\0';
      local_160[0x59] = '\0';
      local_160[0x5a] = '\0';
      local_160[0x5b] = '\0';
      local_160[0x5c] = '\0';
      local_160[0x5d] = '\0';
      local_160[0x5e] = '\0';
      local_160[0x5f] = '\0';
      local_160[0x50] = '\0';
      local_160[0x51] = '\0';
      local_160[0x52] = '\0';
      local_160[0x53] = '\0';
      local_160[0x54] = '\0';
      local_160[0x55] = '\0';
      local_160[0x56] = '\0';
      local_160[0x57] = '\0';
      local_160[0x28] = '\0';
      local_160[0x29] = '\0';
      local_160[0x2a] = '\0';
      local_160[0x2b] = '\0';
      local_160[0x2c] = '\0';
      local_160[0x2d] = '\0';
      local_160[0x2e] = '\0';
      local_160[0x2f] = '\0';
      local_160[0x20] = '\0';
      local_160[0x21] = '\0';
      local_160[0x22] = '\0';
      local_160[0x23] = '\0';
      local_160[0x24] = '\0';
      local_160[0x25] = '\0';
      local_160[0x26] = '\0';
      local_160[0x27] = '\0';
      local_160[0x38] = '\0';
      local_160[0x39] = '\0';
      local_160[0x3a] = '\0';
      local_160[0x3b] = '\0';
      local_160[0x3c] = '\0';
      local_160[0x3d] = '\0';
      local_160[0x3e] = '\0';
      local_160[0x3f] = '\0';
      local_160[0x30] = '\0';
      local_160[0x31] = '\0';
      local_160[0x32] = '\0';
      local_160[0x33] = '\0';
      local_160[0x34] = '\0';
      local_160[0x35] = '\0';
      local_160[0x36] = '\0';
      local_160[0x37] = '\0';
      local_160[8] = '\0';
      local_160[9] = '\0';
      local_160[10] = '\0';
      local_160[0xb] = '\0';
      local_160[0xc] = '\0';
      local_160[0xd] = '\0';
      local_160[0xe] = '\0';
      local_160[0xf] = '\0';
      local_160[0] = '\0';
      local_160[1] = '\0';
      local_160[2] = '\0';
      local_160[3] = '\0';
      local_160[4] = '\0';
      local_160[5] = '\0';
      local_160[6] = '\0';
      local_160[7] = '\0';
      local_160[0x18] = '\0';
      local_160[0x19] = '\0';
      local_160[0x1a] = '\0';
      local_160[0x1b] = '\0';
      local_160[0x1c] = '\0';
      local_160[0x1d] = '\0';
      local_160[0x1e] = '\0';
      local_160[0x1f] = '\0';
      local_160[0x10] = '\0';
      local_160[0x11] = '\0';
      local_160[0x12] = '\0';
      local_160[0x13] = '\0';
      local_160[0x14] = '\0';
      local_160[0x15] = '\0';
      local_160[0x16] = '\0';
      local_160[0x17] = '\0';
      _snprintf(local_160,0x100,"ERROR!!! xlogger_appender Recursive calls!!!, count:%u");
      ppuVar7 = (undefined **)*ppuVar5;
      if (-1 < *(char *)((long)ppuVar5 + 0x17)) {
        ppuVar7 = ppuVar5;
      }
      FUN_1006929f8(auStack_1e0,ppuVar7,0,0x1000);
      FUN_1006a7874(&local_1c0,local_160,auStack_1e0);
      puVar9 = ppuVar5[2];
      uVar8 = ((ulong)puVar9 & 0x7fffffffffffffff) - 1;
      if (-1 < *(char *)((long)ppuVar5 + 0x17)) {
        uVar8 = 0x16;
      }
      sVar6 = _strnlen(param_3,0x1000);
      if (uVar8 < sVar6) {
        cVar2 = (char)((ulong)puVar9 >> 0x38);
      }
      else {
        std::string::append((char *)ppuVar5);
        cVar2 = *(char *)((long)ppuVar5 + 0x17);
      }
      ppuVar7 = (undefined **)*ppuVar5;
      if (-1 < cVar2) {
        ppuVar7 = ppuVar5;
      }
      FUN_1006af33c(&local_1c0,ppuVar7);
      FUN_100692a48(auStack_1e0);
      goto LAB_1006a0720;
    }
  }
  piVar3 = ___error();
  *piVar3 = iVar1;
LAB_1006a0734:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

