// rea decompile_all
// name: FUN_1006bc1fc
// address: 0x1006bc1fc
// body: available
// range: 0x1006bc1fc-0x1006bcbdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006bcbdc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006bc1fc(long param_1,char *param_2,ulong param_3,char *param_4,ulong param_5,int param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint *puVar4;
  ulong uVar5;
  undefined4 uVar6;
  uint uVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  long lVar15;
  long lVar16;
  char cVar17;
  uint uVar18;
  uint uVar19;
  byte *pbVar20;
  uint uVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  char *pcVar26;
  long lVar27;
  ulong uVar28;
  char *pcVar29;
  int iVar30;
  ulong uVar31;
  int iVar32;
  long lVar33;
  undefined8 uVar34;
  ushort *puVar35;
  char *pcVar36;
  uint *puVar37;
  char *pcVar38;
  byte *pbVar39;
  undefined1 auVar40 [16];
  uint local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (param_5 < 7) {
    FUN_1006e05d0(param_1 + 0x2d0,param_5,*(undefined4 *)(param_1 + 0xb4));
  }
  else {
    *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_1 + 0x248);
    *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_1 + 0x238);
    *(undefined4 *)(param_1 + 0x280) = 0;
    lVar22 = *(long *)(param_1 + 0x2f0);
    *(long *)(param_1 + 0x3a0) = lVar22;
    *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_1 + 0xe8);
    uVar10 = (int)param_4 - *(int *)(param_1 + 0x308);
    if (*(int *)(param_1 + 0x324) + 0x180U < uVar10) {
      uVar19 = (uVar10 - *(int *)(param_1 + 0x324)) - 0x180;
      if (0xbf < uVar19) {
        uVar19 = 0xc0;
      }
      *(uint *)(param_1 + 0x324) = uVar10 - uVar19;
    }
    if (*(uint *)(param_1 + 0x31c) < *(uint *)(param_1 + 0x318)) {
      lVar33 = 1;
    }
    else {
      lVar33 = (ulong)(*(long *)(param_1 + 0x3b0) != 0) << 1;
    }
    lVar27 = *(long *)(param_1 + 0x2f8);
    *(undefined4 *)(lVar27 + 0x11e4) = *(undefined4 *)(lVar22 + 0x11e4);
    *(undefined4 *)(lVar27 + 0x11e8) = *(undefined4 *)(lVar22 + 0x11e8);
    *(undefined4 *)(lVar27 + 0x11ec) = *(undefined4 *)(lVar22 + 0x11ec);
    if (*(ulong *)(param_1 + 0x2d8) < *(ulong *)(param_1 + 0x2e0)) {
      puVar13 = (undefined8 *)(param_1 + 0x2d0);
LAB_1006bc390:
      FUN_1006e0678(puVar13,param_1 + 0x300,param_1 + 0x238,lVar27 + 0x11e4,param_4,param_5);
    }
    else {
      if (*(int *)(param_1 + 0x100) != 0) {
        local_148 = *(undefined8 *)(param_1 + 0x2c0);
        uStack_140 = 0;
        uStack_130 = *(undefined8 *)(param_1 + 0x2c8);
        local_138 = 0;
        uVar28 = param_1 + 0x288;
        FUN_1006df578(uVar28,&local_148,param_1 + 0x100,param_4,param_5);
        if (0xffffffffffffff88 < uVar28) goto LAB_1006bc530;
        lVar27 = *(long *)(param_1 + 0x2f8);
        puVar13 = &local_148;
        goto LAB_1006bc390;
      }
      puVar13 = (undefined8 *)(param_1 + 0x300);
      (*(code *)(&PTR_FUN_1009e7388)[lVar33 * 10 + (long)*(int *)(param_1 + 0xbc)])
                (puVar13,param_1 + 0x238,lVar27 + 0x11e4,param_4,param_5);
    }
    _memcpy(*(void **)(param_1 + 0x250),param_4 + (param_5 - (long)puVar13),(size_t)puVar13);
    *(long *)(param_1 + 0x250) = *(long *)(param_1 + 0x250) + (long)puVar13;
    if (*(int *)(param_1 + 0x210) != 0) {
      lVar33 = *(long *)(param_1 + 0x220);
      lVar22 = *(long *)(param_1 + 0x240) - *(long *)(param_1 + 0x238);
      uVar28 = lVar22 >> 3;
      if (lVar22 != 0) {
        iVar32 = 0;
        uVar31 = 0;
        lVar22 = *(long *)(param_1 + 0x218);
        uVar10 = *(uint *)(param_1 + 0x284);
        uVar5 = uVar28;
        if (uVar28 < 2) {
          uVar5 = 1;
        }
        puVar35 = (ushort *)(*(long *)(param_1 + 0x238) + 6);
        puVar37 = (uint *)(lVar22 + lVar33 * 0x14 + 8);
        do {
          uVar7 = *(uint *)(puVar35 + -3);
          puVar37[-1] = uVar7;
          uVar9 = puVar35[-1];
          uVar18 = (uint)uVar9;
          *puVar37 = (uint)uVar9;
          uVar8 = *puVar35;
          uVar19 = uVar8 + 3;
          puVar37[1] = uVar19;
          if (uVar10 == uVar31) {
            if (*(int *)(param_1 + 0x280) != 2) {
              if (*(int *)(param_1 + 0x280) == 1) {
                uVar18 = uVar9 | 0x10000;
                *puVar37 = uVar18;
              }
              goto LAB_1006bc4b8;
            }
            uVar19 = uVar8 + 0x10003;
            puVar37[1] = uVar19;
            uVar21 = uVar7 - 3;
            if (uVar7 < 3 || uVar21 == 0) goto LAB_1006bc4c0;
LAB_1006bc454:
            puVar37[-1] = uVar21;
          }
          else {
LAB_1006bc4b8:
            uVar21 = uVar7 - 3;
            if (2 < uVar7 && uVar21 != 0) goto LAB_1006bc454;
LAB_1006bc4c0:
            uVar11 = (uint)uVar31 - uVar7;
            uVar21 = (uint)uVar31;
            if (uVar7 != 3) {
              uVar21 = uVar11;
            }
            if (uVar18 == 0) {
              uVar7 = uVar7 + 1;
              uVar11 = uVar21 - 1;
            }
            puVar37[2] = uVar7;
            puVar4 = (uint *)(&DAT_10084f570 + (ulong)~uVar11 * 4);
            if (-1 < (int)uVar11) {
              puVar4 = (uint *)(lVar22 + lVar33 * 0x14 + (ulong)uVar11 * 0x14 + 4);
            }
            uVar21 = *puVar4;
            puVar37[-1] = uVar21;
            if (uVar7 == 4) {
              uVar21 = uVar21 - 1;
              goto LAB_1006bc454;
            }
          }
          puVar35 = puVar35 + 4;
          uVar18 = uVar18 + iVar32;
          iVar32 = uVar18 + uVar19;
          puVar37[-2] = uVar18;
          uVar31 = uVar31 + 1;
          puVar37 = puVar37 + 5;
        } while (uVar5 != uVar31);
      }
      *(ulong *)(param_1 + 0x220) = uVar28 + lVar33;
      goto LAB_1006bc530;
    }
    pbVar39 = *(byte **)(param_1 + 0x2f0);
    lVar22 = *(long *)(param_1 + 0x2f8);
    uVar34 = *(undefined8 *)(param_1 + 0x3d8);
    uVar6 = *(undefined4 *)(param_1 + 8);
    uVar10 = *(uint *)(param_1 + 0xa4);
    iVar32 = *(int *)(param_1 + 0xbc);
    if (*(int *)(param_1 + 0xe8) == 1) {
LAB_1006bc5cc:
      bVar12 = false;
    }
    else if (*(int *)(param_1 + 0xe8) == 2) {
      bVar12 = true;
    }
    else {
      if (iVar32 != 1) goto LAB_1006bc5cc;
      bVar12 = *(int *)(param_1 + 0xb8) != 0;
    }
    lVar33 = *(long *)(param_1 + 0x238);
    lVar27 = *(long *)(param_1 + 0x240);
    uVar23 = *(undefined8 *)(param_1 + 0x268);
    uVar24 = *(undefined8 *)(param_1 + 600);
    uVar25 = *(undefined8 *)(param_1 + 0x260);
    pbVar14 = pbVar39;
    FUN_1006bd3a8(pbVar39,lVar22,iVar32,bVar12,param_2,param_3,*(long *)(param_1 + 0x248),
                  *(long *)(param_1 + 0x250) - *(long *)(param_1 + 0x248),uVar34,0x1800,uVar6);
    if (pbVar14 < (byte *)0xffffffffffffff89) {
      if ((long)(param_3 - (long)pbVar14) < 4) {
        pbVar14 = (byte *)0xffffffffffffffba;
        goto LAB_1006bcb14;
      }
      uVar31 = lVar27 - lVar33;
      uVar28 = (long)uVar31 >> 3;
      pbVar14 = (byte *)(param_2 + (long)pbVar14);
      if (uVar28 < 0x80) {
        pbVar20 = pbVar14 + 1;
        *pbVar14 = (byte)(uVar31 >> 3);
      }
      else if (uVar28 >> 8 < 0x7f) {
        *pbVar14 = (byte)(uVar28 >> 8) | 0x80;
        pbVar14[1] = (byte)(uVar31 >> 3);
        pbVar20 = pbVar14 + 2;
      }
      else {
        *pbVar14 = 0xff;
        *(short *)(pbVar14 + 1) = (short)((uint)uVar31 >> 3) + -0x7f00;
        pbVar20 = pbVar14 + 3;
      }
      if (lVar27 != lVar33) {
        pcVar29 = *(char **)(param_1 + 600);
        pcVar26 = *(char **)(param_1 + 0x260);
        uVar31 = *(long *)(param_1 + 0x240) - *(long *)(param_1 + 0x238);
        if ((uVar31 & 0x7fffffff8) != 0) {
          uVar31 = uVar31 >> 3 & 0xffffffff;
          puVar35 = (ushort *)(*(long *)(param_1 + 0x238) + 6);
          pbVar14 = *(byte **)(param_1 + 0x268);
          pcVar36 = pcVar29;
          pcVar38 = pcVar26;
          do {
            while( true ) {
              uVar8 = puVar35[-1];
              if (uVar8 < 0x40) {
                cVar17 = (&DAT_10084f57c)[(uint)uVar8];
              }
              else {
                cVar17 = '2' - (char)LZCOUNT((uint)uVar8);
              }
              uVar8 = *puVar35;
              *pcVar36 = cVar17;
              *pbVar14 = (byte)LZCOUNT(*(undefined4 *)(puVar35 + -3)) ^ 0x1f;
              if (uVar8 < 0x80) break;
              *pcVar38 = 'C' - (char)LZCOUNT((uint)uVar8);
              pbVar14 = pbVar14 + 1;
              pcVar36 = pcVar36 + 1;
              puVar35 = puVar35 + 4;
              uVar31 = uVar31 - 1;
              pcVar38 = pcVar38 + 1;
              if (uVar31 == 0) goto LAB_1006bc768;
            }
            *pcVar38 = (&DAT_10084f5bc)[uVar8];
            pbVar14 = pbVar14 + 1;
            pcVar36 = pcVar36 + 1;
            puVar35 = puVar35 + 4;
            uVar31 = uVar31 - 1;
            pcVar38 = pcVar38 + 1;
          } while (uVar31 != 0);
        }
LAB_1006bc768:
        pbVar1 = pbVar20 + 1;
        iVar30 = *(int *)(param_1 + 0x280);
        if (iVar30 == 1) {
          pcVar29[*(uint *)(param_1 + 0x284)] = '#';
          iVar30 = *(int *)(param_1 + 0x280);
        }
        if (iVar30 == 2) {
          pcVar26[*(uint *)(param_1 + 0x284)] = '4';
        }
        local_14c = 0x23;
        puVar13 = &local_148;
        FUN_1006b2ddc(puVar13,&local_14c,uVar24,uVar28,uVar34,0x1800);
        *(undefined4 *)(lVar22 + 0x11e0) = *(undefined4 *)(pbVar39 + 0x11e0);
        lVar27 = lVar22 + 0x11e0;
        FUN_1006bd674(lVar27,&local_148,local_14c,puVar13,uVar28,9,pbVar39 + 0xcb4,&DAT_10084f63c,
                      0x100000006,iVar32);
        pbVar14 = pbVar1;
        FUN_1006bdb4c(pbVar1,param_2 + (param_3 - (long)pbVar1),lVar22 + 0xcb4,9,lVar27,&local_148,
                      local_14c,uVar24,uVar28,&DAT_10084f63c,0x2300000006,pbVar39 + 0xcb4,0x524,
                      uVar34,0x1800);
        if ((byte *)0xffffffffffffff88 < pbVar14) goto LAB_1006bcb14;
        pbVar2 = pbVar1 + (long)pbVar14;
        local_14c = 0x1f;
        puVar13 = &local_148;
        FUN_1006b2ddc(puVar13,&local_14c,uVar23,uVar28,uVar34,0x1800);
        *(undefined4 *)(lVar22 + 0x11d8) = *(undefined4 *)(pbVar39 + 0x11d8);
        lVar15 = lVar22 + 0x11d8;
        FUN_1006bd674(lVar15,&local_148,local_14c,puVar13,uVar28,8,pbVar39 + 0x404,&DAT_10084f684,5,
                      local_14c < 0x1d,iVar32);
        pbVar14 = pbVar2;
        FUN_1006bdb4c(pbVar2,param_2 + (param_3 - (long)pbVar2),lVar22 + 0x404,8,lVar15,&local_148,
                      local_14c,uVar23,uVar28,&DAT_10084f684,0x1c00000005,pbVar39 + 0x404,0x304,
                      uVar34,0x1800);
        if ((byte *)0xffffffffffffff88 < pbVar14) goto LAB_1006bcb14;
        pbVar3 = pbVar2 + (long)pbVar14;
        if ((int)lVar27 != 2) {
          pbVar1 = (byte *)0x0;
        }
        if ((int)lVar15 != 2) {
          pbVar2 = pbVar1;
        }
        local_14c = 0x34;
        puVar13 = &local_148;
        FUN_1006b2ddc(puVar13,&local_14c,uVar25,uVar28,uVar34,0x1800);
        *(undefined4 *)(lVar22 + 0x11dc) = *(undefined4 *)(pbVar39 + 0x11dc);
        lVar16 = lVar22 + 0x11dc;
        FUN_1006bd674(lVar16,&local_148,local_14c,puVar13,uVar28,9,pbVar39 + 0x708,&DAT_10084f6be,
                      0x100000006,iVar32);
        pbVar14 = pbVar3;
        FUN_1006bdb4c(pbVar3,param_2 + (param_3 - (long)pbVar3),lVar22 + 0x708,9,lVar16,&local_148,
                      local_14c,uVar25,uVar28,&DAT_10084f6be,0x3400000006,pbVar39 + 0x708,0x5ac,
                      uVar34,0x1800);
        pbVar39 = pbVar3;
        if ((int)lVar16 != 2) {
          pbVar39 = pbVar2;
        }
        if ((byte *)0xffffffffffffff88 < pbVar14) goto LAB_1006bcb14;
        *pbVar20 = (char)lVar27 * '@' + (char)((int)lVar15 << 4) + (char)((int)lVar16 << 2);
        pbVar3 = pbVar3 + (long)pbVar14;
        pbVar14 = pbVar3;
        FUN_1006bdd10(pbVar3,param_2 + (param_3 - (long)pbVar3),lVar22 + 0x708,uVar25,lVar22 + 0x404
                      ,uVar23,lVar22 + 0xcb4,uVar24,lVar33,uVar28,0x39 < uVar10,uVar6);
        if ((byte *)0xffffffffffffff88 < pbVar14) goto LAB_1006bcb14;
        pbVar20 = pbVar3 + (long)pbVar14;
        if ((pbVar39 == (byte *)0x0) || (3 < (long)pbVar20 - (long)pbVar39)) goto LAB_1006bcbd0;
        goto LAB_1006bcb24;
      }
      _memcpy((void *)(lVar22 + 0x404),pbVar39 + 0x404,0xde0);
LAB_1006bcbd0:
      pbVar14 = pbVar20 + -(long)param_2;
      if (pbVar14 != (byte *)0x0) goto LAB_1006bcb14;
    }
    else {
LAB_1006bcb14:
      if ((param_3 < param_5) || (pbVar14 != (byte *)0xffffffffffffffba)) {
        if (pbVar14 < (byte *)0xffffffffffffff89) {
          uVar10 = *(uint *)(param_1 + 0xbc) - 1;
          if (*(uint *)(param_1 + 0xbc) < 8) {
            uVar10 = 6;
          }
          if ((byte *)((param_5 - (param_5 >> ((ulong)uVar10 & 0x3f))) + -2) <= pbVar14) {
            pbVar14 = (byte *)0x0;
          }
        }
      }
      else {
LAB_1006bcb24:
        pbVar14 = (byte *)0x0;
      }
    }
    if (((param_6 == 0) || (*(int *)(param_1 + 0x230) != 0)) || ((byte *)0x18 < pbVar14)) {
LAB_1006bcb98:
      if (pbVar14 + -2 < (byte *)0xffffffffffffff87) {
        auVar40 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x2f0),
                           *(undefined1 (*) [16])(param_1 + 0x2f0),8,1);
        *(long *)(param_1 + 0x2f8) = auVar40._8_8_;
        *(long *)(param_1 + 0x2f0) = auVar40._0_8_;
      }
    }
    else {
      cVar17 = *param_4;
      lVar22 = param_5 - 1;
      do {
        param_4 = param_4 + 1;
        if (cVar17 != *param_4) goto LAB_1006bcb98;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      *param_2 = cVar17;
    }
  }
  if (*(int *)(*(long *)(param_1 + 0x2f0) + 0x11d8) == 2) {
    *(undefined4 *)(*(long *)(param_1 + 0x2f0) + 0x11d8) = 1;
  }
LAB_1006bc530:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

