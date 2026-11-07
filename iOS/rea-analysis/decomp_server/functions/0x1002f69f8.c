// rea decompile_all
// name: FUN_1002f69f8
// address: 0x1002f69f8
// body: available
// range: 0x1002f69f8-0x1002f6b93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002f69f8(undefined8 param_1,undefined8 *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  long local_50;
  
  lVar1 = _TtC9Alamofire15SessionDelegate::eventMonitor;
  _swift_beginAccess(param_3 + _TtC9Alamofire15SessionDelegate::eventMonitor,auStack_80,0,0);
  FUN_10007f314(param_3 + lVar1,auStack_68,&DAT_100a82c40,&DAT_100817200);
  if (local_50 == 0) {
    FUN_100040bb4(auStack_68,&DAT_100a82c40,&DAT_100817200);
  }
  else {
    FUN_1000b142c(auStack_68,auStack_a8);
    FUN_100040bb4(auStack_68,&DAT_100a82c40,&DAT_100817200);
    FUN_10003f030(auStack_a8,local_90);
    (**(code **)(lStack_88 + 0x28))(param_1,param_2,local_90,lStack_88);
    FUN_10003f094(auStack_a8);
  }
  param_3 = param_3 + _TtC9Alamofire15SessionDelegate::stateProvider;
  lVar1 = param_3;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    lVar3 = *(long *)(param_3 + 8);
    lVar2 = lVar1;
    _swift_getObjectType();
    (**(code **)(lVar3 + 0x20))(param_2,lVar2,lVar3);
    _swift_unknownObjectRelease(lVar1);
    if (param_2 != (undefined8 *)0x0) {
      if ((class_t *)*param_2 == &objc::class_t::_TtC9Alamofire13UploadRequest) {
        FUN_1002f8cb0();
        (**(code **)(param_4 + 0x10))(param_4,lVar1);
        _swift_release(param_2);
        return;
      }
      _swift_release(param_2);
    }
  }
  (**(code **)(param_4 + 0x10))(param_4,0);
  return;
}

