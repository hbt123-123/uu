// rea decompile_all
// name: FUN_10014aac4
// address: 0x10014aac4
// body: available
// range: 0x10014aac4-0x10014afab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10014aac4(long param_1,long param_2)

{
  undefined1 uVar1;
  ID IVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined *puVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long extraout_x8;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined1 auStack_f0 [16];
  ID aIStack_e0 [2];
  undefined1 auStack_d0 [8];
  code *local_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  
  puVar3 = &DAT_100a77040;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = -extraout_x8;
  puVar10 = auStack_d0 + lVar9;
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  IVar5 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (IVar5 != 0) {
    IVar2 = IVar5;
    FUN_100152228();
    FUN_100151618();
    if ((IVar2 & 1) == 0) {
      IVar2 = _objc_msgSend(IVar5,"isCancelled");
      FUN_100401b14(0);
      if ((int)IVar2 == 0) {
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(ID *)((long)aIStack_e0 + lVar9) = IVar5;
        FUN_1003fb45c(FUN_1001525c4,auStack_f0 + lVar9,0xd0000000000000b5,0x8000000100891cf0,
                      0xd00000000000002f,0x8000000100892850,0x53,7);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(ID *)((long)aIStack_e0 + lVar9) = IVar5;
        puVar3 = &DAT_100a762e0;
        FUN_100004bb4(&DAT_100a762e0,&DAT_10080aae0);
        puVar6 = puVar3;
        _swift_allocObject();
        pcVar7 = FUN_1001525dc;
        FUN_100615648(FUN_1001525dc,auStack_f0 + lVar9,puVar6);
        lVar8 = 0;
        __s8Dispatch0A13WorkItemFlagsVMa();
        local_c8 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
        (*local_c8)(puVar10,1,1,lVar8);
        _swift_unknownObjectWeakInit(&local_90,IVar5);
        _swift_unknownObjectWeakDestroy();
        lVar9 = param_2;
        _swift_retain();
        FUN_10060edd8();
        _swift_beginAccess();
        uVar4 = *(undefined8 *)(lVar9 + 8);
        puVar6 = &DAT_100a7a048;
        FUN_10003f840(&DAT_100a7a048,&DAT_100a762e0,&DAT_10080aae0,
                      &TargetProtocolConformanceDescriptor_1008488a0);
        FUN_1006170a4(uVar4,puVar10,FUN_100152614,param_2,puVar3,puVar6);
        _swift_release(pcVar7);
        _swift_release(param_2);
        FUN_100040bb4(puVar10,&DAT_100a77040,&DAT_10080e910);
        (*local_c8)(puVar10,1,1,lVar8);
        _swift_beginAccess(lVar9,auStack_a8,0,0);
        uVar11 = *(undefined8 *)(lVar9 + 8);
        _swift_beginAccess(lVar9,auStack_c0,0,0);
        uVar1 = *(undefined1 *)(lVar9 + 0x10);
        _swift_retain(param_2);
        puVar3 = &DAT_100a77058;
        FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
        puVar6 = &DAT_100a77060;
        FUN_10003f840(&DAT_100a77060,&DAT_100a77058,&DAT_10080e920,
                      &TargetProtocolConformanceDescriptor_1008488bc);
        FUN_10060913c(uVar11,puVar10,uVar1,FUN_100152650,param_2,puVar3,puVar6);
        _swift_release(uVar11);
        _swift_release(uVar4);
        _swift_release(param_2);
        FUN_100040bb4(puVar10,&DAT_100a77040,&DAT_10080e910);
      }
      else {
        FUN_1003fb45c(thunk_FUN_10014afd8,0,0xd0000000000000b5,0x8000000100891cf0,0xd00000000000002f
                      ,0x8000000100892850,0x4e,7);
        puVar3 = &_OBJC_CLASS___NSError;
        _objc_allocWithZone();
        uVar4 = 0xd00000000000001b;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x8000000100892880)
        ;
        IVar5 = _objc_msgSend((ID)puVar3,"initWithDomain:code:userInfo:",uVar4,0x186a9,0);
        FUN_100616260(IVar5);
      }
    }
    else {
      uStack_88 = 0xc000000000000000;
      local_90 = 0;
      FUN_10061630c(&local_90);
      FUN_100006cc8(local_90,uStack_88);
      FUN_100401b14(0);
      FUN_1003fb45c(thunk_FUN_10014afac,0,0xd0000000000000b5,0x8000000100891cf0,0xd00000000000002f,
                    0x8000000100892850,0x4a,7);
    }
  }
  return;
}

