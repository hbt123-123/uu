// rea decompile_all
// name: FUN_1001c9c1c
// address: 0x1001c9c1c
// body: available
// range: 0x1001c9c1c-0x1001ca09f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001ca09c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001c9c1c(ulong param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auStack_c0 [16];
  undefined1 local_b0 [2];
  undefined2 local_ae;
  undefined4 local_ac;
  long local_a8;
  ulong local_a0;
  long local_90 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar12 = param_1 >> 0x20;
  uVar1 = (uint)(param_3 >> 0x20);
  uVar10 = uVar1 >> 0x1e;
  uVar11 = (undefined4)(param_1 >> 0x20);
  if (uVar1 >> 0x1e < 2) {
    if (uVar10 == 0) {
      if ((param_3 & 0xff000000000000) != 0) {
LAB_1001c9c9c:
        lVar13 = param_2;
        __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_2,param_3);
        local_80 = 0;
        IVar3 = NSJSONSerialization::JSONObjectWithData_options_error_
                          ((ID)&_OBJC_CLASS___NSJSONSerialization,
                           "JSONObjectWithData:options:error:",lVar13,0,&local_80);
        if (IVar3 == 0) {
          uVar14 = local_80;
          __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_80);
          _swift_willThrow(0);
          _swift_errorRelease(uVar14);
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_80,IVar3);
          _swift_unknownObjectRelease(IVar3);
          puVar4 = &DAT_100a759d8;
          FUN_100004bb4(&DAT_100a759d8,&DAT_10080c0a0);
          puVar2 = PTR___sypN_100995e88;
          plVar5 = local_90;
          _swift_dynamicCast(plVar5,&local_80,PTR___sypN_100995e88 + 8,puVar4,6);
          lVar13 = local_90[0];
          if (((ulong)plVar5 & 1) != 0) {
            if (*(long *)(local_90[0] + 0x10) != 0) {
              _swift_bridgeObjectRetain(local_90[0]);
              lVar6 = 0x736c6f63;
              uVar8 = 0;
              FUN_1001a2c70(0x736c6f63);
              if ((uVar8 & 1) == 0) {
                _swift_bridgeObjectRelease(lVar13);
              }
              else {
                FUN_10003e8bc(*(long *)(lVar13 + 0x38) + lVar6 * 0x20,&local_80);
                _swift_bridgeObjectRelease(lVar13);
                plVar5 = local_90;
                _swift_dynamicCast(plVar5,&local_80,puVar2 + 8,PTR___sSiN_100995968,6);
                lVar6 = local_90[0];
                if (((ulong)plVar5 & 1) != 0) {
                  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_1001c9ef8:
                    uStack_78 = 0;
                    local_80 = 0;
                    local_68 = 0;
                    uStack_70 = 0;
                  }
                  else {
                    _swift_bridgeObjectRetain(lVar13);
                    lVar7 = 0x73776f72;
                    uVar8 = 0;
                    FUN_1001a2c70(0x73776f72);
                    if ((uVar8 & 1) == 0) {
                      _swift_bridgeObjectRelease(lVar13);
                      goto LAB_1001c9ef8;
                    }
                    FUN_10003e8bc(*(long *)(lVar13 + 0x38) + lVar7 * 0x20,&local_80);
                    _swift_bridgeObjectRelease(lVar13);
                  }
                  _swift_bridgeObjectRelease(lVar13);
                  if (local_68 == 0) {
                    FUN_100040bb4(&local_80,&DAT_100a766e0,&DAT_10080bdb0);
                  }
                  else {
                    plVar5 = local_90;
                    _swift_dynamicCast(plVar5,&local_80,puVar2 + 8,PTR___sSiN_100995968,6);
                    if (((ulong)plVar5 & 1) != 0) {
                      if (DAT_100a73b60 != -1) {
                        _swift_once(&DAT_100a73b60,FUN_1000efc4c);
                      }
                      lVar13 = _TtC14UURemoteServer15TerminalManager::sessions;
                      lVar7 = *(long *)(DAT_100b360a8 + 0x90);
                      puVar9 = &local_80;
                      _swift_beginAccess(lVar7 + _TtC14UURemoteServer15TerminalManager::sessions,
                                         puVar9,0x20,0);
                      lVar13 = *(long *)(lVar7 + lVar13);
                      if ((*(long *)(lVar13 + 0x10) == 0) ||
                         (thunk_FUN_1001a2c34(), ((ulong)puVar9 & 1) == 0)) {
                        _swift_endAccess(&local_80);
                        FUN_100401b14(0);
                        (*(code *)PTR____chkstk_darwin_100995498)();
                        local_a0 = CONCAT44(local_a0._4_4_,uVar11);
                        FUN_1003fb48c(FUN_1001cbe24,local_b0,0xd000000000000095,0x8000000100889250,
                                      0xd00000000000001c,0x800000010089d720,0x2fa,0);
                      }
                      else {
                        uVar14 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar12 * 8);
                        _swift_endAccess(&local_80);
                        _swift_retain(uVar14);
                        FUN_1001e88f0(lVar6,local_90[0]);
                        _swift_release(uVar14);
                      }
                      goto LAB_1001c9ebc;
                    }
                  }
                  goto LAB_1001c9e30;
                }
              }
            }
            _swift_bridgeObjectRelease(lVar13);
          }
        }
      }
    }
    else if ((long)(int)param_2 != param_2 >> 0x20) goto LAB_1001c9c9c;
  }
  else if ((uVar10 == 2) && (*(long *)(param_2 + 0x10) != *(long *)(param_2 + 0x18)))
  goto LAB_1001c9c9c;
LAB_1001c9e30:
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_b0[0] = (undefined1)param_1;
  local_ae = (undefined2)(param_1 >> 0x10);
  local_ac = uVar11;
  local_a8 = param_2;
  local_a0 = param_3;
  FUN_1003fb4ec(FUN_1001cbe18,auStack_c0,0xd000000000000095,0x8000000100885070,0xd000000000000014,
                0x800000010089d700,0xaa,0);
LAB_1001c9ebc:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

