// rea decompile_all
// name: FUN_1002f4d00
// address: 0x1002f4d00
// body: available
// range: 0x1002f4d00-0x1002f4fd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001002f4fc0) */

void FUN_1002f4d00(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_c0 [24];
  undefined8 local_a8;
  long lStack_a0;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  long local_60;
  
  lVar9 = _TtC9Alamofire15SessionDelegate::eventMonitor;
  _swift_beginAccess(unaff_x20 + _TtC9Alamofire15SessionDelegate::eventMonitor,auStack_90,0,0);
  FUN_10007f314(unaff_x20 + lVar9,auStack_78,&DAT_100a82c40,&DAT_100817200);
  if (local_60 == 0) {
    FUN_100040bb4(auStack_78,&DAT_100a82c40,&DAT_100817200);
  }
  else {
    FUN_1000b142c(auStack_78,auStack_c0);
    FUN_100040bb4(auStack_78,&DAT_100a82c40,&DAT_100817200);
    FUN_10003f030(auStack_c0,local_a8);
    (**(code **)(lStack_a0 + 0x58))(param_1,param_2,param_3,param_4,local_a8,lStack_a0);
    FUN_10003f094(auStack_c0);
  }
  lVar9 = unaff_x20 + _TtC9Alamofire15SessionDelegate::stateProvider;
  lVar1 = lVar9;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    lVar6 = *(long *)(lVar9 + 8);
    lVar7 = lVar1;
    _swift_getObjectType();
    puVar2 = param_2;
    (**(code **)(lVar6 + 0x20))(param_2,lVar7,lVar6);
    _swift_unknownObjectRelease(lVar1);
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = 0;
      FUN_10028a504(0);
      puVar4 = puVar2;
      _swift_dynamicCastClass(puVar2,uVar3);
      if (puVar4 != (undefined8 *)0x0) {
        lVar9 = *(long *)((long)puVar4 + _TtC9Alamofire11DataRequest::dataMutableState);
        uVar3 = *(undefined8 *)(*(long *)(lVar9 + 0x10) + 0x10);
        _os_unfair_lock_lock(uVar3);
        _swift_beginAccess(lVar9 + 0x18,auStack_78,0x21,0);
        uVar5 = *(ulong *)(lVar9 + 0x20);
        if (uVar5 >> 0x3c < 0xf) {
          __s10Foundation4DataV6appendyyACF(param_3,param_4);
        }
        else {
          uVar8 = *(undefined8 *)(lVar9 + 0x18);
          FUN_100008184(param_3,param_4);
          FUN_100006cc8(uVar8,uVar5);
          *(undefined8 *)(lVar9 + 0x18) = param_3;
          *(undefined8 *)(lVar9 + 0x20) = param_4;
        }
        _swift_endAccess(auStack_78);
        _os_unfair_lock_unlock(uVar3);
        FUN_100280c30();
        param_2 = puVar2;
        goto LAB_1002f4f9c;
      }
      _swift_release(puVar2);
    }
  }
  lVar1 = lVar9;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 == 0) {
    return;
  }
  lVar7 = *(long *)(lVar9 + 8);
  lVar9 = lVar1;
  _swift_getObjectType();
  (**(code **)(lVar7 + 0x20))(param_2,lVar9,lVar7);
  _swift_unknownObjectRelease(lVar1);
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  if ((class_t *)*param_2 == &objc::class_t::_TtC9Alamofire17DataStreamRequest) {
    lVar9 = *(long *)((long)param_2 + _TtC9Alamofire17DataStreamRequest::streamMutableState);
    uVar3 = *(undefined8 *)(*(long *)(lVar9 + 0x10) + 0x10);
    _os_unfair_lock_lock(uVar3);
    _swift_beginAccess(lVar9 + 0x18,auStack_78,0x21,0);
    FUN_1002900dc(lVar9 + 0x18,param_2,param_3,param_4);
    _swift_endAccess(auStack_78);
    _os_unfair_lock_unlock(uVar3);
  }
LAB_1002f4f9c:
  _swift_release(param_2);
  return;
}

