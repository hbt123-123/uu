// rea decompile_all
// name: FUN_100547294
// address: 0x100547294
// body: available
// range: 0x100547294-0x1005474df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100547294(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_d0;
  undefined1 auStack_a0 [64];
  
  lVar1 = 0;
  local_d0 = param_4;
  __sSqMa(0,param_3);
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar8 = (long)&local_d0 - uVar3;
  lVar9 = lVar8 - uVar3;
  lVar6 = lVar9 - uVar3;
  lVar4 = *(long *)(unaff_x20 + 0x30);
  if (*(long *)(lVar4 + 0x10) == 0) {
    (**(code **)(*(long *)(param_3 + -8) + 0x38))(lVar6,1,1,param_3);
    FUN_100546cb4(param_1,lVar6,param_2,lVar1);
    (**(code **)(lVar2 + 8))(lVar6,lVar1);
  }
  else {
    FUN_100548074();
    _swift_bridgeObjectRetain(lVar4);
    FUN_100546b58(auStack_a0);
    if (unaff_x21 == 0) {
      (**(code **)(lVar2 + 0x10))(lVar9,param_1,lVar1);
      lVar7 = *(long *)(param_3 + -8);
      pcVar5 = *(code **)(lVar7 + 0x30);
      lVar6 = lVar9;
      (*pcVar5)(lVar9,1,param_3);
      (**(code **)(lVar2 + 8))(lVar9,lVar1);
      lVar4 = local_d0;
      if ((int)lVar6 == 1) {
        (**(code **)(local_d0 + 0x10))(lVar8,param_3,local_d0);
        (**(code **)(lVar7 + 0x38))(lVar8,0,1,param_3);
        (**(code **)(lVar2 + 0x28))(param_1,lVar8,lVar1);
      }
      (*pcVar5)(param_1,1,param_3);
      if ((int)param_1 == 0) {
        pcVar5 = *(code **)(lVar4 + 0x40);
        lVar1 = 0;
        FUN_1005480c4(0,param_3,lVar4);
        (*pcVar5)(auStack_a0,lVar1,&PTR_PTR_1009d1158,param_3,lVar4);
      }
      else {
        lVar1 = 0;
        FUN_1005480c4(0,param_3,lVar4);
      }
      (**(code **)(*(long *)(lVar1 + -8) + 8))(auStack_a0,lVar1);
    }
  }
  return;
}

