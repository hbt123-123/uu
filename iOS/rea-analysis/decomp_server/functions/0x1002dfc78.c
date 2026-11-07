// rea decompile_all
// name: FUN_1002dfc78
// address: 0x1002dfc78
// body: available
// range: 0x1002dfc78-0x1002dfdd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002dfc78(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x21;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  code *local_68;
  
  lVar4 = *(long *)(param_5 + -8);
  lVar6 = (long)&local_80 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(param_4 + 0x10);
  lVar3 = *(long *)(lVar8 + -8);
  lVar5 = lVar6 - (*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar5 - (*(long *)(*(long *)(param_4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_80 = param_5;
  local_78 = param_8;
  local_70 = param_3;
  local_68 = param_2;
  (**(code **)(*(long *)(param_4 + -8) + 0x10))(lVar7);
  uVar2 = 1;
  lVar1 = lVar7;
  (**(code **)(lVar3 + 0x30))(lVar7,1,lVar8);
  if ((int)lVar1 != 1) {
    (**(code **)(lVar3 + 0x20))(lVar5,lVar7,lVar8);
    (*local_68)(param_1,lVar5,lVar6);
    (**(code **)(lVar3 + 8))(lVar5,lVar8);
    if (unaff_x21 != 0) {
      (**(code **)(lVar4 + 0x20))(local_78,lVar6,local_80);
      return;
    }
    uVar2 = 0;
  }
  (**(code **)(*(long *)(param_6 + -8) + 0x38))(param_1,uVar2,1);
  return;
}

