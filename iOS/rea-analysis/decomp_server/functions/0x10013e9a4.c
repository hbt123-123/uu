// rea decompile_all
// name: FUN_10013e9a4
// address: 0x10013e9a4
// body: available
// range: 0x10013e9a4-0x10013ee0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10013e9a4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long lVar10;
  undefined8 extraout_x8_00;
  undefined4 extraout_w12;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_110 [16];
  long alStack_100 [4];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  code *local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [48];
  
  puVar4 = &DAT_100a77040;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = -extraout_x8;
  lVar11 = (long)&local_e0 + lVar7;
  uVar13 = *(ulong *)(param_1 + 0x28);
  if (((uVar13 >> 0x3c < 0xf) && ((*(byte *)(param_1 + 0x38) & 1) == 0)) &&
     (lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0x88), lVar10 != 0)) {
    uVar15 = *(undefined8 *)(param_1 + 0x20);
    uVar14 = *(undefined8 *)(param_1 + 0x30);
    puVar1 = (undefined8 *)(lVar10 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::file);
    local_d8 = *puVar1;
    uVar12 = puVar1[1];
    uVar5 = 0;
    local_c0 = uVar14;
    FUN_100401b14();
    local_d0 = (undefined *)uVar5;
    local_c8 = (code *)lVar11;
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_b8 = param_2;
    *(long *)((long)alStack_100 + lVar7) = param_1;
    *(undefined8 *)((long)alStack_100 + lVar7 + 8) = uVar15;
    *(ulong *)((long)alStack_100 + lVar7 + 0x10) = uVar13;
    *(undefined8 *)((long)alStack_100 + lVar7 + 0x18) = uVar14;
    FUN_10010bd10(uVar15,uVar13);
    local_e0 = uVar12;
    _swift_bridgeObjectRetain(uVar12);
    FUN_1003fb45c(FUN_10014536c,auStack_110 + lVar7,0xd0000000000000ad,0x8000000100890750,
                  0xd000000000000020,0x8000000100891050,0x11b,7);
    pcVar3 = local_c8;
    (*(code *)PTR____chkstk_darwin_100995498)
              (*(undefined8 *)
                (unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::fileHelper));
    *(undefined8 *)((long)pcVar3 + -0x40) = extraout_x8_00;
    *(undefined4 *)((long)pcVar3 + -0x38) = extraout_w12;
    uVar5 = local_d8;
    *(undefined8 *)((long)pcVar3 + -0x30) = local_d8;
    *(undefined8 *)((long)pcVar3 + -0x28) = uVar12;
    *(undefined8 *)((long)pcVar3 + -0x20) = uVar15;
    *(ulong *)((long)pcVar3 + -0x18) = uVar13;
    *(long *)((long)pcVar3 + -0x10) = local_c0;
    puVar4 = &DAT_100a7a038;
    FUN_100004bb4(&DAT_100a7a038,&DAT_10080eb10);
    local_d0 = puVar4;
    _swift_allocObject();
    pcVar6 = FUN_100145378;
    FUN_100615648(FUN_100145378,(long)pcVar3 + -0x50,puVar4);
    lVar7 = 0;
    __s8Dispatch0A13WorkItemFlagsVMa();
    local_c8 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
    local_c0 = lVar7;
    (*local_c8)(lVar11,1,1,lVar7);
    puVar4 = &DAT_10099e8f0;
    _swift_allocObject(&DAT_10099e8f0,0x18,7);
    _swift_unknownObjectWeakInit(puVar4 + 0x10);
    puVar8 = &DAT_10099e918;
    _swift_allocObject(&DAT_10099e918,0x50,7);
    uVar12 = local_b8;
    *(undefined **)(puVar8 + 0x10) = puVar4;
    *(long *)(puVar8 + 0x18) = param_1;
    *(undefined8 *)(puVar8 + 0x20) = uVar15;
    *(ulong *)(puVar8 + 0x28) = uVar13;
    *(undefined8 *)(puVar8 + 0x30) = uVar5;
    *(undefined8 *)(puVar8 + 0x38) = local_e0;
    *(undefined8 *)(puVar8 + 0x40) = local_b8;
    *(long *)(puVar8 + 0x48) = param_3;
    local_b0 = uVar15;
    FUN_10010bd10(uVar15,uVar13);
    _swift_retain(param_1);
    lVar7 = param_3;
    _swift_retain();
    FUN_10060edd8();
    _swift_beginAccess();
    uVar5 = *(undefined8 *)(lVar7 + 8);
    puVar4 = &DAT_100a7a040;
    FUN_10003f840(&DAT_100a7a040,&DAT_100a7a038,&DAT_10080eb10,
                  &TargetProtocolConformanceDescriptor_1008488a0);
    FUN_1006170a4(uVar5,lVar11,FUN_100145408,puVar8,local_d0,puVar4);
    _swift_release(pcVar6);
    _swift_release(puVar8);
    FUN_100040bb4(lVar11,&DAT_100a77040,&DAT_10080e910);
    (*local_c8)(lVar11,1,1,local_c0);
    puVar4 = &DAT_10099e940;
    _swift_allocObject(&DAT_10099e940,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar12;
    *(long *)(puVar4 + 0x18) = param_3;
    _swift_beginAccess(lVar7,auStack_90,0,0);
    uVar12 = *(undefined8 *)(lVar7 + 8);
    _swift_beginAccess(lVar7,auStack_a8,0,0);
    uVar2 = *(undefined1 *)(lVar7 + 0x10);
    _swift_retain(param_3);
    puVar8 = &DAT_100a77058;
    FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
    puVar9 = &DAT_100a77060;
    FUN_10003f840(&DAT_100a77060,&DAT_100a77058,&DAT_10080e920,
                  &TargetProtocolConformanceDescriptor_1008488bc);
    FUN_10060913c(uVar12,lVar11,uVar2,FUN_100145438,puVar4,puVar8,puVar9);
    _swift_release();
    _swift_release(uVar5);
    _swift_release(puVar4);
    FUN_100006cc8(local_b0,uVar13);
    FUN_100040bb4(lVar11,&DAT_100a77040,&DAT_10080e910);
  }
  return;
}

