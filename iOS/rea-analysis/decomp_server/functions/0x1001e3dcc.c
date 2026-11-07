// rea decompile_all
// name: FUN_1001e3dcc
// address: 0x1001e3dcc
// body: available
// range: 0x1001e3dcc-0x1001e429f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001e429c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1001e3dcc(undefined8 param_1,code *param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  ID IVar3;
  undefined *self;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 local_80 [3];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  param_5 = param_5 >> 0x20;
  pcVar5 = param_2;
  if (DAT_100a73b60 != -1) {
    pcVar5 = FUN_1000efc4c;
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  uVar1 = 0;
  FUN_1000b35b4();
  lVar2 = 0;
  if ((uVar1 & 1) == 0) {
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_1001ddb9c,0,0xd000000000000095,0x8000000100889250,0xd000000000000023,
                  0x800000010089f950,0x3dd,0);
    _swift_beginAccess(param_3,local_80,0,0);
    _swift_weakLoadStrong();
    if (param_3 == 0) goto LAB_1001e4238;
    FUN_1001caa44(param_4,param_5,0,0x6b6f,0xe200000000000000);
LAB_1001e40bc:
    _swift_release(param_3);
  }
  else {
    _NSUserName();
    if (lVar2 == 0) {
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(pcVar5);
    }
    IVar3 = ODSession::defaultSession((ID)&_OBJC_CLASS___ODSession,"defaultSession");
    self = &_OBJC_CLASS___ODNode;
    _objc_allocWithZone();
    local_80[0] = 0;
    IVar3 = _objc_msgSend((ID)self,"initWithSession:type:error:",IVar3,0x2200,local_80);
    if (IVar3 == 0) {
      uVar4 = local_80[0];
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _swift_willThrow(0);
    }
    else {
      local_80[0] = 0;
      IVar3 = _objc_msgSend(IVar3,"recordWithRecordType:name:attributes:error:",
                            *(undefined8 *)PTR__kODRecordTypeUsers_100995638,lVar2,0,local_80);
      if (IVar3 == 0) {
        uVar4 = local_80[0];
        __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
        _swift_willThrow(0);
      }
      else {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
        local_80[0] = 0;
        IVar3 = _objc_msgSend(IVar3,"verifyPassword:error:",param_1,local_80);
        if ((IVar3 & 1) != 0) {
          FUN_100401b14(0);
          FUN_1003fb48c(FUN_1001ddbc8,0,0xd000000000000095,0x8000000100889250,0xd000000000000023,
                        0x800000010089f950,1000,0);
          _swift_beginAccess(param_3,local_80,0,0);
          _swift_weakLoadStrong();
          if (param_3 == 0) goto LAB_1001e4238;
          FUN_1001caa44(param_4,param_5,0,0x6b6f,0xe200000000000000);
          goto LAB_1001e40bc;
        }
        uVar4 = local_80[0];
        __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
        _swift_willThrow(0);
      }
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_a0 = uVar4;
    FUN_1003fb4bc(FUN_1001e4860,auStack_b0,0xd000000000000095,0x8000000100889250,0xd000000000000023,
                  0x800000010089f950,0x3eb,0);
    _swift_beginAccess(param_3,local_80,0,0);
    _swift_weakLoadStrong();
    if (param_3 != 0) {
      FUN_1001caa44(param_4,param_5,1,0x64726f7773736170,0xee00726f7272655f);
      _swift_release(param_3);
    }
    _swift_errorRelease(uVar4);
  }
LAB_1001e4238:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

