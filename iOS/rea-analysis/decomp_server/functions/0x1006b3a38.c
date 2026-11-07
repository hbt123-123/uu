// rea decompile_all
// name: FUN_1006b3a38
// address: 0x1006b3a38
// body: available
// range: 0x1006b3a38-0x1006b3f8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006b3f8c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006b3a38(char *param_1,ulong param_2,long param_3,ulong param_4,int param_5)

{
  uint uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  char *pcVar14;
  undefined1 *puVar30;
  undefined8 uVar31;
  uint uVar32;
  long lVar33;
  char *pcVar34;
  ulong uVar35;
  ulong uVar36;
  byte *pbVar37;
  ulong uVar38;
  ulong uVar39;
  undefined8 *puVar40;
  undefined4 *puVar41;
  ulong uVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  char cVar63;
  char cVar65;
  char cVar66;
  int iVar64;
  char cVar67;
  char cVar68;
  char cVar70;
  char cVar71;
  int iVar69;
  char cVar72;
  char cVar73;
  char cVar75;
  char cVar76;
  int iVar74;
  char cVar77;
  char cVar78;
  char cVar80;
  char cVar81;
  int iVar79;
  char cVar82;
  char cVar83;
  char cVar85;
  char cVar86;
  int iVar84;
  char cVar87;
  char cVar88;
  char cVar90;
  char cVar91;
  int iVar89;
  char cVar92;
  char cVar93;
  char cVar95;
  char cVar96;
  int iVar94;
  char cVar97;
  char cVar98;
  char cVar100;
  char cVar101;
  int iVar99;
  char cVar102;
  char cVar103;
  char cVar105;
  char cVar106;
  int iVar104;
  char cVar107;
  char cVar108;
  char cVar110;
  char cVar111;
  int iVar109;
  char cVar112;
  char cVar113;
  char cVar115;
  char cVar116;
  int iVar114;
  char cVar117;
  char cVar118;
  char cVar120;
  char cVar121;
  int iVar119;
  char cVar122;
  char cVar123;
  char cVar124;
  char cVar125;
  char cVar126;
  char cVar127;
  char cVar128;
  char cVar129;
  char cVar130;
  char cVar131;
  char cVar132;
  char cVar133;
  char cVar134;
  char cVar135;
  char cVar136;
  char cVar137;
  char cVar138;
  char cVar139;
  char cVar140;
  char cVar141;
  char cVar142;
  char cVar143;
  char cVar144;
  char cVar145;
  char cVar146;
  char cVar147;
  char cVar148;
  char cVar149;
  char cVar150;
  char cVar151;
  char cVar152;
  char cVar153;
  char cVar154;
  char cVar155;
  char cVar156;
  char cVar157;
  char cVar158;
  char cVar159;
  char cVar160;
  char cVar161;
  char cVar162;
  char cVar163;
  char cVar164;
  char cVar165;
  char cVar166;
  char cVar167;
  char cVar168;
  char cVar169;
  char cVar170;
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined4 local_2f4;
  char local_2ee [64];
  char local_2ae [191];
  char local_1ef;
  undefined8 local_1ee;
  undefined1 auStack_1e2 [4];
  undefined8 auStack_1de [2];
  undefined1 auStack_1c8 [52];
  undefined1 auStack_194 [64];
  undefined1 auStack_154 [236];
  long local_68;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  char *pcVar25;
  char *pcVar26;
  char *pcVar27;
  char *pcVar28;
  char *pcVar29;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar32 = (uint)param_4;
  if (0xff < uVar32) goto LAB_1006b3e70;
  local_1ef = '\0';
  uVar1 = param_5 + 1;
  if (1 < uVar1) {
    if (uVar1 < 5) {
      uVar36 = 1;
    }
    else {
      uVar42 = (ulong)uVar1 - 1;
      if (uVar1 < 0x21) {
        uVar35 = 0;
        uVar36 = 1;
      }
      else {
        uVar35 = uVar42 & 0xffffffffffffffe0;
        uVar36 = uVar35 | 1;
        iVar59 = 0xf;
        iVar61 = 0x10;
        iVar62 = 0xd;
        iVar60 = 0xe;
        iVar74 = 0xb;
        iVar79 = 0xc;
        iVar64 = 9;
        iVar69 = 10;
        iVar94 = 7;
        iVar99 = 8;
        iVar84 = 5;
        iVar89 = 6;
        iVar114 = 3;
        iVar119 = 4;
        iVar104 = 1;
        iVar109 = 2;
        puVar40 = auStack_1de;
        uVar38 = uVar35;
        do {
          auVar171._0_4_ = uVar1 - iVar104;
          auVar171._4_4_ = uVar1 - iVar109;
          auVar171._8_4_ = uVar1 - iVar114;
          auVar171._12_4_ = uVar1 - iVar119;
          auVar173._0_4_ = uVar1 - iVar84;
          auVar173._4_4_ = uVar1 - iVar89;
          auVar173._8_4_ = uVar1 - iVar94;
          auVar173._12_4_ = uVar1 - iVar99;
          iVar3 = uVar1 - iVar69;
          iVar4 = uVar1 - iVar74;
          iVar5 = uVar1 - iVar79;
          iVar7 = uVar1 - iVar60;
          iVar8 = uVar1 - iVar59;
          iVar9 = uVar1 - iVar61;
          auVar172[9] = 0x24;
          auVar172._0_9_ = _DAT_10084e980;
          auVar172[10] = 0x28;
          auVar172[0xb] = 0x2c;
          auVar172[0xc] = 0x30;
          auVar172[0xd] = 0x34;
          auVar172[0xe] = 0x38;
          auVar172[0xf] = 0x3c;
          auVar2[4] = (char)iVar3;
          auVar2._0_4_ = uVar1 - iVar64;
          auVar2[5] = (char)((uint)iVar3 >> 8);
          auVar2[6] = (char)((uint)iVar3 >> 0x10);
          auVar2[7] = (char)((uint)iVar3 >> 0x18);
          auVar2[8] = (char)iVar4;
          auVar2[9] = (char)((uint)iVar4 >> 8);
          auVar2[10] = (char)((uint)iVar4 >> 0x10);
          auVar2[0xb] = (char)((uint)iVar4 >> 0x18);
          auVar2[0xc] = (char)iVar5;
          auVar2[0xd] = (char)((uint)iVar5 >> 8);
          auVar2[0xe] = (char)((uint)iVar5 >> 0x10);
          auVar2[0xf] = (char)((uint)iVar5 >> 0x18);
          auVar6[4] = (char)iVar7;
          auVar6._0_4_ = uVar1 - iVar62;
          auVar6[5] = (char)((uint)iVar7 >> 8);
          auVar6[6] = (char)((uint)iVar7 >> 0x10);
          auVar6[7] = (char)((uint)iVar7 >> 0x18);
          auVar6[8] = (char)iVar8;
          auVar6[9] = (char)((uint)iVar8 >> 8);
          auVar6[10] = (char)((uint)iVar8 >> 0x10);
          auVar6[0xb] = (char)((uint)iVar8 >> 0x18);
          auVar6[0xc] = (char)iVar9;
          auVar6[0xd] = (char)((uint)iVar9 >> 8);
          auVar6[0xe] = (char)((uint)iVar9 >> 0x10);
          auVar6[0xf] = (char)((uint)iVar9 >> 0x18);
          auVar172 = a64_TBL(ZEXT816(0),auVar171,auVar173,auVar2,auVar6,auVar172);
          auVar174[9] = 0x24;
          auVar174._0_9_ = _DAT_10084e980;
          auVar174[10] = 0x28;
          auVar174[0xb] = 0x2c;
          auVar174[0xc] = 0x30;
          auVar174[0xd] = 0x34;
          auVar174[0xe] = 0x38;
          auVar174[0xf] = 0x3c;
          auVar10._4_4_ = auVar171._4_4_ + -0x10;
          auVar10._0_4_ = auVar171._0_4_ + -0x10;
          auVar10._8_4_ = auVar171._8_4_ + -0x10;
          auVar10._12_4_ = auVar171._12_4_ + -0x10;
          auVar11._4_4_ = auVar173._4_4_ + -0x10;
          auVar11._0_4_ = auVar173._0_4_ + -0x10;
          auVar11._8_4_ = auVar173._8_4_ + -0x10;
          auVar11._12_4_ = auVar173._12_4_ + -0x10;
          auVar12._4_4_ = iVar3 + -0x10;
          auVar12._0_4_ = (uVar1 - iVar64) + -0x10;
          auVar12._8_4_ = iVar4 + -0x10;
          auVar12._12_4_ = iVar5 + -0x10;
          auVar13._4_4_ = iVar7 + -0x10;
          auVar13._0_4_ = (uVar1 - iVar62) + -0x10;
          auVar13._8_4_ = iVar8 + -0x10;
          auVar13._12_4_ = iVar9 + -0x10;
          auVar174 = a64_TBL(ZEXT816(0),auVar10,auVar11,auVar12,auVar13,auVar174);
          puVar40[-1] = auVar172._8_8_;
          puVar40[-2] = auVar172._0_8_;
          puVar40[1] = auVar174._8_8_;
          *puVar40 = auVar174._0_8_;
          iVar104 = iVar104 + 0x20;
          iVar109 = iVar109 + 0x20;
          iVar114 = iVar114 + 0x20;
          iVar119 = iVar119 + 0x20;
          iVar84 = iVar84 + 0x20;
          iVar89 = iVar89 + 0x20;
          iVar94 = iVar94 + 0x20;
          iVar99 = iVar99 + 0x20;
          iVar64 = iVar64 + 0x20;
          iVar69 = iVar69 + 0x20;
          iVar74 = iVar74 + 0x20;
          iVar79 = iVar79 + 0x20;
          iVar62 = iVar62 + 0x20;
          iVar60 = iVar60 + 0x20;
          iVar59 = iVar59 + 0x20;
          iVar61 = iVar61 + 0x20;
          puVar40 = puVar40 + 4;
          uVar38 = uVar38 - 0x20;
        } while (uVar38 != 0);
        if (uVar42 == uVar35) goto LAB_1006b3bb8;
        if ((uVar42 & 0x1c) == 0) goto LAB_1006b3ba0;
      }
      uVar38 = uVar42 & 0xfffffffffffffffc;
      iVar62 = (int)uVar36;
      uVar36 = uVar38 | 1;
      uVar31 = CONCAT44(iVar62 + 1,iVar62);
      iVar60 = iVar62 + 2;
      iVar62 = iVar62 + 3;
      puVar41 = (undefined4 *)((long)&local_1ee + uVar35);
      lVar33 = uVar35 - uVar38;
      do {
        cVar43 = (char)uVar1;
        *puVar41 = CONCAT13(cVar43 - (char)iVar62,
                            CONCAT12(cVar43 - (char)iVar60,
                                     CONCAT11(cVar43 - (char)((ulong)uVar31 >> 0x20),
                                              cVar43 - (char)uVar31)));
        puVar41 = puVar41 + 1;
        uVar31 = CONCAT44((int)((ulong)uVar31 >> 0x20) + 4,(int)uVar31 + 4);
        iVar60 = iVar60 + 4;
        iVar62 = iVar62 + 4;
        lVar33 = lVar33 + 4;
      } while (lVar33 != 0);
      if (uVar42 == uVar38) goto LAB_1006b3bb8;
    }
LAB_1006b3ba0:
    lVar33 = uVar1 - uVar36;
    pcVar34 = &local_1ef + uVar36;
    do {
      *pcVar34 = (char)lVar33;
      lVar33 = lVar33 + -1;
      pcVar34 = pcVar34 + 1;
    } while (lVar33 != 0);
  }
LAB_1006b3bb8:
  if (uVar32 == 0) {
    uVar42 = 0;
  }
  else {
    uVar42 = param_4 & 0xffffffff;
    if (uVar32 < 4) {
      uVar36 = 0;
LAB_1006b3c3c:
      lVar33 = uVar42 - uVar36;
      pcVar34 = local_2ee + uVar36;
      pbVar37 = (byte *)(param_3 + uVar36 * 4 + 2);
      do {
        *pcVar34 = (&local_1ef)[*pbVar37];
        lVar33 = lVar33 + -1;
        pcVar34 = pcVar34 + 1;
        pbVar37 = pbVar37 + 4;
      } while (lVar33 != 0);
    }
    else {
      uVar36 = param_4 & 0xfc;
      pcVar34 = local_2ee + 1;
      pbVar37 = (byte *)(param_3 + 10);
      uVar38 = uVar36;
      do {
        cVar43 = (&local_1ef)[pbVar37[-4]];
        cVar44 = (&local_1ef)[*pbVar37];
        cVar45 = (&local_1ef)[pbVar37[4]];
        pcVar34[-1] = (&local_1ef)[pbVar37[-8]];
        *pcVar34 = cVar43;
        pcVar34[1] = cVar44;
        pcVar34[2] = cVar45;
        pcVar34 = pcVar34 + 4;
        pbVar37 = pbVar37 + 0x10;
        uVar38 = uVar38 - 4;
      } while (uVar38 != 0);
      if (uVar36 != uVar42) goto LAB_1006b3c3c;
    }
    pcVar34 = param_1 + 1;
    local_2f4 = 0xc;
    if (uVar32 == 1) {
      uVar42 = 1;
    }
    else {
      puVar30 = auStack_1c8;
      FUN_1006b2c4c(puVar30,&local_2f4,local_2ee,uVar42);
      if (((uint)puVar30 != uVar32) && ((uint)puVar30 != 1)) {
        uVar31 = 6;
        FUN_1006b1df0(6,uVar42,local_2f4);
        puVar30 = auStack_1e2;
        FUN_1006b1e58(puVar30,uVar31,auStack_1c8,uVar42,local_2f4);
        if ((undefined1 *)0xffffffffffffff88 < puVar30) goto LAB_1006b3e70;
        pcVar29 = pcVar34;
        FUN_1006b1af4(pcVar34,param_2 - 1,auStack_1e2,local_2f4,uVar31);
        if ((char *)0xffffffffffffff88 < pcVar29) goto LAB_1006b3e70;
        puVar30 = auStack_154;
        FUN_1006b184c(puVar30,auStack_1e2,local_2f4,uVar31,auStack_194,0x40);
        if ((undefined1 *)0xffffffffffffff88 < puVar30) goto LAB_1006b3e70;
        pcVar21 = pcVar34 + (long)pcVar29;
        pcVar28 = pcVar21;
        FUN_1006b24e0(pcVar21,(param_2 - 1) - (long)pcVar29,local_2ee,uVar42,auStack_154);
        if ((char *)0xffffffffffffff88 < pcVar28) goto LAB_1006b3e70;
        if (pcVar28 != (char *)0x0) {
          uVar38 = (long)(pcVar21 + (long)pcVar28) - (long)pcVar34;
          if (0xffffffffffffff88 < uVar38) goto LAB_1006b3e70;
          if ((1 < uVar38) && (uVar38 < (param_4 >> 1 & 0x7fffffff))) {
            *param_1 = (char)uVar38;
            goto LAB_1006b3e70;
          }
        }
      }
    }
  }
  pcVar34 = param_1 + 1;
  if ((0x80 < uVar32) || (param_2 < (uVar32 + 1 >> 1) + 1)) goto LAB_1006b3e70;
  *param_1 = (char)param_4 + '\x7f';
  local_2ee[uVar42] = '\0';
  if (uVar32 == 0) goto LAB_1006b3e70;
  uVar38 = uVar42;
  if (uVar42 < 3) {
    uVar38 = 2;
  }
  if ((uVar42 < 0xf) ||
     ((pcVar34 < local_2ee + (uVar42 - 1 & 0xfffffffffffffffe) + 2 &&
      (local_2ee < pcVar34 + (uVar42 - 1 >> 1) + 1)))) {
    uVar38 = 0;
  }
  else {
    uVar36 = (uVar38 - 1 >> 1) + 1;
    if (uVar42 < 0x7f) {
      uVar35 = 0;
    }
    else {
      uVar35 = uVar36 & 0x7fffffffffffffc0;
      pcVar29 = local_2ae;
      pcVar21 = param_1 + 0x21;
      uVar38 = uVar35;
      do {
        cVar43 = pcVar29[-0x40];
        cVar51 = pcVar29[-0x3f];
        cVar44 = pcVar29[-0x3e];
        cVar52 = pcVar29[-0x3d];
        cVar45 = pcVar29[-0x3c];
        cVar53 = pcVar29[-0x3b];
        cVar46 = pcVar29[-0x3a];
        cVar54 = pcVar29[-0x39];
        cVar47 = pcVar29[-0x38];
        cVar55 = pcVar29[-0x37];
        cVar48 = pcVar29[-0x36];
        cVar56 = pcVar29[-0x35];
        cVar49 = pcVar29[-0x34];
        cVar57 = pcVar29[-0x33];
        cVar50 = pcVar29[-0x32];
        cVar58 = pcVar29[-0x31];
        cVar63 = pcVar29[-0x20];
        cVar83 = pcVar29[-0x1f];
        cVar65 = pcVar29[-0x1e];
        cVar85 = pcVar29[-0x1d];
        cVar66 = pcVar29[-0x1c];
        cVar86 = pcVar29[-0x1b];
        cVar67 = pcVar29[-0x1a];
        cVar87 = pcVar29[-0x19];
        cVar68 = pcVar29[-0x18];
        cVar88 = pcVar29[-0x17];
        cVar70 = pcVar29[-0x16];
        cVar90 = pcVar29[-0x15];
        cVar71 = pcVar29[-0x14];
        cVar91 = pcVar29[-0x13];
        cVar72 = pcVar29[-0x12];
        cVar92 = pcVar29[-0x11];
        cVar73 = pcVar29[-0x10];
        cVar93 = pcVar29[-0xf];
        cVar75 = pcVar29[-0xe];
        cVar95 = pcVar29[-0xd];
        cVar76 = pcVar29[-0xc];
        cVar96 = pcVar29[-0xb];
        cVar77 = pcVar29[-10];
        cVar97 = pcVar29[-9];
        cVar78 = pcVar29[-8];
        cVar98 = pcVar29[-7];
        cVar80 = pcVar29[-6];
        cVar100 = pcVar29[-5];
        cVar81 = pcVar29[-4];
        cVar101 = pcVar29[-3];
        cVar82 = pcVar29[-2];
        cVar102 = pcVar29[-1];
        cVar103 = *pcVar29;
        cVar123 = pcVar29[1];
        cVar105 = pcVar29[2];
        cVar124 = pcVar29[3];
        cVar106 = pcVar29[4];
        cVar125 = pcVar29[5];
        cVar107 = pcVar29[6];
        cVar126 = pcVar29[7];
        cVar108 = pcVar29[8];
        cVar127 = pcVar29[9];
        cVar110 = pcVar29[10];
        cVar128 = pcVar29[0xb];
        cVar111 = pcVar29[0xc];
        cVar129 = pcVar29[0xd];
        cVar112 = pcVar29[0xe];
        cVar130 = pcVar29[0xf];
        cVar113 = pcVar29[0x10];
        cVar131 = pcVar29[0x11];
        cVar115 = pcVar29[0x12];
        cVar132 = pcVar29[0x13];
        cVar116 = pcVar29[0x14];
        cVar133 = pcVar29[0x15];
        cVar117 = pcVar29[0x16];
        cVar134 = pcVar29[0x17];
        cVar118 = pcVar29[0x18];
        cVar135 = pcVar29[0x19];
        cVar120 = pcVar29[0x1a];
        cVar136 = pcVar29[0x1b];
        cVar121 = pcVar29[0x1c];
        cVar137 = pcVar29[0x1d];
        cVar122 = pcVar29[0x1e];
        cVar138 = pcVar29[0x1f];
        cVar139 = pcVar29[0x20];
        cVar155 = pcVar29[0x21];
        cVar140 = pcVar29[0x22];
        cVar156 = pcVar29[0x23];
        cVar141 = pcVar29[0x24];
        cVar157 = pcVar29[0x25];
        cVar142 = pcVar29[0x26];
        cVar158 = pcVar29[0x27];
        cVar143 = pcVar29[0x28];
        cVar159 = pcVar29[0x29];
        cVar144 = pcVar29[0x2a];
        cVar160 = pcVar29[0x2b];
        cVar145 = pcVar29[0x2c];
        cVar161 = pcVar29[0x2d];
        cVar146 = pcVar29[0x2e];
        cVar162 = pcVar29[0x2f];
        cVar147 = pcVar29[0x30];
        cVar163 = pcVar29[0x31];
        cVar148 = pcVar29[0x32];
        cVar164 = pcVar29[0x33];
        cVar149 = pcVar29[0x34];
        cVar165 = pcVar29[0x35];
        cVar150 = pcVar29[0x36];
        cVar166 = pcVar29[0x37];
        cVar151 = pcVar29[0x38];
        cVar167 = pcVar29[0x39];
        cVar152 = pcVar29[0x3a];
        cVar168 = pcVar29[0x3b];
        cVar153 = pcVar29[0x3c];
        cVar169 = pcVar29[0x3d];
        cVar154 = pcVar29[0x3e];
        cVar170 = pcVar29[0x3f];
        *(ulong *)(pcVar21 + -0x18) =
             CONCAT17(pcVar29[-0x22] * '\x10' + pcVar29[-0x21],
                      CONCAT16(pcVar29[-0x24] * '\x10' + pcVar29[-0x23],
                               CONCAT15(pcVar29[-0x26] * '\x10' + pcVar29[-0x25],
                                        CONCAT14(pcVar29[-0x28] * '\x10' + pcVar29[-0x27],
                                                 CONCAT13(pcVar29[-0x2a] * '\x10' + pcVar29[-0x29],
                                                          CONCAT12(pcVar29[-0x2c] * '\x10' +
                                                                   pcVar29[-0x2b],
                                                                   CONCAT11(pcVar29[-0x2e] * '\x10'
                                                                            + pcVar29[-0x2d],
                                                                            pcVar29[-0x30] * '\x10'
                                                                            + pcVar29[-0x2f])))))));
        *(ulong *)(pcVar21 + -0x20) =
             CONCAT17(cVar50 * '\x10' + cVar58,
                      CONCAT16(cVar49 * '\x10' + cVar57,
                               CONCAT15(cVar48 * '\x10' + cVar56,
                                        CONCAT14(cVar47 * '\x10' + cVar55,
                                                 CONCAT13(cVar46 * '\x10' + cVar54,
                                                          CONCAT12(cVar45 * '\x10' + cVar53,
                                                                   CONCAT11(cVar44 * '\x10' + cVar52
                                                                            ,cVar43 * '\x10' +
                                                                             cVar51)))))));
        *(ulong *)(pcVar21 + -8) =
             CONCAT17(cVar82 * '\x10' + cVar102,
                      CONCAT16(cVar81 * '\x10' + cVar101,
                               CONCAT15(cVar80 * '\x10' + cVar100,
                                        CONCAT14(cVar78 * '\x10' + cVar98,
                                                 CONCAT13(cVar77 * '\x10' + cVar97,
                                                          CONCAT12(cVar76 * '\x10' + cVar96,
                                                                   CONCAT11(cVar75 * '\x10' + cVar95
                                                                            ,cVar73 * '\x10' +
                                                                             cVar93)))))));
        *(ulong *)(pcVar21 + -0x10) =
             CONCAT17(cVar72 * '\x10' + cVar92,
                      CONCAT16(cVar71 * '\x10' + cVar91,
                               CONCAT15(cVar70 * '\x10' + cVar90,
                                        CONCAT14(cVar68 * '\x10' + cVar88,
                                                 CONCAT13(cVar67 * '\x10' + cVar87,
                                                          CONCAT12(cVar66 * '\x10' + cVar86,
                                                                   CONCAT11(cVar65 * '\x10' + cVar85
                                                                            ,cVar63 * '\x10' +
                                                                             cVar83)))))));
        *(ulong *)(pcVar21 + 8) =
             CONCAT17(cVar122 * '\x10' + cVar138,
                      CONCAT16(cVar121 * '\x10' + cVar137,
                               CONCAT15(cVar120 * '\x10' + cVar136,
                                        CONCAT14(cVar118 * '\x10' + cVar135,
                                                 CONCAT13(cVar117 * '\x10' + cVar134,
                                                          CONCAT12(cVar116 * '\x10' + cVar133,
                                                                   CONCAT11(cVar115 * '\x10' +
                                                                            cVar132,cVar113 * '\x10'
                                                                                    + cVar131)))))))
        ;
        *(ulong *)pcVar21 =
             CONCAT17(cVar112 * '\x10' + cVar130,
                      CONCAT16(cVar111 * '\x10' + cVar129,
                               CONCAT15(cVar110 * '\x10' + cVar128,
                                        CONCAT14(cVar108 * '\x10' + cVar127,
                                                 CONCAT13(cVar107 * '\x10' + cVar126,
                                                          CONCAT12(cVar106 * '\x10' + cVar125,
                                                                   CONCAT11(cVar105 * '\x10' +
                                                                            cVar124,cVar103 * '\x10'
                                                                                    + cVar123)))))))
        ;
        *(ulong *)(pcVar21 + 0x18) =
             CONCAT17(cVar154 * '\x10' + cVar170,
                      CONCAT16(cVar153 * '\x10' + cVar169,
                               CONCAT15(cVar152 * '\x10' + cVar168,
                                        CONCAT14(cVar151 * '\x10' + cVar167,
                                                 CONCAT13(cVar150 * '\x10' + cVar166,
                                                          CONCAT12(cVar149 * '\x10' + cVar165,
                                                                   CONCAT11(cVar148 * '\x10' +
                                                                            cVar164,cVar147 * '\x10'
                                                                                    + cVar163)))))))
        ;
        *(ulong *)(pcVar21 + 0x10) =
             CONCAT17(cVar146 * '\x10' + cVar162,
                      CONCAT16(cVar145 * '\x10' + cVar161,
                               CONCAT15(cVar144 * '\x10' + cVar160,
                                        CONCAT14(cVar143 * '\x10' + cVar159,
                                                 CONCAT13(cVar142 * '\x10' + cVar158,
                                                          CONCAT12(cVar141 * '\x10' + cVar157,
                                                                   CONCAT11(cVar140 * '\x10' +
                                                                            cVar156,cVar139 * '\x10'
                                                                                    + cVar155)))))))
        ;
        pcVar29 = pcVar29 + 0x80;
        uVar38 = uVar38 - 0x40;
        pcVar21 = pcVar21 + 0x40;
      } while (uVar38 != 0);
      if (uVar36 == uVar35) goto LAB_1006b3e70;
      if ((uVar36 & 0x38) == 0) {
        uVar38 = uVar35 << 1;
        goto LAB_1006b3e3c;
      }
    }
    uVar39 = uVar36 & 0x7ffffffffffffff8;
    uVar38 = uVar39 << 1;
    pcVar29 = local_2ee + uVar35 * 2;
    do {
      cVar43 = *pcVar29;
      pcVar14 = pcVar29 + 1;
      pcVar15 = pcVar29 + 2;
      pcVar16 = pcVar29 + 3;
      pcVar17 = pcVar29 + 4;
      pcVar18 = pcVar29 + 5;
      pcVar19 = pcVar29 + 6;
      pcVar20 = pcVar29 + 7;
      pcVar21 = pcVar29 + 8;
      pcVar22 = pcVar29 + 9;
      pcVar23 = pcVar29 + 10;
      pcVar24 = pcVar29 + 0xb;
      pcVar25 = pcVar29 + 0xc;
      pcVar26 = pcVar29 + 0xd;
      pcVar27 = pcVar29 + 0xe;
      pcVar28 = pcVar29 + 0xf;
      pcVar29 = pcVar29 + 0x10;
      *(ulong *)(pcVar34 + (uVar35 & 0x7ffffffffffffff8)) =
           CONCAT17(*pcVar27 * '\x10' + *pcVar28,
                    CONCAT16(*pcVar25 * '\x10' + *pcVar26,
                             CONCAT15(*pcVar23 * '\x10' + *pcVar24,
                                      CONCAT14(*pcVar21 * '\x10' + *pcVar22,
                                               CONCAT13(*pcVar19 * '\x10' + *pcVar20,
                                                        CONCAT12(*pcVar17 * '\x10' + *pcVar18,
                                                                 CONCAT11(*pcVar15 * '\x10' +
                                                                          *pcVar16,cVar43 * '\x10' +
                                                                                   *pcVar14)))))));
      uVar35 = uVar35 + 8;
    } while (uVar39 != uVar35);
    if (uVar36 == uVar39) goto LAB_1006b3e70;
  }
LAB_1006b3e3c:
  pcVar29 = local_2ee + uVar38 + 1;
  pcVar34 = pcVar34 + (uVar38 >> 1);
  do {
    *pcVar34 = *pcVar29 + pcVar29[-1] * '\x10';
    uVar38 = uVar38 + 2;
    pcVar29 = pcVar29 + 2;
    pcVar34 = pcVar34 + 1;
  } while (uVar38 < uVar42);
LAB_1006b3e70:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

