// rea decompile_all
// name: FUN_1003a75ec
// address: 0x1003a75ec
// body: available
// range: 0x1003a75ec-0x1003a78b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003a75ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x13;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long local_80;
  long local_78;
  long local_70;
  
  lVar2 = 0;
  __sSqMa(0,param_5);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&local_80 - extraout_x8;
  lVar8 = *(long *)(param_5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar9 = (lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_70 = lVar9 - extraout_x12_00;
  if (((uint)param_3 >> 8 & 1) == 0) {
    pcVar6 = *(code **)(param_6 + 0x20);
    local_80 = param_2;
    local_78 = extraout_x13;
    _swift_retain(param_1);
    (*pcVar6)(lVar10);
    lVar3 = lVar10;
    (**(code **)(lVar8 + 0x30))(lVar10,1,param_5);
    lVar1 = local_70;
    if ((int)lVar3 == 1) {
      FUN_10025fdac(param_1,local_80,param_3,0);
      (**(code **)(lVar5 + 8))(lVar10,lVar2);
      _swift_retain(param_1);
    }
    else {
      pcVar6 = *(code **)(lVar8 + 0x20);
      (*pcVar6)(local_70,lVar10,param_5);
      pcVar11 = *(code **)(lVar8 + 0x10);
      (*pcVar11)(lVar9,lVar1,param_5);
      uVar7 = *(undefined8 *)(*(long *)(param_6 + 8) + 8);
      lVar2 = lVar9;
      local_80 = param_6;
      __ss24_getErrorEmbeddedNSErroryyXlSgxs0B0RzlF(lVar9,param_5,uVar7);
      if (lVar2 == 0) {
        lVar2 = param_5;
        uVar4 = uVar7;
        _swift_allocError(param_5,uVar7,0,0);
        (*pcVar6)(uVar4,lVar9,param_5);
      }
      else {
        (**(code **)(lVar8 + 8))(lVar9,param_5);
      }
      FUN_1003a7384(lVar2,param_5,local_80);
      _swift_errorRelease(lVar2);
      (*pcVar11)(local_78,lVar1,param_5);
      lVar2 = local_78;
      __ss24_getErrorEmbeddedNSErroryyXlSgxs0B0RzlF(local_78,param_5,uVar7);
      if (lVar2 == 0) {
        _swift_allocError(param_5,uVar7,0,0);
        (*pcVar6)(uVar7,local_78,param_5);
        pcVar6 = *(code **)(lVar8 + 8);
      }
      else {
        pcVar6 = *(code **)(lVar8 + 8);
        (*pcVar6)(local_78,param_5);
      }
      (*pcVar6)(lVar1,param_5);
    }
  }
  else {
    FUN_100260260(param_1,param_2,param_3);
  }
  return;
}

