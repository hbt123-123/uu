// rea decompile_all
// name: FUN_1002520a4
// address: 0x1002520a4
// body: available
// range: 0x1002520a4-0x100252c03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100252c00 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002520a4(ulong param_1,char *param_2,uint *param_3,undefined8 param_4,uint param_5,
                  undefined1 *param_6,uint param_7,char *param_8,uint param_9,uint param_10,
                  undefined4 param_11,int param_12,int param_13,int param_14,long param_15,
                  undefined8 param_16,ulong param_17,ulong param_18,undefined4 param_19)

{
  char *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  undefined4 *puVar7;
  uLongf *puVar8;
  undefined8 uVar9;
  undefined2 uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong local_90;
  undefined8 local_80;
  byte local_76;
  byte local_75;
  byte local_72 [10];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (((param_1 == 0) || ((param_9 & 0xfffffff7) != 0)) ||
     ((*(int *)(param_1 + 0x88) == 1 &&
      (uVar12 = param_1, FUN_100253190(param_1,0,0), (int)uVar12 != 0)))) goto LAB_100252b1c;
  pcVar1 = "-";
  if (param_2 != (char *)0x0) {
    pcVar1 = param_2;
  }
  if (param_8 == (char *)0x0) {
    local_90 = 0;
  }
  else {
    local_90 = _strlen(param_8);
  }
  sVar6 = _strlen(pcVar1);
  if (param_3 == (uint *)0x0) {
LAB_100252218:
    uVar12 = 0;
  }
  else {
    uVar12 = *(ulong *)(param_3 + 6);
    if (uVar12 == 0) {
      uVar5 = param_3[5];
      if (((((0xcf < uVar5) && (0x7f < uVar5 - 0x7bc)) || (0xb < param_3[4])) ||
          ((0x1e < param_3[3] - 1 || (0x17 < param_3[2])))) ||
         ((0x3b < param_3[1] || (0x3b < *param_3)))) goto LAB_100252218;
      lVar16 = -0x50;
      if (uVar5 < 0x50) {
        lVar16 = 0x14;
      }
      lVar18 = -0x7bc;
      if (uVar5 < 0x7bc) {
        lVar18 = lVar16;
      }
      uVar12 = (ulong)((param_3[3] + param_3[4] * 0x20) * 0x10000 + 0x200000) +
               (lVar18 + (ulong)uVar5) * 0x2000000 |
               (ulong)(*param_3 >> 1 | param_3[1] << 5 | param_3[2] << 0xb);
    }
  }
  *(uint *)(param_1 + 0x140) = param_9;
  *(uint *)(param_1 + 0x144) = param_9;
  *(ulong *)(param_1 + 0x10150) = uVar12;
  *(undefined8 *)(param_1 + 0x10158) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x148) = param_11;
  uVar12 = param_18 | 2;
  if ((param_10 & 0xfffffffe) != 8) {
    uVar12 = param_18;
  }
  *(ulong *)(param_1 + 0x138) = uVar12;
  if (param_10 == 2) {
    uVar12 = 4;
LAB_100252264:
    uVar12 = uVar12 | param_18;
    *(ulong *)(param_1 + 0x138) = uVar12;
  }
  else if (param_10 == 1) {
    uVar12 = 6;
    goto LAB_100252264;
  }
  if (param_15 != 0) {
    *(ulong *)(param_1 + 0x138) = uVar12 | 1;
  }
  iVar4 = (int)sVar6;
  if (*(long *)(param_1 + 0x101c8) != 0) {
    if ((*(long *)(param_1 + 66000) == 0) && (*(long *)(param_1 + 0x101c0) == 0)) {
      local_80 = CONCAT44(local_80._4_4_,0x8074b50);
      (**(code **)(param_1 + 0x18))
                (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x68),&local_80,4);
    }
    FUN_10024e8ac(param_1,*(undefined8 *)(param_1 + 0x68),0,2);
    uVar15 = param_1;
    FUN_10024e8c0(param_1,*(undefined8 *)(param_1 + 0x68));
    uVar12 = (ulong)(param_5 + iVar4 + 0x1e);
    if (*(int *)(param_1 + 0x10160) != 0) {
      uVar12 = uVar12 + 0x14;
    }
    if (*(long *)(param_1 + 0x101c8) - uVar15 < uVar12) {
      FUN_100252c10(param_1);
    }
  }
  uVar15 = param_1;
  FUN_10024e8c0(param_1,*(undefined8 *)(param_1 + 0x68));
  *(ulong *)(param_1 + 0x108) = uVar15;
  uVar19 = local_90 & 0xffffffff;
  uVar13 = (ulong)(iVar4 + param_7 + 0x2e);
  uVar12 = (ulong)param_7;
  *(ulong *)(param_1 + 0x118) = uVar12;
  *(ulong *)(param_1 + 0x120) = uVar13;
  *(undefined8 *)(param_1 + 0x128) = 0x20;
  *(ulong *)(param_1 + 0x130) = uVar19;
  puVar7 = _malloc(uVar13 + (local_90 & 0xffffffff) + 0x20);
  *(undefined4 **)(param_1 + 0x110) = puVar7;
  uVar13 = *(ulong *)(param_1 + 66000);
  *(ulong *)(param_1 + 0x10168) = uVar13;
  *puVar7 = 0x2014b50;
  *(char *)(puVar7 + 1) = (char)param_17;
  *(char *)((long)puVar7 + 5) = (char)(param_17 >> 8);
  if (0xffff < param_17) {
    *(undefined2 *)(puVar7 + 1) = 0xffff;
  }
  *(undefined2 *)((long)puVar7 + 6) = 0x14;
  uVar14 = *(ulong *)(param_1 + 0x138);
  *(short *)(puVar7 + 2) = (short)uVar14;
  if (0xffff < uVar14) {
    *(undefined2 *)(puVar7 + 2) = 0xffff;
  }
  uVar5 = *(uint *)(param_1 + 0x140);
  *(short *)((long)puVar7 + 10) = (short)uVar5;
  if (0xffff < uVar5) {
    *(undefined2 *)((long)puVar7 + 10) = 0xffff;
  }
  lVar16 = 0;
  uVar14 = *(ulong *)(param_1 + 0x10150);
  do {
    uVar17 = uVar14;
    *(char *)((long)(puVar7 + 3) + lVar16) = (char)uVar17;
    lVar16 = lVar16 + 1;
    uVar14 = uVar17 >> 8;
  } while (lVar16 != 4);
  if (0xff < uVar17) {
    puVar7[3] = 0xffffffff;
  }
  *(undefined8 *)(puVar7 + 4) = 0;
  puVar7[6] = 0;
  uVar14 = sVar6 & 0xffffffff;
  *(char *)(puVar7 + 7) = (char)sVar6;
  *(char *)((long)puVar7 + 0x1d) = (char)(sVar6 >> 8);
  if (0xffff < uVar14) {
    *(undefined2 *)(puVar7 + 7) = 0xffff;
  }
  *(char *)((long)puVar7 + 0x1e) = (char)param_7;
  *(char *)((long)puVar7 + 0x1f) = (char)(param_7 >> 8);
  if (0xffff < param_7) {
    *(undefined2 *)((long)puVar7 + 0x1e) = 0xffff;
  }
  *(char *)(puVar7 + 8) = (char)local_90;
  *(char *)((long)puVar7 + 0x21) = (char)(uVar19 >> 8);
  if (0xffff < (uint)local_90) {
    *(undefined2 *)(puVar7 + 8) = 0xffff;
  }
  *(short *)((long)puVar7 + 0x22) = (short)uVar13;
  if (0xffff < uVar13) {
    *(undefined2 *)((long)puVar7 + 0x22) = 0xffff;
  }
  if (param_3 == (uint *)0x0) {
    *(undefined2 *)(puVar7 + 9) = 0;
    *(undefined4 *)((long)puVar7 + 0x26) = 0;
  }
  else {
    uVar13 = *(ulong *)(param_3 + 8);
    *(short *)(puVar7 + 9) = (short)uVar13;
    if (0xffff < uVar13) {
      *(undefined2 *)(puVar7 + 9) = 0xffff;
    }
    lVar16 = 0;
    uVar13 = *(ulong *)(param_3 + 10);
    do {
      uVar17 = uVar13;
      *(char *)((long)puVar7 + 0x26 + lVar16) = (char)uVar17;
      lVar16 = lVar16 + 1;
      uVar13 = uVar17 >> 8;
    } while (lVar16 != 4);
    if (0xff < uVar17) {
      *(undefined4 *)((long)puVar7 + 0x26) = 0xffffffff;
    }
  }
  if (uVar15 < 0xffffffff) {
    lVar16 = 0;
    uVar15 = uVar15 - *(long *)(param_1 + 0x101b8);
    do {
      uVar13 = uVar15;
      *(char *)((long)puVar7 + 0x2a + lVar16) = (char)uVar13;
      lVar16 = lVar16 + 1;
      uVar15 = uVar13 >> 8;
    } while (lVar16 != 4);
    if (0xff < uVar13) goto LAB_100252528;
  }
  else {
LAB_100252528:
    *(undefined4 *)((long)puVar7 + 0x2a) = 0xffffffff;
  }
  if (iVar4 != 0) {
    uVar15 = 0;
    do {
      *(char *)(*(long *)(param_1 + 0x110) + (ulong)((int)uVar15 + 0x2e)) = pcVar1[uVar15];
      uVar15 = uVar15 + 1;
    } while (uVar14 != uVar15);
  }
  if (param_7 != 0) {
    uVar5 = iVar4 + 0x2e;
    do {
      *(undefined1 *)(*(long *)(param_1 + 0x110) + (ulong)uVar5) = *param_6;
      uVar5 = uVar5 + 1;
      uVar12 = uVar12 - 1;
      param_6 = param_6 + 1;
    } while (uVar12 != 0);
  }
  if ((uint)local_90 != 0) {
    uVar12 = 0;
    do {
      *(char *)(*(long *)(param_1 + 0x110) + *(long *)(param_1 + 0x120) + *(long *)(param_1 + 0x128)
               + uVar12) = param_8[uVar12];
      uVar12 = uVar12 + 1;
    } while (uVar19 != uVar12);
  }
  if (*(long *)(param_1 + 0x110) == 0) goto LAB_100252b1c;
  *(undefined4 *)(param_1 + 0x10160) = param_19;
  *(undefined8 *)(param_1 + 0x10178) = 0;
  *(undefined8 *)(param_1 + 0x10180) = 0;
  *(undefined8 *)(param_1 + 0x10170) = 0;
  local_80 = CONCAT44(local_80._4_4_,0x4034b50);
  lVar16 = *(long *)(param_1 + 0x40);
  (**(code **)(param_1 + 0x18))(lVar16,*(undefined8 *)(param_1 + 0x68),&local_80,4);
  if (lVar16 == 4) {
    if (*(int *)(param_1 + 0x10160) == 0) {
      uVar10 = 0x14;
    }
    else {
      uVar10 = 0x2d;
    }
    local_80 = CONCAT62(local_80._2_6_,uVar10);
    lVar16 = *(long *)(param_1 + 0x40);
    (**(code **)(param_1 + 0x18))(lVar16,*(undefined8 *)(param_1 + 0x68),&local_80,2);
    if (lVar16 != 2) goto LAB_100252880;
    local_80._0_2_ = (short)*(ulong *)(param_1 + 0x138);
    if (0xffff < *(ulong *)(param_1 + 0x138)) {
      local_80._0_2_ = 0xffff;
    }
    lVar16 = *(long *)(param_1 + 0x40);
    (**(code **)(param_1 + 0x18))(lVar16,*(undefined8 *)(param_1 + 0x68),&local_80,2);
    if (lVar16 != 2) goto LAB_100252880;
    local_80._0_2_ = (short)*(uint *)(param_1 + 0x140);
    if (0xffff < *(uint *)(param_1 + 0x140)) {
      local_80._0_2_ = 0xffff;
    }
    lVar16 = *(long *)(param_1 + 0x40);
    (**(code **)(param_1 + 0x18))(lVar16,*(undefined8 *)(param_1 + 0x68),&local_80,2);
    if (lVar16 != 2) goto LAB_100252880;
    lVar16 = 0;
    uVar9 = *(undefined8 *)(param_1 + 0x68);
    uVar12 = *(ulong *)(param_1 + 0x10150);
    do {
      uVar15 = uVar12;
      *(char *)((long)&local_80 + lVar16) = (char)uVar15;
      lVar16 = lVar16 + 1;
      uVar12 = uVar15 >> 8;
    } while (lVar16 != 4);
    if (0xff < uVar15) {
      local_80 = CONCAT44(local_80._4_4_,0xffffffff);
    }
    lVar16 = *(long *)(param_1 + 0x40);
    (**(code **)(param_1 + 0x18))(lVar16,uVar9,&local_80,4);
    if (lVar16 != 4) goto LAB_100252880;
    local_80 = local_80 & 0xffffffff00000000;
    lVar16 = *(long *)(param_1 + 0x40);
    (**(code **)(param_1 + 0x18))(lVar16,*(undefined8 *)(param_1 + 0x68),&local_80,4);
    if (lVar16 != 4) goto LAB_100252880;
    if (*(int *)(param_1 + 0x10160) == 0) {
      local_80 = (ulong)local_80._4_4_ << 0x20;
    }
    else {
      local_80 = CONCAT44(local_80._4_4_,0xffffffff);
    }
    lVar16 = *(long *)(param_1 + 0x40);
    (**(code **)(param_1 + 0x18))(lVar16,*(undefined8 *)(param_1 + 0x68),&local_80,4);
    if (lVar16 != 4) goto LAB_100252880;
    if (*(int *)(param_1 + 0x10160) == 0) {
      local_80 = (ulong)local_80._4_4_ << 0x20;
    }
    else {
      local_80 = CONCAT44(local_80._4_4_,0xffffffff);
    }
    lVar16 = *(long *)(param_1 + 0x40);
    (**(code **)(param_1 + 0x18))(lVar16,*(undefined8 *)(param_1 + 0x68),&local_80,4);
    if (lVar16 != 4) goto LAB_100252880;
    local_80._0_2_ = (undefined2)sVar6;
    if (0xffff < uVar14) {
      local_80._0_2_ = 0xffff;
    }
    lVar16 = *(long *)(param_1 + 0x40);
    (**(code **)(param_1 + 0x18))(lVar16,*(undefined8 *)(param_1 + 0x68),&local_80,2);
    if (lVar16 != 2) goto LAB_100252880;
    uVar15 = (ulong)param_5;
    uVar12 = uVar15;
    if (*(int *)(param_1 + 0x10160) != 0) {
      uVar12 = uVar15 + 0x14;
    }
    local_80._0_2_ = (short)uVar12;
    if (0xffff < uVar12) {
      local_80._0_2_ = 0xffff;
    }
    lVar16 = *(long *)(param_1 + 0x40);
    (**(code **)(param_1 + 0x18))(lVar16,*(undefined8 *)(param_1 + 0x68),&local_80,2);
    bVar3 = lVar16 != 2;
    if ((!bVar3) && (iVar4 != 0)) {
      uVar12 = *(ulong *)(param_1 + 0x40);
      (**(code **)(param_1 + 0x18))(uVar12,*(undefined8 *)(param_1 + 0x68),pcVar1,uVar14);
      bVar3 = uVar12 != uVar14;
    }
    if ((param_5 == 0) || (bVar3)) {
      if (bVar3) goto LAB_100252878;
LAB_100252b64:
      bVar3 = true;
      if (*(int *)(param_1 + 0x10160) != 0) {
        uVar12 = param_1;
        FUN_10024e8c0(param_1,*(undefined8 *)(param_1 + 0x68));
        *(ulong *)(param_1 + 0x10170) = uVar12;
        local_80._0_2_ = 1;
        (**(code **)(param_1 + 0x18))
                  (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x68),&local_80,2);
        local_80 = CONCAT62(local_80._2_6_,0x10);
        (**(code **)(param_1 + 0x18))
                  (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x68),&local_80,2);
        local_80 = 0;
        (**(code **)(param_1 + 0x18))
                  (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x68),&local_80,8);
        local_80 = 0;
        lVar16 = *(long *)(param_1 + 0x40);
        (**(code **)(param_1 + 0x18))(lVar16,*(undefined8 *)(param_1 + 0x68),&local_80,8);
        bVar3 = lVar16 == 8;
      }
    }
    else {
      uVar12 = *(ulong *)(param_1 + 0x40);
      (**(code **)(param_1 + 0x18))(uVar12,*(undefined8 *)(param_1 + 0x68),param_4,uVar15);
      if (uVar12 == uVar15) goto LAB_100252b64;
LAB_100252878:
      bVar3 = false;
    }
  }
  else {
LAB_100252880:
    bVar3 = false;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0x10000;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(ulong *)(param_1 + 0xa8) = param_1 + 0x14c;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (bVar3) {
    if ((param_9 == 8) && (*(int *)(param_1 + 0x148) == 0)) {
      *(undefined8 *)(param_1 + 0xd0) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(ulong *)(param_1 + 0xe0) = param_1;
      iVar4 = -param_12;
      if (param_12 < 0) {
        iVar4 = param_12;
      }
      iVar4 = _deflateInit2_((z_streamp)(param_1 + 0x90),param_10,8,iVar4,param_13,param_14,"1.2.12"
                             ,0x70);
      if (iVar4 != 0) goto LAB_100252b18;
      *(undefined4 *)(param_1 + 0x100) = 8;
    }
    *(undefined4 *)(param_1 + 0x101a8) = 0;
    if ((*(byte *)(param_1 + 0x138) & 1) != 0) {
      puVar8 = _get_crc_table();
      *(uLongf **)(param_1 + 0x101a0) = puVar8;
      iVar4 = DAT_100ac9f10 + 1;
      bVar3 = DAT_100ac9f10 == 0;
      DAT_100ac9f10 = iVar4;
      if (bVar3) {
        uVar5 = 0;
        _time();
        _srand(uVar5 ^ 0xbb40e64e);
      }
      FUN_100250330(param_15,param_1 + 0x10188,puVar8);
      lVar16 = 0;
      do {
        uVar5 = _rand();
        uVar11 = (uint)*(ulong *)(param_1 + 0x10198);
        uVar12 = puVar8[((uint)*(ulong *)(param_1 + 0x10188) ^ uVar5 >> 7) & 0xff] ^
                 *(ulong *)(param_1 + 0x10188) >> 8;
        lVar18 = (*(long *)(param_1 + 0x10190) + (uVar12 & 0xff)) * 0x8088405 + 1;
        *(ulong *)(param_1 + 0x10188) = uVar12;
        *(long *)(param_1 + 0x10190) = lVar18;
        *(uLongf *)(param_1 + 0x10198) =
             puVar8[(ulong)(uVar11 ^ (uint)lVar18 >> 0x18) & 0xff] ^
             *(ulong *)(param_1 + 0x10198) >> 8;
        local_72[lVar16] =
             (byte)((uVar11 & 0xfffffffd ^ 3) * (uVar11 | 2) >> 8) ^ (byte)(uVar5 >> 7);
        lVar16 = lVar16 + 1;
      } while (lVar16 != 10);
      FUN_100250330(param_15,param_1 + 0x10188,puVar8);
      lVar16 = 0;
      lVar18 = *(long *)(param_1 + 0x10190);
      uVar12 = *(ulong *)(param_1 + 0x10198);
      uVar15 = *(ulong *)(param_1 + 0x10188);
      do {
        uVar5 = (uint)uVar12;
        bVar2 = local_72[lVar16];
        uVar15 = puVar8[(ulong)((uint)bVar2 ^ (uint)uVar15) & 0xff] ^ uVar15 >> 8;
        lVar18 = (lVar18 + (uVar15 & 0xff)) * 0x8088405 + 1;
        *(ulong *)(param_1 + 0x10188) = uVar15;
        *(long *)(param_1 + 0x10190) = lVar18;
        uVar12 = puVar8[(ulong)(uVar5 ^ (uint)lVar18 >> 0x18) & 0xff] ^ uVar12 >> 8;
        *(ulong *)(param_1 + 0x10198) = uVar12;
        *(byte *)((long)&local_80 + lVar16) =
             bVar2 ^ (byte)((uVar5 & 0xfffffffd ^ 3) * (uVar5 | 2) >> 8);
        lVar16 = lVar16 + 1;
      } while (lVar16 != 10);
      uVar5 = (uint)uVar12;
      uVar15 = puVar8[((uint)uVar15 ^ (uint)param_16 >> 0x10) & 0xff] ^ uVar15 >> 8;
      lVar16 = (lVar18 + (uVar15 & 0xff)) * 0x8088405 + 1;
      *(ulong *)(param_1 + 0x10188) = uVar15;
      *(long *)(param_1 + 0x10190) = lVar16;
      uVar12 = puVar8[(ulong)(uVar5 ^ (uint)lVar16 >> 0x18) & 0xff] ^ uVar12 >> 8;
      *(ulong *)(param_1 + 0x10198) = uVar12;
      local_76 = (byte)((uVar5 & 0xfffffffd ^ 3) * (uVar5 | 2) >> 8) ^
                 (byte)((ulong)param_16 >> 0x10);
      uVar5 = (uint)uVar12;
      uVar15 = puVar8[(uint)uVar15 & 0xff ^ (uint)param_16 >> 0x18] ^ uVar15 >> 8;
      lVar16 = (lVar16 + (uVar15 & 0xff)) * 0x8088405 + 1;
      *(ulong *)(param_1 + 0x10188) = uVar15;
      *(long *)(param_1 + 0x10190) = lVar16;
      *(uLongf *)(param_1 + 0x10198) =
           puVar8[(ulong)(uVar5 ^ (uint)lVar16 >> 0x18) & 0xff] ^ uVar12 >> 8;
      local_75 = (byte)((uVar5 & 0xfffffffd ^ 3) * (uVar5 | 2) >> 8) ^
                 (byte)((ulong)param_16 >> 0x18);
      *(undefined4 *)(param_1 + 0x101a8) = 0xc;
      lVar16 = *(long *)(param_1 + 0x40);
      (**(code **)(param_1 + 0x18))(lVar16,*(undefined8 *)(param_1 + 0x68),&local_80,0xc);
      if (lVar16 != 0xc) goto LAB_100252b1c;
    }
    *(undefined4 *)(param_1 + 0x88) = 1;
  }
  else {
LAB_100252b18:
    *(undefined4 *)(param_1 + 0x101a8) = 0;
  }
LAB_100252b1c:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

