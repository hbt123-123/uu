// rea decompile_all
// name: FUN_1000756b4
// address: 0x1000756b4
// body: available
// range: 0x1000756b4-0x1000759e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000756b4(byte *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  code *pcVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  byte **ppbVar12;
  byte *pbVar13;
  uint uVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  byte *local_48;
  ulong uStack_40;
  byte local_38;
  
  uVar10 = param_2 >> 0x38 & 0xf;
  uVar8 = (ulong)param_1 & 0xffffffffffff;
  uVar15 = uVar8;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar15 = uVar10;
  }
  if (uVar15 == 0) {
    _swift_bridgeObjectRelease(param_2);
    uVar14 = 1;
    pbVar13 = (byte *)0x0;
    goto LAB_100075974;
  }
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1 >> 0x3c & 1) == 0) {
        uVar8 = param_2;
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
      }
      else {
        param_1 = (byte *)((param_2 & 0xfffffffffffffff) + 0x20);
      }
      if (*param_1 == 0x2b) {
        if ((long)uVar8 < 1) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1000759e4);
          (*pcVar7)();
        }
        lVar9 = uVar8 - 1;
        if (lVar9 == 0) goto LAB_1000758e4;
        if (param_1 == (byte *)0x0) {
LAB_100075954:
          pbVar13 = (byte *)0x0;
          local_38 = 0;
        }
        else {
          pbVar13 = (byte *)0x0;
          do {
            param_1 = param_1 + 1;
            if (((9 < *param_1 - 0x30) ||
                (auVar3._8_8_ = 0, auVar3._0_8_ = pbVar13, SUB168(auVar3 * ZEXT816(10),8) != 0)) ||
               (uVar8 = (long)pbVar13 * 10, uVar15 = (ulong)(byte)(*param_1 - 0x30),
               pbVar13 = (byte *)(uVar8 + uVar15), CARRY8(uVar8,uVar15))) goto LAB_1000758e4;
            local_38 = 0;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
      }
      else if (*param_1 == 0x2d) {
        if ((long)uVar8 < 1) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1000759dc);
          (*pcVar7)();
        }
        lVar9 = uVar8 - 1;
        if (lVar9 == 0) {
LAB_1000758e4:
          pbVar13 = (byte *)0x0;
          local_38 = 1;
        }
        else {
          if (param_1 == (byte *)0x0) goto LAB_100075954;
          pbVar13 = (byte *)0x0;
          do {
            param_1 = param_1 + 1;
            if (((9 < *param_1 - 0x30) ||
                (auVar1._8_8_ = 0, auVar1._0_8_ = pbVar13, SUB168(auVar1 * ZEXT816(10),8) != 0)) ||
               (uVar8 = (long)pbVar13 * 10, uVar15 = (ulong)(byte)(*param_1 - 0x30),
               pbVar13 = (byte *)(uVar8 - uVar15), uVar8 < uVar15)) goto LAB_1000758e4;
            local_38 = 0;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
      }
      else {
        if (uVar8 == 0) goto LAB_1000758e4;
        pbVar13 = (byte *)0x0;
        do {
          if (((9 < *param_1 - 0x30) ||
              (auVar5._8_8_ = 0, auVar5._0_8_ = pbVar13, SUB168(auVar5 * ZEXT816(10),8) != 0)) ||
             (uVar10 = (long)pbVar13 * 10, uVar15 = (ulong)(byte)(*param_1 - 0x30),
             pbVar13 = (byte *)(uVar10 + uVar15), CARRY8(uVar10,uVar15))) goto LAB_1000758e4;
          local_38 = 0;
          param_1 = param_1 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
    else {
      local_48 = param_1;
      uStack_40 = param_2 & 0xffffffffffffff;
      uVar14 = (uint)param_1 & 0xff;
      if (uVar14 == 0x2b) {
        if (uVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1000759e8);
          (*pcVar7)();
        }
        lVar9 = uVar10 - 1;
        if (lVar9 == 0) goto LAB_100075944;
        pbVar13 = (byte *)0x0;
        pbVar11 = (byte *)((ulong)&local_48 | 1);
        do {
          if (((9 < *pbVar11 - 0x30) ||
              (auVar4._8_8_ = 0, auVar4._0_8_ = pbVar13, SUB168(auVar4 * ZEXT816(10),8) != 0)) ||
             (uVar8 = (long)pbVar13 * 10, uVar15 = (ulong)(byte)(*pbVar11 - 0x30),
             pbVar13 = (byte *)(uVar8 + uVar15), CARRY8(uVar8,uVar15))) goto LAB_100075944;
          pbVar11 = pbVar11 + 1;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      else if (uVar14 == 0x2d) {
        if (uVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1000759e0);
          (*pcVar7)();
        }
        lVar9 = uVar10 - 1;
        if (lVar9 == 0) {
LAB_100075944:
          pbVar13 = (byte *)0x0;
          local_38 = 1;
          goto LAB_100075960;
        }
        pbVar13 = (byte *)0x0;
        pbVar11 = (byte *)((ulong)&local_48 | 1);
        do {
          if (((9 < *pbVar11 - 0x30) ||
              (auVar2._8_8_ = 0, auVar2._0_8_ = pbVar13, SUB168(auVar2 * ZEXT816(10),8) != 0)) ||
             (uVar8 = (long)pbVar13 * 10, uVar15 = (ulong)(byte)(*pbVar11 - 0x30),
             pbVar13 = (byte *)(uVar8 - uVar15), uVar8 < uVar15)) goto LAB_100075944;
          pbVar11 = pbVar11 + 1;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      else {
        if (uVar10 == 0) goto LAB_100075944;
        pbVar13 = (byte *)0x0;
        ppbVar12 = &local_48;
        do {
          if (((9 < *(byte *)ppbVar12 - 0x30) ||
              (auVar6._8_8_ = 0, auVar6._0_8_ = pbVar13, SUB168(auVar6 * ZEXT816(10),8) != 0)) ||
             (uVar8 = (long)pbVar13 * 10, uVar15 = (ulong)(byte)(*(byte *)ppbVar12 - 0x30),
             pbVar13 = (byte *)(uVar8 + uVar15), CARRY8(uVar8,uVar15))) goto LAB_100075944;
          ppbVar12 = (byte **)((long)ppbVar12 + 1);
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      local_38 = 0;
    }
LAB_100075960:
    uVar15 = (ulong)local_38;
    param_1 = pbVar13;
  }
  else {
    uVar15 = param_2;
    FUN_100072274(param_1,param_2,10,FUN_10007309c);
  }
  _swift_bridgeObjectRelease(param_2);
  uVar14 = (uint)uVar15;
  pbVar13 = (byte *)0x0;
  if ((uVar15 & 1) == 0) {
    pbVar13 = param_1;
  }
LAB_100075974:
  auVar16._8_4_ = uVar14 & 1;
  auVar16._0_8_ = pbVar13;
  auVar16._12_4_ = 0;
  return auVar16;
}

