// rea decompile_all
// name: thunk_FUN_1005a64f8
// address: 0x10058b0d8
// body: available
// range: 0x10058b0d8-0x10058b0db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint thunk_FUN_1005a64f8(long *param_1,long *param_2)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_220 [32];
  ulong uStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar8 = *param_1;
  lVar7 = *param_2;
  lVar9 = *(long *)(lVar8 + 0x10);
  if (lVar9 == *(long *)(lVar7 + 0x10)) {
    if (lVar9 != 0 && lVar8 != lVar7) {
      puVar10 = (undefined8 *)(lVar8 + 0x20);
      puVar11 = (undefined8 *)(lVar7 + 0x20);
      do {
        uStack_158 = puVar10[1];
        uStack_160 = *puVar10;
        uStack_148 = puVar10[3];
        uStack_150 = puVar10[2];
        uStack_138 = puVar10[5];
        uStack_140 = puVar10[4];
        uStack_128 = puVar10[7];
        uStack_130 = puVar10[6];
        uStack_118 = puVar10[9];
        uStack_120 = puVar10[8];
        uStack_108 = puVar10[0xb];
        uStack_110 = puVar10[10];
        uStack_f8 = puVar10[0xd];
        uStack_100 = puVar10[0xc];
        uStack_f0 = puVar10[0xe];
        if (lVar9 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1005a67f8);
          (*pcVar2)();
        }
        uStack_d8 = puVar11[1];
        uStack_e0 = *puVar11;
        uStack_c8 = puVar11[3];
        uStack_d0 = puVar11[2];
        uStack_b8 = puVar11[5];
        uStack_c0 = puVar11[4];
        uStack_a8 = puVar11[7];
        uStack_b0 = puVar11[6];
        uStack_98 = puVar11[9];
        uStack_a0 = puVar11[8];
        uStack_88 = puVar11[0xb];
        uStack_90 = puVar11[10];
        uStack_78 = puVar11[0xd];
        uStack_80 = puVar11[0xc];
        uStack_70 = puVar11[0xe];
        FUN_1005b2964(&uStack_160,&uStack_200);
        FUN_1005b2964(&uStack_e0,&uStack_200);
        puVar4 = &uStack_160;
        FUN_1005a3ed4(puVar4,&uStack_e0);
        FUN_1005b2998(&uStack_e0);
        FUN_1005b2998(&uStack_160);
        if (((ulong)puVar4 & 1) == 0) goto LAB_1005a6724;
        puVar10 = puVar10 + 0xf;
        puVar11 = puVar11 + 0xf;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    uVar5 = param_1[1];
    FUN_100570910(uVar5,param_2[1]);
    if ((uVar5 & 1) != 0) {
      lVar7 = param_1[6];
      uVar5 = param_1[5];
      lVar14 = param_1[8];
      lVar12 = param_1[7];
      lVar8 = param_2[6];
      lVar9 = param_2[5];
      lVar15 = param_2[8];
      lVar13 = param_2[7];
      uStack_200 = uVar5;
      lStack_1f8 = lVar7;
      lStack_1f0 = lVar12;
      lStack_1e8 = lVar14;
      lStack_180 = lVar9;
      lStack_178 = lVar8;
      lStack_170 = lVar13;
      lStack_168 = lVar15;
      if (lVar12 == 0) {
        if (lVar13 != 0) goto LAB_1005a66c4;
        FUN_10007f314(&uStack_200,auStack_220,&DAT_100aad070,&DAT_10083cc18);
        FUN_10007f314(&lStack_180,auStack_220,&DAT_100aad070,&DAT_10083cc18);
        FUN_100541944(uVar5,lVar7,0,lVar14);
LAB_1005a67a4:
        bVar1 = *(byte *)(param_2 + 9);
        if (*(byte *)(param_1 + 9) == 2) {
          if (bVar1 != 2) goto LAB_1005a6724;
        }
        else {
          uVar3 = 0;
          if ((bVar1 == 2) || (((bVar1 ^ *(byte *)(param_1 + 9)) & 1) != 0)) goto LAB_1005a6728;
        }
        uVar5 = param_1[2];
        FUN_1000094a4(uVar5,param_1[3],param_2[2],param_2[3]);
        if ((uVar5 & 1) != 0) {
          lVar9 = param_1[4];
          thunk_FUN_100511c8c(lVar9,param_2[4]);
          uVar3 = (uint)lVar9;
          goto LAB_1005a6728;
        }
      }
      else if (lVar13 == 0) {
LAB_1005a66c4:
        FUN_10007f314(&uStack_200,auStack_220,&DAT_100aad070,&DAT_10083cc18);
        FUN_10007f314(&lStack_180,auStack_220,&DAT_100aad070,&DAT_10083cc18);
        FUN_100541944(uVar5,lVar7,lVar12,lVar14);
        FUN_100541944(lVar9,lVar8,lVar13,lVar15);
      }
      else {
        FUN_10007f314(&uStack_200,auStack_220,&DAT_100aad070,&DAT_10083cc18);
        FUN_10007f314(&lStack_180,auStack_220,&DAT_100aad070,&DAT_10083cc18);
        uVar6 = uVar5;
        FUN_1005a7724(uVar5,lVar7,lVar12,lVar14,lVar9,lVar8,lVar13,lVar15);
        FUN_100541944(lVar9,lVar8,lVar13,lVar15);
        FUN_100541944(uVar5,lVar7,lVar12,lVar14);
        if ((uVar6 & 1) != 0) goto LAB_1005a67a4;
      }
    }
  }
LAB_1005a6724:
  uVar3 = 0;
LAB_1005a6728:
  return uVar3 & 1;
}

