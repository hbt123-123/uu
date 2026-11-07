// rea decompile_all
// name: FUN_1002f22bc
// address: 0x1002f22bc
// body: available
// range: 0x1002f22bc-0x1002f2467 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002f22bc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  long local_50;
  
  lVar4 = _TtC9Alamofire15SessionDelegate::eventMonitor;
  _swift_beginAccess(unaff_x20 + _TtC9Alamofire15SessionDelegate::eventMonitor,auStack_80,0,0);
  FUN_10007f314(unaff_x20 + lVar4,auStack_68,&DAT_100a82c40,&DAT_100817200);
  if (local_50 == 0) {
    FUN_100040bb4(auStack_68,&DAT_100a82c40,&DAT_100817200);
  }
  else {
    FUN_1000b142c(auStack_68,auStack_a8);
    FUN_100040bb4(auStack_68,&DAT_100a82c40,&DAT_100817200);
    FUN_10003f030(auStack_a8,local_90);
    (**(code **)(lStack_88 + 0x10))(param_1,param_2,local_90,lStack_88);
    FUN_10003f094(auStack_a8);
  }
  lVar4 = unaff_x20 + _TtC9Alamofire15SessionDelegate::stateProvider;
  lVar3 = lVar4;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar3 != 0) {
    lVar5 = *(long *)(lVar4 + 8);
    lVar4 = lVar3;
    _swift_getObjectType();
    (**(code **)(lVar5 + 0x40))(param_2,lVar4,lVar5);
    _swift_unknownObjectRelease(lVar3);
  }
  lVar4 = *(long *)(unaff_x20 + _TtC9Alamofire15SessionDelegate::sessionInvalidationCleanup);
  uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x10);
  _swift_retain(lVar4);
  _os_unfair_lock_lock(uVar6);
  _swift_beginAccess(lVar4 + 0x18,auStack_68,1,0);
  pcVar1 = *(code **)(lVar4 + 0x18);
  uVar2 = *(undefined8 *)(lVar4 + 0x20);
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  _os_unfair_lock_unlock(uVar6);
  _swift_release(lVar4);
  if (pcVar1 != (code *)0x0) {
    _swift_retain(uVar2);
    (*pcVar1)();
    FUN_10007ed2c(pcVar1,uVar2);
    FUN_10007ed2c(pcVar1,uVar2);
  }
  return;
}

