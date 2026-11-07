// rea decompile_all
// name: FUN_10044eef4
// address: 0x10044eef4
// body: available
// range: 0x10044eef4-0x10044efbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10044eef4(undefined8 *param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  long lVar17;
  byte bVar24;
  undefined1 auVar25 [16];
  
  puVar3 = (undefined8 *)0xb0;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar3 = _malloc(0xb0);
  }
  else {
    _swift_coroFrameAlloc(0xb0,0x8c7);
  }
  *param_1 = puVar3;
  puVar3[0x15] = unaff_x20;
  lVar5 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar5 + 0x58,puVar3 + 0xf,0,0);
  uVar4 = *(ulong *)(lVar5 + 0x78) >> 0x3c;
  bVar1 = 0xe < uVar4;
  uVar2 = 0xc000000000000000;
  if (uVar4 < 0xf) {
    uVar2 = *(ulong *)(lVar5 + 0x78);
  }
  uVar7 = *(undefined8 *)(lVar5 + 0x60);
  uVar6 = *(undefined8 *)(lVar5 + 0x58);
  uVar9 = *(undefined8 *)(lVar5 + 0x70);
  uVar8 = *(undefined8 *)(lVar5 + 0x68);
  lVar5 = -(ulong)(-1 < (long)((ulong)CONCAT14(bVar1,(uint)bVar1) << 0x3f));
  lVar17 = -(ulong)(-1 < (long)((ulong)bVar1 << 0x3f));
  bVar10 = (byte)((ulong)lVar5 >> 8);
  bVar11 = (byte)((ulong)lVar5 >> 0x10);
  bVar12 = (byte)((ulong)lVar5 >> 0x18);
  bVar13 = (byte)((ulong)lVar5 >> 0x20);
  bVar14 = (byte)((ulong)lVar5 >> 0x28);
  bVar15 = (byte)((ulong)lVar5 >> 0x30);
  bVar16 = (byte)((ulong)lVar5 >> 0x38);
  bVar18 = (byte)((ulong)lVar17 >> 8);
  bVar19 = (byte)((ulong)lVar17 >> 0x10);
  bVar20 = (byte)((ulong)lVar17 >> 0x18);
  bVar21 = (byte)((ulong)lVar17 >> 0x20);
  bVar22 = (byte)((ulong)lVar17 >> 0x28);
  bVar23 = (byte)((ulong)lVar17 >> 0x30);
  bVar24 = (byte)((ulong)lVar17 >> 0x38);
  puVar3[1] = CONCAT17((byte)((ulong)uVar7 >> 0x38) & bVar24,
                       CONCAT16((byte)((ulong)uVar7 >> 0x30) & bVar23,
                                CONCAT15((byte)((ulong)uVar7 >> 0x28) & bVar22,
                                         CONCAT14((byte)((ulong)uVar7 >> 0x20) & bVar21,
                                                  CONCAT13((byte)((ulong)uVar7 >> 0x18) & bVar20,
                                                           CONCAT12((byte)((ulong)uVar7 >> 0x10) &
                                                                    bVar19,CONCAT11((byte)((ulong)
                                                  uVar7 >> 8) & bVar18,(byte)uVar7 & (byte)lVar17)))
                                                 ))));
  *puVar3 = CONCAT17((byte)((ulong)uVar6 >> 0x38) & bVar16,
                     CONCAT16((byte)((ulong)uVar6 >> 0x30) & bVar15,
                              CONCAT15((byte)((ulong)uVar6 >> 0x28) & bVar14,
                                       CONCAT14((byte)((ulong)uVar6 >> 0x20) & bVar13,
                                                CONCAT13((byte)((ulong)uVar6 >> 0x18) & bVar12,
                                                         CONCAT12((byte)((ulong)uVar6 >> 0x10) &
                                                                  bVar11,CONCAT11((byte)((ulong)
                                                  uVar6 >> 8) & bVar10,(byte)uVar6 & (byte)lVar5))))
                                      )));
  puVar3[3] = CONCAT17((byte)((ulong)uVar9 >> 0x38) & bVar24,
                       CONCAT16((byte)((ulong)uVar9 >> 0x30) & bVar23,
                                CONCAT15((byte)((ulong)uVar9 >> 0x28) & bVar22,
                                         CONCAT14((byte)((ulong)uVar9 >> 0x20) & bVar21,
                                                  CONCAT13((byte)((ulong)uVar9 >> 0x18) & bVar20,
                                                           CONCAT12((byte)((ulong)uVar9 >> 0x10) &
                                                                    bVar19,CONCAT11((byte)((ulong)
                                                  uVar9 >> 8) & bVar18,(byte)uVar9 & (byte)lVar17)))
                                                 ))));
  puVar3[2] = CONCAT17((byte)((ulong)uVar8 >> 0x38) & bVar16,
                       CONCAT16((byte)((ulong)uVar8 >> 0x30) & bVar15,
                                CONCAT15((byte)((ulong)uVar8 >> 0x28) & bVar14,
                                         CONCAT14((byte)((ulong)uVar8 >> 0x20) & bVar13,
                                                  CONCAT13((byte)((ulong)uVar8 >> 0x18) & bVar12,
                                                           CONCAT12((byte)((ulong)uVar8 >> 0x10) &
                                                                    bVar11,CONCAT11((byte)((ulong)
                                                  uVar8 >> 8) & bVar10,(byte)uVar8 & (byte)lVar5))))
                                        )));
  puVar3[4] = uVar2;
  FUN_10045eb08(uVar6,uVar7,uVar8,uVar9);
  auVar25._8_8_ = puVar3;
  auVar25._0_8_ = FUN_10044efbc;
  return auVar25;
}

