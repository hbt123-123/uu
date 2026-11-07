// rea decompile_all
// name: FUN_100091f60
// address: 0x100091f60
// body: available
// range: 0x100091f60-0x1000927a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte * FUN_100091f60(byte *param_1,byte *param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte **ppbVar13;
  long lVar14;
  long lVar15;
  byte *unaff_x24;
  byte *local_90;
  ulong uStack_88;
  byte *local_80;
  byte *local_78;
  byte *local_70;
  ulong local_68;
  
  local_78 = param_1 + 0x20;
  local_68 = *(long *)(param_1 + 0x10) << 1 | 1;
  local_70 = (byte *)0x0;
  pbVar12 = param_1;
  local_80 = param_1;
  FUN_10009c568();
  if (param_2 == (byte *)0x0) {
    _swift_bridgeObjectRetain();
    goto LAB_10009252c;
  }
  pbVar11 = (byte *)((ulong)param_2 >> 0x38 & 0xf);
  pbVar7 = (byte *)((ulong)pbVar12 & 0xffffffffffff);
  pbVar10 = pbVar7;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    pbVar10 = pbVar11;
  }
  if (pbVar10 == (byte *)0x0) {
    _swift_bridgeObjectRetain(param_1);
    _swift_bridgeObjectRelease();
    param_1 = param_2;
    goto LAB_10009252c;
  }
  if (((ulong)param_2 >> 0x3c & 1) == 0) {
    if (((ulong)param_2 >> 0x3d & 1) == 0) {
      if (((ulong)pbVar12 >> 0x3c & 1) == 0) {
        pbVar7 = param_2;
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
      }
      else {
        pbVar12 = (byte *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
      }
      if (*pbVar12 == 0x2b) {
        if ((long)pbVar7 < 1) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10009276c);
          (*pcVar5)();
        }
        pbVar10 = pbVar7 + -1;
        if (pbVar10 == (byte *)0x0) goto LAB_100092238;
        if (pbVar12 == (byte *)0x0) goto LAB_1000921dc;
        lVar15 = 0;
        do {
          pbVar12 = pbVar12 + 1;
          if (((9 < *pbVar12 - 0x30) ||
              (lVar14 = lVar15 * 10, SUB168(SEXT816(lVar15) * SEXT816(10),8) != lVar14 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*pbVar12 - 0x30), lVar15 = lVar14 + uVar1, SCARRY8(lVar14,uVar1)
             )) goto LAB_100092238;
          unaff_x24 = (byte *)0x0;
          pbVar10 = pbVar10 + -1;
        } while (pbVar10 != (byte *)0x0);
      }
      else if (*pbVar12 == 0x2d) {
        if ((long)pbVar7 < 1) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100092764);
          (*pcVar5)();
        }
        pbVar10 = pbVar7 + -1;
        if (pbVar10 == (byte *)0x0) {
LAB_100092238:
          unaff_x24 = (byte *)0x1;
        }
        else if (pbVar12 == (byte *)0x0) {
LAB_1000921dc:
          unaff_x24 = (byte *)0x0;
        }
        else {
          lVar15 = 0;
          do {
            pbVar12 = pbVar12 + 1;
            if (((9 < *pbVar12 - 0x30) ||
                (lVar14 = lVar15 * 10, SUB168(SEXT816(lVar15) * SEXT816(10),8) != lVar14 >> 0x3f))
               || (uVar1 = (ulong)(byte)(*pbVar12 - 0x30), lVar15 = lVar14 - uVar1,
                  SBORROW8(lVar14,uVar1))) goto LAB_100092238;
            unaff_x24 = (byte *)0x0;
            pbVar10 = pbVar10 + -1;
          } while (pbVar10 != (byte *)0x0);
        }
      }
      else {
        if (pbVar7 == (byte *)0x0) goto LAB_100092238;
        if (pbVar12 == (byte *)0x0) goto LAB_1000921dc;
        lVar15 = 0;
        do {
          if (((9 < *pbVar12 - 0x30) ||
              (lVar14 = lVar15 * 10, SUB168(SEXT816(lVar15) * SEXT816(10),8) != lVar14 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*pbVar12 - 0x30), lVar15 = lVar14 + uVar1, SCARRY8(lVar14,uVar1)
             )) goto LAB_100092238;
          unaff_x24 = (byte *)0x0;
          pbVar12 = pbVar12 + 1;
          pbVar7 = pbVar7 + -1;
        } while (pbVar7 != (byte *)0x0);
      }
    }
    else {
      local_90 = pbVar12;
      uStack_88 = (ulong)param_2 & 0xffffffffffffff;
      uVar2 = (uint)pbVar12 & 0xff;
      if (uVar2 == 0x2b) {
        if (pbVar11 == (byte *)0x0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100092770);
          (*pcVar5)();
        }
        pbVar11 = pbVar11 + -1;
        if (pbVar11 == (byte *)0x0) goto LAB_100092238;
        lVar15 = 0;
        pbVar12 = (byte *)((ulong)&local_90 | 1);
        do {
          if (((9 < *pbVar12 - 0x30) ||
              (lVar14 = lVar15 * 10, SUB168(SEXT816(lVar15) * SEXT816(10),8) != lVar14 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*pbVar12 - 0x30), lVar15 = lVar14 + uVar1, SCARRY8(lVar14,uVar1)
             )) goto LAB_100092238;
          unaff_x24 = (byte *)0x0;
          pbVar12 = pbVar12 + 1;
          pbVar11 = pbVar11 + -1;
        } while (pbVar11 != (byte *)0x0);
      }
      else if (uVar2 == 0x2d) {
        if (pbVar11 == (byte *)0x0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100092768);
          (*pcVar5)();
        }
        pbVar11 = pbVar11 + -1;
        if (pbVar11 == (byte *)0x0) goto LAB_100092238;
        lVar15 = 0;
        pbVar12 = (byte *)((ulong)&local_90 | 1);
        do {
          if (((9 < *pbVar12 - 0x30) ||
              (lVar14 = lVar15 * 10, SUB168(SEXT816(lVar15) * SEXT816(10),8) != lVar14 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*pbVar12 - 0x30), lVar15 = lVar14 - uVar1,
             SBORROW8(lVar14,uVar1))) goto LAB_100092238;
          unaff_x24 = (byte *)0x0;
          pbVar12 = pbVar12 + 1;
          pbVar11 = pbVar11 + -1;
        } while (pbVar11 != (byte *)0x0);
      }
      else {
        if (pbVar11 == (byte *)0x0) goto LAB_100092238;
        lVar15 = 0;
        ppbVar13 = &local_90;
        do {
          if (((9 < *(byte *)ppbVar13 - 0x30) ||
              (lVar14 = lVar15 * 10, SUB168(SEXT816(lVar15) * SEXT816(10),8) != lVar14 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*(byte *)ppbVar13 - 0x30), lVar15 = lVar14 + uVar1,
             SCARRY8(lVar14,uVar1))) goto LAB_100092238;
          unaff_x24 = (byte *)0x0;
          ppbVar13 = (byte **)((long)ppbVar13 + 1);
          pbVar11 = pbVar11 + -1;
        } while (pbVar11 != (byte *)0x0);
      }
    }
    _swift_bridgeObjectRetain(param_1);
    _swift_bridgeObjectRelease();
    param_1 = param_2;
    if ((int)unaff_x24 != 0) goto LAB_10009252c;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    pbVar10 = param_2;
    FUN_100092e30(pbVar12,param_2,10);
    pbVar7 = pbVar10;
    _swift_bridgeObjectRelease();
    param_1 = param_2;
    if (((ulong)pbVar10 & 1) != 0) goto LAB_10009252c;
  }
  FUN_10009c568();
  param_1 = param_2;
  if (pbVar7 == (byte *)0x0) goto LAB_10009252c;
  pbVar11 = (byte *)((ulong)pbVar7 >> 0x38 & 0xf);
  pbVar10 = (byte *)((ulong)param_2 & 0xffffffffffff);
  pbVar12 = pbVar10;
  if (((ulong)pbVar7 & 0x2000000000000000) != 0) {
    pbVar12 = pbVar11;
  }
  if (pbVar12 == (byte *)0x0) {
    _swift_bridgeObjectRelease();
    param_1 = pbVar7;
    goto LAB_10009252c;
  }
  if (((ulong)pbVar7 >> 0x3c & 1) == 0) {
    if (((ulong)pbVar7 >> 0x3d & 1) == 0) {
      if (((ulong)param_2 >> 0x3c & 1) == 0) {
        pbVar10 = pbVar7;
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
      }
      else {
        param_2 = (byte *)(((ulong)pbVar7 & 0xfffffffffffffff) + 0x20);
      }
      if (*param_2 == 0x2b) {
        if ((long)pbVar10 < 1) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1000927a4);
          (*pcVar5)();
        }
        pbVar10 = pbVar10 + -1;
        if (pbVar10 == (byte *)0x0) goto LAB_100092488;
        if (param_2 == (byte *)0x0) goto LAB_100092498;
        pbVar12 = (byte *)0x0;
        do {
          param_2 = param_2 + 1;
          if (((9 < *param_2 - 0x30) ||
              (lVar15 = (long)pbVar12 * 10,
              SUB168(SEXT816((long)pbVar12) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*param_2 - 0x30), pbVar12 = (byte *)(lVar15 + uVar1),
             SCARRY8(lVar15,uVar1))) goto LAB_100092488;
          pbVar10 = pbVar10 + -1;
        } while (pbVar10 != (byte *)0x0);
      }
      else if (*param_2 == 0x2d) {
        if ((long)pbVar10 < 1) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10009279c);
          (*pcVar5)();
        }
        pbVar10 = pbVar10 + -1;
        if (pbVar10 == (byte *)0x0) {
LAB_100092488:
          pbVar12 = (byte *)0x0;
          bVar4 = true;
          goto LAB_100092504;
        }
        if (param_2 == (byte *)0x0) {
LAB_100092498:
          pbVar12 = (byte *)0x0;
        }
        else {
          pbVar12 = (byte *)0x0;
          do {
            param_2 = param_2 + 1;
            if (((9 < *param_2 - 0x30) ||
                (lVar15 = (long)pbVar12 * 10,
                SUB168(SEXT816((long)pbVar12) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
               (uVar1 = (ulong)(byte)(*param_2 - 0x30), pbVar12 = (byte *)(lVar15 - uVar1),
               SBORROW8(lVar15,uVar1))) goto LAB_100092488;
            pbVar10 = pbVar10 + -1;
          } while (pbVar10 != (byte *)0x0);
        }
      }
      else {
        if (pbVar10 == (byte *)0x0) goto LAB_100092488;
        if (param_2 == (byte *)0x0) goto LAB_100092498;
        pbVar12 = (byte *)0x0;
        do {
          if (((9 < *param_2 - 0x30) ||
              (lVar15 = (long)pbVar12 * 10,
              SUB168(SEXT816((long)pbVar12) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*param_2 - 0x30), pbVar12 = (byte *)(lVar15 + uVar1),
             SCARRY8(lVar15,uVar1))) goto LAB_100092488;
          param_2 = param_2 + 1;
          pbVar10 = pbVar10 + -1;
        } while (pbVar10 != (byte *)0x0);
      }
      bVar4 = false;
    }
    else {
      local_90 = param_2;
      uStack_88 = (ulong)pbVar7 & 0xffffffffffffff;
      uVar2 = (uint)param_2 & 0xff;
      if (uVar2 == 0x2b) {
        if (pbVar11 == (byte *)0x0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1000927a8);
          (*pcVar5)();
        }
        pbVar11 = pbVar11 + -1;
        if (pbVar11 == (byte *)0x0) goto LAB_1000924f8;
        pbVar12 = (byte *)0x0;
        pbVar10 = (byte *)((ulong)&local_90 | 1);
        do {
          if (((9 < *pbVar10 - 0x30) ||
              (lVar15 = (long)pbVar12 * 10,
              SUB168(SEXT816((long)pbVar12) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*pbVar10 - 0x30), pbVar12 = (byte *)(lVar15 + uVar1),
             SCARRY8(lVar15,uVar1))) goto LAB_1000924f8;
          bVar4 = false;
          pbVar10 = pbVar10 + 1;
          pbVar11 = pbVar11 + -1;
        } while (pbVar11 != (byte *)0x0);
      }
      else if (uVar2 == 0x2d) {
        if (pbVar11 == (byte *)0x0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1000927a0);
          (*pcVar5)();
        }
        pbVar11 = pbVar11 + -1;
        if (pbVar11 == (byte *)0x0) {
LAB_1000924f8:
          pbVar12 = (byte *)0x0;
          bVar4 = true;
        }
        else {
          pbVar12 = (byte *)0x0;
          pbVar10 = (byte *)((ulong)&local_90 | 1);
          do {
            if (((9 < *pbVar10 - 0x30) ||
                (lVar15 = (long)pbVar12 * 10,
                SUB168(SEXT816((long)pbVar12) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
               (uVar1 = (ulong)(byte)(*pbVar10 - 0x30), pbVar12 = (byte *)(lVar15 - uVar1),
               SBORROW8(lVar15,uVar1))) goto LAB_1000924f8;
            bVar4 = false;
            pbVar10 = pbVar10 + 1;
            pbVar11 = pbVar11 + -1;
          } while (pbVar11 != (byte *)0x0);
        }
      }
      else {
        if (pbVar11 == (byte *)0x0) goto LAB_1000924f8;
        pbVar12 = (byte *)0x0;
        ppbVar13 = &local_90;
        do {
          if (((9 < *(byte *)ppbVar13 - 0x30) ||
              (lVar15 = (long)pbVar12 * 10,
              SUB168(SEXT816((long)pbVar12) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*(byte *)ppbVar13 - 0x30), pbVar12 = (byte *)(lVar15 + uVar1),
             SCARRY8(lVar15,uVar1))) goto LAB_1000924f8;
          bVar4 = false;
          ppbVar13 = (byte **)((long)ppbVar13 + 1);
          pbVar11 = pbVar11 + -1;
        } while (pbVar11 != (byte *)0x0);
      }
    }
LAB_100092504:
    _swift_bridgeObjectRelease();
    param_1 = pbVar7;
    param_2 = pbVar12;
    if (bVar4) goto LAB_10009252c;
  }
  else {
    unaff_x24 = pbVar7;
    FUN_100092e30();
    _swift_bridgeObjectRelease();
    param_1 = pbVar7;
    if (((ulong)unaff_x24 & 1) != 0) goto LAB_10009252c;
  }
  uVar1 = local_68;
  pbVar10 = local_70;
  pbVar12 = local_78;
  unaff_x24 = (byte *)(local_68 >> 1);
  if (local_70 == unaff_x24) {
    param_1 = pbVar7;
    pbVar11 = local_80;
    if (param_2 != (byte *)0x0) {
LAB_10009252c:
      FUN_100054664();
      _swift_allocError(&DAT_1000fa8c8,param_1,0,0);
      param_1[0] = 3;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x20] = 0;
      param_1[0x21] = 0;
      param_1[0x22] = 0;
      param_1[0x23] = 0;
      param_1[0x24] = 0;
      param_1[0x25] = 0;
      param_1[0x26] = 0;
      param_1[0x27] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
      param_1[0x30] = 0;
      param_1[0x31] = 0;
      param_1[0x32] = 0;
      param_1[0x33] = 0;
      param_1[0x34] = 0;
      param_1[0x35] = 0;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
      param_1[0x28] = 0;
      param_1[0x29] = 0;
      param_1[0x2a] = 0;
      param_1[0x2b] = 0;
      param_1[0x2c] = 0;
      param_1[0x2d] = 0;
      param_1[0x2e] = 0;
      param_1[0x2f] = 0;
      param_1[0x40] = 0;
      param_1[0x41] = 0;
      param_1[0x42] = 0;
      param_1[0x43] = 0;
      param_1[0x44] = 0;
      param_1[0x45] = 0;
      param_1[0x46] = 0;
      param_1[0x47] = 0;
      param_1[0x38] = 0;
      param_1[0x39] = 0;
      param_1[0x3a] = 0;
      param_1[0x3b] = 0;
      param_1[0x3c] = 0;
      param_1[0x3d] = 0;
      param_1[0x3e] = 0;
      param_1[0x3f] = 0;
      param_1[0x48] = 0;
      param_1[0x49] = 0;
      param_1[0x4a] = 0;
      param_1[0x4b] = 0;
      param_1[0x4c] = 0;
      param_1[0x4d] = 0;
      param_1[0x4e] = 0;
      param_1[0x4f] = 0;
      param_1[0x50] = 0x11;
      _swift_willThrow();
      _swift_unknownObjectRelease(local_80);
      return unaff_x24;
    }
  }
  else {
    if ((long)unaff_x24 <= (long)local_70) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100092788);
      (*pcVar5)();
    }
    uVar6 = *(undefined8 *)(local_78 + (long)unaff_x24 * 0x10 + -0x10);
    uVar3 = *(undefined8 *)(local_78 + (long)unaff_x24 * 0x10 + -8);
    uVar9 = local_68;
    _swift_bridgeObjectRetain(uVar3);
    uVar8 = uVar3;
    FUN_100093f20(param_2,uVar6,uVar3);
    _swift_bridgeObjectRelease(uVar3);
    __sSS14_fromSubstringySSSshFZ(param_2,uVar6,uVar8,uVar9);
    _swift_bridgeObjectRelease(uVar9);
    pbVar11 = local_80;
  }
  local_80 = pbVar11;
  if ((uVar1 & 1) != 0) {
    uVar6 = 0;
    __ss28__ContiguousArrayStorageBaseCMa(0);
    pbVar7 = pbVar11;
    _swift_unknownObjectRetain_n(pbVar11,2);
    _swift_dynamicCastClass();
    if (pbVar7 == (byte *)0x0) {
      _swift_unknownObjectRelease(pbVar11);
      pbVar7 = PTR___swiftEmptyArrayStorage_1000f0740;
    }
    lVar15 = *(long *)(pbVar7 + 0x10);
    _swift_release();
    if (SBORROW8((long)unaff_x24,(long)pbVar10)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10009278c);
      (*pcVar5)();
    }
    if (lVar15 == (long)unaff_x24 - (long)pbVar10) {
      pbVar12 = pbVar11;
      _swift_dynamicCastClass(pbVar11,uVar6);
      _swift_unknownObjectRelease(pbVar11);
      pbVar7 = PTR___swiftEmptyArrayStorage_1000f0740;
      if (pbVar12 != (byte *)0x0) {
        return pbVar12;
      }
      goto LAB_1000926d0;
    }
    _swift_unknownObjectRelease();
  }
  pbVar7 = pbVar11;
  FUN_10007aef0(pbVar11,pbVar12,pbVar10,uVar1);
LAB_1000926d0:
  _swift_unknownObjectRelease(pbVar11);
  return pbVar7;
}

