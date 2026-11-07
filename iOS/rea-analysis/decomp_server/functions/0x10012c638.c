// rea decompile_all
// name: FUN_10012c638
// address: 0x10012c638
// body: available
// range: 0x10012c638-0x10012c8e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10012c638(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  code *local_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [48];
  
  puVar2 = &DAT_100a77040;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_c0 + -extraout_x8;
  param_2 = param_2 + 0x18;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    FUN_1001bd040(param_3,0,0);
    local_b8 = param_3;
    _swift_unknownObjectRelease(param_2);
    lVar3 = 0;
    __s8Dispatch0A13WorkItemFlagsVMa();
    local_b0 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
    (*local_b0)(puVar8,1,1,lVar3);
    lVar4 = param_1;
    _swift_retain();
    FUN_10060edd8();
    _swift_beginAccess();
    uVar7 = *(undefined8 *)(lVar4 + 8);
    puVar2 = &DAT_100a79cf0;
    FUN_100004bb4(&DAT_100a79cf0,&DAT_10080fb50);
    puVar5 = &DAT_100a79cf8;
    FUN_10003f840(&DAT_100a79cf8,&DAT_100a79cf0,&DAT_10080fb50,
                  &TargetProtocolConformanceDescriptor_1008488a0);
    uVar6 = local_b8;
    FUN_1006170a4(uVar7,puVar8,FUN_10012d23c,param_1,puVar2,puVar5);
    _swift_release(uVar6);
    _swift_release(param_1);
    FUN_100040bb4(puVar8,&DAT_100a77040,&DAT_10080e910);
    (*local_b0)(puVar8,1,1,lVar3);
    _swift_beginAccess(lVar4,auStack_90,0,0);
    uVar6 = *(undefined8 *)(lVar4 + 8);
    _swift_beginAccess(lVar4,auStack_a8,0,0);
    uVar1 = *(undefined1 *)(lVar4 + 0x10);
    _swift_retain(param_1);
    puVar2 = &DAT_100a77058;
    FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
    puVar5 = &DAT_100a77060;
    FUN_10003f840(&DAT_100a77060,&DAT_100a77058,&DAT_10080e920,
                  &TargetProtocolConformanceDescriptor_1008488bc);
    FUN_10060913c(uVar6,puVar8,uVar1,FUN_10012d254,param_1,puVar2,puVar5);
    _swift_release();
    _swift_release(uVar7);
    _swift_release(param_1);
    FUN_100040bb4(puVar8,&DAT_100a77040,&DAT_10080e910);
  }
  return;
}

