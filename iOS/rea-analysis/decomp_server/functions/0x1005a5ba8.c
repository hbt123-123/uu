// rea decompile_all
// name: FUN_1005a5ba8
// address: 0x1005a5ba8
// body: available
// range: 0x1005a5ba8-0x1005a601b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1005a5ba8(ulong *param_1,undefined8 *param_2)

{
  byte bVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined1 auStack_1a0 [48];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined1 uStack_158;
  undefined7 local_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined1 uStack_148;
  ulong local_140;
  ulong uStack_138;
  ulong local_130;
  undefined1 uStack_128;
  undefined7 local_127;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  long local_100;
  undefined8 uStack_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  ulong local_c8;
  ulong uStack_c0;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined8 local_b0;
  long lStack_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined1 local_87;
  undefined8 local_80;
  long lStack_78;
  undefined1 local_70;
  
  bVar1 = *(byte *)(param_2 + 4);
  if ((byte)param_1[4] == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if ((((byte)param_1[4] ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  uVar11 = param_1[6];
  uVar8 = param_1[5];
  uVar17 = param_1[8];
  uVar14 = param_1[7];
  uVar12 = param_2[6];
  uVar9 = param_2[5];
  uVar10 = param_2[8];
  lVar15 = param_2[7];
  local_110 = uVar9;
  uStack_108 = uVar12;
  local_100 = lVar15;
  uStack_f8 = uVar10;
  local_f0 = uVar8;
  uStack_e8 = uVar11;
  local_e0 = uVar14;
  uStack_d8 = uVar17;
  if (uVar14 == 0) {
    if (lVar15 != 0) goto LAB_1005a5cc4;
    FUN_10007f314(&local_f0,&local_98,&DAT_100aad070,&DAT_10083cc18);
    FUN_10007f314(&local_110,&local_98,&DAT_100aad070,&DAT_10083cc18);
    FUN_100541944(uVar8,uVar11,0,uVar17);
LAB_1005a5d9c:
    bVar1 = *(byte *)(param_2 + 9);
    if ((byte)param_1[9] == 2) {
      if (bVar1 == 2) {
LAB_1005a5dcc:
        uVar11 = param_1[0xb];
        uVar8 = param_1[10];
        uVar14 = param_1[0xc];
        uStack_128 = (undefined1)param_1[0xd];
        uStack_11f = (undefined7)*(undefined8 *)((long)param_1 + 0x71);
        uStack_118 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x71) >> 0x38);
        uVar4 = uStack_118;
        local_127 = (undefined7)*(undefined8 *)((long)param_1 + 0x69);
        uStack_120 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x69) >> 0x38);
        uVar13 = param_2[0xb];
        uVar10 = param_2[10];
        uVar16 = param_2[0xc];
        uStack_158 = (undefined1)param_2[0xd];
        uStack_14f = (undefined7)*(undefined8 *)((long)param_2 + 0x71);
        uStack_148 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x71) >> 0x38);
        uVar3 = uStack_148;
        local_157 = (undefined7)*(undefined8 *)((long)param_2 + 0x69);
        uStack_150 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x69) >> 0x38);
        uVar12 = CONCAT71(local_127,uStack_128);
        lVar2 = CONCAT71(uStack_11f,uStack_120);
        uVar9 = CONCAT71(local_157,uStack_158);
        lVar15 = CONCAT71(uStack_14f,uStack_150);
        local_170 = uVar10;
        uStack_168 = uVar13;
        local_160 = uVar16;
        local_140 = uVar8;
        uStack_138 = uVar11;
        local_130 = uVar14;
        if (lVar2 == 1) {
          if (lVar15 == 1) {
            FUN_10007f314(&local_140,&local_98,&DAT_100aad080,&DAT_10083cc20);
            FUN_10007f314(&local_170,&local_98,&DAT_100aad080,&DAT_10083cc20);
            FUN_1005419bc(uVar8,uVar11,uVar14,uVar12,1,uVar4);
LAB_1005a5fdc:
            uVar8 = *param_1;
            FUN_1005707f8(uVar8,*param_2);
            if ((uVar8 & 1) != 0) {
              uVar8 = param_1[1];
              FUN_1000094a4(uVar8,param_1[2],param_2[1],param_2[2]);
              if ((uVar8 & 1) != 0) {
                uVar8 = param_1[3];
                thunk_FUN_100511c8c(uVar8,param_2[3]);
                uVar5 = (uint)uVar8;
                goto LAB_1005a5d28;
              }
            }
          }
          else {
LAB_1005a5e88:
            FUN_10007f314(&local_140,&local_98,&DAT_100aad080,&DAT_10083cc20);
            FUN_10007f314(&local_170,&local_98,&DAT_100aad080,&DAT_10083cc20);
            FUN_1005419bc(uVar8,uVar11,uVar14,uVar12,lVar2,uVar4);
            FUN_1005419bc(uVar10,uVar13,uVar16,uVar9,lVar15,uVar3);
          }
        }
        else {
          if (lVar15 == 1) goto LAB_1005a5e88;
          local_88 = (undefined1)uVar16;
          local_87 = (undefined1)((ulong)uVar16 >> 8);
          local_70 = uStack_148;
          local_b8 = (undefined1)uVar14;
          local_b7 = (undefined1)(uVar14 >> 8);
          local_a0 = uStack_118;
          local_c8 = uVar8;
          uStack_c0 = uVar11;
          local_b0 = uVar12;
          lStack_a8 = lVar2;
          local_98 = uVar10;
          uStack_90 = uVar13;
          local_80 = uVar9;
          lStack_78 = lVar15;
          FUN_10007f314(&local_140,auStack_1a0,&DAT_100aad080,&DAT_10083cc20);
          FUN_10007f314(&local_170,auStack_1a0,&DAT_100aad080,&DAT_10083cc20);
          puVar7 = &local_c8;
          FUN_1005a4228(puVar7,&local_98);
          FUN_1005419bc(uVar10,uVar13,uVar16,uVar9,lVar15,uVar3);
          FUN_1005419bc(uVar8,uVar11,uVar14,uVar12,lVar2,uVar4);
          if (((ulong)puVar7 & 1) != 0) goto LAB_1005a5fdc;
        }
      }
    }
    else if ((bVar1 != 2) && ((((byte)param_1[9] ^ bVar1) & 1) == 0)) goto LAB_1005a5dcc;
  }
  else {
    if (lVar15 != 0) {
      FUN_10007f314(&local_f0,&local_98,&DAT_100aad070,&DAT_10083cc18);
      FUN_10007f314(&local_110,&local_98,&DAT_100aad070,&DAT_10083cc18);
      uVar6 = uVar8;
      FUN_1005a7724(uVar8,uVar11,uVar14,uVar17,uVar9,uVar12,lVar15,uVar10);
      FUN_100541944(uVar9,uVar12,lVar15,uVar10);
      FUN_100541944(uVar8,uVar11,uVar14,uVar17);
      if ((uVar6 & 1) != 0) goto LAB_1005a5d9c;
      goto LAB_1005a5d24;
    }
LAB_1005a5cc4:
    FUN_10007f314(&local_f0,&local_98,&DAT_100aad070,&DAT_10083cc18);
    FUN_10007f314(&local_110,&local_98,&DAT_100aad070,&DAT_10083cc18);
    FUN_100541944(uVar8,uVar11,uVar14,uVar17);
    FUN_100541944(uVar9,uVar12,lVar15,uVar10);
  }
LAB_1005a5d24:
  uVar5 = 0;
LAB_1005a5d28:
  return uVar5 & 1;
}

