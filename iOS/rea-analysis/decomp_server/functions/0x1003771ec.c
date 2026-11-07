// rea decompile_all
// name: StreamerWrapper::ControlledStartVideoCapture:info:
// address: 0x1003771ec
// body: available
// range: 0x1003771ec-0x10037741b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100377418 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x1c bytes */

int StreamerWrapper::ControlledStartVideoCapture_info_
              (ID param_1,SEL param_2,unsigned_int param_3,ID param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ID IVar4;
  uint uVar5;
  undefined4 local_a0;
  int local_9c;
  undefined1 local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined1 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  uStack_8c = 0x200000001;
  local_94 = 0;
  local_78 = 0;
  local_84 = 0;
  local_7c = 0;
  local_70 = 0x400000002;
  local_68 = 0;
  local_48 = 0;
  local_40 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  IVar4 = objc_stub::fps(param_4);
  local_a0 = (undefined4)IVar4;
  IVar4 = objc_stub::frameQuality(param_4);
  iVar2 = (int)IVar4;
  FUN_100377448();
  local_9c = iVar2;
  IVar4 = objc_stub::cursorCapture(param_4);
  local_98 = (undefined1)IVar4;
  IVar4 = objc_stub::videoTrackIndex(param_4);
  local_94 = CONCAT44(local_94._4_4_,(int)IVar4);
  IVar4 = objc_stub::captureType(param_4);
  uVar5 = 2;
  if (IVar4 != 2) {
    uVar5 = (uint)(IVar4 == 1);
  }
  local_94 = CONCAT44(uVar5,(undefined4)local_94);
  IVar4 = objc_stub::chromaSampling(param_4);
  iVar1 = (int)(IVar4 - 2) + 2;
  if (2 < IVar4 - 2) {
    iVar1 = 1;
  }
  uStack_8c = CONCAT44(uStack_8c._4_4_,iVar1);
  IVar4 = objc_stub::codecType(param_4);
  iVar1 = (int)(IVar4 - 2) + 2;
  if (3 < IVar4 - 2) {
    iVar1 = 1;
  }
  uStack_8c = CONCAT44(iVar1,(undefined4)uStack_8c);
  IVar4 = objc_stub::maxScaleWidth(param_4);
  local_84 = CONCAT44(local_84._4_4_,(int)IVar4);
  IVar4 = objc_stub::maxScaleHeight(param_4);
  local_84 = CONCAT44((int)IVar4,(undefined4)local_84);
  IVar4 = objc_stub::hdr(param_4);
  local_7c = (undefined1)IVar4;
  if (iVar2 == 0) {
    IVar4 = objc_stub::autoStartupQuality(param_4);
    uVar3 = (undefined4)IVar4;
    FUN_100377448();
    local_70 = CONCAT44(local_70._4_4_,uVar3);
    IVar4 = objc_stub::autoHighestQuality(param_4);
    uVar3 = (undefined4)IVar4;
    FUN_100377448();
    local_70 = CONCAT44(uVar3,(undefined4)local_70);
  }
  IVar4 = objc_stub::captureType(param_4);
  if (IVar4 == 2) {
    IVar4 = objc_stub::setting(param_4);
    _objc_retainAutorelease();
    local_60 = objc_stub::cStringUsingEncoding_(IVar4,4);
    IVar4 = objc_stub::index(param_4);
    local_58 = CONCAT44(local_58._4_4_,(int)IVar4);
  }
  else if (IVar4 == 1) {
    local_60 = objc_stub::hwnd(param_4);
  }
  else if (IVar4 == 0) {
    IVar4 = objc_stub::resolutionWidth(param_4);
    local_60 = CONCAT44(local_60._4_4_,(int)IVar4);
    IVar4 = objc_stub::resolutionHeight(param_4);
    local_60 = CONCAT44((int)IVar4,(undefined4)local_60);
    IVar4 = objc_stub::screenId(param_4);
    local_58 = CONCAT44(local_58._4_4_,(int)IVar4);
    IVar4 = objc_stub::isSecondScreen(param_4);
    local_58 = CONCAT44((int)IVar4,(undefined4)local_58);
  }
  (**(code **)(*(long *)(param_1 + 8) + 0x20))(param_3,&local_a0);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

