// rea decompile_all
// name: FUN_1005131e0
// address: 0x1005131e0
// body: available
// range: 0x1005131e0-0x1005133fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005131e0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  long unaff_x21;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  
  lVar8 = *(long *)(param_4 + -8);
  uVar3 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_90 = (long)&local_90 - uVar3;
  lVar5 = local_90 - uVar3;
  lVar2 = 0;
  local_88 = param_1;
  local_80 = param_3;
  local_78 = param_5;
  __sSqMa(0,param_4);
  lVar6 = *(long *)(lVar2 + -8);
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar9 = lVar5 - uVar3;
  lVar7 = lVar9 - uVar3;
  (**(code **)(lVar8 + 0x38))(lVar7,1,1,param_4);
  (**(code **)(param_7 + 0x188))(lVar7,param_4,param_6,local_78,param_7);
  if (unaff_x21 == 0) {
    (**(code **)(lVar6 + 0x20))(lVar9,lVar7,lVar2);
    lVar7 = lVar9;
    (**(code **)(lVar8 + 0x30))(lVar9,1,param_4);
    bVar1 = (int)lVar7 != 1;
    if (bVar1) {
      pcVar4 = *(code **)(lVar8 + 0x20);
      (*pcVar4)(lVar5,lVar9,param_4);
      lVar2 = local_90;
      (*pcVar4)(local_90,lVar5,param_4);
      lVar6 = 0;
      FUN_100515018(0,param_4,param_6);
      lVar5 = local_88;
      thunk_FUN_1000a0074(param_2,local_88 + *(int *)(lVar6 + 0x24));
      (*pcVar4)(lVar5,lVar2,param_4);
      pcVar4 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
    }
    else {
      FUN_10003f094(param_2);
      (**(code **)(lVar6 + 8))(lVar9,lVar2);
      lVar6 = 0;
      FUN_100515018(0,param_4,param_6);
      pcVar4 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
      lVar5 = local_88;
    }
    (*pcVar4)(lVar5,!bVar1,1,lVar6);
  }
  else {
    FUN_10003f094(param_2);
    (**(code **)(lVar6 + 8))(lVar7,lVar2);
  }
  return;
}

