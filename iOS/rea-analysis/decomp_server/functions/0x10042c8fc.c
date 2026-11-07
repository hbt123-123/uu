// rea decompile_all
// name: FUN_10042c8fc
// address: 0x10042c8fc
// body: available
// range: 0x10042c8fc-0x10042cc7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10042c8fc(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  double dVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auStack_148 [40];
  double local_120;
  double dStack_118;
  ulong local_110;
  ulong uStack_108;
  ulong local_100;
  double dStack_f8;
  double local_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  double local_d0;
  double dStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  double local_a0;
  double dStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  
  uVar2 = *param_1;
  FUN_10042b4e8(uVar2,*param_2);
  if (((uVar2 & 1) != 0) && ((int)param_1[1] == *(int *)(param_2 + 1))) {
    dVar11 = (double)param_1[3];
    dVar9 = (double)param_1[2];
    uVar15 = param_1[5];
    uVar13 = param_1[4];
    dVar12 = (double)param_2[3];
    dVar10 = (double)param_2[2];
    uVar16 = param_2[5];
    uVar14 = param_2[4];
    uVar2 = param_1[6];
    uVar8 = param_2[6];
    local_d0 = dVar10;
    dStack_c8 = dVar12;
    local_c0 = uVar14;
    uStack_b8 = uVar16;
    local_b0 = uVar8;
    local_a0 = dVar9;
    dStack_98 = dVar11;
    local_90 = uVar13;
    uStack_88 = uVar15;
    local_80 = uVar2;
    if (((uVar2 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
      if ((uVar8 & 0x3000000000000000) == 0x3000000000000000) {
        FUN_10007f314(&local_a0,&local_120,&DAT_100a9ee98,&DAT_100825d70);
        FUN_10007f314(&local_d0,&local_120,&DAT_100a9ee98,&DAT_100825d70);
LAB_10042c9d0:
        FUN_1000407a8(dVar9,dVar11,uVar13,uVar15,uVar2);
        uVar2 = param_1[7];
        FUN_1000094a4(uVar2,param_1[8],param_2[7],param_2[8]);
        uVar1 = (uint)uVar2;
        goto LAB_10042cc5c;
      }
    }
    else if ((uVar8 & 0x3000000000000000) != 0x3000000000000000) {
      if ((uVar2 >> 0x3d & 1) == 0) {
        if ((uVar8 >> 0x3d & 1) == 0) {
          if (((dVar9 == dVar10) && (dVar11 == dVar12)) ||
             (dVar3 = dVar9,
             __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (dVar9,dVar11,dVar10,dVar12,0), ((ulong)dVar3 & 1) != 0)) {
            FUN_10007f314(&local_a0,&local_120,&DAT_100a9ee98,&DAT_100825d70);
            FUN_10007f314(&local_d0,&local_120,&DAT_100a9ee98,&DAT_100825d70);
            uVar4 = uVar13;
            uVar5 = uVar15;
            uVar6 = uVar14;
            uVar7 = uVar16;
            goto LAB_10042cbc8;
          }
LAB_10042cbf4:
          FUN_10007f314(&local_a0,&local_120,&DAT_100a9ee98,&DAT_100825d70);
          FUN_10007f314(&local_d0,&local_120,&DAT_100a9ee98,&DAT_100825d70);
          FUN_1000407a8(dVar10,dVar12,uVar14,uVar16,uVar8);
        }
        else {
LAB_10042cae8:
          FUN_10007f314(&local_a0,&local_120,&DAT_100a9ee98,&DAT_100825d70);
          FUN_10007f314(&local_d0,&local_120,&DAT_100a9ee98,&DAT_100825d70);
          FUN_1000407a8(dVar10,dVar12,uVar14,uVar16,uVar8);
        }
      }
      else {
        if ((uVar8 >> 0x3d & 1) == 0) goto LAB_10042cae8;
        if (((dVar9 != dVar10) || (dVar11 != dVar12)) || ((int)uVar13 != (int)uVar14))
        goto LAB_10042cbf4;
        FUN_10007f314(&local_a0,&local_120,&DAT_100a9ee98,&DAT_100825d70);
        FUN_10007f314(&local_d0,&local_120,&DAT_100a9ee98,&DAT_100825d70);
        uVar5 = uVar2 & 0xdfffffffffffffff;
        uVar7 = uVar8 & 0xdfffffffffffffff;
        uVar4 = uVar15;
        uVar6 = uVar16;
LAB_10042cbc8:
        FUN_1000094a4(uVar4,uVar5,uVar6,uVar7);
        FUN_1000407a8(dVar10,dVar12,uVar14,uVar16,uVar8);
        if ((uVar4 & 1) != 0) goto LAB_10042c9d0;
      }
      FUN_1000407a8(dVar9,dVar11,uVar13,uVar15,uVar2);
      goto LAB_10042cc58;
    }
    local_120 = dVar9;
    dStack_118 = dVar11;
    local_110 = uVar13;
    uStack_108 = uVar15;
    local_100 = uVar2;
    dStack_f8 = dVar10;
    local_f0 = dVar12;
    uStack_e8 = uVar14;
    local_e0 = uVar16;
    uStack_d8 = uVar8;
    FUN_10007f314(&local_a0,auStack_148,&DAT_100a9ee98,&DAT_100825d70);
    FUN_10007f314(&local_d0,auStack_148,&DAT_100a9ee98,&DAT_100825d70);
    FUN_100040bb4(&local_120,&DAT_100a9f368,&DAT_100827728);
  }
LAB_10042cc58:
  uVar1 = 0;
LAB_10042cc5c:
  return uVar1 & 1;
}

