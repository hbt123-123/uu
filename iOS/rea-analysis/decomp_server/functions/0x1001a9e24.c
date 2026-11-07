// rea decompile_all
// name: FUN_1001a9e24
// address: 0x1001a9e24
// body: available
// range: 0x1001a9e24-0x1001aa08f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1001a9e24(ulong param_1,undefined1 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  ID IVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong self;
  ulong uVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x12;
  ulong uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_90 [8];
  ulong local_88;
  undefined1 *local_80;
  ulong local_78;
  long local_70;
  long lStack_68;
  
  lVar3 = 0;
  local_80 = param_2;
  local_78 = param_1;
  __s10Foundation3URLVMa();
  local_70 = *(long *)(lVar3 + -8);
  lStack_68 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_70 + 0x40));
  puVar10 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar9 = (long)puVar10 - extraout_x12;
  IVar4 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace,"sharedWorkspace");
  uVar5 = NSWorkspace::runningApplications(IVar4,"runningApplications");
  uVar6 = 0;
  FUN_10004003c(0,&DAT_100a76f20,&PTR__OBJC_CLASS___NSRunningApplication_100a658a8);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar5,uVar6);
  if (uVar5 >> 0x3e == 0) {
    uVar11 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar11 = uVar5 & 0xffffffffffffff8;
    if ((long)uVar5 < 0) {
      uVar11 = uVar5;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar11 != 0) {
    uVar12 = 0;
    local_88 = uVar5 & 0xffffffffffffff8;
    do {
      if ((uVar5 & 0xc000000000000001) == 0) {
        if (*(ulong *)(local_88 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001aa048);
          (*pcVar2)();
        }
        self = *(ID *)(uVar5 + uVar12 * 8 + 0x20);
      }
      else {
        self = uVar12;
        FUN_100169ff8(uVar12,uVar5);
      }
      uVar1 = uVar12 + 1;
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001aa044);
        (*pcVar2)();
      }
      IVar4 = _objc_msgSend(self,"bundleURL");
      if (IVar4 != 0) {
        __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar10);
        uVar7 = uVar9;
        puVar8 = puVar10;
        (**(code **)(local_70 + 0x20))(uVar9,puVar10,lStack_68);
        __s10Foundation3URLV4pathSSvg();
        if ((uVar7 == local_78) && (puVar8 == local_80)) {
          _swift_bridgeObjectRelease(puVar8);
          (**(code **)(local_70 + 8))(uVar9,lStack_68);
LAB_1001aa034:
          _swift_bridgeObjectRelease(uVar5);
          return self;
        }
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        _swift_bridgeObjectRelease(puVar8);
        (**(code **)(local_70 + 8))(uVar9,lStack_68);
        if ((uVar7 & 1) != 0) goto LAB_1001aa034;
      }
      uVar12 = uVar12 + 1;
    } while (uVar1 != uVar11);
  }
  _swift_bridgeObjectRelease(uVar5);
  return 0;
}

