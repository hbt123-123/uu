// rea decompile_all
// name: FUN_10013c744
// address: 0x10013c744
// body: available
// range: 0x10013c744-0x10013cafb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10013c744(undefined8 *param_1,long *param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong uVar10;
  undefined8 extraout_x12;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_f0 [16];
  undefined8 auStack_e0 [4];
  undefined1 auStack_c0 [8];
  long local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined1 local_51;
  
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar15 = *(long *)(lVar3 + -8);
  lVar17 = *(long *)(lVar15 + 0x40);
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar9 = auStack_c0 + -(lVar17 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100a77040;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)puVar9 - extraout_x8;
  lVar5 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lVar16 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar16 + 0x40));
  puVar11 = (undefined1 *)(lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  if (*(long *)(*param_2 + 0x88) == 0) {
    FUN_100401b14(0);
    FUN_1003fb4ec(FUN_10013cafc,0,0xd0000000000000ad,0x8000000100890750,&DAT_d000000000000028,
                  0x8000000100891250,0xc1,0);
    FUN_100004bb4(&DAT_100a762e0,&DAT_10080aae0);
    local_51 = 0;
    puVar8 = &local_51;
    FUN_100615420();
  }
  else {
    puVar1 = (undefined8 *)
             (*(long *)(*param_2 + 0x88) + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::file)
    ;
    local_98 = *puVar1;
    uVar2 = puVar1[1];
    local_b0 = puVar11;
    (*(code *)PTR____chkstk_darwin_100995498)
              (*(undefined8 *)
                (param_3 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::fileHelper));
    local_b8 = lVar14;
    *(undefined8 *)(puVar11 + -0x20) = extraout_x8_01;
    *(undefined8 *)(puVar11 + -0x18) = param_4;
    *(undefined8 *)(puVar11 + -0x10) = extraout_x12;
    *(undefined8 *)(puVar11 + -8) = uVar2;
    puVar4 = &DAT_100a762e0;
    local_a8 = uVar2;
    FUN_100004bb4(&DAT_100a762e0,&DAT_10080aae0);
    local_90 = puVar4;
    _swift_allocObject();
    _swift_bridgeObjectRetain(uVar2);
    pcVar6 = FUN_100145654;
    FUN_100615648(FUN_100145654,puVar11 + -0x30);
    local_a0 = pcVar6;
    FUN_100004b70(0);
    (**(code **)(lVar16 + 0x68))
              (puVar11,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_100995f68,
               lVar5);
    puVar8 = puVar11;
    __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ();
    (**(code **)(lVar16 + 8))(puVar11,lVar5);
    lVar5 = 0;
    __s8Dispatch0A13WorkItemFlagsVMa();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar14,1,1,lVar5);
    (**(code **)(lVar15 + 0x10))(puVar9,param_4,lVar3);
    uVar10 = (ulong)*(byte *)(lVar15 + 0x50);
    uVar12 = uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff);
    uVar13 = lVar17 + uVar12 + 7 & 0xfffffffffffffff8;
    puVar4 = &DAT_10099e9b8;
    _swift_allocObject(&DAT_10099e9b8,uVar13 + 0x10,uVar10 | 7);
    (**(code **)(lVar15 + 0x20))(puVar4 + uVar12,puVar9,lVar3);
    *(undefined8 *)(puVar4 + uVar13) = local_98;
    *(undefined8 *)((long)(puVar4 + uVar13) + 8) = local_a8;
    puVar7 = &DAT_100a7a048;
    FUN_10003f840(&DAT_100a7a048,&DAT_100a762e0,&DAT_10080aae0,
                  &TargetProtocolConformanceDescriptor_1008488a0);
    pcVar6 = local_a0;
    lVar3 = local_b8;
    FUN_100617950(puVar8,local_b8,FUN_1001456e0,puVar4,local_90,PTR___sSbN_1009958c8,puVar7);
    _swift_release(pcVar6);
    _swift_release(puVar4);
    FUN_100040bb4(lVar3,&DAT_100a77040,&DAT_10080e910);
  }
  *param_1 = puVar8;
  return;
}

