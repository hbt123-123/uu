// rea decompile_all
// name: FUN_1001abc24
// address: 0x1001abc24
// body: available
// range: 0x1001abc24-0x1001ac0eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001abcf8 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001abc24(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long **pplVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  long *plVar8;
  undefined1 *puVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 auStack_f0 [2];
  undefined1 auStack_e0 [8];
  long local_d8;
  code *local_d0;
  undefined *local_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  long *local_78;
  long lStack_70;
  undefined1 local_68;
  
  puVar2 = &DAT_100a77040;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = -extraout_x8;
  puVar9 = auStack_e0 + lVar6;
  puVar2 = &DAT_1009a2110;
  lVar7 = 0x20;
  _swift_allocObject(&DAT_1009a2110,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(long **)(puVar2 + 0x18) = param_3;
  if (*(char *)(param_1 + _TtC14UURemoteServer14AppListManager::didFetchRemoteApps) == '\x01') {
    _swift_bridgeObjectRetain(param_3);
    FUN_1001a4df0();
    _swift_release(puVar2);
    return;
  }
  *(undefined1 *)(param_1 + _TtC14UURemoteServer14AppListManager::didFetchRemoteApps) = 1;
  _swift_bridgeObjectRetain();
  FUN_1003dab3c();
  (**(code **)(*param_3 + 0x108))(&local_78);
  _swift_release();
  local_c8 = puVar2;
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0xb0))();
    _swift_release(local_78);
    if (lVar7 != 0) goto LAB_1001abd74;
  }
  _swift_bridgeObjectRelease(0);
  param_3 = (long *)0x0;
  lVar7 = -0x2000000000000000;
LAB_1001abd74:
  local_68 = 3;
  puVar2 = &DAT_100a7ca80;
  local_78 = param_3;
  lStack_70 = lVar7;
  FUN_100004bb4(&DAT_100a7ca80,&DAT_100811528);
  puVar3 = &DAT_100a7ca88;
  FUN_10003f840(&DAT_100a7ca88,&DAT_100a7ca80,&DAT_100811528,
                &TargetProtocolConformanceDescriptor_100820bb0);
  puVar4 = &DAT_100a7ca90;
  FUN_10003f840(&DAT_100a7ca90,&DAT_100a7ca80,&DAT_100811528,
                &TargetProtocolConformanceDescriptor_100820bd8);
  *(undefined **)((long)auStack_f0 + lVar6) = puVar3;
  *(undefined **)((long)auStack_f0 + lVar6 + 8) = puVar4;
  pplVar5 = &local_78;
  FUN_10039e070(pplVar5,puVar2,0,0,0,&DAT_1009b82f0,puVar2,&PTR_PTR_100a8bc30);
  _swift_bridgeObjectRelease(lVar7);
  lVar6 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_d0 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
  local_d8 = lVar6;
  (*local_d0)(puVar9,1,1,lVar6);
  puVar2 = &DAT_1009a2138;
  _swift_allocObject(&DAT_1009a2138,0x18,7);
  *(long *)(puVar2 + 0x10) = param_1;
  FUN_10060edd8();
  _swift_beginAccess();
  uVar11 = *(undefined8 *)(param_1 + 8);
  puVar3 = &DAT_100a7ca98;
  FUN_100004bb4(&DAT_100a7ca98,&DAT_100811530);
  puVar4 = &DAT_100a7caa0;
  FUN_10003f840(&DAT_100a7caa0,&DAT_100a7ca98,&DAT_100811530,
                &TargetProtocolConformanceDescriptor_1008488a0);
  FUN_1006170a4(uVar11,puVar9,FUN_1001ac110,puVar2,puVar3,puVar4);
  _swift_release(pplVar5);
  _swift_release(puVar2);
  FUN_100040bb4(puVar9,&DAT_100a77040,&DAT_10080e910);
  pcVar10 = local_d0;
  (*local_d0)(puVar9,1,1,lVar6);
  _swift_beginAccess(param_1,auStack_90,0,0);
  plVar8 = *(long **)(param_1 + 8);
  _swift_beginAccess(param_1,auStack_a8,0,0);
  uVar1 = *(undefined1 *)(param_1 + 0x10);
  puVar2 = &DAT_100a77058;
  FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
  puVar3 = &DAT_100a77060;
  FUN_10003f840(&DAT_100a77060,&DAT_100a77058,&DAT_10080e920,
                &TargetProtocolConformanceDescriptor_1008488bc);
  FUN_10060913c(plVar8,puVar9,uVar1,FUN_1001a6854,0,puVar2,puVar3);
  _swift_release(uVar11);
  FUN_100040bb4(puVar9,&DAT_100a77040,&DAT_10080e910);
  (*pcVar10)(puVar9,1,1,local_d8);
  puVar2 = &DAT_1009a2160;
  _swift_allocObject(&DAT_1009a2160,0x20,7);
  puVar3 = local_c8;
  *(code **)(puVar2 + 0x10) = FUN_1001ac0ec;
  *(undefined **)(puVar2 + 0x18) = local_c8;
  _swift_beginAccess(param_1,auStack_c0,0,0);
  uVar11 = *(undefined8 *)(param_1 + 8);
  pcVar10 = *(code **)(*plVar8 + 0x58);
  _swift_retain(puVar3);
  (*pcVar10)(uVar11,puVar9,FUN_100102840,puVar2);
  _swift_release(plVar8);
  _swift_release(puVar2);
  FUN_100040bb4(puVar9,&DAT_100a77040,&DAT_10080e910);
  _swift_release(puVar3);
  return;
}

