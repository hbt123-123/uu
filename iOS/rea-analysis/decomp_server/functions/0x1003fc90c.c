// rea decompile_all
// name: FUN_1003fc90c
// address: 0x1003fc90c
// body: available
// range: 0x1003fc90c-0x1003fd24f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003fce70) */

void FUN_1003fc90c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ID IVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ID IVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  char *pcVar13;
  long extraout_x8;
  long lVar14;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar15;
  long extraout_x8_04;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x13;
  ulong extraout_x14;
  undefined8 extraout_x15;
  long unaff_x21;
  long lVar16;
  ulong uVar17;
  code *pcVar18;
  code *pcVar19;
  long lVar20;
  long alStack_1a0 [2];
  undefined1 auStack_190 [16];
  long alStack_180 [2];
  long alStack_170 [4];
  undefined1 auStack_150 [8];
  undefined *local_148;
  undefined1 *local_140;
  undefined8 local_138;
  long local_130;
  long local_128;
  long local_120;
  code *local_118;
  long local_110;
  undefined8 uStack_108;
  long local_100;
  long lStack_f8;
  ulong local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  undefined1 auStack_80 [32];
  
  puVar5 = &DAT_100a766c8;
  local_a8 = (code *)param_5;
  local_a0 = param_3;
  local_98 = param_4;
  local_88 = param_2;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar14 = (long)(auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar6 = 0;
  local_b8 = lVar14;
  FUN_1005cac5c();
  local_d0 = *(long *)(lVar6 + -8);
  lStack_c8 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_d0 + 0x40));
  lVar14 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  local_b0 = lVar14;
  __s10Foundation3URLVMa();
  local_d8 = *(long *)(lVar6 + -8);
  local_90 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_d8 + 0x40));
  lVar14 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  local_c0 = lVar14;
  FUN_1005cac4c();
  lVar16 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar16 + 0x40));
  lVar14 = lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  local_e0 = lVar14;
  FUN_1005c8c98();
  lVar20 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar20 + 0x40));
  lVar14 = lVar14 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar15 = lVar14 - extraout_x12_00;
  lVar6 = 0;
  local_e8 = lVar15;
  FUN_1005cac3c();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar17 = (lVar15 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100995498)();
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar15 = (uVar17 - extraout_x12_02) - extraout_x12_03;
  if (DAT_100a8e098 == 0) {
    local_118 = *(code **)(extraout_x13 + 0x68);
    local_148 = puVar5;
    local_140 = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    local_138 = extraout_x15;
    local_130 = lVar14;
    local_128 = lVar20;
    local_120 = lVar8;
    local_100 = lVar15;
    lStack_f8 = extraout_x13;
    local_f0 = extraout_x14;
    (*local_118)(lVar15,2,lVar6);
    lVar8 = local_e0;
    (**(code **)(lVar16 + 0x68))(local_e0,0,lVar7);
    lVar4 = local_90;
    lVar14 = local_c0;
    lVar7 = local_d8;
    pcVar18 = *(code **)(local_d8 + 0x10);
    lVar16 = local_88;
    (*pcVar18)(local_c0,local_88,local_90);
    FUN_10070613c(0);
    uVar2 = local_98;
    uVar10 = local_98;
    _swift_bridgeObjectRetain();
    FUN_100706078();
    uVar11 = uVar10;
    FUN_1003dedb0();
    local_110 = lVar16;
    uStack_108 = uVar11;
    _swift_release(uVar10);
    lVar20 = local_b0;
    (**(code **)(local_d0 + 0x68))(local_b0,0,lStack_c8);
    pcVar19 = local_a8;
    lVar16 = local_b8;
    local_a8 = pcVar18;
    (*pcVar18)(local_b8,pcVar19,lVar4);
    pcVar19 = *(code **)(lVar7 + 0x38);
    (*pcVar19)(lVar16,0,1,lVar4);
    *(undefined8 *)(lVar15 + -0x18) = 0;
    *(undefined8 *)(lVar15 + -0x10) = 0x500000;
    *(long *)(lVar15 + -0x20) = lVar16;
    lVar7 = local_e8;
    FUN_1005c8e78(local_e8,0x412a5e0000000000,lVar8,lVar14,local_a0,uVar2,uStack_108,local_110,
                  lVar20,6);
    if (unaff_x21 == 0) {
      FUN_1005cdd88(0);
      lVar8 = local_130;
      (**(code **)(local_128 + 0x10))(local_130,lVar7,local_120);
      (**(code **)(lStack_f8 + 0x10))(local_138,local_100,lVar6);
      FUN_1005cb7ac(lVar8,local_138);
      FUN_100008290(0);
      if (DAT_100a89360 != -1) {
        _swift_once(&DAT_100a89360,FUN_1003fba90);
      }
      puVar5 = local_148;
      FUN_10021bec0(local_148,&DAT_100a8e0a0);
      lVar14 = local_90;
      puVar3 = local_140;
      (*local_a8)(local_140,local_88,local_90);
      (*pcVar19)(puVar3,0,1,lVar14);
      _swift_beginAccess(puVar5,auStack_80,0x21,0);
      FUN_100135ab0(puVar3,puVar5);
      _swift_endAccess(auStack_80);
      uVar2 = DAT_100a8e0c0;
      DAT_100a8e0b8 = local_a0;
      DAT_100a8e0c0 = local_98;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar2);
      lVar14 = DAT_100a8e098;
      DAT_100a8e098 = lVar8;
      _swift_retain(lVar8);
      _swift_release(lVar14);
      lVar14 = DAT_100a8e0c8;
      DAT_100a8e0c8 = 0;
      _swift_errorRelease(lVar14);
      _swift_release(lVar8);
      (**(code **)(local_128 + 8))(lVar7,local_120);
      (**(code **)(lStack_f8 + 8))(local_100,lVar6);
    }
    else {
      pcVar19 = *(code **)(lStack_f8 + 8);
      (*pcVar19)(local_100,lVar6);
      uVar17 = local_f0;
      if (DAT_100a89358 != -1) {
        _swift_once(&DAT_100a89358,FUN_1003fba60);
      }
      IVar1 = DAT_100a8e090;
      _objc_msgSend(DAT_100a8e090,"lock");
      lVar7 = unaff_x21;
      _swift_errorRelease(DAT_100a8e0c8);
      DAT_100a8e0c8 = lVar7;
      _swift_errorRetain(unaff_x21);
      _objc_msgSend(IVar1,"unlock");
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(long *)(lVar15 + -0x10) = unaff_x21;
      (*local_118)(uVar17,4,lVar6);
      _objc_msgSend(IVar1,"lock");
      lVar7 = DAT_100a8e098;
      if (DAT_100a8e098 != 0) {
        _swift_retain(DAT_100a8e098);
        uVar12 = uVar17;
        FUN_1005cc2b8();
        if ((uVar12 & 1) == 0) {
          _swift_release(lVar7);
        }
        else {
          local_90 = -0x7ffffffeff74a980;
          IVar9 = 0xd000000000000081;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000081,0x80000001008b5420);
          pcVar13 = "lastPathComponent";
          IVar9 = _objc_msgSend(IVar9,"lastPathComponent");
          local_88 = lVar6;
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar9);
          (*(code *)PTR____chkstk_darwin_100995498)(0);
          *(code **)(lVar15 + -0x30) = FUN_1004032e0;
          *(long *)(lVar15 + -0x28) = lVar15 + -0x20;
          *(undefined8 *)(lVar15 + -0x48) = 0xb4;
          *(long *)(lVar15 + -0x50) = local_90;
          FUN_1005cc010(thunk_FUN_1003a85e4,lVar15 + -0x40,local_f0,0x65746f6d65525555,
                        0xe800000000000000,IVar9,pcVar13,0xd000000000000019);
          _swift_release(lVar7);
          _swift_bridgeObjectRelease(pcVar13);
          uVar17 = local_f0;
          lVar6 = local_88;
        }
      }
      _objc_msgSend(IVar1,"unlock");
      _swift_errorRelease(unaff_x21);
      (*pcVar19)(uVar17,lVar6);
    }
  }
  else {
    (**(code **)(extraout_x13 + 0x68))(uVar17,2,lVar6);
    if (DAT_100a89358 != -1) {
      _swift_once(&DAT_100a89358,FUN_1003fba60);
    }
    IVar1 = DAT_100a8e090;
    _objc_msgSend(DAT_100a8e090,"lock");
    lVar7 = DAT_100a8e098;
    if (DAT_100a8e098 != 0) {
      _swift_retain(DAT_100a8e098);
      uVar12 = uVar17;
      FUN_1005cc2b8();
      if ((uVar12 & 1) == 0) {
        _swift_release(lVar7);
      }
      else {
        local_88 = -0x7ffffffeff74a980;
        IVar9 = 0xd000000000000081;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000081,0x80000001008b5420)
        ;
        pcVar13 = "lastPathComponent";
        IVar9 = _objc_msgSend(IVar9,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar9);
        *(undefined8 *)(lVar15 + -8) = 0x95;
        *(long *)(lVar15 + -0x10) = local_88;
        FUN_1005cc010(FUN_1003fec00,0,uVar17,0x65746f6d65525555,0xe800000000000000,IVar9,pcVar13,
                      0xd000000000000019);
        _swift_release(lVar7);
        _swift_bridgeObjectRelease(pcVar13);
      }
    }
    _objc_msgSend(IVar1,"unlock");
    (**(code **)(extraout_x13 + 8))(uVar17,lVar6);
  }
  return;
}

