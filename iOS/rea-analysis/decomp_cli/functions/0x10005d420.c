// rea decompile_all
// name: FUN_10005d420
// address: 0x10005d420
// body: available
// range: 0x10005d420-0x10005d52f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005d420(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_6c;
  undefined8 local_68;
  
  uVar1 = 0xff;
  local_80 = param_4;
  uStack_78 = param_7;
  local_6c = param_5;
  local_68 = param_1;
  __sSqMa(0xff,param_8);
  lVar2 = 0;
  FUN_100098548(0,uVar1);
  lVar5 = *(long *)(lVar2 + -8);
  lVar4 = (long)&local_80 - (*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_allocObject(param_9,0x81,7);
  uVar7 = param_2[1];
  uVar6 = *param_2;
  uVar3 = param_2[2];
  *(undefined8 *)(param_9 + 0x30) = param_2[3];
  *(undefined8 *)(param_9 + 0x28) = uVar3;
  uVar3 = param_2[4];
  uVar9 = param_2[7];
  uVar8 = param_2[6];
  *(undefined8 *)(param_9 + 0x40) = param_2[5];
  *(undefined8 *)(param_9 + 0x38) = uVar3;
  *(undefined8 *)(param_9 + 0x50) = uVar9;
  *(undefined8 *)(param_9 + 0x48) = uVar8;
  *(undefined8 *)(param_9 + 0x10) = param_8;
  uVar3 = param_2[8];
  *(undefined8 *)(param_9 + 0x20) = uVar7;
  *(undefined8 *)(param_9 + 0x18) = uVar6;
  *(undefined8 *)(param_9 + 0x58) = uVar3;
  *(undefined8 *)(param_9 + 0x60) = param_6;
  *(undefined8 *)(param_9 + 0x68) = uStack_78;
  *(undefined8 *)(param_9 + 0x70) = param_3;
  *(undefined8 *)(param_9 + 0x78) = local_80;
  *(char *)(param_9 + 0x80) = (char)local_6c;
  FUN_100098b0c(lVar4,param_10,param_9,uVar1);
  (**(code **)(lVar5 + 0x20))(local_68,lVar4,lVar2);
  return;
}

