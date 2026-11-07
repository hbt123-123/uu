// rea decompile_all
// name: FUN_1004b6920
// address: 0x1004b6920
// body: available
// range: 0x1004b6920-0x1004b69f7 inclusive
// range: 0x1004b6a00-0x1004b6b7f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1004b6920(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_b8 [24];
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  long lVar3;
  
  uVar8 = param_1[5];
  uVar6 = param_1[4];
  uVar4 = param_1[6];
  uVar9 = param_2[5];
  uVar7 = param_2[4];
  uVar5 = param_2[6];
  local_a0 = uVar7;
  uStack_98 = uVar9;
  local_90 = uVar5;
  local_80 = uVar6;
  uStack_78 = uVar8;
  local_70 = uVar4;
  if (uVar4 >> 0x3c < 0xf) {
    if (0xe < uVar5 >> 0x3c) goto LAB_1004b6a0c;
    if (((int)uVar6 == (int)uVar7) && ((uVar7 ^ uVar6) >> 0x20 == 0)) {
      FUN_10007f314(&local_80,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
      FUN_10007f314(&local_a0,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
      uVar2 = uVar8;
      FUN_1000094a4(uVar8,uVar4,uVar9,uVar5);
      switchD_10004048c::caseD_6d(uVar7,uVar9,uVar5);
      if ((uVar2 & 1) != 0) goto LAB_1004b69c0;
    }
    else {
      FUN_10007f314(&local_80,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
      FUN_10007f314(&local_a0,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
      switchD_10004048c::caseD_6d(uVar7,uVar9,uVar5);
    }
LAB_1004b6b3c:
    switchD_10004048c::caseD_6d(uVar6,uVar8,uVar4);
  }
  else {
    if (uVar5 >> 0x3c < 0xf) {
LAB_1004b6a0c:
      FUN_10007f314(&local_80,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
      FUN_10007f314(&local_a0,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
      switchD_10004048c::caseD_6d(uVar6,uVar8,uVar4);
      uVar6 = uVar7;
      uVar8 = uVar9;
      uVar4 = uVar5;
      goto LAB_1004b6b3c;
    }
    FUN_10007f314(&local_80,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
    FUN_10007f314(&local_a0,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
LAB_1004b69c0:
    switchD_10004048c::caseD_6d(uVar6,uVar8,uVar4);
    if ((*(byte *)(param_2 + 1) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001004b69f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1004b69f8 + (ulong)(byte)(&DAT_10083016a)[*param_2] * 4))();
      return uVar6;
    }
    if (*param_1 == *param_2) {
      lVar3 = param_1[2];
      FUN_1000094a4(lVar3,param_1[3],param_2[2],param_2[3]);
      uVar1 = (uint)lVar3;
      goto LAB_1004b6b44;
    }
  }
  uVar1 = 0;
LAB_1004b6b44:
  return (ulong)(uVar1 & 1);
}

