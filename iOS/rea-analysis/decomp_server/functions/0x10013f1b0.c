// rea decompile_all
// name: FUN_10013f1b0
// address: 0x10013f1b0
// body: available
// range: 0x10013f1b0-0x10013fa5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10013f1b0(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  byte bVar16;
  long lVar17;
  long unaff_x20;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  double dVar24;
  double dVar25;
  double local_e0;
  undefined8 uStack_d8;
  long local_c8;
  undefined4 local_9c;
  long local_98;
  undefined8 uStack_90;
  long local_88 [3];
  
  lVar9 = 0;
  __s10Foundation4DateVMa();
  lVar15 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  lVar22 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0;
  __s10Foundation3URLVMa();
  lVar17 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar17 + 0x40));
  lVar23 = lVar22 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar19 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = lVar23 - extraout_x8_01;
  local_c8 = _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData;
  uVar18 = *(undefined8 *)
            (unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData);
  local_98 = CONCAT44(local_98._4_4_,param_1);
  _swift_retain(uVar18);
  FUN_1003e37e8(local_88,&local_98);
  _swift_release(uVar18);
  lVar14 = _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::receiveDataCount;
  if (local_88[0] != 0) {
    if (SCARRY8(*(long *)(local_88[0] +
                         _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::receiveDataCount),
                param_2)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10013fa24);
      (*pcVar8)();
    }
    *(long *)(local_88[0] + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::receiveDataCount
             ) = *(long *)(local_88[0] +
                          _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::receiveDataCount)
                 + param_2;
    lVar11 = 0;
    FUN_10016dd58();
    _swift_allocObject();
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined8 *)(lVar11 + 0x20) = 0xe000000000000000;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined8 *)(lVar11 + 0x30) = 0xe000000000000000;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined8 *)(lVar11 + 0x40) = 0xe000000000000000;
    *(undefined8 *)(lVar11 + 0x58) = 0;
    *(undefined8 *)(lVar11 + 0x60) = 0xe000000000000000;
    *(undefined8 *)(lVar11 + 0x68) = 0;
    *(undefined4 *)(lVar11 + 0x10) = param_1;
    *(undefined8 *)(lVar11 + 0x48) = param_3;
    *(undefined8 *)(lVar11 + 0x50) = param_4;
    lVar12 = _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::userPasteUrl;
    _swift_beginAccess(local_88[0] +
                       _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::userPasteUrl,local_88
                       ,0,0);
    FUN_1000e3888(local_88[0] + lVar12,lVar21);
    lVar12 = lVar21;
    (**(code **)(lVar17 + 0x30))(lVar21,1,lVar10);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar17 + 0x10))(lVar23,lVar21,lVar10);
      _swift_bridgeObjectRetain(param_4);
      puVar19 = &DAT_100a766c8;
      FUN_100040bb4(lVar21,&DAT_100a766c8,&DAT_10080b1d0);
      __s10Foundation3URLV4pathSSvg();
      (**(code **)(lVar17 + 8))(lVar23,lVar10);
      uVar18 = *(undefined8 *)(lVar11 + 0x60);
    }
    else {
      _swift_bridgeObjectRetain(param_4);
      FUN_100040bb4(lVar21,&DAT_100a766c8,&DAT_10080b1d0);
      lVar21 = 0;
      uVar18 = 0xe000000000000000;
      puVar19 = (undefined *)0xe000000000000000;
    }
    *(long *)(lVar11 + 0x58) = lVar21;
    *(undefined **)(lVar11 + 0x60) = puVar19;
    _swift_bridgeObjectRelease(uVar18);
    lVar10 = *(long *)(local_88[0] + lVar14);
    if (lVar10 == 0) {
      bVar16 = 0;
      dVar25 = 0.0;
    }
    else {
      dVar25 = (double)lVar10;
      if (lVar10 < 0x400) {
        lVar10 = 0;
      }
      else {
        dVar25 = dVar25 * 0.0009765625;
        if (1024.0 <= dVar25) {
          dVar25 = dVar25 * 0.0009765625;
          if (1024.0 <= dVar25) {
            dVar25 = dVar25 * 0.0009765625;
            if (1024.0 <= dVar25) {
              dVar25 = dVar25 * 0.0009765625;
              lVar10 = 4;
            }
            else {
              lVar10 = 3;
            }
          }
          else {
            lVar10 = 2;
          }
        }
        else {
          lVar10 = 1;
        }
      }
      bVar16 = (&DAT_100a74888)[lVar10];
    }
    puVar19 = &DAT_100a766e8;
    FUN_100004bb4(&DAT_100a766e8,&DAT_10080b1e0);
    puVar13 = puVar19;
    _swift_allocObject();
    puVar6 = PTR___sSdN_1009958f0;
    uStack_d8 = 2;
    local_e0 = 4.94065645841247e-324;
    *(undefined8 *)(puVar13 + 0x18) = 2;
    *(undefined8 *)(puVar13 + 0x10) = 1;
    puVar7 = PTR___sSds7CVarArgsWP_100995920;
    *(undefined **)(puVar13 + 0x38) = puVar6;
    *(undefined **)(puVar13 + 0x40) = puVar7;
    *(double *)(puVar13 + 0x20) = dVar25;
    lVar10 = 0x66312e25;
    uVar18 = 0xe400000000000000;
    __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(0x66312e25,0xe400000000000000,puVar13);
    local_98 = lVar10;
    uStack_90 = uVar18;
    __sSS6appendyySSF(0x8680e2,0xa300000000000000);
    uVar18 = 0x4247;
    if (bVar16 != 3) {
      uVar18 = 0x4254;
    }
    uVar20 = 0x424d;
    if (bVar16 != 2) {
      uVar20 = uVar18;
    }
    uVar18 = 0x42;
    if (bVar16 != 0) {
      uVar18 = 0x424b;
    }
    uVar1 = 0xe100000000000000;
    if (bVar16 != 0) {
      uVar1 = 0xe200000000000000;
    }
    uVar2 = 0xe200000000000000;
    if (bVar16 < 2) {
      uVar2 = uVar1;
      uVar20 = uVar18;
    }
    __sSS6appendyySSF(uVar20,uVar2);
    _swift_bridgeObjectRelease(uVar2);
    uVar18 = *(undefined8 *)(lVar11 + 0x20);
    *(long *)(lVar11 + 0x18) = local_98;
    *(undefined8 *)(lVar11 + 0x20) = uStack_90;
    _swift_bridgeObjectRelease(uVar18);
    lVar10 = _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::totalDataCount;
    lVar21 = *(long *)(local_88[0] +
                      _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::totalDataCount);
    if (lVar21 == 0) {
      bVar16 = 0;
      dVar25 = 0.0;
    }
    else {
      dVar25 = (double)lVar21;
      if (lVar21 < 0x400) {
        lVar21 = 0;
      }
      else {
        dVar25 = dVar25 * 0.0009765625;
        if (1024.0 <= dVar25) {
          dVar25 = dVar25 * 0.0009765625;
          if (1024.0 <= dVar25) {
            dVar25 = dVar25 * 0.0009765625;
            if (1024.0 <= dVar25) {
              dVar25 = dVar25 * 0.0009765625;
              lVar21 = 4;
            }
            else {
              lVar21 = 3;
            }
          }
          else {
            lVar21 = 2;
          }
        }
        else {
          lVar21 = 1;
        }
      }
      bVar16 = (&DAT_100a74888)[lVar21];
    }
    _swift_allocObject(puVar19,0x48,7);
    *(undefined8 *)(puVar19 + 0x18) = uStack_d8;
    *(double *)(puVar19 + 0x10) = local_e0;
    *(undefined **)(puVar19 + 0x38) = PTR___sSdN_1009958f0;
    *(undefined **)(puVar19 + 0x40) = puVar7;
    *(double *)(puVar19 + 0x20) = dVar25;
    lVar21 = 0x66312e25;
    uVar18 = 0xe400000000000000;
    dVar25 = local_e0;
    __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(0x66312e25,0xe400000000000000,puVar19);
    local_98 = lVar21;
    uStack_90 = uVar18;
    __sSS6appendyySSF(0x8680e2,0xa300000000000000);
    if (bVar16 < 2) {
      if (bVar16 == 0) {
        uVar20 = 0xe100000000000000;
        uVar18 = 0x42;
      }
      else {
        uVar20 = 0xe200000000000000;
        uVar18 = 0x424b;
      }
    }
    else {
      uVar20 = 0xe200000000000000;
      if (bVar16 == 2) {
        uVar18 = 0x424d;
      }
      else if (bVar16 == 3) {
        uVar18 = 0x4247;
      }
      else {
        uVar18 = 0x4254;
      }
    }
    __sSS6appendyySSF(uVar18,uVar20);
    _swift_bridgeObjectRelease(uVar20);
    uVar18 = *(undefined8 *)(lVar11 + 0x30);
    *(long *)(lVar11 + 0x28) = local_98;
    *(undefined8 *)(lVar11 + 0x30) = uStack_90;
    _swift_bridgeObjectRelease(uVar18);
    __s10Foundation4DateVACycfC(lVar22);
    __s10Foundation4DateV21timeIntervalSince1970Sdvg();
    (**(code **)(lVar15 + 8))(lVar22);
    if (0x7fefffffffffffff < (ulong)ABS(dVar25)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10013fa28);
      (*pcVar8)();
    }
    if (dVar25 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10013fa2c);
      (*pcVar8)();
    }
    if (9.223372036854776e+18 <= dVar25) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10013fa30);
      (*pcVar8)();
    }
    dVar24 = *(double *)
              (local_88[0] + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::taskStartTime);
    if (0x7fefffffffffffff < (ulong)ABS(dVar24)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10013fa34);
      (*pcVar8)();
    }
    if (dVar24 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10013fa38);
      (*pcVar8)();
    }
    if (9.223372036854776e+18 <= dVar24) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10013fa3c);
      (*pcVar8)();
    }
    uVar4 = (long)dVar25 - (long)dVar24;
    if (SBORROW8((long)dVar25,(long)dVar24)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10013fa40);
      (*pcVar8)();
    }
    uVar3 = uVar4;
    if (uVar4 < 2) {
      uVar3 = 1;
    }
    lVar15 = *(long *)(local_88[0] + lVar10);
    lVar21 = *(long *)(local_88[0] + lVar14);
    uVar5 = lVar15 - lVar21;
    if (SBORROW8(lVar15,lVar21)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10013fa44);
      (*pcVar8)();
    }
    if ((lVar21 == -0x8000000000000000) && (uVar4 == 0xffffffffffffffff)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10013fa5c);
      (*pcVar8)();
    }
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = lVar21 / (long)uVar3;
    }
    if (uVar4 < 2) {
      uVar4 = 1;
    }
    dVar25 = (double)(long)((double)(uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU)) /
                           (double)(long)uVar4);
    if (0x7fefffffffffffff < (ulong)ABS(dVar25)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10013fa48);
      (*pcVar8)();
    }
    if (dVar25 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10013fa4c);
      (*pcVar8)();
    }
    if (9.223372036854776e+18 <= dVar25) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10013fa50);
      (*pcVar8)();
    }
    lVar21 = (long)dVar25;
    FUN_1001446c8();
    uVar18 = *(undefined8 *)(lVar11 + 0x40);
    *(long *)(lVar11 + 0x38) = lVar21;
    *(long *)(lVar11 + 0x40) = lVar9;
    _swift_bridgeObjectRelease(uVar18);
    lVar9 = *(long *)(local_88[0] + lVar10);
    if (lVar9 == 0) {
      dVar25 = 100.0;
    }
    else {
      dVar25 = ((double)*(long *)(local_88[0] + lVar14) / (double)lVar9) * 100.0;
      if (0x7fefffffffffffff < (ulong)ABS(dVar25)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10013fa58);
        (*pcVar8)();
      }
      if (dVar25 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10013fa54);
        (*pcVar8)();
      }
      if (9.223372036854776e+18 <= dVar25) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10013f824);
        (*pcVar8)();
      }
    }
    *(double *)(lVar11 + 0x68) = (double)(long)dVar25;
    uVar18 = *(undefined8 *)(unaff_x20 + local_c8);
    local_98 = local_88[0];
    local_9c = param_1;
    _swift_retain(uVar18);
    _swift_retain(local_88[0]);
    FUN_1003e3634(&local_98,&local_9c);
    _swift_release(uVar18);
    FUN_100401b14(0);
    FUN_1003fb45c(FUN_10014535c,lVar11,0xd0000000000000ad,0x8000000100890750,0xd00000000000002e,
                  0x8000000100890fc0,0x153,7);
    FUN_1003fb45c(FUN_100145364,lVar11,0xd0000000000000ad,0x8000000100890750,0xd00000000000002e,
                  0x8000000100890fc0,0x154,7);
    lVar14 = unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::delegate;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar14 == 0) {
      _swift_release(local_88[0]);
      _swift_release(lVar11);
    }
    else {
      FUN_100166ae8(param_1,lVar11);
      _swift_release(local_88[0]);
      _swift_release(lVar11);
      _swift_unknownObjectRelease(lVar14);
    }
  }
  return;
}

