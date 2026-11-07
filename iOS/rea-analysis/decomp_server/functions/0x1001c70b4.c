// rea decompile_all
// name: FUN_1001c70b4
// address: 0x1001c70b4
// body: available
// range: 0x1001c70b4-0x1001c74bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001c74b8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001c70b4(ulong param_1,ulong param_2,long param_3,ulong param_4)

{
  undefined2 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ID IVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined1 auStack_120 [16];
  undefined1 local_110;
  undefined2 local_10e;
  undefined4 local_10c;
  long local_108;
  ulong uStack_100;
  uint local_e4;
  undefined8 local_e0;
  long local_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined1 local_b0;
  undefined2 local_ae;
  undefined4 local_ac;
  long local_a8;
  ulong uStack_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar4 = 0;
  FUN_100401b14();
  uVar1 = (undefined2)(param_2 >> 0x10);
  uVar12 = (undefined4)(param_2 >> 0x20);
  local_e0 = uVar4;
  local_b0 = (char)param_2;
  local_ae = uVar1;
  local_ac = uVar12;
  local_a8 = param_3;
  uStack_a0 = param_4;
  FUN_1003fb48c(FUN_1001cbf44,auStack_c0,0xd000000000000095,0x8000000100885070,0xd00000000000001e,
                0x800000010089db20,0x161,0);
  uVar2 = (uint)(param_4 >> 0x20);
  uVar11 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar11 == 0) {
      if ((param_4 & 0xff000000000000) != 0) {
LAB_1001c71b4:
        local_e4 = (uint)param_1;
        lVar5 = param_3;
        __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_3,param_4);
        local_90 = 0;
        IVar6 = NSJSONSerialization::JSONObjectWithData_options_error_
                          ((ID)&_OBJC_CLASS___NSJSONSerialization,
                           "JSONObjectWithData:options:error:",lVar5,0,&local_90);
        if (IVar6 == 0) {
          uVar4 = local_90;
          __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_90);
          _swift_willThrow(0);
          _swift_errorRelease(uVar4);
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_90,IVar6);
          _swift_unknownObjectRelease(IVar6);
          puVar7 = &DAT_100a759d8;
          FUN_100004bb4(&DAT_100a759d8,&DAT_10080c0a0);
          puVar3 = PTR___sypN_100995e88;
          plVar8 = &local_d8;
          _swift_dynamicCast(plVar8,&local_90,PTR___sypN_100995e88 + 8,puVar7,6);
          lVar5 = local_d8;
          if (((ulong)plVar8 & 1) != 0) {
            if (*(long *)(local_d8 + 0x10) == 0) {
LAB_1001c72ec:
              uStack_88 = 0;
              local_90 = 0;
              local_78 = 0;
              uStack_80 = 0;
            }
            else {
              _swift_bridgeObjectRetain(local_d8);
              lVar9 = 0x64726f7773736170;
              uVar10 = 0;
              FUN_1001a2c70(0x64726f7773736170);
              if ((uVar10 & 1) == 0) {
                _swift_bridgeObjectRelease(lVar5);
                goto LAB_1001c72ec;
              }
              FUN_10003e8bc(*(long *)(lVar5 + 0x38) + lVar9 * 0x20,&local_90);
              _swift_bridgeObjectRelease(lVar5);
            }
            _swift_bridgeObjectRelease(lVar5);
            if (local_78 == 0) {
              FUN_100040bb4(&local_90,&DAT_100a766e0,&DAT_10080bdb0);
            }
            else {
              plVar8 = &local_d8;
              _swift_dynamicCast(plVar8,&local_90,puVar3 + 8,PTR___sSSN_1009957f8,6);
              uVar2 = local_e4;
              if (((ulong)plVar8 & 1) != 0) {
                if (DAT_100a73b60 != -1) {
                  _swift_once(&DAT_100a73b60,FUN_1000efc4c);
                }
                _swift_weakInit(&local_90);
                FUN_100008184(param_3,param_4);
                FUN_1001e3dcc(local_d8,uStack_d0,&local_90,uVar2,param_2 & 0xffffffffffff00ff,
                              param_3,param_4);
                _swift_bridgeObjectRelease(uStack_d0);
                FUN_100006cdc(param_3,param_4);
                _swift_weakDestroy(&local_90);
                goto LAB_1001c7468;
              }
            }
          }
        }
        param_1 = (ulong)local_e4;
      }
    }
    else if ((long)(int)param_3 != param_3 >> 0x20) goto LAB_1001c71b4;
  }
  else if ((uVar11 == 2) && (*(long *)(param_3 + 0x10) != *(long *)(param_3 + 0x18)))
  goto LAB_1001c71b4;
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_110 = (char)param_2;
  local_10e = uVar1;
  local_10c = uVar12;
  local_108 = param_3;
  uStack_100 = param_4;
  FUN_1003fb4ec(FUN_1001cbf50,auStack_120,0xd000000000000095,0x8000000100885070,0xd00000000000001e,
                0x800000010089db20,0x167,0);
  FUN_1001caa44(param_1,param_2 >> 0x20,1,0x5f64696c61766e69,0xef64616f6c796170);
LAB_1001c7468:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

