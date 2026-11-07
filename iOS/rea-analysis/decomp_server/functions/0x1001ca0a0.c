// rea decompile_all
// name: FUN_1001ca0a0
// address: 0x1001ca0a0
// body: available
// range: 0x1001ca0a0-0x1001ca463 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001ca460 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001ca0a0(ulong param_1,long param_2,ulong param_3)

{
  undefined2 uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  ID IVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined1 auStack_f0 [16];
  undefined1 local_e0 [2];
  undefined2 local_de;
  undefined4 local_dc;
  long local_d8;
  undefined8 local_d0;
  long local_c8;
  ulong uStack_c0;
  long local_a8;
  ulong uStack_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar2 = (uint)(param_3 >> 0x20);
  uVar11 = uVar2 >> 0x1e;
  uVar12 = (undefined4)(param_1 >> 0x20);
  uVar1 = (undefined2)(param_1 >> 0x10);
  if (uVar2 >> 0x1e < 2) {
    if (uVar11 == 0) {
      if ((param_3 & 0xff000000000000) != 0) {
LAB_1001ca124:
        lVar4 = param_2;
        __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_2,param_3);
        local_90 = 0;
        IVar5 = NSJSONSerialization::JSONObjectWithData_options_error_
                          ((ID)&_OBJC_CLASS___NSJSONSerialization,
                           "JSONObjectWithData:options:error:",lVar4,0,&local_90);
        if (IVar5 == 0) {
          uVar9 = local_90;
          __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_90);
          _swift_willThrow(0);
          _swift_errorRelease(uVar9);
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_90,IVar5);
          _swift_unknownObjectRelease(IVar5);
          puVar6 = &DAT_100a759d8;
          FUN_100004bb4(&DAT_100a759d8,&DAT_10080c0a0);
          puVar3 = PTR___sypN_100995e88;
          plVar7 = &local_a8;
          _swift_dynamicCast(plVar7,&local_90,PTR___sypN_100995e88 + 8,puVar6,6);
          lVar4 = local_a8;
          if (((ulong)plVar7 & 1) != 0) {
            if (*(long *)(local_a8 + 0x10) == 0) {
LAB_1001ca250:
              uStack_88 = 0;
              local_90 = 0;
              local_78 = 0;
              uStack_80 = 0;
            }
            else {
              _swift_bridgeObjectRetain(local_a8);
              lVar8 = 0x676973;
              uVar10 = 0;
              FUN_1001a2c70(0x676973);
              if ((uVar10 & 1) == 0) {
                _swift_bridgeObjectRelease(lVar4);
                goto LAB_1001ca250;
              }
              FUN_10003e8bc(*(long *)(lVar4 + 0x38) + lVar8 * 0x20,&local_90);
              _swift_bridgeObjectRelease(lVar4);
            }
            _swift_bridgeObjectRelease(lVar4);
            if (local_78 == 0) {
              FUN_100040bb4(&local_90,&DAT_100a766e0,&DAT_10080bdb0);
            }
            else {
              plVar7 = &local_a8;
              _swift_dynamicCast(plVar7,&local_90,puVar3 + 8,PTR___sSSN_1009957f8,6);
              if (((ulong)plVar7 & 1) != 0) {
                FUN_100401b14(0);
                (*(code *)PTR____chkstk_darwin_100995498)();
                local_c8 = local_a8;
                uStack_c0 = uStack_a0;
                local_e0[0] = (char)param_1;
                local_de = uVar1;
                local_dc = uVar12;
                local_d8 = param_2;
                local_d0 = param_3;
                FUN_1003fb48c(FUN_1001cbe38,auStack_f0,0xd000000000000095,0x8000000100885070,
                              0xd000000000000014,0x800000010089d7c0,0xc0,0);
                if (DAT_100a73b60 != -1) {
                  _swift_once(&DAT_100a73b60,FUN_1000efc4c);
                }
                FUN_1001d5a78(param_1 >> 0x20,local_a8,uStack_a0);
                _swift_bridgeObjectRelease(uStack_a0);
                goto LAB_1001ca410;
              }
            }
          }
        }
      }
    }
    else if ((long)(int)param_2 != param_2 >> 0x20) goto LAB_1001ca124;
  }
  else if ((uVar11 == 2) && (*(long *)(param_2 + 0x10) != *(long *)(param_2 + 0x18)))
  goto LAB_1001ca124;
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_d0 = CONCAT71(local_d0._1_7_,(char)param_1);
  local_d0 = CONCAT44(uVar12,CONCAT22(uVar1,(undefined2)local_d0));
  local_c8 = param_2;
  uStack_c0 = param_3;
  FUN_1003fb4ec(FUN_1001cbe2c,local_e0,0xd000000000000095,0x8000000100885070,0xd000000000000014,
                0x800000010089d7c0,0xbd,0);
LAB_1001ca410:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

