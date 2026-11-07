// rea decompile_all
// name: FUN_1006bc05c
// address: 0x1006bc05c
// body: available
// range: 0x1006bc05c-0x1006bc1fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006bc05c(long param_1,long param_2,long param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  int *piVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  
  iVar17 = (int)*(long *)(param_1 + 8);
  if (0xe0000000 < (uint)(param_5 - iVar17)) {
    uVar1 = param_4 - iVar17;
    uVar1 = ((-1 << (ulong)(*(uint *)(param_3 + 4) & 0x1f)) + uVar1) -
            (uVar1 & (-1 << (ulong)(*(int *)(param_3 + 8) - (uint)(5 < *(uint *)(param_3 + 0x1c)) &
                                   0x1f) ^ 0xffffffffU));
    uVar6 = (ulong)uVar1;
    *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + uVar6;
    *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + uVar6;
    iVar17 = (int)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) - uVar1;
    *(ulong *)(param_1 + 0x18) =
         CONCAT17((char)((uint)iVar17 >> 0x18),
                  CONCAT16((char)((uint)iVar17 >> 0x10),
                           CONCAT15((char)((uint)iVar17 >> 8),
                                    CONCAT14((char)iVar17,
                                             (int)*(undefined8 *)(param_1 + 0x18) - uVar1))));
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_2 + 0x10);
    FUN_1006bcbe0(*(undefined8 *)(param_1 + 0x30),1 << (ulong)(*(uint *)(param_3 + 0xc) & 0x1f),
                  uVar6);
    if (*(int *)(param_3 + 0x1c) != 1) {
      iVar17 = 1 << (ulong)(*(uint *)(param_3 + 8) & 0x1f);
      if (*(int *)(param_3 + 0x1c) == 6) {
        iVar4 = iVar17 + 0xf;
        if (-1 < iVar17) {
          iVar4 = iVar17;
        }
        if (0xf < iVar17) {
          iVar4 = iVar4 >> 4;
          bVar7 = (byte)uVar1;
          bVar8 = (byte)(uVar1 >> 8);
          bVar9 = (byte)(uVar1 >> 0x10);
          bVar10 = (byte)(uVar1 >> 0x18);
          piVar5 = (int *)(*(long *)(param_1 + 0x40) + 0x20);
          do {
            iVar17 = -(uint)(piVar5[-8] == 1);
            iVar18 = -(uint)(piVar5[-7] == 1);
            iVar19 = -(uint)(piVar5[-6] == 1);
            iVar20 = -(uint)(piVar5[-5] == 1);
            auVar11._0_4_ =
                 CONCAT13(bVar10 & (byte)((uint)iVar17 >> 0x18),
                          CONCAT12(bVar9 & (byte)((uint)iVar17 >> 0x10),
                                   CONCAT11(bVar8 & (byte)((uint)iVar17 >> 8),bVar7 & (byte)iVar17))
                         ) + piVar5[-8];
            auVar11._4_4_ =
                 CONCAT13(bVar10 & (byte)((uint)iVar18 >> 0x18),
                          CONCAT12(bVar9 & (byte)((uint)iVar18 >> 0x10),
                                   CONCAT11(bVar8 & (byte)((uint)iVar18 >> 8),bVar7 & (byte)iVar18))
                         ) + piVar5[-7];
            auVar11._8_4_ =
                 CONCAT13(bVar10 & (byte)((uint)iVar19 >> 0x18),
                          CONCAT12(bVar9 & (byte)((uint)iVar19 >> 0x10),
                                   CONCAT11(bVar8 & (byte)((uint)iVar19 >> 8),bVar7 & (byte)iVar19))
                         ) + piVar5[-6];
            auVar11._12_4_ =
                 CONCAT13(bVar10 & (byte)((uint)iVar20 >> 0x18),
                          CONCAT12(bVar9 & (byte)((uint)iVar20 >> 0x10),
                                   CONCAT11(bVar8 & (byte)((uint)iVar20 >> 8),bVar7 & (byte)iVar20))
                         ) + piVar5[-5];
            auVar12[4] = bVar7;
            auVar12._0_4_ = uVar1;
            auVar12[5] = bVar8;
            auVar12[6] = bVar9;
            auVar12[7] = bVar10;
            auVar12[8] = bVar7;
            auVar12[9] = bVar8;
            auVar12[10] = bVar9;
            auVar12[0xb] = bVar10;
            auVar12[0xc] = bVar7;
            auVar12[0xd] = bVar8;
            auVar12[0xe] = bVar9;
            auVar12[0xf] = bVar10;
            auVar12 = NEON_uqsub(auVar11,auVar12,4);
            iVar17 = -(uint)(piVar5[-4] == 1);
            iVar18 = -(uint)(piVar5[-3] == 1);
            iVar19 = -(uint)(piVar5[-2] == 1);
            iVar20 = -(uint)(piVar5[-1] == 1);
            auVar14._0_4_ =
                 CONCAT13(bVar10 & (byte)((uint)iVar17 >> 0x18),
                          CONCAT12(bVar9 & (byte)((uint)iVar17 >> 0x10),
                                   CONCAT11(bVar8 & (byte)((uint)iVar17 >> 8),bVar7 & (byte)iVar17))
                         ) + piVar5[-4];
            auVar14._4_4_ =
                 CONCAT13(bVar10 & (byte)((uint)iVar18 >> 0x18),
                          CONCAT12(bVar9 & (byte)((uint)iVar18 >> 0x10),
                                   CONCAT11(bVar8 & (byte)((uint)iVar18 >> 8),bVar7 & (byte)iVar18))
                         ) + piVar5[-3];
            auVar14._8_4_ =
                 CONCAT13(bVar10 & (byte)((uint)iVar19 >> 0x18),
                          CONCAT12(bVar9 & (byte)((uint)iVar19 >> 0x10),
                                   CONCAT11(bVar8 & (byte)((uint)iVar19 >> 8),bVar7 & (byte)iVar19))
                         ) + piVar5[-2];
            auVar14._12_4_ =
                 CONCAT13(bVar10 & (byte)((uint)iVar20 >> 0x18),
                          CONCAT12(bVar9 & (byte)((uint)iVar20 >> 0x10),
                                   CONCAT11(bVar8 & (byte)((uint)iVar20 >> 8),bVar7 & (byte)iVar20))
                         ) + piVar5[-1];
            auVar15[4] = bVar7;
            auVar15._0_4_ = uVar1;
            auVar15[5] = bVar8;
            auVar15[6] = bVar9;
            auVar15[7] = bVar10;
            auVar15[8] = bVar7;
            auVar15[9] = bVar8;
            auVar15[10] = bVar9;
            auVar15[0xb] = bVar10;
            auVar15[0xc] = bVar7;
            auVar15[0xd] = bVar8;
            auVar15[0xe] = bVar9;
            auVar15[0xf] = bVar10;
            auVar15 = NEON_uqsub(auVar14,auVar15,4);
            *(long *)(piVar5 + -6) = auVar12._8_8_;
            *(long *)(piVar5 + -8) = auVar12._0_8_;
            *(long *)(piVar5 + -2) = auVar15._8_8_;
            *(long *)(piVar5 + -4) = auVar15._0_8_;
            iVar17 = -(uint)(*piVar5 == 1);
            iVar18 = -(uint)(piVar5[1] == 1);
            iVar19 = -(uint)(piVar5[2] == 1);
            iVar20 = -(uint)(piVar5[3] == 1);
            auVar13._0_4_ =
                 CONCAT13(bVar10 & (byte)((uint)iVar17 >> 0x18),
                          CONCAT12(bVar9 & (byte)((uint)iVar17 >> 0x10),
                                   CONCAT11(bVar8 & (byte)((uint)iVar17 >> 8),bVar7 & (byte)iVar17))
                         ) + *piVar5;
            auVar13._4_4_ =
                 CONCAT13(bVar10 & (byte)((uint)iVar18 >> 0x18),
                          CONCAT12(bVar9 & (byte)((uint)iVar18 >> 0x10),
                                   CONCAT11(bVar8 & (byte)((uint)iVar18 >> 8),bVar7 & (byte)iVar18))
                         ) + piVar5[1];
            auVar13._8_4_ =
                 CONCAT13(bVar10 & (byte)((uint)iVar19 >> 0x18),
                          CONCAT12(bVar9 & (byte)((uint)iVar19 >> 0x10),
                                   CONCAT11(bVar8 & (byte)((uint)iVar19 >> 8),bVar7 & (byte)iVar19))
                         ) + piVar5[2];
            auVar13._12_4_ =
                 CONCAT13(bVar10 & (byte)((uint)iVar20 >> 0x18),
                          CONCAT12(bVar9 & (byte)((uint)iVar20 >> 0x10),
                                   CONCAT11(bVar8 & (byte)((uint)iVar20 >> 8),bVar7 & (byte)iVar20))
                         ) + piVar5[3];
            iVar17 = -(uint)(piVar5[4] == 1);
            iVar18 = -(uint)(piVar5[5] == 1);
            iVar19 = -(uint)(piVar5[6] == 1);
            iVar20 = -(uint)(piVar5[7] == 1);
            auVar16._0_4_ =
                 CONCAT13(bVar10 & (byte)((uint)iVar17 >> 0x18),
                          CONCAT12(bVar9 & (byte)((uint)iVar17 >> 0x10),
                                   CONCAT11(bVar8 & (byte)((uint)iVar17 >> 8),bVar7 & (byte)iVar17))
                         ) + piVar5[4];
            auVar16._4_4_ =
                 CONCAT13(bVar10 & (byte)((uint)iVar18 >> 0x18),
                          CONCAT12(bVar9 & (byte)((uint)iVar18 >> 0x10),
                                   CONCAT11(bVar8 & (byte)((uint)iVar18 >> 8),bVar7 & (byte)iVar18))
                         ) + piVar5[5];
            auVar16._8_4_ =
                 CONCAT13(bVar10 & (byte)((uint)iVar19 >> 0x18),
                          CONCAT12(bVar9 & (byte)((uint)iVar19 >> 0x10),
                                   CONCAT11(bVar8 & (byte)((uint)iVar19 >> 8),bVar7 & (byte)iVar19))
                         ) + piVar5[6];
            auVar16._12_4_ =
                 CONCAT13(bVar10 & (byte)((uint)iVar20 >> 0x18),
                          CONCAT12(bVar9 & (byte)((uint)iVar20 >> 0x10),
                                   CONCAT11(bVar8 & (byte)((uint)iVar20 >> 8),bVar7 & (byte)iVar20))
                         ) + piVar5[7];
            auVar2[4] = bVar7;
            auVar2._0_4_ = uVar1;
            auVar2[5] = bVar8;
            auVar2[6] = bVar9;
            auVar2[7] = bVar10;
            auVar2[8] = bVar7;
            auVar2[9] = bVar8;
            auVar2[10] = bVar9;
            auVar2[0xb] = bVar10;
            auVar2[0xc] = bVar7;
            auVar2[0xd] = bVar8;
            auVar2[0xe] = bVar9;
            auVar2[0xf] = bVar10;
            auVar12 = NEON_uqsub(auVar13,auVar2,4);
            auVar3[4] = bVar7;
            auVar3._0_4_ = uVar1;
            auVar3[5] = bVar8;
            auVar3[6] = bVar9;
            auVar3[7] = bVar10;
            auVar3[8] = bVar7;
            auVar3[9] = bVar8;
            auVar3[10] = bVar9;
            auVar3[0xb] = bVar10;
            auVar3[0xc] = bVar7;
            auVar3[0xd] = bVar8;
            auVar3[0xe] = bVar9;
            auVar3[0xf] = bVar10;
            auVar15 = NEON_uqsub(auVar16,auVar3,4);
            *(long *)(piVar5 + 2) = auVar12._8_8_;
            *(long *)piVar5 = auVar12._0_8_;
            *(long *)(piVar5 + 6) = auVar15._8_8_;
            *(long *)(piVar5 + 4) = auVar15._0_8_;
            iVar4 = iVar4 + -1;
            piVar5 = piVar5 + 0x10;
          } while (iVar4 != 0);
        }
      }
      else {
        FUN_1006bcbe0(*(long *)(param_1 + 0x40),iVar17,uVar6);
      }
    }
    if (*(uint *)(param_1 + 0x28) != 0) {
      FUN_1006bcbe0(*(undefined8 *)(param_1 + 0x38),1 << (ulong)(*(uint *)(param_1 + 0x28) & 0x1f),
                    uVar6);
    }
    if (*(ulong *)(param_2 + 0x20) < *(ulong *)(param_2 + 0x18)) {
      *(ulong *)(param_2 + 0x20) = *(ulong *)(param_2 + 0x18);
    }
    iVar17 = 0;
    if (uVar1 <= *(uint *)(param_1 + 0x24)) {
      iVar17 = *(uint *)(param_1 + 0x24) - uVar1;
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(int *)(param_1 + 0x24) = iVar17;
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  return;
}

