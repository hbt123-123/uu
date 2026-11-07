// rea decompile_all
// name: FUN_1003ab6f0
// address: 0x1003ab6f0
// body: available
// range: 0x1003ab6f0-0x1003ab9df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003ab9dc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003ab6f0(void)

{
  undefined8 *puVar1;
  long lVar2;
  ID self;
  ID IVar3;
  class_t *pcVar4;
  class_t *pcVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  ID self_00;
  undefined8 uVar7;
  undefined1 *puVar8;
  code *pcVar9;
  long lVar10;
  undefined1 auStack_b0 [8];
  objc_super local_a8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  puVar8 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  self_00 = *(ID *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_1003afb70(0);
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  _swift_bridgeObjectRetain(uVar7);
  FUN_1003ab9e0(self_00,uVar7,&local_90);
  _objc_msgSend(self_00,"setEnableLog:",0);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  _swift_bridgeObjectRetain(uVar6);
  __s10Foundation3URLV15fileURLWithPathACSSh_tcfC((long)puVar8 - extraout_x12,uVar7,uVar6);
  _swift_bridgeObjectRelease(uVar6);
  self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar3 = self;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  local_90 = 0;
  IVar3 = NSFileManager::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                    (self,"createDirectoryAtURL:withIntermediateDirectories:attributes:error:",IVar3
                     ,1,0,&local_90);
  if ((int)IVar3 == 0) {
    uVar7 = local_90;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_90);
    _swift_willThrow(0);
    _swift_errorRelease(uVar7);
  }
  uVar6 = 0x80000001008b3890;
  uVar7 = 0xd000000000000021;
  __s10Foundation3URLV22appendingPathComponentyACSSF(puVar8,0xd000000000000021,0x80000001008b3890);
  __s10Foundation3URLV4pathSSvg();
  pcVar9 = *(code **)(lVar10 + 8);
  (*pcVar9)(puVar8,lVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar7,uVar6);
  _swift_bridgeObjectRelease(uVar6);
  _objc_msgSend(self_00,"setDatabaseFilePath:",uVar7);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  pcVar4 = (class_t *)0x0;
  FUN_10039df70();
  pcVar5 = pcVar4;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)
           ((long)&pcVar5->isa + _TtC8UUCommon27UUMacHistoryFileStorePlugin::databaseRoot);
  *puVar1 = uVar7;
  puVar1[1] = uVar6;
  local_a8.receiver = (ID)pcVar5;
  local_a8.super_class = pcVar4;
  _swift_bridgeObjectRetain(uVar6);
  IVar3 = _objc_msgSendSuper2(&local_a8,"init");
  _objc_msgSend(self_00,"registerStorePlugin:",IVar3);
  SensorsAnalyticsSDK::startWithConfigOptions_
            ((ID)&objc::class_t::SensorsAnalyticsSDK,"startWithConfigOptions:",self_00);
  (*pcVar9)((long)puVar8 - extraout_x12,lVar2);
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

