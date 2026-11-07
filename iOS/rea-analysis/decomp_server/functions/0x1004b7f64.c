// rea decompile_all
// name: FUN_1004b7f64
// address: 0x1004b7f64
// body: available
// range: 0x1004b7f64-0x1004b81bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1004b7f64(int *param_1,int *param_2)

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
  undefined8 uVar3;
  
  uVar8 = *(ulong *)(param_1 + 0xc);
  uVar2 = *(ulong *)(param_1 + 10);
  uVar5 = *(ulong *)(param_1 + 0xe);
  uVar9 = *(ulong *)(param_2 + 0xc);
  uVar7 = *(ulong *)(param_2 + 10);
  uVar6 = *(ulong *)(param_2 + 0xe);
  local_a0 = uVar7;
  uStack_98 = uVar9;
  local_90 = uVar6;
  local_80 = uVar2;
  uStack_78 = uVar8;
  local_70 = uVar5;
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar6 >> 0x3c) goto LAB_1004b8068;
    if (((int)uVar2 == (int)uVar7) && ((uVar7 ^ uVar2) >> 0x20 == 0)) {
      FUN_10007f314(&local_80,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
      FUN_10007f314(&local_a0,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
      uVar4 = uVar8;
      FUN_1000094a4(uVar8,uVar5,uVar9,uVar6);
      switchD_10004048c::caseD_6d(uVar7,uVar9,uVar6);
      if ((uVar4 & 1) != 0) goto LAB_1004b8004;
    }
    else {
      FUN_10007f314(&local_80,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
      FUN_10007f314(&local_a0,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
      switchD_10004048c::caseD_6d(uVar7,uVar9,uVar6);
    }
LAB_1004b8190:
    switchD_10004048c::caseD_6d(uVar2,uVar8,uVar5);
  }
  else {
    if (uVar6 >> 0x3c < 0xf) {
LAB_1004b8068:
      FUN_10007f314(&local_80,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
      FUN_10007f314(&local_a0,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
      switchD_10004048c::caseD_6d(uVar2,uVar8,uVar5);
      uVar2 = uVar7;
      uVar8 = uVar9;
      uVar5 = uVar6;
      goto LAB_1004b8190;
    }
    FUN_10007f314(&local_80,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
    FUN_10007f314(&local_a0,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
LAB_1004b8004:
    switchD_10004048c::caseD_6d(uVar2,uVar8,uVar5);
    if (*param_1 == *param_2) {
      uVar2 = *(ulong *)(param_1 + 2);
      FUN_1004a0174(uVar2,(char)param_1[4],*(undefined8 *)(param_2 + 2),(char)param_2[4]);
      if (((uVar2 & 1) != 0) && (param_1[5] == param_2[5])) {
        uVar3 = *(undefined8 *)(param_1 + 6);
        FUN_1000094a4(uVar3,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 6),
                      *(undefined8 *)(param_2 + 8));
        uVar1 = (uint)uVar3;
        goto LAB_1004b8198;
      }
    }
  }
  uVar1 = 0;
LAB_1004b8198:
  return uVar1 & 1;
}

