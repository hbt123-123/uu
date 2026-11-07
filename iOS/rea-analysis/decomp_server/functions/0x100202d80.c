// rea decompile_all
// name: FUN_100202d80
// address: 0x100202d80
// body: available
// range: 0x100202d80-0x1002033ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002030ac to 0x100006cdc FUN_100006cdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100202d80(undefined8 param_1,undefined8 param_2,int *param_3)

{
  ulong uVar1;
  int iVar2;
  float fVar3;
  byte bVar4;
  undefined *puVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined1 auVar15 [16];
  double dVar16;
  ulong uVar17;
  double dVar18;
  undefined1 auStack_c0 [16];
  int *local_b0;
  double local_98;
  undefined1 local_88;
  byte local_80;
  undefined1 local_7c;
  undefined *local_78;
  
  iVar2 = *param_3;
  if (iVar2 == 0) {
    FUN_100401b14(0);
    pcVar6 = FUN_1001ff700;
    uVar10 = 0x21b;
  }
  else {
    lVar12 = *(long *)(param_3 + 2);
    lVar13 = *(long *)(lVar12 + 0x10);
    if (lVar13 - 0x1001U < 0xfffffffffffff000) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      pcVar6 = FUN_1002037bc;
      uVar10 = 0x221;
LAB_100202e40:
      local_b0 = param_3;
      FUN_1003fb48c(pcVar6,auStack_c0,0xd0000000000000a0,0x800000010088d990,0xd000000000000029,
                    0x80000001008a21b0,uVar10,0);
      FUN_1002028ec(param_1,param_2,4,0,0xc000000000000000);
      FUN_100006cdc(0,0xc000000000000000);
      return;
    }
    local_78 = PTR___swiftEmptyArrayStorage_100995ea0;
    uVar9 = 0;
    FUN_10006fd88(0,lVar13,0);
    puVar14 = (undefined8 *)(lVar12 + 0x20);
    uVar11 = *(ulong *)(local_78 + 0x10);
    do {
      uVar10 = *puVar14;
      uVar1 = uVar11 + 1;
      if (*(ulong *)(local_78 + 0x18) >> 1 <= uVar11) {
        uVar9 = (ulong)(1 < *(ulong *)(local_78 + 0x18));
        FUN_10006fd88(uVar9,uVar1,1);
      }
      puVar5 = local_78;
      *(ulong *)(local_78 + 0x10) = uVar1;
      *(double *)(local_78 + uVar11 * 0x10 + 0x28) = (double)(float)((ulong)uVar10 >> 0x20);
      *(double *)(local_78 + uVar11 * 0x10 + 0x20) = (double)(float)uVar10;
      puVar14 = puVar14 + 3;
      lVar13 = lVar13 + -1;
      uVar11 = uVar1;
    } while (lVar13 != 0);
    uVar11 = 0;
    auVar15 = NEON_fmov(0x3ff0000000000000,8);
    do {
      if (uVar1 == uVar11) {
        fVar3 = (float)param_3[10];
        bVar4 = *(byte *)(param_3 + 0xb);
        if ((bVar4 & 1) == 0) {
          bVar7 = false;
          bVar8 = true;
          if (0.0 < fVar3) {
            bVar7 = false;
            bVar8 = true;
            if (!NAN(fVar3)) {
              bVar7 = fVar3 == 64.0;
              bVar8 = 64.0 <= fVar3;
            }
          }
          if (bVar8 && !bVar7) {
            _swift_bridgeObjectRelease(local_78);
            FUN_100401b14(0);
            (*(code *)PTR____chkstk_darwin_100995498)();
            pcVar6 = FUN_1002037b4;
            uVar10 = 0x232;
            goto LAB_100202e40;
          }
        }
        FUN_1000c4610();
        if ((uVar9 & 1) == 0) {
          _swift_bridgeObjectRelease(puVar5);
          FUN_100401b14(0);
          FUN_1003fb48c(FUN_1001ff8bc,0,0xd0000000000000a0,0x800000010088d990,0xd000000000000029,
                        0x80000001008a21b0,0x239,0);
          uVar10 = 2;
          goto LAB_100203078;
        }
        FUN_1000b42dc();
        if (((((uint)uVar9 & 0xff) != 2) || (FUN_1000b462c(), ((uint)uVar9 & 0xff) != 2)) &&
           ((uVar9 & 1) != 0)) {
          _swift_bridgeObjectRelease(puVar5);
          FUN_100401b14(0);
          FUN_1003fb48c(FUN_1001ff8e8,0,0xd0000000000000a0,0x800000010088d990,0xd000000000000029,
                        0x80000001008a21b0,0x23f,0);
          uVar10 = 3;
          goto LAB_100203078;
        }
        if (DAT_100a73b60 != -1) {
          _swift_once(&DAT_100a73b60,FUN_1000efc4c);
        }
        if (*(char *)(*(long *)(DAT_100b360a8 + 0xa0) +
                     _TtC14UURemoteServer18DrawOverlayManager::isEnabled) != '\x01') {
          _swift_bridgeObjectRelease(puVar5);
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          pcVar6 = FUN_1002037ac;
          uVar10 = 0x245;
          goto LAB_100202e40;
        }
        local_98 = 0.0;
        if (bVar4 == 0) {
          local_98 = (double)fVar3;
        }
        local_7c = (undefined1)param_3[9];
        local_88 = (undefined1)param_3[0xd];
        local_80 = bVar4;
        FUN_1000c3164((ulong)*(uint5 *)(param_3 + 8),iVar2,puVar5,local_98,
                      (ulong)bVar4 | (ulong)(uint)param_3[0xc] << 0x20,local_88);
        _swift_bridgeObjectRelease(puVar5);
        uVar10 = 0;
        goto LAB_100203078;
      }
      if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100203394);
        (*pcVar6)();
      }
      dVar18 = *(double *)(local_78 + uVar11 * 0x10 + 0x28);
      dVar16 = *(double *)(local_78 + uVar11 * 0x10 + 0x20);
    } while (((((ulong)dVar16 >> 0x30 & 0x7ff8) << 0x30 < 0x7ff0000000000000) &&
             (uVar17 = CONCAT26(-(ushort)((short)((ushort)(byte)~-(0.0 <= dVar18) << 0xf) < 0),
                                CONCAT24(-(ushort)((short)((ushort)(byte)~-(0.0 <= dVar16) << 0xf) <
                                                  0),
                                         CONCAT22(-(ushort)((short)((ushort)(byte)~-(dVar18 <=
                                                                                    auVar15._8_8_)
                                                                   << 0xf) < 0),
                                                  -(ushort)((short)((ushort)(byte)~-(dVar16 <=
                                                                                    auVar15._0_8_)
                                                                   << 0xf) < 0)))) & 0x8000400020001
             , (short)((short)uVar17 + (short)(uVar17 >> 0x10) + (short)(uVar17 >> 0x20) +
                      (short)(uVar17 >> 0x30)) == 0)) &&
            (uVar11 = uVar11 + 1, ((ulong)dVar18 >> 0x30 & 0x7ff8) << 0x30 < 0x7ff0000000000000));
    _swift_bridgeObjectRelease(local_78);
    FUN_100401b14(0);
    pcVar6 = FUN_1001ff7e4;
    uVar10 = 0x22b;
  }
  FUN_1003fb48c(pcVar6,0,0xd0000000000000a0,0x800000010088d990,0xd000000000000029,0x80000001008a21b0
                ,uVar10,0);
  uVar10 = 4;
LAB_100203078:
  FUN_1002028ec(param_1,param_2,uVar10,0,0xc000000000000000);
  FUN_100006cdc(0,0xc000000000000000);
  return;
}

