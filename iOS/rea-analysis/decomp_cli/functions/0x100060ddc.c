// rea decompile_all
// name: FUN_100060ddc
// address: 0x100060ddc
// body: available
// range: 0x100060ddc-0x100060f3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100060ddc(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long unaff_x21;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_80 [8];
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar6 = *(long *)(param_5 + -8);
  puVar4 = auStack_80 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(param_4 + 0x10);
  lVar3 = *(long *)(lVar7 + -8);
  lVar2 = (long)puVar4 - (*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = lVar2 - (*(long *)(*(long *)(param_4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_78 = param_5;
  local_70 = param_8;
  local_68 = param_3;
  (**(code **)(*(long *)(param_4 + -8) + 0x10))(lVar5);
  lVar1 = lVar5;
  (**(code **)(lVar3 + 0x30))(lVar5,1,lVar7);
  if ((int)lVar1 == 1) {
    (**(code **)(*(long *)(param_6 + -8) + 0x38))(param_1,1,1,param_6);
  }
  else {
    (**(code **)(lVar3 + 0x20))(lVar2,lVar5,lVar7);
    (*param_2)(param_1,lVar2,puVar4);
    (**(code **)(lVar3 + 8))(lVar2,lVar7);
    if (unaff_x21 != 0) {
      (**(code **)(lVar6 + 0x20))(local_70,puVar4,local_78);
    }
  }
  return;
}

