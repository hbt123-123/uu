// rea decompile_all
// name: FUN_100187e00
// address: 0x100187e00
// body: available
// range: 0x100187e00-0x1001882eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100188070 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001882e8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100187f4c) */

ID FUN_100187e00(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  ulong uVar5;
  undefined1 *self;
  undefined *puVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 uVar10;
  uint uVar11;
  long extraout_x8;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auStack_a0 [16];
  ID aIStack_90 [2];
  undefined1 auStack_80 [8];
  ID local_78;
  char *pcStack_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  lVar12 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  self = auStack_80 + lVar12;
  pcVar8 = "defaultManager";
  IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar4 = IVar3;
  __s10Foundation3URLV4pathSSvg();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(pcVar8);
  pcVar8 = "fileExistsAtPath:";
  IVar4 = NSFileManager::fileExistsAtPath_(IVar3,"fileExistsAtPath:",IVar4);
  uVar5 = 0;
  if ((int)IVar4 == 0) {
    puVar6 = &_OBJC_CLASS___NSError;
    _objc_allocWithZone();
    uVar7 = 0x656c694664616572;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656c694664616572,0xed00006b6e756843);
    uVar10 = 0x186a6;
  }
  else {
    __s10Foundation3URLV4pathSSvg();
    pcVar9 = pcVar8;
    FUN_100219ce4();
    _swift_bridgeObjectRelease(pcVar8);
    if ((((ulong)pcVar9 & 1) == 0) && (uVar13 = *(ulong *)(param_3 + 0x10), uVar13 < uVar5)) {
      FUN_10004003c(0,&DAT_100a77d00,&PTR__OBJC_CLASS___NSFileHandle_100a658e8);
      (**(code **)(lVar14 + 0x10))(self,param_1,lVar2);
      FUN_1001877f4();
      _objc_msgSend((ID)self,"seekToFileOffset:",uVar13);
      pcVar8 = "readDataOfLength:";
      IVar4 = _objc_msgSend((ID)self,"readDataOfLength:",(ulong)*(uint *)(param_3 + 0x18));
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(ID *)((long)aIStack_90 + lVar12) = IVar4;
      *(char **)((long)aIStack_90 + lVar12 + 8) = pcVar8;
      FUN_1003fb45c(FUN_10018850c,auStack_a0 + lVar12,0xd0000000000000ac,0x80000001008981c0,
                    0xd00000000000001b,0x8000000100898270,0x20,7);
      uVar1 = (uint)((ulong)pcVar8 >> 0x20);
      uVar11 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar11 == 0) {
          if (((ulong)pcVar8 & 0xff000000000000) == 0) goto LAB_100188174;
        }
        else {
          lVar12 = (long)(int)IVar4;
          lVar2 = (long)IVar4 >> 0x20;
LAB_10018816c:
          if (lVar12 == lVar2) goto LAB_100188174;
        }
        local_78 = IVar4;
        pcStack_70 = pcVar8;
        FUN_10061630c(&local_78);
      }
      else {
        if (uVar11 == 2) {
          lVar12 = *(long *)(IVar4 + 0x10);
          lVar2 = *(long *)(IVar4 + 0x18);
          goto LAB_10018816c;
        }
LAB_100188174:
        puVar6 = &_OBJC_CLASS___NSError;
        _objc_allocWithZone();
        uVar7 = 0x656c694664616572;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656c694664616572,0xed00006b6e756843)
        ;
        IVar3 = _objc_msgSend((ID)puVar6,"initWithDomain:code:userInfo:",uVar7,0x186a8,0);
        FUN_100616260(IVar3);
      }
      local_78 = 0;
      IVar3 = _objc_msgSend((ID)self,"closeAndReturnError:",&local_78);
      if ((int)IVar3 == 0) {
        IVar3 = local_78;
        __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_78);
        _swift_willThrow(0);
        FUN_100006cdc(IVar4,pcVar8);
        _swift_errorRelease(IVar3);
      }
      else {
        FUN_100006cdc(IVar4,pcVar8);
        IVar3 = 0;
      }
      if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
        return IVar3;
      }
      goto LAB_1001882e8;
    }
    puVar6 = &_OBJC_CLASS___NSError;
    _objc_allocWithZone();
    uVar7 = 0x656c694664616572;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656c694664616572,0xed00006b6e756843);
    uVar10 = 0x186a7;
  }
  IVar4 = _objc_msgSend((ID)puVar6,"initWithDomain:code:userInfo:",uVar7,uVar10,0);
  FUN_100616260(IVar4);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return 0;
  }
LAB_1001882e8:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

