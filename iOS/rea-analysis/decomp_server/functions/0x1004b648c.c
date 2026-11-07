// rea decompile_all
// name: FUN_1004b648c
// address: 0x1004b648c
// body: available
// range: 0x1004b648c-0x1004b66cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1004b648c(int *param_1,int *param_2)

{
  uint uVar1;
  ulong uVar3;
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
  undefined8 uVar2;
  
  uVar8 = *(ulong *)(param_1 + 0xc);
  uVar6 = *(ulong *)(param_1 + 10);
  uVar4 = *(ulong *)(param_1 + 0xe);
  uVar9 = *(ulong *)(param_2 + 0xc);
  uVar7 = *(ulong *)(param_2 + 10);
  uVar5 = *(ulong *)(param_2 + 0xe);
  local_a0 = uVar7;
  uStack_98 = uVar9;
  local_90 = uVar5;
  local_80 = uVar6;
  uStack_78 = uVar8;
  local_70 = uVar4;
  if (uVar4 >> 0x3c < 0xf) {
    if (0xe < uVar5 >> 0x3c) goto LAB_1004b6578;
    if (((int)uVar6 == (int)uVar7) && ((uVar7 ^ uVar6) >> 0x20 == 0)) {
      FUN_10007f314(&local_80,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
      FUN_10007f314(&local_a0,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
      uVar3 = uVar8;
      FUN_1000094a4(uVar8,uVar4,uVar9,uVar5);
      switchD_10004048c::caseD_6d(uVar7,uVar9,uVar5);
      if ((uVar3 & 1) != 0) goto LAB_1004b652c;
    }
    else {
      FUN_10007f314(&local_80,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
      FUN_10007f314(&local_a0,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
      switchD_10004048c::caseD_6d(uVar7,uVar9,uVar5);
    }
LAB_1004b66a0:
    switchD_10004048c::caseD_6d(uVar6,uVar8,uVar4);
  }
  else {
    if (uVar5 >> 0x3c < 0xf) {
LAB_1004b6578:
      FUN_10007f314(&local_80,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
      FUN_10007f314(&local_a0,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
      switchD_10004048c::caseD_6d(uVar6,uVar8,uVar4);
      uVar6 = uVar7;
      uVar8 = uVar9;
      uVar4 = uVar5;
      goto LAB_1004b66a0;
    }
    FUN_10007f314(&local_80,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
    FUN_10007f314(&local_a0,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
LAB_1004b652c:
    switchD_10004048c::caseD_6d(uVar6,uVar8,uVar4);
    if (*param_1 == *param_2) {
      uVar6 = *(ulong *)(param_1 + 2);
      FUN_1000094a4(uVar6,*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_2 + 2),
                    *(undefined8 *)(param_2 + 4));
      if ((uVar6 & 1) != 0) {
        uVar2 = *(undefined8 *)(param_1 + 6);
        FUN_1000094a4(uVar2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 6),
                      *(undefined8 *)(param_2 + 8));
        uVar1 = (uint)uVar2;
        goto LAB_1004b66a8;
      }
    }
  }
  uVar1 = 0;
LAB_1004b66a8:
  return uVar1 & 1;
}

