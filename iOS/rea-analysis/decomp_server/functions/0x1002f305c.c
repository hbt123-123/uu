// rea decompile_all
// name: FUN_1002f305c
// address: 0x1002f305c
// body: available
// range: 0x1002f305c-0x1002f31cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002f305c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_b8 [24];
  undefined8 local_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  long local_60;
  
  lVar2 = _TtC9Alamofire15SessionDelegate::eventMonitor;
  _swift_beginAccess(unaff_x20 + _TtC9Alamofire15SessionDelegate::eventMonitor,auStack_90,0,0);
  FUN_10007f314(unaff_x20 + lVar2,auStack_78,&DAT_100a82c40,&DAT_100817200);
  if (local_60 == 0) {
    FUN_100040bb4(auStack_78,&DAT_100a82c40,&DAT_100817200);
  }
  else {
    FUN_1000b142c(auStack_78,auStack_b8);
    FUN_100040bb4(auStack_78,&DAT_100a82c40,&DAT_100817200);
    FUN_10003f030(auStack_b8,local_a0);
    (**(code **)(lStack_98 + 0x20))(param_1,param_2,param_3,param_4,param_5,local_a0,lStack_98);
    FUN_10003f094(auStack_b8);
  }
  lVar2 = unaff_x20 + _TtC9Alamofire15SessionDelegate::stateProvider;
  lVar1 = lVar2;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    lVar2 = lVar1;
    _swift_getObjectType();
    (**(code **)(lVar3 + 0x20))(param_2,lVar2,lVar3);
    _swift_unknownObjectRelease(lVar1);
    if (param_2 != 0) {
      FUN_1002cbd6c(param_4,param_5);
      _swift_release(param_2);
    }
  }
  return;
}

