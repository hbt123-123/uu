// rea decompile_all
// name: FUN_10013d90c
// address: 0x10013d90c
// body: available
// range: 0x10013d90c-0x10013decb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10013d90c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined4 extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  long unaff_x20;
  undefined8 uVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 auStack_130 [16];
  long alStack_120 [4];
  undefined8 auStack_100 [2];
  undefined1 auStack_f0 [8];
  code *local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  long local_90 [3];
  undefined4 local_78 [6];
  
  puVar6 = &DAT_100a77040;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_f0 + -extraout_x8;
  puVar6 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)puVar13 - extraout_x8_00;
  lVar7 = 0;
  __s10Foundation3URLVMa();
  lVar14 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  lVar12 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x88);
    if (lVar7 != 0) {
      puVar1 = (undefined8 *)(lVar7 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::file);
      uVar16 = *puVar1;
      uVar2 = puVar1[1];
      uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x14);
      _swift_bridgeObjectRetain(uVar2);
      FUN_100190aa4(uVar3,uVar16,uVar2);
      _swift_bridgeObjectRelease(uVar2);
    }
    FUN_100401b14(0);
    FUN_1003fb45c(FUN_10014548c,param_1,0xd0000000000000ad,0x8000000100890750,0xd00000000000001e,
                  0x8000000100891150,0x106,7);
  }
  else if (*(char *)(param_1 + 0x18) == '\0') {
    lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0x88);
    if (lVar10 != 0) {
      puVar1 = (undefined8 *)(lVar10 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::file);
      uVar16 = *puVar1;
      uVar2 = puVar1[1];
      uVar11 = *(undefined8 *)
                (unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData)
      ;
      local_78[0] = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x14);
      _swift_bridgeObjectRetain(uVar2);
      _swift_retain(uVar11);
      FUN_1003e37e8(local_90,local_78);
      _swift_release(uVar11);
      lVar10 = _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::userPasteUrl;
      if (local_90[0] == 0) {
        _swift_bridgeObjectRelease(uVar2);
        (**(code **)(lVar14 + 0x38))(lVar15,1,1,lVar7);
      }
      else {
        local_c8 = uVar16;
        _swift_beginAccess(local_90[0] +
                           _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::userPasteUrl,
                           local_78,0,0);
        FUN_1000e3888(local_90[0] + lVar10,lVar15);
        _swift_release(local_90[0]);
        lVar10 = lVar15;
        (**(code **)(lVar14 + 0x30))(lVar15,1,lVar7);
        if ((int)lVar10 != 1) {
          local_d0 = lVar7;
          (**(code **)(lVar14 + 0x20))(lVar12,lVar15,lVar7);
          uVar11 = *(undefined8 *)
                    (unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::fileHelper);
          FUN_10018c878();
          (*(code *)PTR____chkstk_darwin_100995498)
                    (*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x14));
          uVar16 = local_c8;
          *(undefined8 *)(lVar12 + -0x30) = uVar11;
          *(undefined8 *)(lVar12 + -0x28) = uVar16;
          *(undefined8 *)(lVar12 + -0x20) = uVar2;
          *(long *)(lVar12 + -0x18) = lVar12;
          *(undefined4 *)(lVar12 + -0x10) = extraout_w8;
          puVar6 = &DAT_100a762e0;
          FUN_100004bb4(&DAT_100a762e0,&DAT_10080aae0);
          local_e0 = puVar6;
          _swift_allocObject();
          pcVar8 = FUN_100145494;
          FUN_100615648(FUN_100145494,lVar12 + -0x40);
          lVar15 = 0;
          __s8Dispatch0A13WorkItemFlagsVMa();
          local_e8 = *(code **)(*(long *)(lVar15 + -8) + 0x38);
          local_d8 = uVar2;
          (*local_e8)(puVar13,1,1,lVar15);
          lVar7 = param_1;
          _swift_retain();
          FUN_10060edd8();
          _swift_beginAccess();
          uVar16 = *(undefined8 *)(lVar7 + 8);
          puVar6 = &DAT_100a7a048;
          FUN_10003f840(&DAT_100a7a048,&DAT_100a762e0,&DAT_10080aae0,
                        &TargetProtocolConformanceDescriptor_1008488a0);
          FUN_1006170a4(uVar16,puVar13,FUN_1001454a8,param_1,local_e0,puVar6);
          local_e0 = (undefined *)uVar16;
          _swift_release(pcVar8);
          _swift_release(param_1);
          FUN_100040bb4(puVar13,&DAT_100a77040,&DAT_10080e910);
          (*local_e8)(puVar13,1,1,lVar15);
          _swift_beginAccess(lVar7,auStack_a8,0,0);
          uVar16 = *(undefined8 *)(lVar7 + 8);
          _swift_beginAccess(lVar7,auStack_c0,0,0);
          uVar4 = *(undefined1 *)(lVar7 + 0x10);
          _swift_retain(param_1);
          puVar6 = &DAT_100a77058;
          FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
          puVar9 = &DAT_100a77060;
          FUN_10003f840(&DAT_100a77060,&DAT_100a77058,&DAT_10080e920,
                        &TargetProtocolConformanceDescriptor_1008488bc);
          puVar5 = local_e0;
          FUN_10060913c(uVar16,puVar13,uVar4,FUN_1001454c0,param_1,puVar6,puVar9);
          _swift_release();
          _swift_release(puVar5);
          _swift_release(param_1);
          FUN_100040bb4(puVar13,&DAT_100a77040,&DAT_10080e910);
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(long *)(lVar12 + -0x20) = param_1;
          *(long *)(lVar12 + -0x18) = lVar12;
          uVar16 = local_d8;
          *(undefined8 *)(lVar12 + -0x10) = local_c8;
          *(undefined8 *)(lVar12 + -8) = uVar16;
          FUN_1003fb45c(FUN_1001454c8,lVar12 + -0x30,0xd0000000000000ad,0x8000000100890750,
                        0xd00000000000001e,0x8000000100891150,0x100,7);
          _swift_bridgeObjectRelease(uVar16);
          (**(code **)(lVar14 + 8))(lVar12,local_d0);
          return;
        }
        _swift_bridgeObjectRelease(uVar2);
      }
      FUN_100040bb4(lVar15,&DAT_100a766c8,&DAT_10080b1d0);
    }
  }
  return;
}

