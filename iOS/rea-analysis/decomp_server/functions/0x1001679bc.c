// rea decompile_all
// name: FUN_1001679bc
// address: 0x1001679bc
// body: available
// range: 0x1001679bc-0x100167d53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001679bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  long lVar8;
  undefined *puVar9;
  long extraout_x8;
  undefined8 uVar10;
  undefined8 unaff_x20;
  long lVar11;
  undefined *local_120;
  code *local_118;
  code *local_110;
  undefined *local_108;
  undefined1 auStack_100 [16];
  undefined *local_f0;
  code *pcStack_e8;
  undefined *local_e0;
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [56];
  
  puVar2 = &DAT_100a77040;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)&local_120 - extraout_x8;
  uVar3 = 0;
  FUN_100401b14(0);
  local_c0 = param_1;
  uStack_b8 = param_2;
  FUN_1003fb4bc(uVar3,FUN_10016c0b8,auStack_d0,0xd0000000000000a4,0x800000010088d870,
                0xd00000000000001b,0x8000000100894d60,0x3f0,0);
  puVar2 = &DAT_10099f3d0;
  _swift_allocObject(&DAT_10099f3d0,0x18,7);
  *(undefined4 *)(puVar2 + 0x10) = 0;
  puVar2[0x14] = 1;
  puVar4 = puVar2;
  FUN_100153444();
  puVar5 = &DAT_10099fd90;
  _swift_allocObject(&DAT_10099fd90,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar2;
  *(undefined8 *)(puVar5 + 0x18) = unaff_x20;
  pcStack_e8 = FUN_10016c0c0;
  puVar6 = &DAT_100a7a328;
  local_f0 = puVar4;
  local_e0 = puVar5;
  FUN_100004bb4(&DAT_100a7a328,&DAT_10080ecc0);
  local_108 = puVar6;
  _swift_allocObject();
  _swift_retain(puVar2);
  pcVar7 = FUN_10016c548;
  FUN_100615648(FUN_10016c548,auStack_100);
  local_118 = pcVar7;
  _swift_release(puVar4);
  _swift_release(puVar5);
  lVar8 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_110 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
  (*local_110)(lVar11,1,1,lVar8);
  puVar5 = &DAT_10099f2e0;
  _swift_allocObject(&DAT_10099f2e0,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10);
  puVar6 = &DAT_10099fdb8;
  _swift_allocObject(&DAT_10099fdb8,0x20,7);
  *(undefined **)(puVar6 + 0x10) = puVar2;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  _swift_retain(puVar2);
  puVar9 = puVar5;
  _swift_retain();
  FUN_10060edd8();
  _swift_beginAccess();
  uVar3 = *(undefined8 *)(puVar9 + 8);
  puVar4 = &DAT_100a7a430;
  FUN_10003f840(&DAT_100a7a430,&DAT_100a7a328,&DAT_10080ecc0,
                &TargetProtocolConformanceDescriptor_1008488bc);
  puVar1 = local_108;
  pcVar7 = local_118;
  local_120 = puVar4;
  FUN_10060a75c(uVar3,lVar11,FUN_10016c0c8,puVar6,local_108,puVar4);
  _swift_release(pcVar7);
  _swift_release(puVar6);
  FUN_100040bb4(lVar11,&DAT_100a77040,&DAT_10080e910);
  _swift_release(puVar5);
  (*local_110)(lVar11,1,1,lVar8);
  _swift_beginAccess(puVar9,auStack_98,0,0);
  uVar10 = *(undefined8 *)(puVar9 + 8);
  _swift_beginAccess(puVar9,auStack_b0,0,0);
  FUN_10060913c(uVar10,lVar11,puVar9[0x10],FUN_100167efc,0,puVar1,local_120);
  _swift_release();
  _swift_release(uVar3);
  FUN_100040bb4(lVar11,&DAT_100a77040,&DAT_10080e910);
  _swift_release(puVar2);
  return;
}

