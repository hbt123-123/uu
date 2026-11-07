// rea decompile_all
// name: FUN_100088a2c
// address: 0x100088a2c
// body: available
// range: 0x100088a2c-0x100088d7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100088a2c(undefined8 *param_1)

{
  byte bVar1;
  ulong uVar2;
  byte bVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *unaff_x20;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  ulong local_138 [27];
  
  uVar14 = *unaff_x20;
  lVar7 = *(long *)(uVar14 + 0x10);
  uVar9 = uVar14;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar18 = uVar14;
  if ((uVar9 & 1) == 0) {
    uVar18 = 0;
    FUN_10006f5bc(0,lVar7 + 1,1,uVar14);
  }
  uVar9 = *(ulong *)(uVar18 + 0x10);
  uVar14 = uVar18;
  if (*(ulong *)(uVar18 + 0x18) >> 1 <= uVar9) {
    uVar14 = (ulong)(1 < *(ulong *)(uVar18 + 0x18));
    FUN_10006f5bc(uVar14,uVar9 + 1,1,uVar18);
  }
  *(ulong *)(uVar14 + 0x10) = uVar9 + 1;
  lVar8 = uVar14 + uVar9 * 0xd0;
  uVar19 = *param_1;
  *(undefined8 *)(lVar8 + 0x28) = param_1[1];
  *(undefined8 *)(lVar8 + 0x20) = uVar19;
  uVar20 = param_1[3];
  uVar19 = param_1[2];
  uVar22 = param_1[5];
  uVar21 = param_1[4];
  uVar23 = param_1[6];
  uVar25 = param_1[9];
  uVar24 = param_1[8];
  *(undefined8 *)(lVar8 + 0x58) = param_1[7];
  *(undefined8 *)(lVar8 + 0x50) = uVar23;
  *(undefined8 *)(lVar8 + 0x68) = uVar25;
  *(undefined8 *)(lVar8 + 0x60) = uVar24;
  *(undefined8 *)(lVar8 + 0x38) = uVar20;
  *(undefined8 *)(lVar8 + 0x30) = uVar19;
  *(undefined8 *)(lVar8 + 0x48) = uVar22;
  *(undefined8 *)(lVar8 + 0x40) = uVar21;
  uVar20 = param_1[0xb];
  uVar19 = param_1[10];
  uVar22 = param_1[0xd];
  uVar21 = param_1[0xc];
  uVar23 = param_1[0xe];
  uVar25 = param_1[0x11];
  uVar24 = param_1[0x10];
  *(undefined8 *)(lVar8 + 0x98) = param_1[0xf];
  *(undefined8 *)(lVar8 + 0x90) = uVar23;
  *(undefined8 *)(lVar8 + 0xa8) = uVar25;
  *(undefined8 *)(lVar8 + 0xa0) = uVar24;
  *(undefined8 *)(lVar8 + 0x78) = uVar20;
  *(undefined8 *)(lVar8 + 0x70) = uVar19;
  *(undefined8 *)(lVar8 + 0x88) = uVar22;
  *(undefined8 *)(lVar8 + 0x80) = uVar21;
  uVar20 = param_1[0x13];
  uVar19 = param_1[0x12];
  uVar22 = param_1[0x15];
  uVar21 = param_1[0x14];
  uVar23 = param_1[0x16];
  uVar25 = param_1[0x19];
  uVar24 = param_1[0x18];
  *(undefined8 *)(lVar8 + 0xd8) = param_1[0x17];
  *(undefined8 *)(lVar8 + 0xd0) = uVar23;
  *(undefined8 *)(lVar8 + 0xe8) = uVar25;
  *(undefined8 *)(lVar8 + 0xe0) = uVar24;
  *(undefined8 *)(lVar8 + 0xb8) = uVar20;
  *(undefined8 *)(lVar8 + 0xb0) = uVar19;
  *(undefined8 *)(lVar8 + 200) = uVar22;
  *(undefined8 *)(lVar8 + 0xc0) = uVar21;
  *unaff_x20 = uVar14;
  puVar16 = (undefined *)*param_1;
  puVar17 = PTR___swiftEmptyArrayStorage_1000f0740;
  if ((undefined *)0x1 < puVar16) {
    _swift_bridgeObjectRetain(puVar16);
    puVar17 = puVar16;
  }
  uVar9 = *(ulong *)(puVar17 + 0x10);
  if (uVar9 == 0) {
    FUN_10006ff98(param_1,local_138);
  }
  else {
    FUN_10006ff98(param_1,local_138);
    uVar18 = 0;
    pbVar15 = puVar17 + 0x30;
    do {
      if (*(ulong *)(puVar17 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100088d24);
        (*pcVar4)();
      }
      uVar14 = *(ulong *)(pbVar15 + -0x10);
      uVar2 = *(ulong *)(pbVar15 + -8);
      bVar3 = *pbVar15;
      bVar1 = bVar3 & 0xc0;
      if ((bVar3 & 0xc0) != 0x40) {
        bVar1 = bVar3;
      }
      uVar12 = unaff_x20[1];
      lVar8 = *(long *)(uVar12 + 0x10);
      FUN_100065610(uVar14,uVar2,bVar3);
      if (lVar8 == 0) {
LAB_100088bf0:
        uVar5 = unaff_x20[1];
        _swift_isUniquelyReferenced_nonNull_native();
        uVar13 = unaff_x20[1];
        uVar12 = uVar14;
        uVar6 = uVar2;
        local_138[0] = uVar13;
        FUN_100080fdc(uVar14,uVar2,bVar1);
        uVar10 = (ulong)~(uint)uVar6 & 1;
        lVar8 = *(long *)(uVar13 + 0x10) + uVar10;
        if (SCARRY8(*(long *)(uVar13 + 0x10),uVar10)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100088d28);
          (*pcVar4)();
        }
        if (*(long *)(uVar13 + 0x18) < lVar8) {
          FUN_10009a4e0(lVar8,uVar5);
          uVar12 = uVar14;
          uVar5 = uVar2;
          FUN_100080fdc(uVar14,uVar2,bVar1);
          if (((uint)uVar6 & 1) != ((uint)uVar5 & 1)) {
            __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                      (&DAT_1000fa640);
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100088d7c);
            (*pcVar4)();
          }
LAB_100088c7c:
          if ((uVar6 & 1) != 0) goto LAB_100088b0c;
LAB_100088c84:
          lVar8 = local_138[0] + (uVar12 >> 6) * 8;
          *(ulong *)(lVar8 + 0x40) = *(ulong *)(lVar8 + 0x40) | 1L << (uVar12 & 0x3f);
          puVar11 = (ulong *)(*(long *)(local_138[0] + 0x30) + uVar12 * 0x18);
          *puVar11 = uVar14;
          puVar11[1] = uVar2;
          *(byte *)(puVar11 + 2) = bVar1;
          *(long *)(*(long *)(local_138[0] + 0x38) + uVar12 * 8) = lVar7;
          if (SCARRY8(*(long *)(local_138[0] + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100088d2c);
            (*pcVar4)();
          }
          *(long *)(local_138[0] + 0x10) = *(long *)(local_138[0] + 0x10) + 1;
        }
        else {
          if ((uVar5 & 1) != 0) goto LAB_100088c7c;
          FUN_100099d54();
          if ((uVar6 & 1) == 0) goto LAB_100088c84;
LAB_100088b0c:
          FUN_100065628(uVar14,uVar2,bVar3);
          *(long *)(*(long *)(local_138[0] + 0x38) + uVar12 * 8) = lVar7;
        }
        unaff_x20[1] = local_138[0];
      }
      else {
        FUN_100065610(uVar14,uVar2,bVar3);
        _swift_bridgeObjectRetain(uVar12);
        uVar6 = uVar2;
        FUN_100080fdc(uVar14,uVar2,bVar1);
        FUN_100065628(uVar14,uVar2,bVar3);
        if ((uVar6 & 1) == 0) {
          _swift_bridgeObjectRelease(uVar12);
          goto LAB_100088bf0;
        }
        FUN_100065628(uVar14,uVar2,bVar3);
        _swift_bridgeObjectRelease(uVar12);
      }
      uVar18 = uVar18 + 1;
      pbVar15 = pbVar15 + 0x18;
    } while (uVar9 != uVar18);
  }
  _swift_bridgeObjectRelease(puVar17);
  return;
}

