// rea decompile_all
// name: FUN_1002f7e48
// address: 0x1002f7e48
// body: available
// range: 0x1002f7e48-0x1002f7f7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002f7f7c to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002f7e48(undefined8 *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  
  lVar3 = unaff_x20 + _TtC9Alamofire15SessionDelegate::stateProvider;
  lVar4 = lVar3;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar4 == 0) {
    return;
  }
  lVar5 = *(long *)(lVar3 + 8);
  lVar3 = lVar4;
  _swift_getObjectType();
  (**(code **)(lVar5 + 0x20))(param_1,lVar3,lVar5);
  _swift_unknownObjectRelease(lVar4);
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if ((class_t *)*param_1 != &objc::class_t::_TtC9Alamofire16WebSocketRequest) goto LAB_1002f7f64;
  if (param_4 >> 0x3c < 0xf) {
    uVar1 = (uint)(param_4 >> 0x20);
    uVar2 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar2 != 0) {
        lVar3 = (long)(int)param_3;
        lVar4 = param_3 >> 0x20;
        goto LAB_1002f7f38;
      }
      if ((param_4 & 0xff000000000000) == 0) goto LAB_1002f7f40;
      goto LAB_1002f7edc;
    }
    if (uVar2 == 2) {
      lVar3 = *(long *)(param_3 + 0x10);
      lVar4 = *(long *)(param_3 + 0x18);
LAB_1002f7f38:
      if (lVar3 != lVar4) goto LAB_1002f7edc;
    }
LAB_1002f7f40:
    param_3 = 0;
    param_4 = 0xf000000000000000;
  }
  else {
LAB_1002f7edc:
    FUN_10010bd10(param_3,param_4);
  }
  FUN_1002fa278(param_2,param_3,param_4);
  FUN_100006cc8(param_3,param_4);
LAB_1002f7f64:
  _swift_release(param_1);
  return;
}

