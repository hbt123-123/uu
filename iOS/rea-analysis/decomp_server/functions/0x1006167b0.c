// rea decompile_all
// name: FUN_1006167b0
// address: 0x1006167b0
// body: available
// range: 0x1006167b0-0x10061696f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006167b0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *unaff_x20;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar10 = *(long *)(*unaff_x20 + 0x50);
  lVar6 = *(long *)(lVar10 + -8);
  lVar3 = (long)&local_70 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = *(long *)(param_2 + -8);
  uVar5 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar9 = lVar3 - uVar5;
  lVar8 = lVar9 - uVar5;
  lVar1 = 0;
  local_70 = param_3;
  local_68 = param_1;
  __ss6ResultOMa(0,lVar10,param_2);
  lVar11 = lVar8 - (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(lVar11,local_68,lVar1);
  lVar2 = lVar11;
  _swift_getEnumCaseMultiPayload(lVar11,lVar1);
  if ((int)lVar2 == 1) {
    pcVar7 = *(code **)(lVar12 + 0x20);
    (*pcVar7)(lVar8,lVar11,param_2);
    (**(code **)(lVar12 + 0x10))(lVar9,lVar8,param_2);
    uVar4 = local_70;
    lVar2 = lVar9;
    __ss24_getErrorEmbeddedNSErroryyXlSgxs0B0RzlF(lVar9,param_2,local_70);
    if (lVar2 == 0) {
      lVar2 = param_2;
      _swift_allocError(param_2,uVar4,0,0);
      (*pcVar7)(uVar4,lVar9,param_2);
    }
    else {
      (**(code **)(lVar12 + 8))(lVar9,param_2);
    }
    FUN_100616260(lVar2);
    _swift_errorRelease(lVar2);
    pcVar7 = *(code **)(lVar12 + 8);
    lVar3 = lVar8;
    lVar10 = param_2;
  }
  else {
    (**(code **)(lVar6 + 0x20))(lVar3,lVar11,lVar10);
    FUN_10061630c(lVar3);
    pcVar7 = *(code **)(lVar6 + 8);
  }
  (*pcVar7)(lVar3,lVar10);
  return;
}

