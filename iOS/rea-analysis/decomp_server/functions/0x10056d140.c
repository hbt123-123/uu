// rea decompile_all
// name: FUN_10056d140
// address: 0x10056d140
// body: available
// range: 0x10056d140-0x10056d1fb inclusive
// range: 0x10056d204-0x10056d483 inclusive
// range: 0x10056d55c-0x10056d5a7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_10056d140(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined1 auStack_1f0 [128];
  long local_170;
  long lStack_168;
  long local_160;
  undefined8 uStack_158;
  ulong local_150;
  long lStack_148;
  ulong local_140;
  long lStack_138;
  undefined8 local_130;
  ulong uStack_128;
  ulong local_120;
  long lStack_118;
  ulong local_110;
  long lStack_108;
  ulong local_100;
  ulong uStack_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  undefined8 local_d8;
  ulong local_d0;
  long lStack_c8;
  ulong local_c0;
  long lStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  ulong local_a0;
  long lStack_98;
  ulong local_90;
  long lStack_88;
  long local_80;
  ulong uStack_78;
  
  lVar7 = param_1[2];
  if (lVar7 == param_2[2]) {
    if ((lVar7 == 0) || (param_1 == param_2)) {
      return (long *)0x1;
    }
    plVar11 = param_1 + 4;
    param_2 = param_2 + 4;
    while( true ) {
      lVar7 = lVar7 + -1;
      uStack_128 = plVar11[9];
      local_130 = plVar11[8];
      lStack_118 = plVar11[0xb];
      local_120 = plVar11[10];
      lStack_108 = plVar11[0xd];
      local_110 = plVar11[0xc];
      uStack_f8 = plVar11[0xf];
      local_100 = plVar11[0xe];
      lStack_168 = plVar11[1];
      local_170 = *plVar11;
      uStack_158 = plVar11[3];
      local_160 = plVar11[2];
      lStack_148 = plVar11[5];
      uVar12 = plVar11[4];
      lStack_138 = plVar11[7];
      local_140 = plVar11[6];
      lStack_e8 = param_2[1];
      local_f0 = *param_2;
      local_d8 = param_2[3];
      local_e0 = param_2[2];
      lStack_c8 = param_2[5];
      local_d0 = param_2[4];
      lStack_b8 = param_2[7];
      local_c0 = param_2[6];
      lStack_a8 = param_2[9];
      local_b0 = param_2[8];
      lStack_98 = param_2[0xb];
      local_a0 = param_2[10];
      lStack_88 = param_2[0xd];
      local_90 = param_2[0xc];
      uStack_78 = param_2[0xf];
      local_80 = param_2[0xe];
      local_150 = uVar12;
      if ((char)lStack_e8 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010056d1f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)*(int *)(&DAT_10056d5a8 + local_f0 * 4) + 0x10056d1ec))();
        return param_1;
      }
      if (local_170 != local_f0) {
        return (long *)0x0;
      }
      if ((char)local_d8 == '\x01') {
        if (local_e0 < 2) {
          if (local_e0 == 0) {
            if (local_160 != 0) {
              return (long *)0x0;
            }
          }
          else if (local_160 != 1) {
            return (long *)0x0;
          }
        }
        else if (local_e0 == 2) {
          if (local_160 != 2) {
            return (long *)0x0;
          }
        }
        else if (local_160 != 3) {
          return (long *)0x0;
        }
      }
      else if (local_160 != local_e0) {
        return (long *)0x0;
      }
      uStack_158._4_4_ = (int)((ulong)uStack_158 >> 0x20);
      local_d8._4_4_ = (int)((ulong)local_d8 >> 0x20);
      if (uStack_158._4_4_ != local_d8._4_4_) {
        return (long *)0x0;
      }
      if (((uVar12 != local_d0) || (lStack_148 != lStack_c8)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar12 & 1) == 0)) {
        return (long *)0x0;
      }
      if (((local_140 != local_c0) || (lStack_138 != lStack_b8)) &&
         (uVar12 = local_140,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (), (uVar12 & 1) == 0)) {
        return (long *)0x0;
      }
      lVar2 = lStack_a8;
      uVar12 = uStack_128;
      if ((int)local_130 != (int)local_b0) {
        return (long *)0x0;
      }
      if (local_130._4_1_ != local_b0._4_1_) {
        return (long *)0x0;
      }
      FUN_1005b2588(&local_170,auStack_1f0);
      FUN_1005b2588(&local_f0,auStack_1f0);
      FUN_10056acec(uVar12,lVar2);
      if (((uVar12 & 1) == 0) ||
         ((((local_120 != local_a0 || (lStack_118 != lStack_98)) &&
           (uVar12 = local_120,
           __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (), (uVar12 & 1) == 0)) ||
          (((local_110 != local_90 || (lStack_108 != lStack_88)) &&
           (uVar12 = local_110,
           __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (), (uVar12 & 1) == 0)))))) break;
      uVar3 = uStack_78;
      lVar2 = local_80;
      uVar1 = uStack_f8;
      uVar12 = local_100;
      if (uStack_f8 >> 0x3e == 3) {
        uVar8 = 0;
        if (((local_100 != 0) || (uStack_f8 != 0xc000000000000000)) ||
           ((uStack_78 >> 0x3e < 3 ||
            ((uVar8 = 0, local_80 != 0 || (uStack_78 != 0xc000000000000000)))))) goto LAB_10056d3bc;
LAB_10056d448:
        FUN_1005b25c4(&local_f0);
        param_1 = &local_170;
        FUN_1005b25c4(param_1);
      }
      else {
        uVar5 = (uint)(uStack_f8 >> 0x3e);
        if (uVar5 == 0) {
          uVar8 = uStack_f8 >> 0x30 & 0xff;
        }
        else if (uVar5 == 1) {
          iVar6 = (int)(local_100 >> 0x20);
          if (SBORROW4(iVar6,(int)local_100)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10056d5a4);
            (*pcVar4)();
          }
          uVar8 = (ulong)(iVar6 - (int)local_100);
        }
        else {
          uVar8 = *(long *)(local_100 + 0x18) - *(long *)(local_100 + 0x10);
          if (SBORROW8(*(long *)(local_100 + 0x18),*(long *)(local_100 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10056d5a8);
            (*pcVar4)();
          }
        }
LAB_10056d3bc:
        uVar5 = (uint)(uStack_78 >> 0x20);
        uVar9 = uVar5 >> 0x1e;
        if (uVar5 >> 0x1e < 2) {
          if (uVar9 == 0) {
            uVar10 = uStack_78 >> 0x30 & 0xff;
          }
          else {
            iVar6 = (int)((ulong)local_80 >> 0x20);
            if (SBORROW4(iVar6,(int)local_80)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10056d59c);
              (*pcVar4)();
            }
            uVar10 = (ulong)(iVar6 - (int)local_80);
          }
        }
        else {
          if (uVar9 != 2) {
            if (uVar8 != 0) break;
            goto LAB_10056d448;
          }
          uVar10 = *(long *)(local_80 + 0x18) - *(long *)(local_80 + 0x10);
          if (SBORROW8(*(long *)(local_80 + 0x18),*(long *)(local_80 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10056d5a0);
            (*pcVar4)();
          }
        }
        if (uVar8 != uVar10) break;
        if ((long)uVar8 < 1) goto LAB_10056d448;
        FUN_100008184(local_80,uStack_78);
        FUN_100009264(uVar12,uVar1,lVar2,uVar3);
        FUN_1005b25c4(&local_f0);
        param_1 = &local_170;
        FUN_1005b25c4(param_1);
        if ((uVar12 & 1) == 0) {
          return (long *)0x0;
        }
      }
      if (lVar7 == 0) {
        return (long *)0x1;
      }
      param_2 = param_2 + 0x10;
      plVar11 = plVar11 + 0x10;
    }
    FUN_1005b25c4(&local_f0);
    FUN_1005b25c4(&local_170);
  }
  return (long *)0x0;
}

