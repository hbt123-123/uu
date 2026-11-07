// rea decompile_all
// name: FUN_1003f1064
// address: 0x1003f1064
// body: available
// range: 0x1003f1064-0x1003f1227 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003f1064(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_90 [32];
  
  puVar1 = &DAT_100a77040;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  FUN_10061c60c(param_1);
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar6,1,1,lVar2);
  puVar3 = &DAT_1009bb6e0;
  _swift_allocObject(&DAT_1009bb6e0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(long *)(puVar3 + 0x18) = param_3;
  puVar4 = &DAT_1009bb708;
  _swift_allocObject(&DAT_1009bb708,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_100102840;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  _swift_retain();
  FUN_10060edd8();
  _swift_beginAccess();
  uVar7 = *(undefined8 *)(param_3 + 8);
  puVar3 = &DAT_100a8bc08;
  FUN_100004bb4(&DAT_100a8bc08,&DAT_1008209f8);
  puVar5 = &DAT_100a8d538;
  FUN_10003f840(&DAT_100a8d538,&DAT_100a8bc08,&DAT_1008209f8,
                &TargetProtocolConformanceDescriptor_1008487f8);
  FUN_1006170a4(uVar7,puVar6,FUN_100177e34,puVar4,puVar3,puVar5);
  _swift_release(puVar1);
  _swift_release(puVar4);
  FUN_100040bb4(puVar6,&DAT_100a77040,&DAT_10080e910);
  return uVar7;
}

