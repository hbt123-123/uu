// rea decompile_all
// name: FUN_10005ce04
// address: 0x10005ce04
// body: available
// range: 0x10005ce04-0x10005ceff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005ce04(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_80 [12];
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  
  uVar1 = 0xff;
  local_74 = param_5;
  local_70 = param_1;
  local_68 = param_9;
  __sSqMa(0xff,param_6);
  lVar2 = 0;
  FUN_100098548(0,uVar1);
  lVar5 = *(long *)(lVar2 + -8);
  lVar3 = *(long *)(lVar5 + 0x40);
  _swift_allocObject(param_8,0x79,7);
  *(undefined8 *)(param_8 + 0x10) = param_6;
  *(undefined8 *)(param_8 + 0x18) = param_7;
  uVar4 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  *(undefined8 *)(param_8 + 0x48) = param_2[5];
  *(undefined8 *)(param_8 + 0x40) = uVar4;
  *(undefined8 *)(param_8 + 0x58) = uVar7;
  *(undefined8 *)(param_8 + 0x50) = uVar6;
  uVar4 = param_2[8];
  uVar8 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  *(undefined8 *)(param_8 + 0x28) = param_2[1];
  *(undefined8 *)(param_8 + 0x20) = uVar8;
  *(undefined8 *)(param_8 + 0x38) = uVar7;
  *(undefined8 *)(param_8 + 0x30) = uVar6;
  *(undefined8 *)(param_8 + 0x60) = uVar4;
  *(undefined8 *)(param_8 + 0x68) = param_3;
  *(undefined8 *)(param_8 + 0x70) = param_4;
  *(char *)(param_8 + 0x78) = (char)local_74;
  FUN_100098b0c(auStack_80 + -(lVar3 + 0xfU & 0xfffffffffffffff0),local_68,param_8,uVar1);
  (**(code **)(lVar5 + 0x20))(local_70,auStack_80 + -(lVar3 + 0xfU & 0xfffffffffffffff0),lVar2);
  return;
}

