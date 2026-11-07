// rea decompile_all
// name: StreamerWrapper::ControlledCreateRoom:
// address: 0x10037689c
// body: available
// range: 0x10037689c-0x100376fc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100376fc0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

unsigned_int StreamerWrapper::ControlledCreateRoom_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  int iVar2;
  unsigned_int uVar3;
  ID IVar4;
  ID IVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *local_140;
  ID local_138;
  ID local_130;
  ID local_128;
  ID local_120;
  undefined4 local_118;
  long local_110;
  long local_108;
  undefined8 local_100;
  undefined4 local_f8;
  ID local_f0;
  undefined4 local_e8;
  ID local_e0;
  undefined4 local_d8;
  ID local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  ID local_b8;
  undefined4 local_b0;
  undefined2 local_ac;
  ID local_a8;
  undefined4 local_a0;
  ID local_98;
  undefined4 local_90;
  long local_88;
  long lStack_80;
  int local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_120 = 0;
  local_118 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_108 = 0;
  local_100 = 0;
  local_110 = 0;
  local_f8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_88 = 0;
  lStack_80 = 0;
  local_78 = 0;
  local_138 = param_1;
  IVar4 = objc_stub::token(param_3);
  _objc_retainAutorelease();
  local_120 = objc_stub::cStringUsingEncoding_(IVar4,4);
  IVar4 = objc_stub::token(param_3);
  IVar4 = objc_stub::lengthOfBytesUsingEncoding_(IVar4,4);
  local_118 = (undefined4)IVar4;
  local_130 = objc_stub::serverList(param_3);
  IVar4 = objc_stub::count(local_130);
  local_140 = (undefined1 *)&local_140;
  (*(code *)PTR____chkstk_darwin_100995498)(IVar4 << 3);
  lVar6 = (long)&local_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_128 = objc_stub::serverList(param_3);
  IVar4 = objc_stub::count(local_128);
  (*(code *)PTR____chkstk_darwin_100995498)(IVar4 << 2);
  lVar8 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar7 = 0;
  while( true ) {
    IVar4 = objc_stub::serverList(param_3);
    IVar4 = objc_stub::count(IVar4);
    if (IVar4 <= uVar7) break;
    IVar4 = objc_stub::serverList(param_3);
    IVar4 = objc_stub::objectAtIndexedSubscript_(IVar4,uVar7);
    _objc_retainAutorelease();
    IVar4 = objc_stub::cStringUsingEncoding_(IVar4,4);
    *(ID *)(lVar6 + uVar7 * 8) = IVar4;
    IVar4 = objc_stub::serverList(param_3);
    IVar4 = objc_stub::objectAtIndexedSubscript_(IVar4,uVar7);
    IVar4 = objc_stub::lengthOfBytesUsingEncoding_(IVar4,4);
    *(int *)(lVar8 + uVar7 * 4) = (int)IVar4;
    uVar7 = uVar7 + 1;
  }
  local_110 = lVar6;
  local_108 = lVar8;
  IVar4 = objc_stub::serverList(param_3);
  IVar4 = objc_stub::count(IVar4);
  local_100 = CONCAT44(local_100._4_4_,(int)IVar4);
  IVar4 = objc_stub::sniRequiredServerList(param_3);
  IVar4 = objc_stub::count(IVar4);
  if (IVar4 < 2) {
    IVar4 = 1;
  }
  (*(code *)PTR____chkstk_darwin_100995498)(IVar4 * 8 + 0xf & 0xfffffffffffffff0);
  lVar8 = lVar8 - extraout_x8_01;
  IVar4 = objc_stub::sniRequiredServerList(param_3);
  IVar4 = objc_stub::count(IVar4);
  if (IVar4 < 2) {
    IVar4 = 1;
  }
  (*(code *)PTR____chkstk_darwin_100995498)(IVar4 * 4 + 0xf & 0xfffffffffffffff0);
  IVar4 = objc_stub::sniRequiredServerList(param_3);
  IVar4 = objc_stub::count(IVar4);
  lVar6 = local_88;
  lVar1 = lStack_80;
  iVar2 = local_78;
  if (0 < (int)IVar4) {
    uVar7 = 0;
    do {
      IVar5 = objc_stub::sniRequiredServerList(param_3);
      IVar5 = objc_stub::objectAtIndexedSubscript_(IVar5,uVar7);
      _objc_retainAutorelease();
      IVar5 = objc_stub::cStringUsingEncoding_(IVar5,4);
      *(ID *)(lVar8 + uVar7 * 8) = IVar5;
      IVar5 = objc_stub::sniRequiredServerList(param_3);
      IVar5 = objc_stub::objectAtIndexedSubscript_(IVar5,uVar7);
      IVar5 = objc_stub::lengthOfBytesUsingEncoding_(IVar5,4);
      *(int *)((lVar8 - extraout_x8_02) + uVar7 * 4) = (int)IVar5;
      uVar7 = uVar7 + 1;
      lVar6 = lVar8;
      lVar1 = lVar8 - extraout_x8_02;
      iVar2 = (int)IVar4;
    } while ((IVar4 & 0x7fffffff) != uVar7);
  }
  local_78 = iVar2;
  lStack_80 = lVar1;
  local_88 = lVar6;
  IVar4 = objc_stub::connectTimeout(param_3);
  local_100 = CONCAT44((int)IVar4,(undefined4)local_100);
  IVar4 = objc_stub::reconnectDelay(param_3);
  local_f8 = (undefined4)IVar4;
  IVar4 = objc_stub::reportToken(param_3);
  _objc_retainAutorelease();
  local_f0 = objc_stub::cStringUsingEncoding_(IVar4,4);
  IVar4 = objc_stub::reportToken(param_3);
  IVar4 = objc_stub::lengthOfBytesUsingEncoding_(IVar4,4);
  local_e8 = (undefined4)IVar4;
  IVar4 = objc_stub::reportUrl(param_3);
  _objc_retainAutorelease();
  local_e0 = objc_stub::cStringUsingEncoding_(IVar4,4);
  IVar4 = objc_stub::reportUrl(param_3);
  IVar4 = objc_stub::lengthOfBytesUsingEncoding_(IVar4,4);
  local_d8 = (undefined4)IVar4;
  IVar4 = objc_stub::reportServerAddress(param_3);
  _objc_retainAutorelease();
  local_d0 = objc_stub::cStringUsingEncoding_(IVar4,4);
  IVar4 = objc_stub::reportServerAddress(param_3);
  IVar4 = objc_stub::lengthOfBytesUsingEncoding_(IVar4,4);
  local_c8 = CONCAT44(local_c8._4_4_,(int)IVar4);
  IVar4 = objc_stub::proxy(param_3);
  IVar5 = objc_stub::type(IVar4);
  if (IVar5 != 0) {
    IVar5 = objc_stub::host(IVar4);
    IVar5 = objc_stub::length(IVar5);
    if (IVar5 != 0) {
      IVar5 = objc_stub::type(IVar4);
      local_c0 = (undefined4)IVar5;
      IVar5 = objc_stub::host(IVar4);
      _objc_retainAutorelease();
      local_b8 = objc_stub::cStringUsingEncoding_(IVar5,4);
      IVar5 = objc_stub::host(IVar4);
      IVar5 = objc_stub::lengthOfBytesUsingEncoding_(IVar5,4);
      local_b0 = (undefined4)IVar5;
      IVar5 = objc_stub::port(IVar4);
      local_ac = (undefined2)IVar5;
      IVar5 = objc_stub::username(IVar4);
      IVar5 = objc_stub::length(IVar5);
      if (IVar5 != 0) {
        IVar5 = objc_stub::username(IVar4);
        _objc_retainAutorelease();
        local_a8 = objc_stub::cStringUsingEncoding_(IVar5,4);
        IVar5 = objc_stub::username(IVar4);
        IVar5 = objc_stub::lengthOfBytesUsingEncoding_(IVar5,4);
        local_a0 = (undefined4)IVar5;
        IVar5 = objc_stub::password(IVar4);
        _objc_retainAutorelease();
        local_98 = objc_stub::cStringUsingEncoding_(IVar5,4);
        IVar4 = objc_stub::password(IVar4);
        IVar4 = objc_stub::lengthOfBytesUsingEncoding_(IVar4,4);
        local_90 = (undefined4)IVar4;
      }
    }
  }
  uVar3 = (unsigned_int)&local_120;
  (**(code **)(*(long *)(local_138 + 8) + 0x10))();
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return uVar3;
}

