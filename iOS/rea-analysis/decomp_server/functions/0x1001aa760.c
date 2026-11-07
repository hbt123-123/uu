// rea decompile_all
// name: FUN_1001aa760
// address: 0x1001aa760
// body: available
// range: 0x1001aa760-0x1001aace3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001aace0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1001aa760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  char *local_b0;
  char *local_a8;
  long local_a0;
  long lStack_98;
  ID local_90;
  ID local_78;
  char *pcStack_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar2 = 0;
  __s10Foundation12CharacterSetVMa();
  local_a0 = *(long *)(lVar2 + -8);
  lStack_98 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a0 + 0x40));
  IVar7 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_90 = IVar7;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar12 = (undefined *)(IVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = (long)puVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &_OBJC_CLASS___NSTask;
  _objc_allocWithZone();
  IVar4 = _objc_msgSend((ID)puVar3,"init");
  __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(lVar13,param_1,param_2);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  (**(code **)(lVar14 + 8))(lVar13,lVar2);
  _objc_msgSend(IVar4,"setExecutableURL:",param_1);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_3,PTR___sSSN_1009957f8);
  _objc_msgSend(IVar4,"setArguments:",param_3);
  puVar3 = &_OBJC_CLASS___NSPipe;
  _objc_allocWithZone();
  IVar5 = _objc_msgSend((ID)puVar3,"init");
  puVar3 = &_OBJC_CLASS___NSPipe;
  _objc_allocWithZone();
  IVar6 = _objc_msgSend((ID)puVar3,"init");
  _objc_msgSend(IVar4,"setStandardOutput:",IVar5);
  _objc_msgSend(IVar4,"setStandardError:",IVar6);
  IVar7 = _objc_msgSend(IVar5,"fileHandleForReading");
  IVar6 = _objc_msgSend(IVar6,"fileHandleForReading");
  local_78 = 0;
  IVar8 = _objc_msgSend(IVar4,"launchAndReturnError:",&local_78);
  if ((int)IVar8 == 0) {
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_78);
    _swift_willThrow(0);
    goto LAB_1001aac9c;
  }
  _objc_msgSend(IVar4,"waitUntilExit");
  pcVar9 = "availableData";
  IVar6 = _objc_msgSend(IVar6,"availableData");
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  uVar1 = (uint)((ulong)pcVar9 >> 0x20);
  uVar11 = uVar1 >> 0x1e;
  local_a8 = pcVar9;
  if (uVar1 >> 0x1e < 2) {
    if (uVar11 == 0) {
      if (((ulong)pcVar9 & 0xff000000000000) != 0) {
LAB_1001aaa40:
        __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar12,0);
        IVar8 = IVar6;
        __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(IVar6,pcVar9,puVar12);
        IVar7 = 0;
        if (pcVar9 != (char *)0x0) {
          IVar7 = IVar8;
        }
        pcVar10 = (char *)0xe000000000000000;
        if (pcVar9 != (char *)0x0) {
          pcVar10 = pcVar9;
        }
        IVar4 = _objc_msgSend(IVar4,"terminationStatus");
        puVar12 = (undefined *)(long)(int)IVar4;
        puVar3 = &_OBJC_CLASS___NSError;
        _objc_allocWithZone();
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(IVar7,pcVar10);
        _swift_bridgeObjectRelease(pcVar10);
        _objc_msgSend((ID)puVar3,"initWithDomain:code:userInfo:",IVar7,puVar12,0);
        _swift_willThrow(0);
        FUN_100006cdc(IVar6,local_a8);
        IVar7 = IVar5;
        goto LAB_1001aac9c;
      }
    }
    else if ((long)(int)IVar6 != (long)IVar6 >> 0x20) goto LAB_1001aaa40;
  }
  else if ((uVar11 == 2) && (*(long *)(IVar6 + 0x10) != *(long *)(IVar6 + 0x18)))
  goto LAB_1001aaa40;
  pcVar9 = "availableData";
  IVar4 = _objc_msgSend(IVar7,"availableData");
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  uVar1 = (uint)((ulong)pcVar9 >> 0x20);
  uVar11 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar11 == 0) {
      if (((ulong)pcVar9 & 0xff000000000000) == 0) {
LAB_1001aac50:
        FUN_100006cdc(IVar4,pcVar9);
        FUN_100006cdc(IVar6,local_a8);
        IVar7 = 0;
        puVar12 = (undefined *)0xe000000000000000;
        goto LAB_1001aac9c;
      }
    }
    else if ((long)(int)IVar4 == (long)IVar4 >> 0x20) goto LAB_1001aac50;
  }
  else if ((uVar11 != 2) || (*(long *)(IVar4 + 0x10) == *(long *)(IVar4 + 0x18)))
  goto LAB_1001aac50;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar12,0);
  IVar5 = IVar4;
  pcVar10 = pcVar9;
  __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(IVar4,pcVar9,puVar12);
  IVar7 = local_90;
  local_78 = 0;
  if (pcVar10 != (char *)0x0) {
    local_78 = IVar5;
  }
  local_b0 = (char *)0xe000000000000000;
  if (pcVar10 != (char *)0x0) {
    local_b0 = pcVar10;
  }
  pcStack_70 = local_b0;
  __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(local_90);
  FUN_10009ff0c();
  puVar12 = PTR___sSSN_1009957f8;
  __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF(IVar7,PTR___sSSN_1009957f8,IVar5);
  FUN_100006cdc(IVar4,pcVar9);
  FUN_100006cdc(IVar6,local_a8);
  (**(code **)(local_a0 + 8))(local_90,lStack_98);
  _swift_bridgeObjectRelease(local_b0);
LAB_1001aac9c:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  auVar15._8_8_ = puVar12;
  auVar15._0_8_ = IVar7;
  return auVar15;
}

