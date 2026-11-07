// rea decompile_all
// name: FUN_1001c698c
// address: 0x1001c698c
// body: available
// range: 0x1001c698c-0x1001c70b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001c70b0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001c698c(undefined8 param_1,ulong param_2,long param_3,ulong param_4)

{
  undefined2 uVar1;
  uint uVar2;
  ID IVar3;
  undefined *puVar4;
  uint *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 unaff_x20;
  long lVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined1 auStack_e0 [16];
  undefined1 local_d0 [2];
  undefined2 local_ce;
  undefined4 local_cc;
  long local_c8;
  ulong local_c0;
  undefined1 *local_b0 [2];
  uint local_a0;
  undefined4 uStack_9c;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar2 = (uint)(param_4 >> 0x20);
  uVar12 = uVar2 >> 0x1e;
  uVar14 = (undefined4)(param_2 >> 0x20);
  uVar1 = (undefined2)(param_2 >> 0x10);
  if (uVar2 >> 0x1e < 2) {
    if (uVar12 == 0) {
      if ((param_4 & 0xff000000000000) != 0) {
LAB_1001c6a14:
        lVar13 = param_3;
        __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_3,param_4);
        local_90 = 0;
        IVar3 = NSJSONSerialization::JSONObjectWithData_options_error_
                          ((ID)&_OBJC_CLASS___NSJSONSerialization,
                           "JSONObjectWithData:options:error:",lVar13,0,&local_90);
        if (IVar3 == 0) {
          uVar15 = local_90;
          __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_90);
          _swift_willThrow(0);
          _swift_errorRelease(uVar15);
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_90,IVar3);
          _swift_unknownObjectRelease(IVar3);
          puVar4 = &DAT_100a759d8;
          FUN_100004bb4(&DAT_100a759d8,&DAT_10080c0a0);
          puVar7 = PTR___sypN_100995e88;
          puVar5 = &local_a0;
          _swift_dynamicCast(puVar5,&local_90,PTR___sypN_100995e88 + 8,puVar4,6);
          if (((ulong)puVar5 & 1) != 0) {
            lVar13 = CONCAT44(uStack_9c,local_a0);
            if (*(long *)(lVar13 + 0x10) == 0) {
              uStack_88 = 0;
              local_90 = 0;
              local_78 = 0;
              uStack_80 = 0;
            }
            else {
              _swift_bridgeObjectRetain(lVar13);
              lVar6 = 0x5f6e6f6973736573;
              uVar10 = 0xea00000000006469;
              FUN_1001a2c70(0x5f6e6f6973736573);
              if ((uVar10 & 1) == 0) {
                _swift_bridgeObjectRelease(lVar13);
                uStack_88 = 0;
                local_90 = 0;
                local_78 = 0;
                uStack_80 = 0;
              }
              else {
                FUN_10003e8bc(*(long *)(lVar13 + 0x38) + lVar6 * 0x20,&local_90);
                _swift_bridgeObjectRelease(lVar13);
              }
            }
            _swift_bridgeObjectRelease(lVar13);
            if (local_78 == 0) {
              FUN_100040bb4(&local_90,&DAT_100a766e0,&DAT_10080bdb0);
            }
            else {
              puVar5 = &local_a0;
              _swift_dynamicCast(puVar5,&local_90,puVar7 + 8,PTR___ss6UInt32VN_100995dc0,6);
              if (((ulong)puVar5 & 1) != 0) {
                FUN_100401b14(0);
                (*(code *)PTR____chkstk_darwin_100995498)();
                local_c0 = CONCAT44(local_c0._4_4_,local_a0);
                FUN_1003fb48c(FUN_1001cbe6c,local_d0,0xd000000000000095,0x8000000100885070,
                              0xd000000000000023,0x800000010089d900,0xde,0);
                if (DAT_100a73b60 != -1) {
                  _swift_once(&DAT_100a73b60,FUN_1000efc4c);
                }
                lVar6 = *(long *)(DAT_100b360a8 + 0x90);
                puVar4 = &DAT_1009a31a0;
                _swift_allocObject(&DAT_1009a31a0,0x18,7);
                _swift_weakInit(puVar4 + 0x10,unaff_x20);
                puVar7 = &DAT_1009a3278;
                _swift_allocObject(&DAT_1009a3278,0x38,7);
                *(undefined **)(puVar7 + 0x10) = puVar4;
                *(int *)(puVar7 + 0x18) = (int)param_1;
                puVar7[0x20] = (char)param_2;
                *(undefined2 *)(puVar7 + 0x22) = uVar1;
                *(undefined4 *)(puVar7 + 0x24) = uVar14;
                *(long *)(puVar7 + 0x28) = param_3;
                *(ulong *)(puVar7 + 0x30) = param_4;
                lVar13 = _TtC14UURemoteServer15TerminalManager::sessions;
                puVar11 = &local_90;
                _swift_beginAccess(lVar6 + _TtC14UURemoteServer15TerminalManager::sessions,puVar11,
                                   0x20,0);
                lVar13 = *(long *)(lVar6 + lVar13);
                if ((*(long *)(lVar13 + 0x10) == 0) ||
                   (uVar10 = (ulong)local_a0, thunk_FUN_1001a2c34(), ((ulong)puVar11 & 1) == 0)) {
                  _swift_endAccess(&local_90);
                  local_b0[0] = (undefined1 *)local_b0;
                  (*(code *)PTR____chkstk_darwin_100995498)();
                  local_c0 = CONCAT44(local_c0._4_4_,local_a0);
                  FUN_100008184(param_3,param_4);
                  _swift_retain(puVar4);
                  FUN_1003fb48c(FUN_1001cbec4,local_d0,0xd000000000000095,0x8000000100889250,
                                0xd000000000000022,0x800000010089d930,0x26f,0);
                  _swift_beginAccess(puVar4 + 0x10,&local_90,0,0);
                  puVar9 = puVar4 + 0x10;
                  _swift_weakLoadStrong();
                  if (puVar9 != (undefined *)0x0) {
                    FUN_1001ca658(param_1,param_2 >> 0x20,0x194,0xd000000000000011,
                                  0x800000010089d960);
                    _swift_release(puVar4);
                    puVar4 = puVar9;
                  }
                  _swift_release(puVar4);
                }
                else {
                  uVar15 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar10 * 8);
                  _swift_endAccess(&local_90);
                  local_b0[0] = (undefined1 *)local_b0;
                  (*(code *)PTR____chkstk_darwin_100995498)();
                  local_c0 = CONCAT44(local_c0._4_4_,local_a0);
                  FUN_100008184(param_3,param_4);
                  _swift_retain(puVar4);
                  _swift_retain(uVar15);
                  FUN_1003fb48c(FUN_1001cbecc,local_d0,0xd000000000000095,0x8000000100889250,
                                0xd000000000000022,0x800000010089d930,0x273,0);
                  _swift_beginAccess(lVar6 + _TtC14UURemoteServer15TerminalManager::
                                             closingSessionIds,&local_90,0x21,0);
                  FUN_10006d93c(&local_a0,(ulong)local_a0);
                  _swift_endAccess(&local_90);
                  puVar9 = &DAT_1009a32a0;
                  _swift_allocObject(&DAT_1009a32a0,0x18,7);
                  _swift_unknownObjectWeakInit(puVar9 + 0x10,lVar6);
                  puVar8 = &DAT_1009a32c8;
                  _swift_allocObject(&DAT_1009a32c8,0x30,7);
                  *(undefined **)(puVar8 + 0x10) = puVar9;
                  *(uint *)(puVar8 + 0x18) = local_a0;
                  *(code **)(puVar8 + 0x20) = FUN_1001cbea0;
                  *(undefined **)(puVar8 + 0x28) = puVar7;
                  FUN_100004b70(0);
                  _swift_retain(puVar9);
                  _swift_retain(puVar7);
                  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
                  FUN_1001e843c();
                  _swift_release(puVar4);
                  _swift_release(uVar15);
                  _swift_release(puVar9);
                  _swift_release(puVar8);
                }
                _swift_release(puVar7);
                goto LAB_1001c6f44;
              }
            }
          }
        }
      }
    }
    else if ((long)(int)param_3 != param_3 >> 0x20) goto LAB_1001c6a14;
  }
  else if ((uVar12 == 2) && (*(long *)(param_3 + 0x10) != *(long *)(param_3 + 0x18)))
  goto LAB_1001c6a14;
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_d0[0] = (char)param_2;
  local_ce = uVar1;
  local_cc = uVar14;
  local_c8 = param_3;
  local_c0 = param_4;
  FUN_1003fb4ec(FUN_1001cbe60,auStack_e0,0xd000000000000095,0x8000000100885070,0xd000000000000023,
                0x800000010089d900,0xda,0);
  FUN_1001ca658(param_1,param_2 >> 0x20,400,0x2064696c61766e49,0xef64616f6c796170);
LAB_1001c6f44:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

