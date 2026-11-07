// rea decompile_all
// name: FUN_1002e3254
// address: 0x1002e3254
// body: available
// range: 0x1002e3254-0x1002e33f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002e3254(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long *param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x21;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_a0 [8];
  long *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  long lStack_68;
  
  lVar2 = 0;
  local_98 = param_7;
  local_90 = param_6;
  local_88 = param_2;
  local_80 = param_4;
  local_78 = param_1;
  __s10Foundation10URLRequestVMa();
  lVar5 = *(long *)(lVar2 + -8);
  puVar6 = auStack_a0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __sSqMa(0,param_5);
  local_70 = *(long *)(lVar3 + -8);
  lVar7 = (long)puVar6 - (*(long *)(local_70 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_68 = lVar3;
  FUN_1002eec0c(0,param_5,param_6);
  param_3 = param_3 + *(int *)(lVar4 + 0x2c);
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  lVar3 = *(long *)(param_3 + 0x20);
  FUN_10003f030(param_3,uVar1);
  lVar4 = *(long *)(param_5 + -8);
  (**(code **)(lVar4 + 0x10))(lVar7,local_88,param_5);
  (**(code **)(lVar4 + 0x38))(lVar7,0,1,param_5);
  (**(code **)(lVar5 + 0x10))(puVar6,local_80,lVar2);
  (**(code **)(lVar3 + 8))(local_78,lVar7,puVar6,param_5,local_90,uVar1,lVar3);
  if (unaff_x21 == 0) {
    (**(code **)(lVar5 + 8))(puVar6,lVar2);
    (**(code **)(local_70 + 8))(lVar7,lStack_68);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar6,lVar2);
    (**(code **)(local_70 + 8))(lVar7,lStack_68);
    *local_98 = unaff_x21;
  }
  return;
}

