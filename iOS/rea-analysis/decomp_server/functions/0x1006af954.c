// rea decompile_all
// name: FUN_1006af954
// address: 0x1006af954
// body: available
// range: 0x1006af954-0x1006afc83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006afc80 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte * FUN_1006af954(byte *param_1,byte *param_2,undefined8 *param_3,int *param_4,int *param_5,
                    byte *param_6,ulong param_7)

{
  bool bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  undefined8 uVar14;
  byte bVar22;
  ulong uVar15;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  undefined8 uVar23;
  byte bVar30;
  uint7 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  ulong uVar34;
  undefined1 auStack_14c [260];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (param_7 == 0) {
LAB_1006afa44:
    pbVar7 = (byte *)0xffffffffffffffb8;
    goto LAB_1006afb7c;
  }
  uVar13 = (ulong)*param_6;
  if ((char)*param_6 < '\0') {
    uVar8 = uVar13 - 0x7e >> 1;
    if (param_7 <= uVar8) goto LAB_1006afa44;
    pbVar5 = (byte *)(uVar13 - 0x7f);
    if (pbVar5 < param_2) {
      if (pbVar5 != (byte *)0x0) {
        uVar4 = (uint)pbVar5;
        uVar9 = uVar4;
        if (uVar4 < 3) {
          uVar9 = 2;
        }
        if (pbVar5 < (byte *)0xf) {
LAB_1006afa4c:
          uVar13 = 0;
LAB_1006afa58:
          param_6 = param_6 + (uVar13 >> 1);
          pbVar7 = param_1 + uVar13 + 1;
          do {
            param_6 = param_6 + 1;
            pbVar7[-1] = *param_6 >> 4;
            *pbVar7 = *param_6 & 0xf;
            uVar9 = (int)uVar13 + 2;
            uVar13 = (ulong)uVar9;
            pbVar7 = pbVar7 + 2;
          } while (uVar9 < uVar4);
          goto LAB_1006afa94;
        }
        pbVar7 = param_6 + 1;
        uVar9 = uVar9 - 1 >> 1;
        if (param_1 < param_6 + (ulong)uVar9 + 2 && pbVar7 < param_1 + (ulong)uVar9 * 2 + 2)
        goto LAB_1006afa4c;
        uVar10 = (ulong)(uVar9 + 1);
        if (pbVar5 < (byte *)0x3f) {
          uVar11 = 0;
LAB_1006afc18:
          uVar12 = uVar10 & 0xfffffff8;
          uVar13 = uVar12 << 1;
          pbVar3 = param_1 + uVar11 * 2;
          do {
            uVar15 = *(ulong *)(pbVar7 + (uVar11 & 0x7ffffffffffffff8));
            uVar31 = CONCAT16((byte)(uVar15 >> 0x30) >> 4,
                              CONCAT15((byte)(uVar15 >> 0x28) >> 4,
                                       CONCAT14((byte)(uVar15 >> 0x20) >> 4,
                                                CONCAT13((byte)(uVar15 >> 0x18) >> 4,
                                                         CONCAT12((byte)(uVar15 >> 0x10) >> 4,
                                                                  CONCAT11((byte)(uVar15 >> 8) >> 4,
                                                                           (char)(uVar15 >> 4)))))))
                     & 0xffffffffffff0f;
            uVar34 = uVar15 & 0xf0f0f0f0f0f0f0f;
            *pbVar3 = (byte)uVar31;
            pbVar3[1] = (byte)uVar34;
            pbVar3[2] = (byte)(uVar31 >> 8);
            pbVar3[3] = (byte)(uVar34 >> 8);
            pbVar3[4] = (byte)(uVar31 >> 0x10);
            pbVar3[5] = (byte)(uVar34 >> 0x10);
            pbVar3[6] = (byte)(uVar31 >> 0x18);
            pbVar3[7] = (byte)(uVar34 >> 0x18);
            pbVar3[8] = (byte)(uVar31 >> 0x20);
            pbVar3[9] = (byte)(uVar34 >> 0x20);
            pbVar3[10] = (byte)(uVar31 >> 0x28);
            pbVar3[0xb] = (byte)(uVar34 >> 0x28);
            pbVar3[0xc] = (byte)(uVar31 >> 0x30);
            pbVar3[0xd] = (byte)(uVar34 >> 0x30);
            pbVar3[0xe] = (byte)(uVar15 >> 0x3c);
            pbVar3[0xf] = (byte)(uVar34 >> 0x38);
            pbVar3 = pbVar3 + 0x10;
            uVar11 = uVar11 + 8;
          } while (uVar12 != uVar11);
          if (uVar12 == uVar10) goto LAB_1006afc58;
          goto LAB_1006afa58;
        }
        uVar13 = 0;
        uVar11 = uVar10 & 0xffffffe0;
        pbVar3 = param_1 + 0x20;
        do {
          pbVar2 = pbVar7 + (uVar13 & 0x7fffffffffffffe0);
          uVar23 = *(undefined8 *)(pbVar2 + 8);
          uVar14 = *(undefined8 *)pbVar2;
          uVar33 = *(undefined8 *)(pbVar2 + 0x18);
          uVar32 = *(undefined8 *)(pbVar2 + 0x10);
          bVar16 = (byte)((ulong)uVar14 >> 8);
          bVar17 = (byte)((ulong)uVar14 >> 0x10);
          bVar18 = (byte)((ulong)uVar14 >> 0x18);
          bVar19 = (byte)((ulong)uVar14 >> 0x20);
          bVar20 = (byte)((ulong)uVar14 >> 0x28);
          bVar21 = (byte)((ulong)uVar14 >> 0x30);
          bVar22 = (byte)((ulong)uVar14 >> 0x38);
          bVar24 = (byte)((ulong)uVar23 >> 8);
          bVar25 = (byte)((ulong)uVar23 >> 0x10);
          bVar26 = (byte)((ulong)uVar23 >> 0x18);
          bVar27 = (byte)((ulong)uVar23 >> 0x20);
          bVar28 = (byte)((ulong)uVar23 >> 0x28);
          bVar29 = (byte)((ulong)uVar23 >> 0x30);
          bVar30 = (byte)((ulong)uVar23 >> 0x38);
          pbVar3[-0x20] = (byte)uVar14 >> 4;
          pbVar3[-0x1f] = (byte)uVar14 & 0xf;
          pbVar3[-0x1e] = bVar16 >> 4;
          pbVar3[-0x1d] = bVar16 & 0xf;
          pbVar3[-0x1c] = bVar17 >> 4;
          pbVar3[-0x1b] = bVar17 & 0xf;
          pbVar3[-0x1a] = bVar18 >> 4;
          pbVar3[-0x19] = bVar18 & 0xf;
          pbVar3[-0x18] = bVar19 >> 4;
          pbVar3[-0x17] = bVar19 & 0xf;
          pbVar3[-0x16] = bVar20 >> 4;
          pbVar3[-0x15] = bVar20 & 0xf;
          pbVar3[-0x14] = bVar21 >> 4;
          pbVar3[-0x13] = bVar21 & 0xf;
          pbVar3[-0x12] = bVar22 >> 4;
          pbVar3[-0x11] = bVar22 & 0xf;
          pbVar3[-0x10] = (byte)uVar23 >> 4;
          pbVar3[-0xf] = (byte)uVar23 & 0xf;
          pbVar3[-0xe] = bVar24 >> 4;
          pbVar3[-0xd] = bVar24 & 0xf;
          pbVar3[-0xc] = bVar25 >> 4;
          pbVar3[-0xb] = bVar25 & 0xf;
          pbVar3[-10] = bVar26 >> 4;
          pbVar3[-9] = bVar26 & 0xf;
          pbVar3[-8] = bVar27 >> 4;
          pbVar3[-7] = bVar27 & 0xf;
          pbVar3[-6] = bVar28 >> 4;
          pbVar3[-5] = bVar28 & 0xf;
          pbVar3[-4] = bVar29 >> 4;
          pbVar3[-3] = bVar29 & 0xf;
          pbVar3[-2] = bVar30 >> 4;
          pbVar3[-1] = bVar30 & 0xf;
          bVar16 = (byte)((ulong)uVar32 >> 8);
          bVar17 = (byte)((ulong)uVar32 >> 0x10);
          bVar18 = (byte)((ulong)uVar32 >> 0x18);
          bVar19 = (byte)((ulong)uVar32 >> 0x20);
          bVar20 = (byte)((ulong)uVar32 >> 0x28);
          bVar21 = (byte)((ulong)uVar32 >> 0x30);
          bVar22 = (byte)((ulong)uVar32 >> 0x38);
          bVar24 = (byte)((ulong)uVar33 >> 8);
          bVar25 = (byte)((ulong)uVar33 >> 0x10);
          bVar26 = (byte)((ulong)uVar33 >> 0x18);
          bVar27 = (byte)((ulong)uVar33 >> 0x20);
          bVar28 = (byte)((ulong)uVar33 >> 0x28);
          bVar29 = (byte)((ulong)uVar33 >> 0x30);
          bVar30 = (byte)((ulong)uVar33 >> 0x38);
          *pbVar3 = (byte)uVar32 >> 4;
          pbVar3[1] = (byte)uVar32 & 0xf;
          pbVar3[2] = bVar16 >> 4;
          pbVar3[3] = bVar16 & 0xf;
          pbVar3[4] = bVar17 >> 4;
          pbVar3[5] = bVar17 & 0xf;
          pbVar3[6] = bVar18 >> 4;
          pbVar3[7] = bVar18 & 0xf;
          pbVar3[8] = bVar19 >> 4;
          pbVar3[9] = bVar19 & 0xf;
          pbVar3[10] = bVar20 >> 4;
          pbVar3[0xb] = bVar20 & 0xf;
          pbVar3[0xc] = bVar21 >> 4;
          pbVar3[0xd] = bVar21 & 0xf;
          pbVar3[0xe] = bVar22 >> 4;
          pbVar3[0xf] = bVar22 & 0xf;
          pbVar3[0x10] = (byte)uVar33 >> 4;
          pbVar3[0x11] = (byte)uVar33 & 0xf;
          pbVar3[0x12] = bVar24 >> 4;
          pbVar3[0x13] = bVar24 & 0xf;
          pbVar3[0x14] = bVar25 >> 4;
          pbVar3[0x15] = bVar25 & 0xf;
          pbVar3[0x16] = bVar26 >> 4;
          pbVar3[0x17] = bVar26 & 0xf;
          pbVar3[0x18] = bVar27 >> 4;
          pbVar3[0x19] = bVar27 & 0xf;
          pbVar3[0x1a] = bVar28 >> 4;
          pbVar3[0x1b] = bVar28 & 0xf;
          pbVar3[0x1c] = bVar29 >> 4;
          pbVar3[0x1d] = bVar29 & 0xf;
          pbVar3[0x1e] = bVar30 >> 4;
          pbVar3[0x1f] = bVar30 & 0xf;
          uVar13 = uVar13 + 0x20;
          pbVar3 = pbVar3 + 0x40;
        } while (uVar11 != uVar13);
        if (uVar11 != uVar10) {
          if ((uVar9 + 1 & 0x18) != 0) goto LAB_1006afc18;
          uVar13 = uVar11 << 1;
          goto LAB_1006afa58;
        }
LAB_1006afc58:
        *(undefined4 *)(param_3 + 6) = 0;
        param_3[3] = 0;
        param_3[2] = 0;
        param_3[5] = 0;
        param_3[4] = 0;
        param_3[1] = 0;
        *param_3 = 0;
        if (pbVar5 == (byte *)0x0) goto LAB_1006afb78;
        goto LAB_1006afaa8;
      }
      *(undefined4 *)(param_3 + 6) = 0;
      param_3[3] = 0;
      param_3[2] = 0;
      param_3[5] = 0;
      param_3[4] = 0;
      param_3[1] = 0;
      *param_3 = 0;
    }
  }
  else {
    if (param_7 <= uVar13) goto LAB_1006afa44;
    pbVar5 = param_1;
    FUN_1006b0844(param_1,param_2 + -1,param_6 + 1,uVar13,auStack_14c,6);
    pbVar7 = pbVar5;
    uVar8 = uVar13;
    if ((byte *)0xffffffffffffff88 < pbVar5) goto LAB_1006afb7c;
LAB_1006afa94:
    *(undefined4 *)(param_3 + 6) = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    if (pbVar5 != (byte *)0x0) {
LAB_1006afaa8:
      iVar6 = 0;
      pbVar7 = (byte *)0x0;
      pbVar3 = (byte *)0x1;
      do {
        uVar13 = (ulong)param_1[(long)pbVar7];
        if (0xb < uVar13) goto LAB_1006afb78;
        *(int *)((long)param_3 + uVar13 * 4) = *(int *)((long)param_3 + uVar13 * 4) + 1;
        iVar6 = iVar6 + ((1 << (ulong)(param_1[(long)pbVar7] & 0x1f)) >> 1);
        bVar1 = pbVar3 < pbVar5;
        pbVar7 = pbVar3;
        pbVar3 = (byte *)(ulong)((int)pbVar3 + 1);
      } while (bVar1);
      if (iVar6 != 0) {
        uVar9 = (uint)LZCOUNT(iVar6) ^ 0x1f;
        if (uVar9 < 0xc) {
          *param_5 = 0x20 - (uint)LZCOUNT(iVar6);
          iVar6 = (2 << (ulong)(uVar9 & 0x1f)) - iVar6;
          uVar9 = (uint)LZCOUNT(iVar6) ^ 0x1f;
          if (1 << (ulong)(uVar9 & 0x1f) == iVar6) {
            uVar9 = uVar9 + 1;
            param_1[(long)pbVar5] = (byte)uVar9;
            *(int *)((long)param_3 + (ulong)uVar9 * 4) =
                 *(int *)((long)param_3 + (ulong)uVar9 * 4) + 1;
            pbVar7 = (byte *)0xffffffffffffffec;
            if ((1 < *(uint *)((long)param_3 + 4)) && ((*(uint *)((long)param_3 + 4) & 1) == 0)) {
              *param_4 = (int)pbVar5 + 1;
              pbVar7 = (byte *)(uVar8 + 1);
            }
            goto LAB_1006afb7c;
          }
        }
      }
    }
  }
LAB_1006afb78:
  pbVar7 = (byte *)0xffffffffffffffec;
LAB_1006afb7c:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return pbVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

