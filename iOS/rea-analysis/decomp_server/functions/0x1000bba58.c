// rea decompile_all
// name: FUN_1000bba58
// address: 0x1000bba58
// body: available
// range: 0x1000bba58-0x1000bbdb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000bba58(void)

{
  undefined1 uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined1 auStack_d0 [16];
  undefined8 auStack_c0 [2];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  long *local_78 [3];
  
  plVar2 = (long *)&DAT_100a77040;
  puVar7 = &DAT_10080e910;
  FUN_100004bb4();
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(plVar2[-1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = -extraout_x8;
  puVar9 = auStack_b0 + lVar6;
  FUN_1003dab3c();
  (**(code **)(*plVar2 + 0x108))(local_78);
  _swift_release();
  if (local_78[0] != (long *)0x0) {
    (**(code **)(*local_78[0] + 0xb0))();
    _swift_release(local_78[0]);
    if (puVar7 != (undefined *)0x0) {
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(long **)((long)auStack_c0 + lVar6) = plVar2;
      *(undefined **)((long)auStack_c0 + lVar6 + 8) = puVar7;
      puVar3 = &DAT_100a77048;
      FUN_100004bb4(&DAT_100a77048,&DAT_10080bdc0);
      puVar4 = &DAT_100a77050;
      FUN_10003f840(&DAT_100a77050,&DAT_100a77048,&DAT_10080bdc0,
                    &TargetProtocolConformanceDescriptor_1008488a0);
      pcVar5 = FUN_1000c206c;
      FUN_10061cca0(FUN_1000c206c,auStack_d0 + lVar6,puVar3,puVar4);
      _swift_bridgeObjectRelease(puVar7);
      lVar6 = 0;
      __s8Dispatch0A13WorkItemFlagsVMa();
      pcVar12 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
      (*pcVar12)(puVar9,1,1,lVar6);
      puVar7 = &DAT_10099b050;
      _swift_allocObject(&DAT_10099b050,0x18,7);
      puVar8 = puVar7 + 0x10;
      _swift_weakInit();
      FUN_10060edd8();
      _swift_beginAccess();
      uVar10 = *(undefined8 *)(puVar8 + 8);
      FUN_1006170a4(uVar10,puVar9,FUN_1000c2084,puVar7,puVar3,puVar4);
      _swift_release(pcVar5);
      _swift_release(puVar7);
      FUN_100040bb4(puVar9,&DAT_100a77040,&DAT_10080e910);
      (*pcVar12)(puVar9,1,1,lVar6);
      _swift_beginAccess(puVar8,auStack_90,0,0);
      uVar11 = *(undefined8 *)(puVar8 + 8);
      _swift_beginAccess(puVar8,auStack_a8,0,0);
      uVar1 = puVar8[0x10];
      puVar7 = &DAT_100a77058;
      FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
      puVar3 = &DAT_100a77060;
      FUN_10003f840(&DAT_100a77060,&DAT_100a77058,&DAT_10080e920,
                    &TargetProtocolConformanceDescriptor_1008488bc);
      FUN_10060913c(uVar11,puVar9,uVar1,FUN_1000bf048,0,puVar7,puVar3);
      _swift_release();
      _swift_release(uVar10);
      FUN_100040bb4(puVar9,&DAT_100a77040,&DAT_10080e910);
      return;
    }
  }
  FUN_100401b14(0);
  FUN_1003fb4bc(FUN_1000be35c,0,0xd00000000000009f,0x8000000100882d60,0xd000000000000014,
                0x8000000100883a40,0x2dd,0);
  return;
}

