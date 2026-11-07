// rea decompile_all
// name: FUN_100199f60
// address: 0x100199f60
// body: available
// range: 0x100199f60-0x10019a493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100199f60(double param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  code *pcVar12;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  undefined1 auStack_f0 [16];
  undefined8 auStack_e0 [2];
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined8 uStack_78;
  
  puVar6 = &DAT_100a77040;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = auStack_d0 + -extraout_x8;
  puVar7 = (undefined8 *)0x0;
  __s10Foundation4DateVMa();
  lVar14 = puVar7[-1];
  puVar8 = puVar7;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = (long)puVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (DAT_100a73b60 != -1) {
    puVar8 = &DAT_100a73b60;
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  FUN_100122344();
  if (((ulong)puVar8 & 0xff) == 0) {
    uVar16 = 0xe700000000000000;
    uVar9 = 0x6e776f6e6b6e75;
LAB_10019a058:
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar9,uVar16,0x72657375,0xe400000000000000,0);
    _swift_bridgeObjectRelease(uVar16);
    if ((uVar9 & 1) == 0) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(char *)(lVar13 + -0x10) = (char)puVar8;
      pcVar12 = FUN_10019b178;
      FUN_1003fb48c(FUN_10019b178,lVar13 + -0x20,0xd000000000000099,0x8000000100899c30,
                    &DAT_d000000000000010,0x8000000100899cf0,0x1f,0);
      FUN_10019af68();
      puVar6 = &DAT_1009a18e8;
      _swift_allocError(&DAT_1009a18e8,pcVar12,0,0);
      *pcVar12 = (code)0x2;
      FUN_100004bb4(&DAT_100a7c610,&DAT_1008103c0);
      _swift_allocObject();
      FUN_10061551c(puVar6);
      return;
    }
  }
  else {
    if (((uint)puVar8 & 0xff) != 1) {
      uVar16 = 0xe500000000000000;
      uVar9 = 0x7473657567;
      goto LAB_10019a058;
    }
    _swift_bridgeObjectRelease(0xe400000000000000);
  }
  lVar15 = unaff_x20[4];
  if (lVar15 == 0) {
LAB_10019a128:
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 9;
    puVar6 = &DAT_100a766a8;
    FUN_100004bb4(&DAT_100a766a8,&DAT_1008103e0);
    uVar16 = unaff_x20[2];
    puVar10 = &DAT_100a766b0;
    FUN_10003f840(&DAT_100a766b0,&DAT_100a766a8,&DAT_1008103e0,
                  &TargetProtocolConformanceDescriptor_100820bb0);
    puVar11 = &DAT_100a766b8;
    FUN_10003f840(&DAT_100a766b8,&DAT_100a766a8,&DAT_1008103e0,
                  &TargetProtocolConformanceDescriptor_100820bd8);
    *(undefined **)(lVar13 + -0x10) = puVar10;
    *(undefined **)(lVar13 + -8) = puVar11;
    puVar8 = &local_b8;
    FUN_10039e070(puVar8,puVar6,uVar16,0,0,&DAT_1009b82f0,puVar6,&PTR_PTR_100a8bc30);
    lVar13 = 0;
    local_c0 = puVar8;
    __s8Dispatch0A13WorkItemFlagsVMa();
    (**(code **)(*(long *)(lVar13 + -8) + 0x38))(puVar17,1,1,lVar13);
    _swift_retain();
    FUN_10060edd8();
    _swift_beginAccess();
    uVar16 = *unaff_x20;
    local_c8 = uVar16;
    FUN_100004bb4(&DAT_100a7c650,&DAT_1008103e8);
    FUN_100004bb4(&DAT_100a7c610,&DAT_1008103c0);
    FUN_10003f840(&DAT_100a7c658,&DAT_100a7c650,&DAT_1008103e8,
                  &TargetProtocolConformanceDescriptor_1008488a0);
    FUN_10003f840(&DAT_100a7c618,&DAT_100a7c610,&DAT_1008103c0,
                  &TargetProtocolConformanceDescriptor_1008488a0);
    puVar8 = local_c0;
    FUN_1006177ec(uVar16,puVar17,FUN_10019b180);
    _swift_release(puVar8);
    _swift_release();
    FUN_100040bb4(puVar17,&DAT_100a77040,&DAT_10080e910);
  }
  else {
    uVar9 = unaff_x20[7];
    uStack_78 = unaff_x20[8];
    local_90 = unaff_x20[5];
    uVar16 = unaff_x20[6];
    local_a0 = unaff_x20[3];
    lStack_98 = lVar15;
    uStack_88 = uVar16;
    local_80 = uVar9;
    _swift_bridgeObjectRetain(lVar15);
    _swift_bridgeObjectRetain(uVar16);
    if (0 < (long)uVar9) {
      __s10Foundation4DateVACycfC(lVar13);
      __s10Foundation4DateV21timeIntervalSince1970Sdvg();
      (**(code **)(lVar14 + 8))(lVar13,puVar7);
      if ((double)uVar9 * 0.8 < param_1 - (double)unaff_x20[9]) {
        _swift_bridgeObjectRelease(uVar16);
        _swift_bridgeObjectRelease(lVar15);
        uVar16 = unaff_x20[3];
        uVar3 = unaff_x20[4];
        uVar1 = unaff_x20[5];
        uVar4 = unaff_x20[6];
        uVar2 = unaff_x20[7];
        uVar5 = unaff_x20[8];
        unaff_x20[4] = 0;
        unaff_x20[3] = 0;
        unaff_x20[6] = 0;
        unaff_x20[5] = 0;
        unaff_x20[8] = 0;
        unaff_x20[7] = 0;
        FUN_10019ae7c(uVar16,uVar3,uVar1,uVar4,uVar2,uVar5);
        goto LAB_10019a128;
      }
    }
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined8 **)(lVar13 + -0x10) = &local_a0;
    FUN_100004bb4(&DAT_100a7c610,&DAT_1008103c0);
    _swift_allocObject();
    FUN_100615648(FUN_10019b198,lVar13 + -0x20);
    _swift_bridgeObjectRelease(uVar16);
    _swift_bridgeObjectRelease(lVar15);
  }
  return;
}

