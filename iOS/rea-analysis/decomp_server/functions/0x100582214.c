// rea decompile_all
// name: FUN_100582214
// address: 0x100582214
// body: available
// range: 0x100582214-0x100582327 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100582214(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long in_x3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(in_x3 + 0x30,auStack_48,0,0);
  uVar4 = *(undefined8 *)(in_x3 + 0x30);
  uVar1 = *(undefined8 *)(in_x3 + 0x48);
  if (*(long *)(in_x3 + 0x40) == 0) {
    uVar4 = 0;
    bVar11 = 5;
    bVar10 = 3;
    bVar9 = 3;
    bVar8 = 3;
    bVar7 = 3;
    bVar6 = 3;
    uStack_88 = 4;
    local_90 = 0x300;
  }
  else {
    bVar5 = (byte)((ulong)uVar1 >> 8);
    bVar6 = (byte)((ulong)uVar1 >> 0x10);
    bVar7 = (byte)((ulong)uVar1 >> 0x18);
    bVar8 = (byte)((ulong)uVar1 >> 0x20);
    bVar9 = (byte)((ulong)uVar1 >> 0x28);
    bVar10 = (byte)((ulong)uVar1 >> 0x30);
    bVar11 = (byte)((ulong)uVar1 >> 0x38);
    uStack_88 = CONCAT17(bVar11 & DAT_10083eb60._15_1_,
                         CONCAT16(bVar10 & DAT_10083eb60._14_1_,
                                  CONCAT15(bVar9 & DAT_10083eb60._13_1_,
                                           CONCAT14(bVar8 & DAT_10083eb60._12_1_,
                                                    CONCAT13(bVar7 & DAT_10083eb60._11_1_,
                                                             CONCAT12(bVar6 & DAT_10083eb60._10_1_,
                                                                      CONCAT11(bVar5 & DAT_10083eb60
                                                                                       ._9_1_,
                                                                               (byte)uVar1 &
                                                                               DAT_10083eb60._8_1_))
                                                            )))));
    local_90 = CONCAT17(bVar11 & DAT_10083eb60._7_1_,
                        CONCAT16(bVar10 & DAT_10083eb60._6_1_,
                                 CONCAT15(bVar9 & DAT_10083eb60._5_1_,
                                          CONCAT14(bVar8 & DAT_10083eb60._4_1_,
                                                   CONCAT13(bVar7 & DAT_10083eb60._3_1_,
                                                            CONCAT12(bVar6 & DAT_10083eb60._2_1_,
                                                                     CONCAT11(bVar5 & DAT_10083eb60.
                                                                                      _1_1_,
                                                                              (byte)uVar1 &
                                                                              DAT_10083eb60)))))));
  }
  FUN_1005a7f54();
  auVar2[2] = local_90._2_1_ | bVar6;
  auVar2._0_2_ = (short)local_90;
  auVar2[3] = local_90._3_1_;
  auVar2[4] = local_90._4_1_ | bVar8;
  auVar2[5] = local_90._5_1_;
  auVar2[6] = local_90._6_1_ | bVar10;
  auVar2[7] = local_90._7_1_;
  auVar2[8] = (undefined1)uStack_88;
  auVar2[9] = uStack_88._1_1_;
  auVar2[10] = uStack_88._2_1_;
  auVar2[0xb] = uStack_88._3_1_ | bVar7;
  auVar2[0xc] = uStack_88._4_1_;
  auVar2[0xd] = uStack_88._5_1_ | bVar9;
  auVar2[0xe] = uStack_88._6_1_;
  auVar2[0xf] = uStack_88._7_1_ | bVar11;
  auVar3[2] = local_90._2_1_ | bVar6;
  auVar3._0_2_ = (short)local_90;
  auVar3[3] = local_90._3_1_;
  auVar3[4] = local_90._4_1_ | bVar8;
  auVar3[5] = local_90._5_1_;
  auVar3[6] = local_90._6_1_ | bVar10;
  auVar3[7] = local_90._7_1_;
  auVar3[8] = (undefined1)uStack_88;
  auVar3[9] = uStack_88._1_1_;
  auVar3[10] = uStack_88._2_1_;
  auVar3[0xb] = uStack_88._3_1_ | bVar7;
  auVar3[0xc] = uStack_88._4_1_;
  auVar3[0xd] = uStack_88._5_1_ | bVar9;
  auVar3[0xe] = uStack_88._6_1_;
  auVar3[0xf] = uStack_88._7_1_ | bVar11;
  NEON_ext(auVar2,auVar3,8,1);
  return uVar4;
}

