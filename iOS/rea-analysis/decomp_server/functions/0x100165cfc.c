// rea decompile_all
// name: FUN_100165cfc
// address: 0x100165cfc
// body: available
// range: 0x100165cfc-0x1001661c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100165cfc(ulong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_f0 [16];
  undefined4 auStack_e0 [4];
  undefined8 local_d0;
  ulong local_c8;
  undefined8 local_c0;
  code *local_b8;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [48];
  
  puVar2 = &DAT_100a77040;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = -extraout_x8;
  lVar13 = (long)&local_d0 + lVar6;
  FUN_1001533d4();
  uVar3 = param_1;
  FUN_10013c050();
  uVar10 = (undefined4)param_1;
  if (uVar3 != 0) {
    uVar4 = param_1;
    FUN_100142834();
    if (uVar4 != 0) {
      FUN_1001429dc();
      if ((param_1 & 1) != 0) {
        FUN_1001662c8(uVar4);
        uVar5 = uVar3;
        FUN_10013c308(uVar3,param_2);
        lVar6 = 0;
        local_c8 = uVar5;
        __s8Dispatch0A13WorkItemFlagsVMa();
        local_b8 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
        lStack_b0 = lVar6;
        (*local_b8)(lVar13,1,1,lVar6);
        puVar2 = &DAT_10099f2e0;
        _swift_allocObject(&DAT_10099f2e0,0x18,7);
        _swift_unknownObjectWeakInit(puVar2 + 0x10);
        puVar7 = &DAT_10099f7c8;
        _swift_allocObject(&DAT_10099f7c8,0x30,7);
        *(undefined **)(puVar7 + 0x10) = puVar2;
        *(undefined4 *)(puVar7 + 0x18) = uVar10;
        *(ulong *)(puVar7 + 0x20) = uVar3;
        *(ulong *)(puVar7 + 0x28) = uVar4;
        uVar5 = uVar4;
        _swift_retain();
        FUN_10060edd8();
        _swift_beginAccess();
        uVar12 = *(undefined8 *)(uVar5 + 8);
        puVar2 = &DAT_100a762e0;
        local_d0 = uVar12;
        FUN_100004bb4(&DAT_100a762e0,&DAT_10080aae0);
        puVar8 = &DAT_100a7a048;
        FUN_10003f840(&DAT_100a7a048,&DAT_100a762e0,&DAT_10080aae0,
                      &TargetProtocolConformanceDescriptor_1008488a0);
        uVar3 = local_c8;
        FUN_1006170a4(uVar12,lVar13,FUN_10016bb30,puVar7,puVar2,puVar8);
        local_c0 = uVar12;
        _swift_release(uVar3);
        _swift_release(puVar7);
        FUN_100040bb4(lVar13,&DAT_100a77040,&DAT_10080e910);
        (*local_b8)(lVar13,1,1,lStack_b0);
        puVar2 = &DAT_10099f2e0;
        _swift_allocObject(&DAT_10099f2e0,0x18,7);
        _swift_unknownObjectWeakInit(puVar2 + 0x10);
        puVar7 = &DAT_10099f7f0;
        _swift_allocObject(&DAT_10099f7f0,0x20,7);
        *(undefined4 *)(puVar7 + 0x10) = uVar10;
        *(undefined **)(puVar7 + 0x18) = puVar2;
        _swift_beginAccess(uVar5,auStack_90,0,0);
        uVar11 = *(undefined8 *)(uVar5 + 8);
        _swift_beginAccess(uVar5,auStack_a8,0,0);
        uVar1 = *(undefined1 *)(uVar5 + 0x10);
        _swift_retain(puVar2);
        puVar8 = &DAT_100a77058;
        FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
        puVar9 = &DAT_100a77060;
        FUN_10003f840(&DAT_100a77060,&DAT_100a77058,&DAT_10080e920,
                      &TargetProtocolConformanceDescriptor_1008488bc);
        uVar12 = local_c0;
        FUN_10060913c(uVar11,lVar13,uVar1,FUN_10016bb50,puVar7,puVar8,puVar9);
        _swift_release(uVar4);
        _swift_release(uVar11);
        _swift_release(uVar12);
        _swift_release(puVar7);
        FUN_100040bb4(lVar13,&DAT_100a77040,&DAT_10080e910);
        _swift_release(puVar2);
        return;
      }
      _swift_bridgeObjectRelease(uVar3);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined4 *)((long)auStack_e0 + lVar6) = uVar10;
      FUN_1003fb4ec(FUN_10016baf4,auStack_f0 + lVar6,0xd0000000000000a4,0x800000010088d870,
                    0xd000000000000029,0x80000001008939f0,0x404,0);
      _swift_release(uVar4);
      return;
    }
    _swift_bridgeObjectRelease(uVar3);
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(undefined4 *)((long)auStack_e0 + lVar6) = uVar10;
  FUN_1003fb4ec(FUN_10016baec,auStack_f0 + lVar6,0xd0000000000000a4,0x800000010088d870,
                0xd000000000000029,0x80000001008939f0,0x3ff,0);
  FUN_100161224(param_1);
  return;
}

