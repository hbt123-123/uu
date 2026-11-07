// rea decompile_all
// name: FUN_100177140
// address: 0x100177140
// body: available
// range: 0x100177140-0x1001776c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100177140(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar7;
  undefined8 extraout_x8_02;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_190 [16];
  long alStack_180 [4];
  undefined1 auStack_160 [8];
  code *local_158;
  undefined1 *local_150;
  long local_148;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [48];
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar2 = &DAT_100a77040;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_160 + -extraout_x8;
  puVar2 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)puVar11 - extraout_x8_00;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar7 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar4 = param_2 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  _swift_weakLoadStrong();
  if (lVar4 != 0) {
    lVar8 = *(long *)(lVar4 + 0x88);
    _swift_retain(lVar8);
    _swift_release(lVar4);
    lVar4 = _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::url;
    if (lVar8 != 0) {
      _swift_beginAccess(lVar8 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::url,auStack_b8,
                         0,0);
      FUN_10007f314(lVar8 + lVar4,lVar13,&DAT_100a766c8,&DAT_10080b1d0);
      _swift_release(lVar8);
      lVar4 = lVar13;
      (**(code **)(lVar12 + 0x30))(lVar13,1,lVar3);
      if ((int)lVar4 != 1) {
        local_148 = lVar7;
        (**(code **)(lVar12 + 0x20))(lVar7,lVar13,lVar3);
        local_e8 = 0;
        uStack_e0 = 0;
        uStack_c0 = 0xc000000000000000;
        local_c8 = 0;
        local_d8 = param_3;
        FUN_100176b94(param_3,param_4);
        uStack_d0 = (undefined4)param_3;
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(undefined8 **)(lVar7 + -0x10) = &local_e8;
        FUN_1003fb45c(FUN_100178124,lVar7 + -0x20,0xd0000000000000b4,0x8000000100896020,
                      0xd00000000000001b,0x8000000100896720,0x145,7);
        uStack_98 = CONCAT44(uStack_dc,uStack_e0);
        uStack_88 = CONCAT44(uStack_cc,uStack_d0);
        local_a0 = local_e8;
        uStack_90 = local_d8;
        uStack_78 = uStack_c0;
        local_80 = local_c8;
        (*(code *)PTR____chkstk_darwin_100995498)
                  (*(undefined8 *)
                    (param_2 + _TtC14UURemoteServer32ClipboardFileUploadCopyOperation::fileHelper));
        *(undefined8 *)(lVar7 + -0x20) = extraout_x8_02;
        *(long *)(lVar7 + -0x18) = local_148;
        *(undefined8 **)(lVar7 + -0x10) = &local_a0;
        puVar2 = &DAT_100a79f60;
        FUN_100004bb4(&DAT_100a79f60,&DAT_10080f8b0);
        _swift_allocObject();
        pcVar5 = FUN_100135b10;
        FUN_100615648(FUN_100135b10,lVar7 + -0x30);
        lVar7 = 0;
        __s8Dispatch0A13WorkItemFlagsVMa();
        local_158 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
        (*local_158)(puVar11,1,1,lVar7);
        lVar4 = param_1;
        local_150 = puVar11;
        _swift_retain();
        FUN_10060edd8();
        _swift_beginAccess();
        uVar9 = *(undefined8 *)(lVar4 + 8);
        puVar6 = &DAT_100a79f68;
        FUN_10003f840(&DAT_100a79f68,&DAT_100a79f60,&DAT_10080f8b0,
                      &TargetProtocolConformanceDescriptor_1008488a0);
        puVar11 = local_150;
        FUN_1006170a4(uVar9,local_150,FUN_10017812c,param_1,puVar2,puVar6);
        _swift_release(pcVar5);
        _swift_release(param_1);
        FUN_100040bb4(puVar11,&DAT_100a77040,&DAT_10080e910);
        (*local_158)(puVar11,1,1,lVar7);
        _swift_beginAccess(lVar4,auStack_118,0,0);
        uVar10 = *(undefined8 *)(lVar4 + 8);
        _swift_beginAccess(lVar4,auStack_130,0,0);
        uVar1 = *(undefined1 *)(lVar4 + 0x10);
        _swift_retain(param_1);
        puVar2 = &DAT_100a77058;
        FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
        puVar6 = &DAT_100a77060;
        FUN_10003f840(&DAT_100a77060,&DAT_100a77058,&DAT_10080e920,
                      &TargetProtocolConformanceDescriptor_1008488bc);
        puVar11 = local_150;
        FUN_10060913c(uVar10,local_150,uVar1,FUN_100178144,param_1,puVar2,puVar6);
        _swift_release();
        _swift_release(uVar9);
        _swift_release(param_1);
        FUN_100040bb4(puVar11,&DAT_100a77040,&DAT_10080e910);
        (**(code **)(lVar12 + 8))(local_148,lVar3);
        FUN_100006cdc(local_c8,uStack_c0);
        return;
      }
      goto LAB_100177670;
    }
  }
  (**(code **)(lVar12 + 0x38))(lVar13,1,1,lVar3);
LAB_100177670:
  FUN_100040bb4(lVar13,&DAT_100a766c8,&DAT_10080b1d0);
  uStack_98 = 0xf000000000000000;
  local_a0 = 0;
  FUN_10061630c(&local_a0);
  return;
}

